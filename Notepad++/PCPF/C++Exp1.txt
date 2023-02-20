#include <iostream>
#include <math.h>
using namespace std;
class triangle
{
    float a,b,c;
    float AREA;
  
  public:
  triangle()
  {
     
         a=2;b=4;
         AREA =0.5*a*b;     
  }
     
  triangle(float a){
      AREA=0.433*a*a;
  }
    
  triangle(float a, float b){
      float h, temp;
      h=sqrt (a*a-(b*b)/4);
      AREA=0.5*b*h;
  }
    
  triangle(float a,float b,float c){
      float s;
      s=(a+b+c)/2;
      AREA = sqrt (s*(s-a)*(s-b)*(s-c));
        
  }
  
  void display(){
      cout<<"AREA="<<AREA<<endl;
  }      
};

int main()
{  triangle x;
   x.display();    
    triangle y(3);
    triangle w(7,2);
    triangle z(9,4,6);
      y.display();
      w.display();
      z.display();
    return 0;
}