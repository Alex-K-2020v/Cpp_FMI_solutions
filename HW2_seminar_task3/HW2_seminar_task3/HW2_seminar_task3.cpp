// HW2_seminar_task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Player
{
private:
    double punchPower;
    double kickPower;
    double agility;
    double height;
    double accuracy;
    int level;
    double luck;
public:
    const double get_punchPower()
    {
        return punchPower;
    }
    const double get_kickPower()
    {
        return kickPower;
    }
    const double get_agility()
    {
        return agility;
    }
    const double get_height()
    {
        return height;
    }
    const double get_accuracy()
    {
        return accuracy;
    }
    const int get_level()
    {
        return level;
    }
    const double get_luck()
    {
        return luck;
    }
    void set_punchPower(double _punchPower)
    {
        punchPower = _punchPower;
    }
    void set_kickPower(double _kickPower)
    {
        kickPower = _kickPower;
    }
    void set_agility(double _agility)
    {
        agility = _agility;
    }
    void set_height(double _height)
    {
        height = _height;
    }
    void set_accuracy(double _accuracy)
    {
        accuracy = _accuracy;
    }
    void set_level(int _level)
    {
        level = _level;
    }
    void set_luck(int _luck)
    {
        luck = _luck;
    }
};

void fight(Player*, Player*);
void printPlayerStats(Player);
int main()
{
    Player p1;
    Player p2;
    p1.set_level(6);
    p1.set_punchPower(17.5);
    p1.set_kickPower(37.5);
    p1.set_accuracy(45);
    p1.set_agility(19);
    p1.set_height(1.90);
    p1.set_luck(20);

    p2.set_level(6);
    p2.set_punchPower(16.5);
    p2.set_kickPower(37.5);
    p2.set_accuracy(15);
    p2.set_agility(19);
    p2.set_height(1.90);
    p2.set_luck(20);
    cout << "Player 1 stats:" << endl;
    printPlayerStats(p1);
    cout << "Player 2 stats:" << endl;
    printPlayerStats(p2);
    fight(&p1, &p2);

}
void fight(Player *p1, Player *p2)
{
    /*Each player starts out with the same score.
    If one player has better stats than the other player he recieves points 
    which are given to him by the value of his score*/
    int scoreP1 = 0;
    int scoreP2 = 0;
    double p1Stats[6] = { p1->get_punchPower(), p1->get_height(),
                          p1->get_kickPower(), p1->get_luck(),
                          p1->get_agility(), p1->get_accuracy()};

    double p2Stats[6] = { p2->get_punchPower(), p2->get_height(),
                             p2->get_kickPower(), p2->get_luck(),
                             p2->get_agility(), p2->get_accuracy() };
    for (size_t i = 0; i < 5; i++)
    {
        /*For a faster and cleaner check the values of the stats of the players are put into arrays.
        * They can be compared because each stat has a corresponding place in the array.
        By that logic the least important stats - punch power and height give the least ammount of points
        and the most important stats which are agility and accuracy give the most ammount of points*/
        if (i==4)
        { /* The agility of one player is matched by the accuracy of the other player. 
           Player 1 can be very agile but if player 2 is more accurate then player 2 is better and gets the points*/
            if (p1Stats[i+1] - p2Stats[i] > p2Stats[i + 1] - p1Stats[i])
            {
                scoreP1 += 5;
            }
            else if (p1Stats[i + 1] - p2Stats[i] < p2Stats[i + 1] - p1Stats[i])
            {
                scoreP2 += 5;
            }
            else
            {
                scoreP1 += 5;
                scoreP2 += 5;
            }
            break;
        }
        if (p1Stats[i] > p2Stats[i])
        {
            scoreP1 += i + 1;
        }
        else if (p1Stats[i] < p2Stats[i])
        {
            scoreP2 += i + 1;
        }
        else
        {
            scoreP1 += i + 1;
            scoreP2 += i + 1;
        }
    }
    if (p1->get_level() > p2->get_level())
    {// the level of the player is the most important stat, it gives the most strength to the character
        scoreP1 += 7;
    }
    else if (p1->get_level() < p2->get_level())
    {
        scoreP2 += 7;
    }
    else
    {
        scoreP1 += 7;
        scoreP2 += 7;
    }
    if (scoreP1 > scoreP2)
    {
        //If player 1 wins he levels up! 
        p1->set_level(p1->get_level()+1);
        cout << "GAME OVER!" << endl << "AND THE WINNER IS........PLAYER 1! " << endl <<
            "LEVEL UP! PLAYER 1 IS NOW AT LEVEL " << p1->get_level() << "!" << endl;
    }
    else if (scoreP1 < scoreP2)
    {
        //If player 2 wins he levels up!
        
        p2->set_level(p2->get_level() + 1);
        cout << "GAME OVER!" << endl << "AND THE WINNER IS........PLAYER 2! " << endl <<
            "LEVEL UP! PLAYER 2 IS NOW AT LEVEL " << p2->get_level() << "!" << endl;
    }
    else
    {   //If neither of the players win nobody levels up! :(
        cout << "GAME OVER!" << endl << "SURPRISE! IT IS A DRAW! " << endl;
    }
}
void printPlayerStats(Player player)
{
    cout << "| Level: " << player.get_level() << " |" << endl;
    cout << "| Luck: " << player.get_luck() << " |" << endl;
    cout << "| Punch power: " << player.get_punchPower() << " |" << endl;
    cout << "| Kick power: " << player.get_kickPower() << " |" << endl;
    cout << "| Accuracy: " << player.get_accuracy() << " |" << endl;
    cout << "| Agility: " << player.get_agility() << " |" << endl;
    cout << "| Height: " << player.get_height() << " |" << endl;
}