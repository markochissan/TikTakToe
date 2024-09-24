#include <iostream>
using namespace std;

char square[10] = { '0','1','2','3','4','5','6','7','8','9' };

// function to check game status
int statuswin() {
    if (square[1] == square[2] && square[2] == square[3]) {
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6]) {
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9]) {
        return 1;
    }
    else if (square[1] == square[4] && square[4] == square[7]) {
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8]) {
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9]) {
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9]) {
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7]) {
        return 1;
    }
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' &&
        square[7] != '7' && square[8] != '8' && square[9] != '9') {
        return 0;
    }
    else {
        return -1;
    }
}

// board canvas
void board() {
    system("cls");
    cout << "\n Welcome to TicTacToe \n";
    cout << "Player 1 (X) - Player 2 (O)" << endl;
    cout << endl;

    cout << "        |       |       " << endl;
    cout << "    " << square[1] << "   |   " << square[2] << "   |   " << square[3] << endl;

    cout << "________|_______|_______ " << endl;
    cout << "        |       |       " << endl;

    cout << "    " << square[4] << "   |   " << square[5] << "   |   " << square[6] << endl;
    cout << "________|_______|_______ " << endl;
    cout << "        |       |       " << endl;

    cout << "    " << square[7] << "   |   " << square[8] << "   |   " << square[9] << endl;
    cout << "        |       |       " << endl << endl;
}
//main function
int main() {
    int player = 1, i, choice;
    char score;
    do {
        board();
        player = (player % 2) ? 1 : 2;
        cout << " Player " << player << ", enter a number: ";
        cin >> choice;

        score = (player == 1) ? 'X' : 'O'; 

        if (choice == 1 && square[1] == '1') {
            square[1] = score;
        }
        else if (choice == 2 && square[2] == '2') {
            square[2] = score;
        }
        else if (choice == 3 && square[3] == '3') {
            square[3] = score;
        }
        else if (choice == 4 && square[4] == '4') {
            square[4] = score;
        }
        else if (choice == 5 && square[5] == '5') {
            square[5] = score;
        }
        else if (choice == 6 && square[6] == '6') {
            square[6] = score;
        }
        else if (choice == 7 && square[7] == '7') {
            square[7] = score;
        }
        else if (choice == 8 && square[8] == '8') {
            square[8] = score;
        }
        else if (choice == 9 && square[9] == '9') {
            square[9] = score;
        }
        else {
            cout << " Invalid move!";
            player--;
            cin.ignore();
            cin.get();
        }
        i = statuswin(); // function to check the status of the game
        player++;
    } while (i == -1);
    board();
    if (i == 1) {
        cout << " \aCONGRATZ! Player " << --player << " WINS!";
    }
    else {
        cout << "\a GAME DRAW!";
    }
    cin.ignore();
    cin.get();
    return 0;
}
