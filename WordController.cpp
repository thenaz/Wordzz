//
//  WordController.cpp
//  Wordzz
//
//  Created by Nazir, Ammar on 2/3/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#include "WordController.hpp"

WordController :: WordController()
{
    derpy = "derp derp derp";
    otherWordz = "oh more words?";
}

void WordController :: start()
{
    numberMethods();
}

/*
 Test out the methods that use members on strings in C++
/*




void WordController :: numberMethods()
{
    int count = derpy.size();
    cout << "Then number of letters in the derpy variable is: " << count << endl;
    cout << "So, the size() method of string works like the length() method of Java on String" << endl;
    
    string temp = derpy.substr(3);
    cout << temp << endl;
}
