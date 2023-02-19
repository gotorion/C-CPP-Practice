#include <iostream>
class Box {
private:
    double length, width, height;
public:
    Box(double l, double w, double h);
    void set(double l, double w, double h);
    double calVolume();
    double calSurface();
};
Box::Box(double l, double w, double h) {
    this->length = l;
    this->width = w;
    this->height = h;
}
void Box::set(double l, double w, double h){
    this->length = l;
    this->width = w;
    this->height = h;
}
double Box::calVolume() {
    double result = this->length * this->width * this->height;
    return result;
}
double Box::calSurface() {
    double result = 2 * (this->length * this->height + this->length * this->width + this->width * this->height);
    return result;
}
int main() {
    Box myBox(10, 5, 6);
    std::cout << "体积: " << myBox.calVolume() << std::endl;
    std::cout << "表面积: " << myBox.calSurface() << std::endl;
    myBox.set(4, 5, 6);
    std::cout << "体积: " << myBox.calVolume() << std::endl;
    std::cout << "表面积: " << myBox.calSurface() << std::endl;
    return 0;
}

