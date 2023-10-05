 //Write a program to find the max number from given two numbers using friend function.
#include<iostream>
using namespace std;
class demo{
	private:
		int a,b;
		public:
			void input(){
				cout<<"enter two values to find max:"<<endl;
				cout<<"enter value of a:";
				cin>>a;
				cout<<"enter value of b:";
				cin>>b;
			}
			friend void max(demo x);
};
void max(demo x){
	if(x.a>x.b){
		cout<<x.a<<" is the maximum value"<<endl;
	}
	else{
		cout<<x.b<<" is the maximum value"<<endl;
	}
}
int main(){
	demo x;
	x.input();
	max(x);
	return 0;
}