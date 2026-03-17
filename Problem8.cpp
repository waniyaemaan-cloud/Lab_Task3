#include <iostream>
using namespace std;

main() {
    int age, washingPrice, toyPrice;

    cin >> age;
    cin >> washingPrice;
    cin >> toyPrice;

    int toys = 0;
    int money = 0;
    int evenGift = 0;

    for(int i = 1; i <= age; i++) {
        if(i % 2 == 0) {
            evenGift += 10;       // money increases by 10 each even birthday
            money += evenGift;    // add money
            money -= 1;           // brother takes 1
        } else {
            toys++;               // gets a toy
        }
    }

    money += toys * toyPrice;     // sell toys

    if(money >= washingPrice) {
        cout << "Yes! " << money - washingPrice;
    } else {
        cout << "No! " << washingPrice - money;
    }


}