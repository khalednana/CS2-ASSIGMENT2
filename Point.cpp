//
//  Point.cpp
//  AS2
//
//  Created by Khaled  Nana  on 01/03/2023.
//

#include "Point.hpp"
Point::Point()
{
    x=0;
    y=0;
};
Point::Point(float X,float Y)
{
    x=Y;
    y=X;
};
void Point::setX(float X)
{
    x=X;
};
float Point::getX()
{
    return x;
};
void Point::setY(float Y)
{
    y=Y;
};
float Point::getY()
{
    return y;
};
void Point::display()
{
    cout<<"Your coordinates as (X,Y) are ("<<x<<","<<y<<")"<<endl;
};
float Point::getDistance(Point p)
{
    int distance=0;
    distance=sqrt(pow(p.y-y, 2)+pow(p.x-x, 2));
    return distance;
};
Point Point::Center(Point arr[],int n)
{
    int sumX=0,sumY=0;
    for (int i=0; i<n; i++) {
        sumX+=arr[i].getX();
        sumY+=arr[i].getY();
    }
    Point center(sumX/n,sumY/n);
    return center;
};
void Point::clusterA(Point arr[], int n)
{
    int i=0;
    int X=0;
    while (i<n) {
        X=Point::GenerateA();
        arr[i].setX(X);
        i++;
    }
    i=0;
    while (i<n) {
        X=Point::GenerateA();
        arr[i].setY(X);
        i++;
    }
};
void Point::clusterB(Point arr[], int n)
{
    int i=0;
    int X=0;
    while (i<n) {
        X=Point::GenerateB();
        arr[i].setX(X);
        i++;
    }
    i=0;
    while (i<n) {
        X=Point::GenerateB();
        arr[i].setY(X);
        i++;
    }
};
void Point::clusterM(Point arr[],int n)
{
    int i=0;
    int X=0;
    while (i<n) {
        X=Point::GenerateM();
        arr[i].setX(X);
        i++;
    }
    i=0;
    while (i<n) {
        X=Point::GenerateM();
        arr[i].setY(X);
        i++;
    }
};
int Point::GenerateA()
{
    
        int i=0;
        while (i<70) {
            i= rand() % 90 +1;
        
        }
    
    return i;
};
int Point::GenerateB()
{
    int i=0;
    int x=0;
    while (x<20) {
            
        i= rand() % 100 ;
        if(i>=20)
            if (i<=40)
                break;
            
           
        x++;
    }
return i;
};
int Point::GenerateM()
{
    int i=0;
    while (i<5) {
        i= rand() % 100 +1;
        
    }
return i;
};

//2.Implement a user application function that receives two point clusters A and B and a
//point p and determines to which cluster center will be (p) closest.






//3. Develop a user application program to do the following:
//a) Generate n random points for cluster A with
//70.0 < x < 90.0 and 70.0 < y < 90.0. For example, take n = 200
//b) Generate n random points for cluster B with
//20.0 < x < 40.0 and 20.0 < y < 40.0. For example, take n = 200
//c) Generate m = 20 random points p with 5.0 < x < 100.0 and 5.0 < y < 100.0.
//d) For each of the above m points, output to which cluster (A or B) it should
//belong.

