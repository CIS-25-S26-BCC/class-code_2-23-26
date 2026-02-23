#include <iostream>

using namespace std;

class Rectangle {
    private:
        int width;
        int height;
    public:
        void setWidth(int newWidth) const {
            if(newWidth > 0) width = newWidth;
            
        }
        void setHeight(int newHeight) const {
            if(newHeight > 0) height = newHeight;
        }

        int getWidth() const {
            return width;
        }

        int getHeight() const {
            return height;
        }

        int getArea() {
            return height * width;
        }
};

int main() {
    Rectangle myRectangle;

    myRectangle.setWidth(200);
    myRectangle.setHeight(100);

    cout << "Made a Rectangle!" << endl;
    cout << "Area: " << myRectangle.getArea() << endl;
}