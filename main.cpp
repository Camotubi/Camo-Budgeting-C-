#include <stdio.h>
#include <src/Income.h>
int main(int argc, char **argv)
{
    Income n1;
    n1.getDate().setNow();
	std::cout<<n1.getFormatedDate("-");
	return 0;
}
