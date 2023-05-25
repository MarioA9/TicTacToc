#include <iostream>

using namespace std;


int main()
{
    char tablero[3][3], i, j;
    char answer;
    int fila, columna;
    int winner = 0;
    int turno = 1;
    
    do {
        system("cls");
        cout << "Welcome a Tic Tac Toc!!!" << endl << "You wanna play?" << endl << "1.Yes" << endl << "2.No" << endl;
        cin >> answer;
    } while (!(answer >= '1' && answer <= '2'));
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            tablero[i][j] = ' ';
            cout << "[ ]" << tablero[i][j];           
        }
        cout << "\n";
    }
    switch (answer)
    {
    case '1':
        do {

            if (turno % 2 == 1)
            {
                do {
                    cout << "Jugador 1" << endl;
                    cout << "write number file" << endl;
                    cin >> fila;
                    cout << "write number column" << endl;
                    cin >> columna;

                    if (tablero[fila][columna] == 'X' || tablero[fila][columna] == 'O')
                    {
                        cout << "Its busy, try again" << endl;
                    }
                } while (tablero[fila][columna] == 'X' || tablero[fila][columna] == 'O');
                tablero[fila][columna] = 'X';

                system("cls");
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        cout << "[" << tablero[i][j] << "]";
                    }
                    cout << "\n";
                }
                turno++;
            }
            else if (turno % 2 == 0)
            {
                do {
                    cout << "Jugador 2" << endl;
                    cout << "write number file" << endl;
                    cin >> fila;
                    cout << "write number column" << endl;
                    cin >> columna;
                    if (tablero[fila][columna] == 'X' || tablero[fila][columna] == 'O')
                    {
                        cout << "Its busy, try again" << endl;
                    }
                } while (tablero[fila][columna] == 'X' || tablero[fila][columna] == 'O');
                tablero[fila][columna] = 'O';

                system("cls");
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        cout << "[" << tablero[i][j] << "]";
                    }
                    cout << "\n";
                }
                turno++;
            }

        } while (winner != 1);
        break;
    case '2':
        cout << "GoodBye" << endl;
        return 0;
        break;
    }

    
}

