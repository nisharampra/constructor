//
//  main.cpp
//  constructor
//
//  Created by Nisha Ramprasath on 4/11/23.
//

#include<iostream>
using namespace std;
    
class Rectangle
{
    private:
    int length;
    int breadth;
        
    public:
    Rectangle()
    {
            
        length=10;
        breadth=10;
    }
            
int area()
    {
        return length*breadth;
    }
    
};
    
int main()
{
    Rectangle r1;
    cout<<r1.area()<<endl;
    
    return 0;
        
}
