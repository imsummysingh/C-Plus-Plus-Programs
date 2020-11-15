#include <iostream>

using namespace std;

class complex{
    private:
        int a, b;
    
    public:
        void setdata(int x, int y){
            a=x;
            b=y;
        }
        void showdata(){
            cout<<a<<endl<<b<<endl;
        }
        friend void fun(complex);
        
};

void fun(complex c){
    cout<<"Sum is: "<<c.a+c.b<<endl;
}

int main()
{
    complex c1;
    c1.setdata(2,3);
    c1.showdata();
    fun(c1);
    return 0;
}
