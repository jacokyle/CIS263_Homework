//
// Created by Kyle Jacobson on 1/21/2019.
//

#include <iostream>
#include "house.h"
using namespace std;

// Default Constructor.
house::house() {
    this->color = "unknown";
    this->price = -1;
    this->num_rooms = -1;
}

// Constructor with a set of parameters.
house::house(const string &ColorValue, int PriceValue, int Num_roomsValue) {
    this->color = ColorValue;
    this->price = PriceValue;
    this->num_rooms = Num_roomsValue;
}

// Set the member variable "color".
void house::SetColor(const string &ColorValue) {
    this->color = ColorValue;
}

// Return the value of the member variable "color".
string house::GetColor() const {
    return color;
}

// Set the member variable "price".
void house::SetPrice(int PriceValue) {
    this->price = PriceValue;
}

// Return the value of the member variable "price".
int house::GetPrice() const {
    return price;
}

// Set the member variable "num_rooms".
void house::SetNum_rooms(int Num_roomsValue) {
    this->num_rooms = Num_roomsValue;
}

// Return the value of the member variable "num_rooms".
int house::GetNum_rooms() const {
    return num_rooms;
}

// Show color, price and num_rooms in the output screen.
void house::PrintInfo() const {
    cout<<color<<" "<<price<<" "<<num_rooms<<endl;
}