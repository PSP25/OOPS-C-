//operator overloading

//c++ allows overloading of many predefined operators

//creating sum of complex number operator

#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int img;
    public:
        complex(int r=0,int i=0){//constructor
            real=r;
            img=i;
        }
        int getReal(){
            return real;
        }
        int getImg(){
            return img;
        }
        //define function
    complex addition(complex c1){ //this is called function signeture or defination
        complex temp;
        temp.real=real+c1.real;
        temp.img=img+c1.img;
        return temp;
    }
    complex operator+(complex c1){ //this is called overloading
        complex temp;
        temp.real=real+c1.real;
        temp.img=img+c1.img;
        return temp;
    }
    void display(){
        cout<<getReal()<<"+i"<<getImg()<<endl;
    }
};
int main(){
    
    complex c1(1,2);
    complex c2(3,4);

    //addition by calling function
    complex ans=c1.addition(c2);
    ans.display();

    //overloaded function call
    complex ans2=c1+c2;
    ans2.display();

}