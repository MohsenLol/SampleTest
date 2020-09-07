/*******************************************************************************************
 * File: main.cpp
 * 
 * Copyright 2020 MohsenLol
 * All Rights Reserved.
 * 
 * The information in this file is just for learning on My own!
 * 
 * Author: MohsenLol
 * Date: Created September 2020
 * 
 * Description: A simple program for testing repositories 
 *              only add and multiply two integer
 * 
 * Note: Just for FuN!!
**********************************************************************************************/


/*********************************************************************************************
 *
 * includes
 * 
 *********************************************************************************************/
#include <iostream>
#include "lib.h"
using namespace std;
int main()
{
    cout << "Revised By MasterFoo" << endl;
    cout << "Ver 1" << endl;
    int a,b; // a, b are integer numbers
    cout << "a  b : " << endl;
    cin >> a >> b;
    cout << "a*b = " << mult(a,b) << "\na+b = " << add(a,b) << endl;
    cout << 'by!\n';
    
}
