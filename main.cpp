//
//  main.cpp
//  AS2
//
//  Created by Khaled  Nana  on 01/03/2023.
//
#include <iostream>
#include "Point.hpp"
#include <cstdlib>
#include <ctime>
using namespace std;





void program2(Point clusterA[],int sizeA,Point clusterB[],int sizeB,Point P)
{
    Point centerA;
    centerA=centerA.Center(clusterA, sizeA);
    Point centerB;
    centerB=centerB.Center(clusterB, sizeB);
    int distA,distB;
    distA=sqrt(pow(P.getX()-centerA.getX(), 2)+pow(P.getY()-centerA.getY(), 2));
    distB=sqrt(pow(P.getX()-centerB.getX(), 2)+pow(P.getY()-centerA.getY(), 2));
    
    if (distA<distB) {
        cout<<"Point P is closer to the center of cluster A as distance to A = "<<distA<<" and distance to B = "<<distB<<endl;
        
    }
    else
        cout<<"Point P is closer to the center of cluster B as distance to B = "<<distB<<" and distance to A = "<<distA<<endl;
};






void program3(int sizeA,int sizeB,int sizeM)
{
    Point P;
    Point arrayA[sizeA];
    Point arrayB[sizeB];
    Point arrayM[sizeM];
    int i=0;
    int X=0;
    while (i<sizeA) {
        X=P.GenerateA();
        arrayA[i].setX(X);
        i++;
    }
    i=0;
    while (i<sizeA) {
        X=P.GenerateA();
        arrayA[i].setY(X);
        i++;
    }
    i=0;
    while (i<sizeB) {
        X=P.GenerateB();
        arrayB[i].setX(X);
        i++;
    }
    i=0;
    while (i<sizeB) {
        X=P.GenerateB();
        arrayB[i].setY(X);
        i++;
    }
    i=0;
    while (i<sizeM) {
        X=P.GenerateM();
        arrayM[i].setX(X);
        i++;
    }
    i=0;
    while (i<sizeM) {
        X=P.GenerateM();
        arrayM[i].setY(X);
        i++;
    }
    Point CenterA,CenterB;
    CenterA=CenterA.Center(arrayA, sizeA);
    CenterB=CenterB.Center(arrayB, sizeB);
    i=0;
    while (i<sizeM)
    {
        int DA,DB;
        DA=arrayM[i].getDistance(CenterA);
        DB=arrayM[i].getDistance(CenterB);
        if (DA<DB) {
            cout<<"Point number "<<i<<" is closer to the center of cluster A as distance to A = "<<DA<<" and distance to B = "<<DB<<endl;
            
        }
        else
            cout<<"Point number "<<i<<" is closer to the center of cluster B as distance to A = "<<DB<<" and distance to A = "<<DA<<endl;
        
        i++;
    }
    
    
};







Point Center(Point ar[],int n)
{
    int sumx=0,sumy=0;
    int i=0;
    while (i<n) {
        sumx+=ar[i].getX();
        sumy+=ar[i].getY();
        i++;
    }
    
    Point center(sumx/n,sumy/n);
    return center;
    
};



int main(int argc, const char * argv[]) {
    
    
    Point* arr;
    arr=new Point[3];
    arr[0].setX(4);
    arr[0].setY(4);
    arr[1].setX(5);
    arr[1].setY(5);
    arr[2].setX(6);
    arr[2].setY(6);
//    #
    
    Point P(40,40);
    Point arrayA[200];
    Point arrayB[200];
    Point arrayM[20];
    arrayA[0].clusterA(arrayA, 200);
    arrayB[0].clusterB(arrayB, 200);
    arrayM[0].clusterM(arrayM, 20);
    program2(arrayA, 200, arrayB, 200, P);
    cout<<endl;
    
    
    
    
//    program3(200, 200, 20);
    
    
    return 0;
}
