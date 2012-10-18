//
//  main.cpp
//  Practice
//
//  Created by Christopher Bonine on 10/12/12.
//  Copyright (c) 2012 Christopher Bonine. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main ()

{
    string lastname;
    
    string yes; // Anwser that doesn't matter, the test will begin
    
    int number1; //number of spells studied
    
    int number2; // number of hours spent on each spell
    
    string noun; // the wizards favorite incantation 
    
    int total; // the mulitpilcation of int number1 and int number2
    
    
    cout<< " Are you really ready to be a Master Wizard? \n ";
    
    cin>> yes;
    
    cout<< " Welcome to your final test Apprentice Wizard. \n";
    
    cout<< " Enter your last name to begin \n ";
   
    cin>> lastname;
    
    cout<< " Enter how many spells have you learned here at our school? \n";
    
    cin>> number1;
    
    cout<< " Now enter how many hours you spent studying each spell \n";
    
    cin>> number2;
    
    total = number1 * number2;
    
    cout<< " What is your favorite animal? \n ";
    
    cin>> noun;
    
    cout<< " Really what kind of Wizard's favorite animal is a " << noun << " I would have thought your favorite animal would have been the Dodo Bird. \n";
    
    cout<< " Apprentice Wizard " << lastname << " our records do show that you have studied " << number1 << " spells " "and for " << number2 << " hours each, toiling for a total of " << total << " hours. \n";
    
    cout<< " Since you have been such a great student cast me the incantation for The Summoning of the " << noun << " this will be your final spell as an Apprentice Wizard. \n";
    
    cout<< " You have passed the final test. Congratualtions Master Wizard! Now go see the world and remember to always use your magic for good. ";
    
    
    
    
    return 0;
    
    
    
   
    
}

