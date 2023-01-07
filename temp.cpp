#include <iostream>
using namespace std;
class Triangle
{
    public:
        float length;
        float breadth;
        float area()
        {
            return length*breadth*0.5;
        }
};
int main()
{
    Triangle t1;
    t1.length=10;
    t1.breadth=10;
    cout<<t1.area();

}