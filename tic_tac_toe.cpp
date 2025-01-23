// Tic Tac Toe Game
#include <iostream>
#include <ctime>
using namespace std;

void drawBoard(char* spaces);
void playerMove(char* spaces, char player);
void compMove(char* spaces, char computer);
bool check_Winner(char* spaces, char player, char computer);
bool check_Tie(char* spaces, char player, char computer);


int main(){

    char spaces[9] = { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' };
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);
        compMove(spaces, computer);
        drawBoard(spaces);

    }

    return 0;
}

void drawBoard(char* spaces){
    cout << endl;
    cout << "     |     |     " <<  endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" <<  endl;
    cout << "     |     |     " <<  endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" <<  endl;
    cout << "     |     |     " <<  endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    cout << "     |     |     " <<  endl;
    cout << endl;
}

void playerMove(char* spaces, char player){
    int number; 
    do{
        cout << "Enter the spot to Place Marker (1-9)";
        cin  >> number;
        number--;

        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
        else{
            cout << "Invalid Spot" << endl;           
        }

    }while(!(number > 0 )|| !(number < 8));
}

void compMove(char* spaces, char computer){
    srand(time(0));

    int randomValue = rand()%9 + 1;
    
    do{
        randomValue = rand()%9 + 1;

        if( spaces[randomValue] == ' '){
            spaces[randomValue] = computer;
            break;
        }
        else{
            continue;
        }

    }while(!(randomValue > 0 )|| !(randomValue < 8));
}

bool check_Winner(char* spaces, char* player, char* computer){
    return 0;
}

bool check_Tie(char* spaces, char* player, char* computer){
    return 0;
}

