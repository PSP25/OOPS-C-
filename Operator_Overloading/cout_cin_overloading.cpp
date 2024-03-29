// << and >> can be overloaded using overloading methods

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
        friend ostream& operator<<(ostream &anyname,complex c);//friend return_type fun_name(param1,param2);
        
        // friend void operator<<(ostream &anyname,complex c); is also workable
        //but then you cannot use multiple <<
        //cout<<c1<<endl; //will give error
        //cout<<c1<<c2; //error
        //operator& operator<<() returns the final ostream obj as parameter
        //thus cout<<c on returning becomes an object reference to ostream
        // now cout<<c<<c2 is similar to anyname<<c2 is anyname is the output
        //*watch the video again*
};
int main(){
    complex c1(1,2);
    complex c2(3,4);
    cout<<c1;
    //we can use any other name than cout
    //for this we need to create another object of ostream class and equalize it with cout object
    ostream& custom=cout;//pass the cout object as reference
    custom<<c2;
}

ostream& operator<<(ostream &anyname,complex c){
    anyname<<c.getReal()<<"+i"<<c.getImg()<<endl;
    return anyname;
}