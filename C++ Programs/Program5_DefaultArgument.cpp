#include <iostream>

using namespace std;

int add(int, int=0, int=0);

int main()
{
   //default argument
    int a,b;
    cin>>a>>b;
    cout<<add(a,b);
    int c;
    cin>>a>>b>>c;
    cout<<add(a,b,c);

    return 0;
}
int add(int x, int y, int z){
    return(x+y+z);
}
