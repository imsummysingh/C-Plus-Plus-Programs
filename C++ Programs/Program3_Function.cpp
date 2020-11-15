#include <iostream>

using namespace std;

int main()
{
   void fun();
   cout<<"Calling through main function"<<endl;
   
   fun();

    return 0;
}

void fun(){
    cout<<"Calling through function"<<endl;
}