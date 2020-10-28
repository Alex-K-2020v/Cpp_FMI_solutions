
#include <iostream>
using namespace std;
int main()
{
    int start = 65;
    int end = 90;
    int cnt = start;
    for(;cnt<= end; cnt++)
    {
        if (cnt!=65 && cnt!=69 && cnt!=73 && cnt!=79 && cnt!=85 && cnt!=89)
        {
            char letter = cnt;
            cout << letter << endl;
        }
    }
}

