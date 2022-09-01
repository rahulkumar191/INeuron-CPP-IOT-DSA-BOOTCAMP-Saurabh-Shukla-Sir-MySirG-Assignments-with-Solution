#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

void timer(int seconds)
{
    while (seconds--)
    {
        cout << "\n TIME " << seconds + 1 << " sec";
        // sleep system call to sleep
        // for 1 second
        sleep(1);
    }
}

// user can choose playing mode option
int optionChoice()
{

    cout << "Enter Your Choice " << endl;
    cout << "1. Play with Smart computer " << endl;
    cout << "2. Play with Evil computer " << endl;
    cout << "3. Play with Player " << endl;
    cout << "4. Exit " << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    default:
        cout << "Invalid Number " << endl;
    }
    return 4;
}

// printing Tic Tac Toe interface
void printMatrix(char matrix[])
{
    cout << "####################  Tic Tac Toe  ###################" << endl
         << endl;
    cout << "First Player O" << endl;
    cout << "Second Player X" << endl
         << endl
         << endl;
    int idx = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 11; k++)
            {
                if (k == 3 || k == 7)
                    cout << "|";
                else if (j == 2)
                    cout << "__";
                else if (j == 1)
                {
                    if (k == 1 || k == 5 || k == 9)
                        cout << matrix[idx++] << " ";
                    else
                        cout << "  ";
                }
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
}

// updating user movement
void updateMatrix(char matrix[], int turnInp, char x_o)
{
    if (x_o == 'X')
    {
        matrix[turnInp - 1] = 'X';
    }
    else
    {
        matrix[turnInp - 1] = 'O';
    }
}

// user turn input taking
int turnInput(char matrix[])
{
    int a;
    while (1)
    {
        cin >> a;
        if (matrix[a - 1] != 'X' && matrix[a - 1] != 'O' && a > 0 && a < 10)
        {
            return a;
        }

        cout << "\nEnter valid position : ";
    }
}

