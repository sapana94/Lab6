#include<iostream>   
using namespace std;
class shape{
    protected:
    double length,breadth;
    public:
    void setdata(int l,int b)
    {
        length=l;
        breadth=b;
    }
   virtual int area()=0;
};
class rectangle:public shape{
    public:
    int area(){
    return length*breadth;
}};
class triangle:public shape{
    public:
    int area(){
    return 0.5*(length*breadth);
} };
int main()
{
    shape *s1,*s2;
    rectangle rect;
    triangle tri;
    s1=&rect;
    s2=&tri;
    s1->setdata(5,2);
    s2->setdata(6,2);
    cout<<"The area of rectangle"<<rect.area()<<endl;
    cout<<"The area of triangle"<<tri.area()<<endl;
    return 0;
}