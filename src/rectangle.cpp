#include "../header/rectangle.hpp"

Rectangle::Rectangle() : width(0), height(0) { }

Rectangle::Rectangle(int w, int h) : width(1), height(1) { }

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return 1; 
}

int Rectangle::perimeter() {
    return 1;
}