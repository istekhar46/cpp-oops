#include<iostream>
using namespace std;

class complex{


    int a,b;


    public:
    void setdata(int v1, int v2){
        a=v1;
        b=v2;
    }
    void getdata(){
        cout<<"the complex is "<<a<<" + "<<b<<"i"<<endl;
    }
     friend complex sumcomplex(complex o1 , complex o2);
     
};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}



int main(){
    complex c1,c2,sum;
    c1.setdata(4,5);
    c1.getdata();

    c2.setdata(2,3);
    c2.getdata();

    sum=sumcomplex(c1,c2);
    sum.getdata();

    return 0;
}