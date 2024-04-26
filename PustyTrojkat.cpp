#include <iostream>

using namespace std;

int main()
{
    int rozmiar = 0;
    cout << "Podaj rozmiar trojkata: \n";
    cin >> rozmiar;

    for (int i = 0; i < rozmiar; i++)
    {
        for (int j = 0; j < rozmiar; j++)
        {
            if (j == (rozmiar-1) || j == ((rozmiar - 1) - i) || i == (rozmiar-1))
            {
                cout << ("*");
            }
            else
            {
                cout << (" ");
            }
        }
        cout << endl;
    }


    return 0;
}