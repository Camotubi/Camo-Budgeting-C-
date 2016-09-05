#include "Files.h"

Files::Files()
{
}

Files::~Files()
{
}

int save(std::vector<Income> incomes,std::vector<Expense> expenses, std::string filename)
{
    std::fstream myfiles;
    myfiles.open(filename.c_str(), std::fstream::out);
    for(int unsigned n=0; n<incomes.size(); n++)
    {
        myfiles<<"Date:"<<std::endl;
        myfiles<<"--#SPACE#--\n";
    }
    myfiles.close();
    return 0;
}

/*void load(vector<Car> *cars, string filename)
{
    int current_car_year = 0;
    fstream myfiles;
    string current_car_name;
    string current_line;
    string fuel_econo_buffer;
    vector<float> current_car_fuel_economy;
    myfiles.open(filename.c_str(),fstream::in);
    while(getline(myfiles,current_line))
    {
       
        cout<<current_line<<endl;
        if(current_line.substr(0,7) == "Nombre:")
        {
            current_car_name=current_line.substr(7);
            cout<<current_car_name<<endl;
        }
        if(current_line.substr(0,4) == "Ano:")
        {
            current_car_year= atoi(current_line.substr(4).c_str());
            cout<<current_car_year<<endl;
        }
        if(current_line.substr(0,13)=="Fuel Economy:")
        {
            for(int i = 13,b=13,e=0;i<current_line.size();i++)
            {
                e++;
                if(current_line.at(i)==',' || current_line.at(i) == ';')
                {
                    cout<<e<<current_line.substr(b,e)<<endl;
                    current_car_fuel_economy.push_back(atof(current_line.substr(b,e-1).c_str()));
                    e=0;
                    b=i+1;
                }
            }

        }
        if(current_line=="--#SPACE#--")
        {
            cars->push_back(Car(current_car_name,current_car_year));
            current_car_year = 0;//test
        }

    }
    myfiles.close();
}
*/
bool filexist(std::string filename)
{
    std::ifstream file(filename.c_str());
    
    return (bool)file;
}    

