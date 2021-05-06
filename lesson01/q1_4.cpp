#include <iostream>
using namespace std;

class Rectangle{
public:
    int width;
    int height;

    Rectangle(int wi, int he){
        width = wi;
        height = he;
    }

    void addWidth(int w){
        width += w;
    }
    void addHeight(int h){
        height += h;
    }
    int area(){
        return width * height;
    }
    void print(){
        cout << "幅：" << width
             << ",  高さ：" << height
             << ",  面積：" << area() << endl;
    }
    void printAddress(){
        cout << "&width：" << &width
             << ",  &height：" << &height << endl;
    }
};

int main(){
    Rectangle rect(5, 10);

    rect.print();
    rect.printAddress();
    rect.addWidth(3);
    rect.addHeight(6);
    rect.print();
    rect.printAddress();
}
