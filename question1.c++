#include<iostream>
using namespace std;
class polygon{
    protected:
    int width,height;
    public:
    void setvalue(int a,int b){
        width=a;
        height=b;
    }
};
class rectangle:public polygon{
    public:
    int area()
    {return(width*height);}
};
class triangle:public polygon{
    public:
    int area(){
        return(width*height)/0.5;
    }
};
int main(){
    rectangle r1(4,5);
    triangle(3,2);
}