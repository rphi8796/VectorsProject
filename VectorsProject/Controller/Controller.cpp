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
    string copy[3];
    vector<int> nums;
    vector<string> words;
    
    for (int i = 1; i < 4; i++)
    {
        nums.push_back(i);
    }
    
    words.push_back("one");
    words.push_back("two");
    words.push_back("three");
    
    for (auto i = nums.begin(); i != nums.end(); ++i)
    {
        cout << *i << " ";
        cout << endl;
    }
    
    for (auto i = words.begin(); i != words.end(); ++i)
    {
        cout << *i << " ";
        cout << endl;
    }
    
    for (int i = 0; i > 3; i++)
    {
        copy[i] = words[i];
    }
    

}
