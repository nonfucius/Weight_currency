#include <iostream>

using namespace std;

int main(){
    double weight, FinalWeight;
    int fight;

    cout << "what you weight ?: ";
    cin >> weight;

    cout << "what planet do you want to fight on? 1	Меркурийб, 2 Венера, 3 Мар, 4 Юпитер, 5	сатурн, 6 Уран, 7 Нептун\n";
    cin >> fight;

    switch(fight){
        case 1:
        FinalWeight = weight * 0.38;
        cout << FinalWeight << "\n";
        break;
        case 2:
        FinalWeight = weight * 0.91;
        cout << FinalWeight << "\n";
        break;
        case 3:
        FinalWeight = weight * 0.38;
        cout << FinalWeight << "\n";
        break;
        case 4:
        FinalWeight = weight * 2.34;
        cout << FinalWeight << "\n";
        break;
        case 5:
        FinalWeight = weight * 1.06;
        cout << FinalWeight << "\n";
        break;
        case 6:
        FinalWeight = weight * 0.92;
        cout << FinalWeight << "\n";
        break;
        case 7:
        FinalWeight = weight * 1.19;
        cout << FinalWeight << "\n";
        break;
        default:
        cout << "You not make choice, pls do that)";
    }
}