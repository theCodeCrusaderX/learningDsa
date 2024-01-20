#include<iostream>
using namespace std;

class Fruit {
    public:     //by defult it is set to privet if we wana access to main function we have to make it public
        string name;
        string color;
};

int main()
{
    Fruit apple; //object
    apple.name = "Apple";
    apple.color = "Red";
    cout << apple.name << " " << apple.color << endl;

    //another way of declering object
    Fruit *mango = new Fruit();
    mango->name = "mango";
    mango->color = "Yellow";
    cout << mango->name << " " << mango->color << endl;

    return 0;
}