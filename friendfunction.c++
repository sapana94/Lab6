#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    friend int calculatearea(Rectangle);
};
int calculatearea(Rectangle rect)
{
    return rect.length* rect.width;
}
int main()
{
    Rectangle r1(8, 9);
    cout << "Area is" << calculatearea(r1);
}