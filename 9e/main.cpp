#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float chaynaya_stolovaya, chaynaya_kryzhka, stolovaya_kryzhka, stolovaya_chaynaya, kryzhka_stolovaya, kryzhka_chaynaya;
    double chaynaya  = 5;
    double stolovaya = 18;
    double kryzhka   = 250;
    string direction;
    int value;
    double res;

    chaynaya_stolovaya = chaynaya / stolovaya;
    chaynaya_kryzhka = chaynaya / kryzhka;
    stolovaya_kryzhka = stolovaya / kryzhka;
    stolovaya_chaynaya = stolovaya / chaynaya;
    kryzhka_stolovaya = kryzhka / stolovaya;
    kryzhka_chaynaya = kryzhka / chaynaya;

    std::cout << "Select direction \n chaynaya \n stolovaya \n kryzhka \n";
    std::cin >> direction;
    std::cout << "How much ?"<<std::endl;
    std::cin >> value;

    if (direction == "chaynaya_stolovaya" )
    {
        res= value*chaynaya_stolovaya;
    }
    if (direction == "chaynaya_kryzhka")
    {
        res = value*chaynaya_kryzhka;
    }
    if (direction == "stolovaya_kryzhka")
    {
        res = value*stolovaya_kryzhka;
    }
    if (direction == "stolovaya_chaynaya")
    {
        res = value*stolovaya_chaynaya;
    }
    if (direction == "kryzhka_stolovaya")
    {
        res = value*kryzhka_stolovaya;
    }
    if (direction == "kryzhka_chaynaya")
    {
        res = value*kryzhka_chaynaya;
    }
    std::cout<<res<<std::endl;

    return 0;
}

