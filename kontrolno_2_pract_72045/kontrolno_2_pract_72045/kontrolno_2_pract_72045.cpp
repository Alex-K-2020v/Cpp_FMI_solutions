// kontrolno_2_pract_72045.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void fillStrArr(char(*)[60], char*);
void printStrArrRecursive(char (*)[60], int, int);
void findLongestSong(char(*)[60], int);
void printLongestSongInAlphabetical(char[60]);
int main()
{
    char (*str)[60] = new char[60][60];
    char* input = new char[3600];
    cin.getline(input,3600);
    fillStrArr(str, input);
    int countSongs = 0;
    for (size_t i = 0; str[i][0]!='\0'; i++)
    {
        countSongs++;
    }
    
    printStrArrRecursive(str,countSongs-1,0);
    cout << endl;
    findLongestSong(str,countSongs);
    delete[] str;
    delete[] input;
}
void fillStrArr(char(*str)[60], char* input)
{
    int strIndexX = 0;
    int strIndexY = 0;
    for (size_t i = 0; input[i]!='\0' ; i++)
    {
        if (input[i] == ';')
        {
            i+=2;
        }
        for (size_t j = i; input[j]!=';' && input[j] != '\0'; j++)
        {
            str[strIndexX][strIndexY] = input[j];
            strIndexY++;
            i = j;
        }
        str[strIndexX][strIndexY] = '\0';
        strIndexX++;
        strIndexY = 0;

    }
    str[strIndexX][0] = '\0';
}
void printStrArrRecursive(char(*str)[60], int indexX, int indexY)
{
    if (indexX==-1)
    {
        return;
    }
    else
    {
        if (str[indexX][indexY]!='\0')
        {
            cout << str[indexX][indexY];
            printStrArrRecursive(str, indexX, indexY+1);
        }
        else
        {
            cout << "; ";
            printStrArrRecursive(str, indexX - 1, 0);
        }
    }
}
void findLongestSong(char(*str)[60], int maxRows)
{
    int indexInRow = 0;
    int indexLongestRow=0;

    for (size_t i = 0; i < maxRows; i++)
    {
        for (size_t j = 0; str[i][j]!='-'; j++)
        {
            if (j>indexInRow)
            {
                indexInRow = j;
                indexLongestRow = i;
            }

        }
    }
    printLongestSongInAlphabetical(str[indexLongestRow]);
}
void printLongestSongInAlphabetical(char song[60])
{
    for (size_t i = 0; song[i]!='-'; i++)
    {
        if (song[i]>=65 && song[i]<=90)
        {
            song[i] += 32;
        }
        for (size_t j = 0; song[j] != '-'; j++)
        {
            if (song[i]<song[j])
            {
                char temp = song[i];
                song[i] = song[j];
                song[j] = temp;
            }
        }
    }
    for (size_t i = 0; song[i]!='-' ; i++)
    {
        if (song[i]>=97 && song[i]<=122)
        {
            cout << song[i];
        }
    }
    cout << endl;

}