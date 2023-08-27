// << A SIMPLE CALCULATOR >>
#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    char ch;
    cout<<"Enter first operand:"<<endl;
    cin>>num1;
    cout<<"Enter the operator:"<<endl;
    cin>>ch;
    cout<<"Enter second operand:"<<endl;
    cin>>num2;
    switch(ch){
      case '+':
      cout<<num1<<"+"<<num2<<"="<<num1+num2;
      break;
      case '-':
      cout<<num1<<"-"<<num2<<"="<<num1-num2;
      break;
      case '*':
      cout<<num1<<"*"<<num2<<"="<<num1*num2;
      break;
      case '/':
      cout<<num1<<"/"<<num2<<"="<<num1/num2;
      break;
      

    }

   return 0;
}