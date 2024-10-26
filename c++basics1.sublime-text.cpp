// some basics of c++
#include<bits/stdc++.h>
// include all type of header file used in c++ programming
using namespace std;
int main(){
	// important datatypes
	// char,float,double,int,bool
	//long int, long long int
	char c = 'a';
	int a = 3;
	double b = 4.5;
	bool d = true;
	//bool is used to store true and false..
	cout << c <<endl<<a<<endl <<b<<endl<< d<< endl;
	//cout is used for print value
	//endl is for new line
	//" "--> for space 
	//use of Arethmatic operator in c++
	cout<<2*3<<endl<<2+3<<endl<<2/3<<endl<<2%3<<endl;
	//some useful incriment and decriment operators
	//a++ : --> first use value of a then incriment
	//++a: --> first incriment then then use
	//same logic for decriment operators a--,--a
	int e=6;
	e=e+1;
	cout<<e<<endl;//e=7
	cout<<e++<<endl;//e=7 first use value of e
	cout<<e<<endl;//e=8 used the value of e now incriment
	cout<<++e<<endl;//e=9 first incriment then use..

}
