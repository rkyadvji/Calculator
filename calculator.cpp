#include<iostream>
using namespace std;
int main()
{
 int a,b,num;
 char op;
 do{
 cout<<"---------------------------/**  WELCOME TO THE BASIC CALCULATOR  **/---------------------------------:"<<endl;
 cout<<"Enter the operation you want to apply :"<<endl;
 cout<<"press 1 for Addition :"<<endl;
 cout<<"press 2 for Substraction :"<<endl;
 cout<<"press 3 for Multiplication :"<<endl;
 cout<<"Press 4 for Division :"<<endl;
 cin>>num;
 cout<<"Enter the First Number :"<<endl;
 cin>>a;
 cout<<"Enter the Second Nubmer :"<<endl;
 cin>>b;
 if(num==1)
 {
  cout<<"The Addition of two numbers are :"<<a+b<<endl;
 }
 else if(num==2)
 {
  cout<<"The Substraction of two numbers are :"<<a-b<<endl;
 }
 else if(num==3)
 {
  cout<<"The Multiplication of two numbers are :"<<a*b<<endl;
 }
 else if(num==4)
 {
  cout<<"The Division of two numbers are :"<<a/b<<endl;
 }
 else 
 {
  cout<<"Wrong Input :"<<endl;
    }
 cout<<"Do You Want to Continue y/n"<<endl;
 cin>>op;
} while(op=='y');
    
 return 0;
}