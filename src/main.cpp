#include <stdio.h>
#include <iostream>
#include <src/Income.h>
int main(int argc, char **argv)
{
    Income n1;
    n1.getDate().setNow();
    n1.getDate().setDay(2);
	std::cout<<n1.getFormatedDate("-")<<"WTF"<<n1.getDate().getDay();
	return 0;
}
