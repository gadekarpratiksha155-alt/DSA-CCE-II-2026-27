#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex (float r,float i){
        real=r;
        imag=i;
    }
    // Destructor
    ~complex(){}
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    complex add(complex c){
        return complex(real + c.real,imag - c.imag);
    }
    complex subtract(complex c){
        return complex(real - c.real,imag - c.imag);
    }

    complex multiply(complex c){
        float r = real * c.real -imag *c.imag;
        float i = real * c.imag + imag *c.real;
        return complex(r,i);
    }
};
int main(){
    complex c1(4,5),c2(2,3);
    cout<<"\n first complex number:";
    c1.display();
     cout<<"\n second complex number:";
    c2.display();

    complex sum = c1.add(c2);
    cout<<"\n sum:";
    sum.display();

    complex diff = c1.subtract(c2);
    cout<<"difference:";
    diff.display();

    complex prod = c1.multiply(c2);
    cout<<"product:";
    prod.display();
    return 0;

}
/*Microsoft Windows [Version 10.0.26100.7840]
(c) Microsoft Corporation. All rights reserved.

D:\pratikshagadekar204>cd "d:\pratikshagadekar204\" && g++ operatoroverloading.cpp -o operatoroverloading && "d:\pratikshagadekar204\"operatoroverloading

 first complex number:4+5i

 second complex number:2+3i

 sum:6+2i
difference:2+2i
product:-7+22i

d:\pratikshagadekar204>
*/