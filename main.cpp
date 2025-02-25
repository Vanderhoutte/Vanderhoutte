#include "Rectangle.hpp"
#include<iostream>

RecTangle::RecTangle(double width,double height)
{
    this->width = width;
    this->height = height;
}

RecTangle::RecTangle(const RecTangle& other)
{
    this->height = other.height;
    this->width = other.width;
}

RecTangle::~RecTangle()
{}//没有使用new方法，任其自动销毁

RecTangle RecTangle::operator=(const RecTangle& other)
{
    this->height = other.height;
    this->width = other.width;
    return *this;
}

double RecTangle::area()
{
    double ans = 0.0;
    ans = this->height * this->width;
    return ans;
}

void RecTangle::resize(double scale)
{
    this->height *= scale;
    this->width *= scale;
}