// checking player won or not
bool checkWin(char m[], char x_o)
{
    char a = x_o;
    if (m[0] == a && m[1] == a && m[2] == a)
        return true;
    else if (m[3] == a && m[4] == a && m[5] == a)
        return true;
    else if (m[6] == a && m[7] == a && m[8] == a)
        return true;
    else if (m[0] == a && m[3] == a && m[6] == a)
        return true;
    else if (m[1] == a && m[4] == a && m[7] == a)
        return true;
    else if (m[2] == a && m[5] == a && m[8] == a)
        return true;
    else if (m[0] == a && m[4] == a && m[8] == a)
        return true;
    else if (m[2] == a && m[4] == a && m[6] == a)
        return true;
    else
        return false;
}
// when smart computer turn , finding best option to win
int tryToWin(int tm[])
{
    if ((tm[0] * tm[1] * tm[2]) == 2)
    {
        for (int i = 0; i < 3; i++)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[3] * tm[4] * tm[5]) == 2)
    {
        for (int i = 3; i < 6; i++)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[6] * tm[7] * tm[8]) == 2)
    {
        for (int i = 6; i < 9; i++)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[0] * tm[3] * tm[6]) == 2)
    {
        for (int i = 0; i < 7; i += 3)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[1] * tm[4] * tm[7]) == 2)
    {
        for (int i = 1; i < 8; i += 3)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[2] * tm[5] * tm[8]) == 2)
    {
        for (int i = 2; i < 9; i += 3)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[0] * tm[4] * tm[8]) == 2)
    {
        for (int i = 0; i < 9; i += 4)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[2] * tm[4] * tm[6]) == 2)
    {
        for (int i = 2; i < 7; i += 2)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else
        return -1;
    return 0;
}
// when smart computer turn , finding best option to block opponent
int tryToStop(int tm[])
{
    if ((tm[0] + tm[1] + tm[2]) == 2)
    {
        for (int i = 0; i < 3; i++)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[3] + tm[4] + tm[5]) == 2)
    {
        for (int i = 3; i < 6; i++)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[6] + tm[7] + tm[8]) == 2)
    {
        for (int i = 6; i < 9; i++)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[0] + tm[3] + tm[6]) == 2)
    {
        for (int i = 0; i < 7; i += 3)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[1] + tm[4] + tm[7]) == 2)
    {
        for (int i = 1; i < 8; i += 3)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[2] + tm[5] + tm[8]) == 2)
    {
        for (int i = 2; i < 9; i += 3)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[0] + tm[4] + tm[8]) == 2)
    {
        for (int i = 0; i < 9; i += 4)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else if ((tm[2] + tm[4] + tm[6]) == 2)
    {
        for (int i = 2; i < 7; i += 2)
            if (tm[i] == 2)
            {
                return i;
            }
    }
    else
        return -1;
    return 0;
}
// smart computer brain
int sComputer(char matrix[])
{
    int tempMatrix[9];
    for (int i = 0; i < 9; i++)
    {
        if (matrix[i] == 'X')
            tempMatrix[i] = 1;
        else if (matrix[i] == 'O')
            tempMatrix[i] = 0;
        else
            tempMatrix[i] = 2;
    }
    int idx;
    idx = tryToWin(tempMatrix);
    if (idx >= 0)
        return idx;
    idx = tryToStop(tempMatrix);
    if (idx >= 0)
        return idx;
    for (int i = 0; i < 9; i++)
    {
        if (tempMatrix[i] == 2)
        {
            return i;
        }
    }
    return 0;
}
// when evil computer want to foul play , use it
void evilBrain(char matrix[], int *inputCount)
{
    int tempMatrix[9];
    for (int i = 0; i < 9; i++)
    {
        if (matrix[i] == 'X')
            tempMatrix[i] = 1;
        else if (matrix[i] == 'O')
            tempMatrix[i] = 0;
        else
            tempMatrix[i] = 2;
    }
    int idx = tryToStop(tempMatrix);
    if (idx >= 0)
    {
        matrix[idx] = 'X';
        *inputCount++;
    }
}
// for playing with friend
void playWithFriend()
{
    system("Color 80");
    char matrix[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // creating character of inside tic tac toe
    char x_o = 'X';                                                 // pointing where is  "X" or "O" of inside tic tac toe
    int inputCount = 0;
    // system("Color 80");                                             // counting total movement of turn , i will use it to know when match draw
    while (1)
    {
        system("cls");
        cout << "##: You are playing with Friend " << endl
             << endl;
        printMatrix(matrix);
        if (checkWin(matrix, x_o))
        {
            cout << "\n Player " << x_o << " WON " << endl
                 << endl;
            break;
        }
        else if (inputCount >= 9)
        {
            cout << "\n Match draw " << endl
                 << endl;
            break;
        }
        else
        {
            if (x_o == 'X')
            {
                x_o = 'O';
                cout << endl
                     << "Player O Turn : ";
            }
            else
            {
                x_o = 'X';
                cout << endl
                     << "Player X Turn : ";
            }
        }

        int turnInp = turnInput(matrix);
        inputCount++;
        updateMatrix(matrix, turnInp, x_o);
    }
}

// for playing with smart computer
void playWithSmartComputer()
{
    system("Color F2");
    char matrix[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // creating character of inside tic tac toe
    char x_o = 'X';                                                 // pointing where is  "X" or "O" of inside tic tac toe
    int inputCount = 0;                                             // counting total movement of turn , i will use it to know when match draw
    while (1)
    {
        system("cls");
        cout << "##: You are playing with smart Computer " << endl
             << endl;
        printMatrix(matrix);
        if (checkWin(matrix, x_o))
        {
            if (x_o == 'X')
                cout << "\n Computer WON " << endl
                     << endl;
            else
                cout << "\n Player O WON " << endl
                     << endl;
            break;
        }
        else if (inputCount >= 9)
        {
            cout << "\n Match draw " << endl
                 << endl;
            break;
        }
        else
        {
            if (x_o == 'X')
            {
                x_o = 'O';
                cout << endl
                     << "Player O Turn : ";
            }
            else
            {
                x_o = 'X';
                cout << endl
                     << "Computer Turn : ";
            }
        }
        int turnInp;
        if (x_o == 'O')
        {
            turnInp = turnInput(matrix);
            inputCount++;
            updateMatrix(matrix, turnInp, x_o);
        }
        else
        {
            timer(5);
            turnInp = sComputer(matrix) + 1;
            inputCount++;
            updateMatrix(matrix, turnInp, x_o);
        }
    }
}

// for playing with evil computer
void playWithEvilComputer()
{
    system("Color E4");
    char matrix[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // creating character of inside tic tac toe
    char x_o = 'X';                                                 // pointing where is  "X" or "O" of inside tic tac toe
    int inputCount = 0;                                             // counting total movement of turn , i will use it to know when match draw
    while (1)
    {
        system("cls");
        cout << "##: You are playing with Evil Computer " << endl
             << endl;
        printMatrix(matrix);
        if (checkWin(matrix, x_o))
        {
            if (x_o == 'X')
                cout << "\n Evil Computer WON " << endl
                     << endl;
            else
                cout << "\n Player O WON " << endl
                     << endl;
            break;
        }
        else if (inputCount >= 9)
        {
            cout << "\n Match draw " << endl
                 << endl;
            break;
        }
        else
        {
            if (x_o == 'X')
            {
                x_o = 'O';
                cout << endl
                     << "Player O Turn : ";
            }
            else
            {
                x_o = 'X';
                cout << endl
                     << "Evil Computer Turn : ";
            }
        }
        int turnInp; // store payer turn move for updating
        if (x_o == 'O')
        {
            turnInp = turnInput(matrix);
            inputCount++;
            updateMatrix(matrix, turnInp, x_o);
        }
        else
        {
            timer(5);
            turnInp = sComputer(matrix) + 1;
            inputCount++;
            updateMatrix(matrix, turnInp, x_o);
            evilBrain(matrix, &inputCount);
        }
    }
}
int main()
{
    // system("Color 87");
    while (1)
    {
        int optChoice = optionChoice(); // choosing playing mode option
        if (optChoice == 1)
        {
            playWithSmartComputer();
        }
        else if (optChoice == 2)
        {
            playWithEvilComputer();
        }
        else if (optChoice == 3)
        {
            playWithFriend();
        }
        else if (optChoice == 4)
        {
            system("Color 4C");
            cout << "You have ended the GAME ";
            return 0;
        }
    }

    return 0;
}
