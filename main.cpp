#include <iostream>
using namespace std;

class Performer {
private:
    string name;
    int age;
public:
    Performer(string name, int age) : name(name), age(age) {}

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

class Singer : public Performer {
private:
    string vocalRange;
public:
    Singer(string name, int age, string vocalRange) : Performer(name, age), vocalRange(vocalRange) {}

    string getVocalRange() {
        return vocalRange;
    }

    void sing() {
        cout << getName() << " is singing with a " << vocalRange << " range." << endl;
    }
};

class Dancer : public Performer {
private:
    string danceStyle;
public:
    Dancer(string name, int age, string danceStyle) : Performer(name, age), danceStyle(danceStyle) {}

    string getDanceStyle() {
        return danceStyle;
    }

    void dance() {
        cout << getName() << " is performing " << danceStyle << " dance." << endl;
    }
};

int main() {
    Singer singer("Isiah", 20, "soprano");
    cout << "Singer Name: " << singer.getName() << endl;
    cout << "Singer Age: " << singer.getAge() << endl;
    cout << "Vocal Range: " << singer.getVocalRange() << endl;
    singer.sing();

    cout << endl;

    Dancer dancer("Marisol", 40, "Zumba");
    cout << "Dancer Name: " << dancer.getName() << endl;
    cout << "Dancer Age: " << dancer.getAge() << endl;
    cout << "Dance Style: " << dancer.getDanceStyle() << endl;
    dancer.dance();

    return 0;
}