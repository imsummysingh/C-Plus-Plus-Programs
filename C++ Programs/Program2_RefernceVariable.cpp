#include <iostream>

using namespace std;

int main()
{
    int x=5;
    cout<<"Value of x: "<<x<<endl;
    //reference variable
    int &y=x;
    y++;
    cout<<"After incrementing value of x through reference variable"<<endl;
    cout<<x;
    

    return 0;
}
