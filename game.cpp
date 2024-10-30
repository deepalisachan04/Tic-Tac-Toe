#include<iostream>
using namespace std;
int main(){
    int space[3][3] = {{00, 01, 02}, {10, 11, 12}, {20, 21, 22}};

    string n1;
    string n2;
    cout << "Enter the name of the player: \n";
    getline(cin, n1);
    cout << "Enter the name of the second player: \n";
    getline(cin, n2);
    cout << "is player1 so he/she will play first \n";
    cout << n1 << "is player1 so he/she will play first \n";
    cout << n2 << "is player2 so he/she will play first \n";

    cout << "     |     |    \n";
    cout << " "<< space[0][0] <<"   |  "<<space[0][1] <<"  | "<<space[0][2]  <<"   \n";
    cout << "_____|_____|____\n";
    cout << "     |     |    \n";
    cout << " "<< space[1][0] <<"   |  "<<space[1][1]<<"   | "<<space[1][2] <<"   \n";
    cout << "_____|_____|____\n";
    cout << "     |     |    \n";
    cout << " "<< space[2][0] <<"   |  "<<space[2][1]<<"   | "<<space[2][2] <<"    \n";
    cout << "     |     |    \n";


}