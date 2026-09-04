#include <iostream>
using namespace std;

int main() {

    // ========================================
    // Q1. Area of a Square
    // ========================================

    float side;

    cout << "Enter the side of square: ";
    cin >> side;

    float squareArea = side * side;

    cout << "Area of square = " << squareArea << endl;


    // ========================================
    // Q2. Total Cost of 3 Items
    // ========================================

    float pencil, pen, eraser;

    cout << "\nEnter cost of pencil: ";
    cin >> pencil;

    cout << "Enter cost of pen: ";
    cin >> pen;

    cout << "Enter cost of eraser: ";
    cin >> eraser;

    float totalCost = pencil + pen + eraser;

    cout << "Total cost = " << totalCost << endl;


    // ========================================
    // Q3. Simple Interest Calculator
    // ========================================

    float principal, rate, time;

    cout << "\nEnter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest: ";
    cin >> rate;

    cout << "Enter time: ";
    cin >> time;

    float simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << simpleInterest << endl;


    // ========================================
    // Q4. Area of a Circle
    // ========================================

    float radius;

    cout << "\nEnter radius of circle: ";
    cin >> radius;

    float circleArea = 3.14159 * radius * radius;

    cout << "Area of circle = " << circleArea << endl;


    return 0;
}