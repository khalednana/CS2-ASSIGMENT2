//
//  Point.hpp
//  AS2
//
//  Created by Khaled  Nana  on 01/03/2023.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
public:
    Point();
    Point(float X,float Y);
    void setX(float X);
    float getX();
    void setY(float Y);
    float getY();
    void display();
    float getDistance(Point p);
    Point Center(Point arr[],int n);
    void clusterA(Point arr[],int n);
    void clusterB(Point arr[],int n);
    void clusterM(Point arr[],int n);
    int GenerateA();
    int GenerateB();
    int GenerateM();
    void whichCluster(Point clusterA[],Point clusterB[],Point clusterM[]);
private:
    float x;
    float y;
    
    
};
#endif /* Point_hpp */

 /* Point_hpp */
