#include <iostream>

using namespace std;
inline void fun();
int main()
{
   cout<<"Main Function"<<endl;
   fun();

    return 0;
}
void fun(){
    cout<<"Calling Function in Inline Way"<<endl;
}
