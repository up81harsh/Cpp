#include <iostream>
using namespace std;
int a=16;
void b(){
	cout<<a;
	}
int main(){
	int a=5;
	a=13;
	cout<<"Updated Value is "<<a<<"\nPrevious Value is ";
	b();
}
