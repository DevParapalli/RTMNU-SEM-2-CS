#include<iostream>
using namespace std;
class rectangle
{
  private:
    int length;
    int breadth;
  public:
    void Rectangle();
    void Rectangle(int l,int b);
    int setlength(int l);
    int setbreadth(int b);
    
    int getbreadth(){
      return breadth;
    }
    int getlength(){
      return length;
    }
    int area();
    int perimeter();
    
};
class cuboid:public rectangle
{
  private:
    int height;
  public:
    cuboid(int h)
    {
      height=h;
    }
    int setheight(int h){
      height=h;
    }
    int getheight(){
      return height;
    }
    
    int volume()
    {
      return getlength()*getbreadth()*getheight();
    }
  
};
void rectangle::Rectangle()
{
  length=1;
  breadth=1;
}
void rectangle::Rectangle(int l,int b)
{
  length=l;
  breadth=b;
}
int rectangle::setlength(int l)
{
  length=l;
}
int rectangle::setbreadth(int b)
{
  breadth=b;
}
int rectangle::area()
{
  return length*breadth;
}
int rectangle::perimeter()
{
  return 2*(length+breadth);
}
int main()
{
 cuboid c(5);
 c.setlength(10);
 c.setbreadth(7);
 //cout<<"Volume is "<<c.volume()<<endl;
 cout<<"volume is"<<c.volume()<<endl;
}