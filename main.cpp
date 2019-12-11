#include <iostream>
#include "lib.cpp"

using namespace std;

int main() {

    int stepen;
    cout<<"1.Опять работа:";
    cin>>stepen;
    result1=first(stepen);
    cout<<"Сделано господин:"<<result1<<endl;

    cout<<"2.Вам меня не жалко:";
    cin>>result2;
    cout<<"Ну вот, меня убьют:";
    second();
    cout<<endl;

    cout<<"3.Мое сердце жаждит битвы:";
    cin>>value;
    result3=third(value);
    cout<<"Да свершится правосудие:"<<result3<<endl;

    cout<<"4.Поздно просить пощады:";
    cin>>value;
    result4=fourth(value);
    cout<<"Мое сердце жаждит битвы:"<<result4<<endl;

    fifth();

    sixth();

    seventh();

    eighth();

    ninth();

    tenth();

    eleventh();

    return 0;
}