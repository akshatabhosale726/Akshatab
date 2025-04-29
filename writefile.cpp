#include<iostream>
#include<fstream>
using namespace std ;
int main()
{
	
	ofstream myfile("Myfile.txt");
	myfile<<"file is open";
	myfile.close();
	return 0 ;
	
}
