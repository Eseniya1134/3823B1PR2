
#include <iostream>
using namespace std;

class Animals {
protected:
    string species; // разновидность
    string place;   // место

public:
    Animals(string _species = "", string _place = "") : species(_species), place(_place) {}
    string return_species() {
        return species;
    }
    string return_place() {
        return place;
    }
    virtual void voice() {}  // Виртуальная функция для голоса
    virtual void print() {   // Виртуальная функция для вывода информации
        cout << "Вид животного - " << return_species() << endl;
        cout << "Место обитания - " << return_place() << endl;
    }
};

// Класс волков
class Wolf : public Animals {
protected:
    string nick;

public:
    Wolf(string _nick) : Animals("волк", "лес"), nick(_nick) {}
    void voice() override {
        cout << "Голос - <<УУУУУУУУ>>" << endl;
    }
    void print() override {

        Animals::print();  // Вызов функции печати из базового класса
        cout << "Имя - " << nick << endl;
    }
};

// Класс оленей
class Deer : public Animals {
protected:
    string nick;

public:
    Deer(string _nick) : Animals("олень", "тундра"), nick(_nick) {}
    void voice() override {
        cout << "Голос - <<фрр-фрр-фрр>>" << endl;
    }
    void print() override {
        
        Animals::print();  // Вызов функции печати из базового класса
        cout << "Имя - " << nick << endl;
    }
};


// Класс львов
class Lion: public Animals {
protected:
    string nick;

public:
    Lion(string _nick) : Animals("лев", "степи"), nick(_nick) {}
    void voice() override {
        cout << "Голос - <<Аррррррррррррррр>>" << endl;
    }
    void print() override {

        Animals::print();  // Вызов функции печати из базового класса
        cout << "Имя - " << nick << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Deer deer("Гуру");  // Создаем объект класса Deer
    deer.print();  // Вывод информации
    deer.voice();  // Вывод голоса

    cout << endl;

    Lion lion("Алакей");  // Создаем объект класса Deer
    lion.print();  // Вывод информации
    lion.voice();  // Вывод голоса

    cout << endl;

    Wolf wolf("Омегащ");  // Создаем объект класса Deer
    wolf.print();  // Вывод информации
    wolf.voice();  // Вывод голоса
    return 0;
}
