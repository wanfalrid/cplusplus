#include <iostream>
using namespace std;

void pizza();
void pizza(string topping1);
void pizza(string topping1, string topping2);
int main ()
{

    pizza("Mozarella", "Pasta");

    return 0;
}

void pizza(){
    cout << "Ini Pizza kamu!\n";
}

void pizza(string topping1)
{
    cout << "Ini Topping " << topping1 << " Pizza kamu!\n";
}
void pizza(string topping1, string topping2)
{
    cout << "Ini Topping " << topping1 << " dan " << topping2 << " Pizza kamu!\n";
}