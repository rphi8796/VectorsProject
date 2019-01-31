//
//  Controller.cpp
//  StructureProject
//
//  Created by Phillips, Ryan on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"


void Controller :: start()
{
    createVectors();
}

void Controller :: createVectors()
{
    
    vector<string> words;
    vector<int> nums;
    string copy[3];

    words.push_back("one");
    words.push_back("two");
    words.push_back("three");

    for (auto i = words.begin(); i != words.end(); ++i)
    {
        cout << *i << " ";
        cout << endl;
    }
    
    for (int i = 1; i < 4; i++)
    {
        nums.push_back(i);
    }

    for (auto i = nums.begin(); i != nums.end(); ++i)
    {
        cout << *i << " ";
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        copy[i] = words[i];
    }
    
    
//    for (auto i = words.begin(); i != words.end(); ++i)
//    {
//        cout << *i << " ";
//        cout << endl;
//    }
//
//
//    string yep[3];
//    for (int i = 0; i < 3; i++)
//    {
//        yep[i] = words[i];
//    }
//
//    for (int i = 0; i < 3; i++)
//    {
//        cout << yep[i] << endl;
//    }
}
