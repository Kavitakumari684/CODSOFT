
//calculator formation task given by codsoft
//code generated for calculator by me.

#include<iostream>
using namespace std;
float calculator(float a , float b,char oper)        //user defined function
{
    switch(oper)
    {
        case '+':
        return a+b;
        break;
        case '-':
        return a-b;
        break;
        case '*':
        return a*b;
        break;
        case '/':
        return a/b;
        break;
    }
}
int main()
{  float a,b ;
   char oper;                                  //oper is operator for arithmetic operation(+, -,*,/)
   cin>>a>>b;                                   //input taken from user
   cin>>oper;
   cout<<calculator(a,b,oper)<<endl;            //calling the function
   return 0;
}