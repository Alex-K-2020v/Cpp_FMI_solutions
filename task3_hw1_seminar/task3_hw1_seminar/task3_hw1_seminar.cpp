// task3_hw1_seminar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <string>
#include <time.h>
using namespace std;
enum command { easy, medium, hard, invalid };
int easyGameMode(int);
int mediumGameMode(int);
int hardGameMode(int);
void level_timer(int);
command checkCommand(string);
int main(int points)
{
    srand((unsigned)time(0));
    points = 0;
    string commandInput, resume;
    getline(cin, commandInput);
    command command = checkCommand(commandInput);
    while (command==invalid)
    {
        cout << "Invalid command, enter [easy], [medium], or [hard]: ";
        getline(cin,commandInput);
        command = checkCommand(commandInput);
    }
    resume = "yes";
   
    if (command == easy)
    {
        while (resume == "yes")
        {
            points = easyGameMode(points);
            getline(cin, resume);
        }
    }
    else if (command == medium)
    {
        while (resume == "yes")
        {
            points = mediumGameMode(points);
            getline(cin, resume);

        }
    }
    else if (command == hard)
    {
        while (resume == "yes")
        {
            points = hardGameMode(points);
            getline(cin, resume);

        }
    }

    
    
}
command checkCommand(string command)
{
    if (command=="easy")
    {
        return easy;
    }
    else if (command=="medium")
    {
        return medium;
    }
    else if (command=="hard")
    {
        return hard;
    }
    return invalid;
}
int easyGameMode(int points)
{
    bool hasWon=true;
    int winningCombo[4];
    cout << "Starting \"easy\" mode. You will have 4 states (up, left, down, right) and a period of 1 sec to look at the answers.";
    for (size_t i = 0; i < 4; i++)
    {
        int n = rand() % 4;
        switch (n)
        {
        case 0:
            cout << "Simon Says up";
            break;
        case 1:
            cout << "Simon Says down";
            break;
        case 2:
            cout << "Simon Says right";
            break;
        case 3:
            cout << "Simon Says left";
            break;
        default:
            break;
        }
        winningCombo[i] = n;
        srand(time(0));
        level_timer(1000);
    }
    string input;
    getline(cin, input);

    string directions[4] = { "up", "down", "right", "left" };
    string currentDirection;
    int j = 0;
    int i = 0;
    int k = 0;
    while (input[j]!=NULL)
    {
        currentDirection = "";
        while (input[j] != ' ' && input[j]!=NULL)
        {
            currentDirection+=input[j];
            i++;
            j++;
        }
        if (currentDirection!=directions[winningCombo[k]])
        {
            hasWon = false;
            break;
        }
        if (input[j]==NULL)
        {
            break;
        }
        k++;
        j++;
    }
    
    if (hasWon==true)
    { 
        points++;
        if (points == 1)
        {
            cout << "Congrats! That's correct! You have 1 point up to now. Continue? (Yes/No)";
        }
        else
        {
            cout << "Congrats! That's correct! You have " << points << " points up to now. Continue? (Yes/No)";
        }
    }
    else
    {
        if (points == 1)
        {
            cout << "Sorry! You lost! You have 1 point up to now. Continue? (Yes/No)";
        }
        else
        {
            cout << "Sorry! You lost! You have " << points << " points up to now. Continue? (Yes/No)";
        }
    }
    return points;
        

}
int mediumGameMode(int points)
{
    bool hasWon=true;
    int winningCombo[6];
    cout << "Starting \"easy\" mode. You will have 4 states (up, left, down, right) and a period of 1 sec to look at the answers.";
    for (size_t i = 0; i < 6; i++)
    {
        int n = rand() % 4;
        switch (n)
        {
        case 0:
            cout << "Simon Says up";
            break;
        case 1:
            cout << "Simon Says down";
            break;
        case 2:
            cout << "Simon Says right";
            break;
        case 3:
            cout << "Simon Says left";
            break;
        default:
            break;
        }
        winningCombo[i] = n;
        srand(time(0));
        level_timer(500);
    }
    string input;
    getline(cin, input);

    string directions[4] = { "up", "down", "right", "left" };
    string currentDirection;
    int j = 0;
    int i = 0;
    int k = 0;
    while (input[j]!=NULL)
    {
        currentDirection = "";
        while (input[j] != ' ' && input[j]!=NULL)
        {
            currentDirection+=input[j];
            i++;
            j++;
        }
        if (currentDirection!=directions[winningCombo[k]])
        {
            hasWon = false;
            break;
        }
        if (input[j]==NULL)
        {
            break;
        }
        k++;
        j++;
    }
    
    if (hasWon==true)
    { 
        points++;
        if (points == 1)
        {
            cout << "Congrats! That's correct! You have 1 point up to now. Continue? (Yes/No)";
        }
        else
        {
            cout << "Congrats! That's correct! You have " << points << " points up to now. Continue? (Yes/No)";
        }
    }
    else
    {
        if (points == 1)
        {
            cout << "Sorry! You lost! You have 1 point up to now. Continue? (Yes/No)";
        }
        else
        {
            cout << "Sorry! You lost! You have " << points << " points up to now. Continue? (Yes/No)";
        }
    }
    return points;
}
int hardGameMode(int points)
{
    bool hasWon = true;
    int winningCombo[8];
    cout << "Starting \"easy\" mode. You will have 4 states (up, left, down, right) and a period of 1 sec to look at the answers.";
    for (size_t i = 0; i < 8; i++)
    {
        int n = rand() % 4;
        switch (n)
        {
        case 0:
            cout << "Simon Says up";
            break;
        case 1:
            cout << "Simon Says down";
            break;
        case 2:
            cout << "Simon Says right";
            break;
        case 3:
            cout << "Simon Says left";
            break;
        default:
            break;
        }
        winningCombo[i] = n;
        srand(time(0));
        level_timer(250);
    }
    string input;
    getline(cin, input);

    string directions[4] = { "up", "down", "right", "left" };
    string currentDirection;
    int j = 0;
    int i = 0;
    int k = 0;
    while (input[j] != NULL)
    {
        currentDirection = "";
        while (input[j] != ' ' && input[j] != NULL)
        {
            currentDirection += input[j];
            i++;
            j++;
        }
        if (currentDirection != directions[winningCombo[k]])
        {
            hasWon = false;
            break;
        }
        if (input[j] == NULL)
        {
            break;
        }
        k++;
        j++;
    }

    if (hasWon == true)
    {
        points++;
        if (points == 1)
        {
            cout << "Congrats! That's correct! You have 1 point up to now. Continue? (Yes/No)";
        }
        else
        {
            cout << "Congrats! That's correct! You have " << points << " points up to now. Continue? (Yes/No)";
        }
    }
    else
    {
        if (points == 1)
        {
            cout << "Sorry! You lost! You have 1 point up to now. Continue? (Yes/No)";
        }
        else
        {
            cout << "Sorry! You lost! You have " << points << " points up to now. Continue? (Yes/No)";
        }
    }
    return points;
}

void level_timer(int milsec)
{
    using namespace std::this_thread;
    using namespace std::chrono;

    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + milliseconds(milsec));
    system("CLS");
}