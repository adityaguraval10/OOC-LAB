#include<iostream>
using namespace std;
class complex
{
    public:
    int real;
    int imaginary;
    complex()
    {
        real=0;
        imaginary=0;
    }
    complex(int r,int i)
    {
        real=r;
        imaginary=i;
    }

    complex addComplexNumber(complex c1, complex c2)
    {
        complex res;
        res.real = c1.real + c2.real;
        res.imaginary = c1.imaginary + c2.imaginary;
        return res;
    }

    void display()
    {
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};

int main()
{
    int r1,i1,r2,i2;
    cout<<"Enter real and imaginary part of first complex number: ";
    cin>>r1>>i1;
    cout<<"Enter real and imaginary part of second complex number: ";
    cin>>r2>>i2;
    complex c1(r1,i1);
    complex c2(r2,i2);
    complex c3;
    c3=c3.addComplexNumber(c1,c2);
    cout<<"/nSum of two complex numbers is: ";
    c3.display();

    return 0;
}