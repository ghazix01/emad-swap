//
//  main.cpp
//  emad swap
//
//  Created by Ghazi Raad on 11/7/14.
//  Copyright (c) 2014 Ghazi Raad. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int x;
    x=6;
    int y;
    y=9;
    
    x = x+y;
    y = x - y;
    x = x - y;
    
    swap(x,y);
    
    
    cout << x << endl << y << endl;
    
    return 0;
}
