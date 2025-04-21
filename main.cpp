#include <iostream>
#include <string>
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
    string name, vocalRange, danceStyle;
    int age;
    char performerType;

    cout << "Enter the name of the performer: ";
    getline(cin, name);
    cout << "Enter the age of the performer: ";
    cin >> age;
    cin.ignore(); // To clear the input buffer

    cout << "Is the performer a singer or dancer (s/d)? ";
    cin >> performerType;
    cin.ignore(); // To clear the input buffer

    if (performerType == 's' || performerType == 'S') {
        cout << "Enter the vocal range of the singer: ";
        getline(cin, vocalRange);
        Singer singer(name, age, vocalRange);
        cout << "\nSinger Name: " << singer.getName() << endl;
        cout << "Singer Age: " << singer.getAge() << endl;
        cout << "Vocal Range: " << singer.getVocalRange() << endl;
        singer.sing();
    } else if (performerType == 'd' || performerType == 'D') {
        cout << "Enter the dance style of the dancer: ";
        getline(cin, danceStyle);
        Dancer dancer(name, age, danceStyle);
        cout << "\nDancer Name: " << dancer.getName() << endl;
        cout << "Dancer Age: " << dancer.getAge() << endl;
        cout << "Dance Style: " << dancer.getDanceStyle() << endl;
        dancer.dance();
    } else {
        cout << "Invalid choice! Please enter 's' for singer or 'd' for dancer." << endl;
    }

    return 0;
}
