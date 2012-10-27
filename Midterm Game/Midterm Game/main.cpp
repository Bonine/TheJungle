//
//  main.cpp
//  Midterm Game
//
//  Created by Christopher Bonine on 10/26/12.
//  Copyright (c) 2012 Christopher Bonine. All rights reserved.
//
//Midterm project

//Hostage Riddle

#include <iostream>
#include <string>

using namespace std;

int main ()

{
    
    char answer; //This will assign characters for the words yes or no. Those characters are to be written below like this 'y'||'n' 
    
    char again; //This is for the question if you want to replay the game. Again the question is to answered in the characters 'y'||'n'
    
    
    
    string response; //Opening Statement
    
    
        cout << "I have a gun to your mothers head and the only way to" << endl;
    
        cout << "save her is to answer one of the three riddles. \n";
    
        cout<<"Are you ready to begin? (y/n): ";
    
        cin>> answer;
    
    
    switch (answer) 
    
    { //You have to open switch with a bracket.This switch will allow for the user to only answer yes or no.
            
        case 'y': //This is set so that the only way to answer the question, and begin the game, is to respond with a lower case y. You can also write further code to set it to both case sensitivty by putting in     case 'Y'       But this is a hostage situation and they have to play by the rules lol. 
            
    if (answer == 'y') // If they choose to play the game, cout<< is what is put out on the screen.
        
    { //? 
            
            
            cout<<"Alright lets begin." << endl;
    
            cout<<"Here is your first riddle." << endl;
                
    
            //These are the correct answers for the riddle 
            string answer1 ="towel";
                
            string answer2 ="footsteps";
                
            string answer3 ="pencil";
                
                
            // First Riddle
                
            cout<< "What gets wet when drying? \n ";
                
            cin>> response;
                
        
            if (response == answer1) // If they know the answer then we Congratulate them and ask if they want to play again
                    
            {
        
            cout <<"Congratualtions you saved your moms life." << endl;
                    
            cout <<"Do you want to try again? (y/n): ";
                    
            cin >> again;
                    
   
    do 
                        
    { //This bracket opens the do loop
                        
            if (again == 'y') //If they answer yes to try again. This allows for the user to begin again at the first riddle. 
                            
            {   //This bracket starts the if 
                            
                return main();
                            
            }   //This bracket closes the if 
                        
            
        
            if (again == 'n') //If they answer no to try again. We call them a coward, and again ask them if they want to play.
                            
            {   //This bracket starts the if 
                            
                cout <<"Coward" << endl;
                            
                return 0;
                            
            }   //This bracket closes the if 
                        
            else
                            
            {   //If they are trying to be funny and push something "else" like random keys to test our code, this will tell them "Inncorrect answer, try again."
            
                cout << "Incorect answer, try again: ";
                            
                cin >> again;
                            
            }   //Just like the "if". You open a bracket you then have to close it.
                        
    } //This bracket closes the do statment.
                    
            
            while (again != 'n' || again != 'y');
                    
    } //?
                
                if (response != answer1) //They don't get the riddle right it reads out Wrong answer...
                    
                {
                    
                cout<< "Wrong answer, I'm putting a bullet in the gun.\n";
                    
                cout<< "Here is your next riddle. " << endl;
                    
                }
                
                // Second Riddle
                
                cout<< "The more you take, the more you leave behind. What are they? \n ";
                
                cin>> response;
                
                
                
                if (response == answer2)
                    
                { // If they know the answer then we Congratulate them and ask if they want to play again
                    
                    cout << "Congratualtions you saved your moms life." << endl;
                    
                    cout << "Do you want to try again? (y/n): ";
                    
                    cin >> again;
                    
                do
                        
                {
                        
                if (again == 'y')
                            
                        {
                            
                            return main();
                            
                        }
                        
                if (again == 'n')
                            
                        {
                            
                     cout << "Coward!" << endl;
                            
                            return 0;
                            
                 }
                        
                else
                            
                        {
                            
                            cout <<
                            
                            "Incorecte answer, try again: ";
                            
                            cin >> again;
                            
                        }
                        
                    }
                    
                    while (again != 'n' || again != 'y');
                    
                }
                
                if (response != answer2)
                    
                {
                    
                    cout <<
                    
                    "The loaded gun is pressing against your mothers head. You" << endl;
                    
                    cout <<
                    
                    "better get this next riddle right.\n ";
                    
                    cout<<
                    
                    "This is your final riddle. \n ";
                    
                }
                
                // Third Riddle
                
                cout<<
                
                "I am taken from a mine, and shut up in a wooden case," << endl;
                
                cout<<
                
                "from which I am never released, and yet I am used by almost" << endl;
                
                cout<<
                
                "everybody.\n ";
                
                cin>> response;
                
                if (response == answer3)
                    
                {
                    
                    cout <<
                    
                    "Your a lucky your mom is hott and I don't want to shoot" << endl;
                    
                    cout <<
                    
                    "her pretty face." << endl;
                    
                    cout <<
                    
                    "Do you want to try again? ";
                    
                    cin >> again;
                    
                    do
                        
                    {
                        
                        if (again == 'y')
                            
                        {
                            
                            return main();
                            
                        }
                        
                        if (again == 'n')
                            
                        {
                            
                            cout <<
                            
                            "Coward!" << endl;
                            
                            return 0;
                            
                        }
                        
                        else
                            
                        {
                            
                            cout <<
                            
                            "Incorecte answer, try again: ";
                            
                            cin >> again;
                            
                        }
                        
                    }
                    
                    while (again != 'n' || again != 'y');
                    
                }
                
                if (response != answer3)
                    
                {
                    
                    cout<<
                    
                    "Okay your mom is dead, have a nice day." << endl;
                    
                }
                
                do
                    
                {
                    
                    cout <<
                    
                    "would you like to play again? (y/n): ";
                    
                    cin >> again;
                    
                    if (again == 'y')
                        
                    {
                        
                        return main();
                        
                    }
                    
                    if (again == 'n')
                        
                    {
                        
                        cout <<
                        
                        "Coward!" << endl;
                        
                    }
                    
                    else
                        
                    {
                        
                        cout <<
                        
                        "Wrong answer try again: ";
                        
                        cin >> again;
                        
                    }
                    
                }
                
                while (again != 'y' || again != 'n');
                
            }
            
        case 'n':
            
            if (answer == 'n')
                
            {
                
                cout<<
                
                "BANG! Your mother is dead coward. \a " << endl;
                
                break;
                
            }
            
        default:
            
            do
                
            {
                
                if (answer != 'n' && answer != 'y')
                    
                {
                    
                    cout<<
                    
                    "Inncorect Response! Please enter the correct response: ";
                    
                    cin >> answer;
                    
                    if (answer == 'y')
                        
                    {
                        
                        return main();
                        
                    }
                    
                    if (answer == 'n')
                        
                    {
                        
                        cout <<
                        
                        "Coward!" << endl;
                        
                    }
                    
                }
                
            }
            
            while (answer != 'n' && answer != 'y');
            
    }
    
    return 0;
    
}


