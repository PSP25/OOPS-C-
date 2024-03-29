//used for the same purpose of operator overloading
//using friend function
//takes two values and adds them
//like a friend helping 2 people with the job
#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int img;
    public:
        complex(int r=0,int i=0){   //constructor
            real=r;
            img=i;
        }
        int getReal(){
            return real;
        }
        int getImg(){
            return img;
        }
        //define friend function
    friend complex operator+(complex c1,complex c2);
                            //friend function codes are written outside
                            //becs it takes parameters of 2 diff objects
    void display(){
        cout<<getReal()<<"+i"<<getImg()<<endl;
    }
};
int main(){
    complex c1(9,10);
    complex c2(11,12);
    complex c3=c1+c2;
    c3.display();
}
//notice! we dont use scope resolution operator for the friend function
complex operator+(complex c1,complex c2){ //this is called overloading
        complex temp;
        temp.real=c2.real+c1.real;
        temp.img=c2.img+c1.img;
        return temp;
    };