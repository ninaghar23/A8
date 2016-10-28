//
// Created by Sean Pitterson on 10/25/16.
//

#ifndef A8_POINT_H
#define A8_POINT_H

#include <iostream>
#include <fstream>

using namespace std;
class Point {
private:
    int xCoordinate;
    int yCoordinate;
public:
    Point() {
        xCoordinate = 0;
        yCoordinate = 0;
    }

    Point(int x, int y);

    //insertion operator shouldn't be able to display the point after error occured
    friend ostream &operator<<(ostream &output,
                               const Point &P) {
        if (!cin.fail()) {
            output << "(" << P.xCoordinate << "," << P.yCoordinate << ")";
        }
        return output;
    }


    //>> extraction should determine if input is valid... if not set failbit to indicate improper input
    friend istream &operator>>(istream &input, Point &P) {
//peak at the input stream, while the stream is open
        if (input.peek() != '(') {
            input.clear(ios::failbit); // set failbit if invalid
        } else {
            input.ignore(); // skip (
            input >> P.xCoordinate; // next character is x-coordinate
        }
        if (input.peek() != ',') {
            input.clear(ios::failbit); // set failbit if invalid
        } else {
            input.ignore(); // skip (
            input >> P.yCoordinate; // next character is x-coordinate
        }
        if (input.peek() != ')') {
            input.clear(ios::failbit); // set failbit if invalid
        } else {
            input.ignore(); // skip )
        }
        return input;

    }
};

#endif //A8_POINT_H
