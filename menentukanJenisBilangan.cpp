#include<iostream>
using namespace std;

int main(){
	int Z;

	cout<<"silahkan masukan bilangan: ";cin>>Z;
	cout<<""<<endl;
	if (Z < 0)
	{
		cout<<"yang anda input adalah bilangan negatif"<<endl;
	}
	
	else if (Z>0)
	{
		cout<<"yang anda input adalah bilangan positif"<<endl;
	}
	else if (Z==0)
	
		cout<<"yang anda input adalah bilangan nol "<<endl;

	return 0;
}
