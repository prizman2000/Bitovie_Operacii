#include <stdio.h>
#include <iostream>
#include "lib.h"

using namespace std;

int result1, result2, result3, result4, value;

int first(int stepen){

    int a;
    a = 1;
    a = a << stepen;
    return a;
}

void second(){

    for(int i=sizeof(result2)*8-1; i>=0; --i){

        printf("%d", (result2 >> i)&1);
    }
}

int third(int value){
    int j;
    for(int i=sizeof(value)*8-1; i>=0; --i){

        if ((value >> i&1)==1){

            j++;
        }
    }
    return  j;

}

int fourth(int value){

    int ones=0, zeros=0;
    for(int i=0; i<=sizeof(value)*8-1; i++){

        if ((value >> i&1)==1){

            ones=ones+zeros+1;
            zeros=0;

        }else{

            zeros++;
        }
    }
    return  ones;

}

void fifth(){

    int n,i;

    cout<<"5.Первое число ждет ваших приказаний:\n";
    cin>>n;
    cout<<"Второе число ждет ваших приказаний:\n";
    cin>>i;
    cout<<"Заклинание прочнето успешно:\n"<<(n|(1<<i))<<endl;

}

void sixth(){

    int n,i;

    cout<<"6.Первое число ждет ваших приказаний:\n";
    cin>>n;
    cout<<"Второе число ждет ваших приказаний:\n";
    cin>>i;
    cout<<"Заклинание прочнето успешно:\n"<<(n&(65535 ^(1<<i)))<<endl;

}

void seventh() {

    int n, i;

    cout << "7.Первое число ждет ваших приказаний:\n";
    cin >> n;
    cout << "Второе число ждет ваших приказаний:\n";
    cin >> i;
    cout << "Заклинание прочнето успешно:\n" << (n ^ (1 << i)) << endl;

}

void eighth(){

    int length=16, n;

    cout << "8.Число ждет ваших приказаний:\n";
    cin>>n;
    if ((n & (1 << (length - 1))) >> (length - 1) == 1){

        cout<<"Заклинание прочнето успешно\n:"<<(((n << 1) | 1) ^ (1 << length))<<endl;

    }else{

        cout << "Заклинание прочнето успешно:\n" << (n << 1) << endl;
    }

}

void ninth(){

    int count = 0, n;

    cout << "9.Число ждет ваших приказаний:\n";
    cin >> n;

    for (int i=0; i<=sizeof(value)*8-1; i++) {

        if ((n & (3 << i)) >> i == 3) {

            count++;
        }

    }
    cout << "Заклинание прочнето успешно:" << count << endl;
}

void tenth(){

    int x, y, z;

    cout << "10.Первое число ждет ваших приказаний:\n";
    cin >> x;
    cout << "Второе число ждет ваших приказаний:\n";
    cin >> y;
    cout << "Третье число ждет ваших приказаний:\n";
    cin>> z;
    cout << "Заклинание прочнето успешно:\n" << (x ^ ((1 << y) | (1 << z)));
}

void eleventh(){

    cout << "11. Я получил власть, которая и не снилась моему отцу." << "\n";

    int n;
    int i;

    cout << "Введите число:" << "\n";
    cin >> n;
    cout << "Введите номер бита:" << "\n";
    cin >> i;
    cout << "Ответ: " << (((n >> (i + 1)) << i) | (n & ((1 << i) - 1))) << "\n";
}









