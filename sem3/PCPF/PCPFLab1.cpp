#include <iostream>
#include <math.h>
using namespace std;

class Triangle{
    float a,b,c,h;
    float Area;

    public:
    Triangle(){
        b=5, h=10;
        Area = 0.5*b*h;
    }

    Triangle(float a){
        Area = (sqrt(3)*a*a)/4;
    }

    Triangle(float a, float b){
        float h;
        h = sqrt((a*a)-((b*b)/4));
        Area = 0.5*b*h;
    }

    Triangle(float a, float b, float c){
        float s;
        s = (a*b*c)/2;
        Area = sqrt(s*(s-a)*(s-b)*(s-c));
    }

    void diplay(){
        cout<<"Area: "<< Area<<endl;
    }
};

int main(){
    cout<<"D10A_60_Shashwat Tripathi"<<endl;
    Triangle x;
    x.diplay();
    Triangle y(3);
    Triangle w(5, 6);
    Triangle z(5, 12, 13);
    y.diplay();
    w.diplay();
    z.diplay();   
}