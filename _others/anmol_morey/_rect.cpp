#include <iostream>

class Rectangle {
    private:
        float length;
        float breadth;
    public:
        Rectangle();
        Rectangle(float l,float b);
        Rectangle(Rectangle &r);
        void setlength(float l);
        void setbreadth(float b);
        float getlength();
        float getbreadth();
        float getarea();
};

Rectangle::Rectangle() {
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(float l, float b) {
    length = l;
    breadth = b;
}

Rectangle::Rectangle(Rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setlength(float l) {
    length = l;
}
void Rectangle::setbreadth(float b) {
    breadth = b;
}
float Rectangle::getlength() {
    return length;
}
float Rectangle::getbreadth() {
    return breadth;
}
float Rectangle::getarea() {
    return length * breadth;
}



class Cuboid {
    private:
        float length;
        float breadth;
        float height;
    public:
        Cuboid();
        Cuboid(float l, float b, float h);
        Cuboid(Cuboid &c);
        void setlength(float l);
        void setbreadth(float b);
        void setheight(float h);
        float getlength();
        float getbreadth();
        float getheight();
        float getvolume();
};

Cuboid::Cuboid() {
    length = 1;
    breadth = 1;
    height = 1;
}

Cuboid::Cuboid(float l, float b, float h) {
    length = l;
    breadth = b;
    height = h;
}

Cuboid::Cuboid(Cuboid &c) {
    length = c.length;
    breadth = c.breadth;
    height = c.height;
}

Cuboid::setlength(float l) {
    length = l;
}
Cuboid::setbreadth(float b) {
    breadth = b;
}
Cuboid::setheight(float h) {
    height = h;
}
float Cuboid::getlength() {
    return length;
}
float Cuboid::getbreadth() {
    return breadth;
}
float Cuboid::getheight() {
    return height;
}
float Cuboid::getvolume() {
    return length * breadth * height;
}


int main() {
 /* ... */
}