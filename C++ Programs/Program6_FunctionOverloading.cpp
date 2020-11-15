#include <iostream>

using namespace std;

//function overloading

int area(int,int);
float area(int);

int main()
{
    int r;
    cin>>r;
    float A = area(r);
    cout<<"Area of circle is: "<<A<<endl;
    
    int l,b,a;
    cin>>l>>b;
    a=area(l,b);
    cout<<"Area of rectangle is: "<<a<<endl;
   

    return 0;
}

float area(int R){
    return(3.14*R*R);
}

int area(int l, int b){
    return(l*b);
}