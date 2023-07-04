#include <iostream>
#include <deque>


using namespace std;


void showDeque(deque<char>)
{
    deque<char>::iterator it;
    int i, j, side;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}


void addPoint(deque<char>)
{
    deque<char> deck;
    std::deque<char>::iterator it = deck.begin();
    deck.insert(it, 'x');
}


int main()
{
    deque<char> deck;

    addPoint(deck);

    showDeque(deck);
    return 0;
}