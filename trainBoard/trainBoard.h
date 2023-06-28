#ifndef TRAINBOARD_H
#define TRAINBOARD_H
// Создайте структуру с именем train, содержащую поля: название пункта назначения, номер поезда, время отправления.
// Ввести данные в массив из пяти элементов типа train, упорядочить элементы по номерам поездов.
// Добавить возможность вывода информации о поезде,
// номер которого введен пользователем. Добавить возможность сортировки массив по пункту назначения,
// причем поезда с одинаковыми пунктами назначения должны быть упорядочены по времени отправления.

#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std;

struct Train
{
    Train(string destinationName, int trainNumber, int departureHour, int departureMinute);

    void out();
    inline int getTrainNumber() const { return _trainNumber; }
    inline int getDepartureHour() const { return _departureHour; }

    inline int getDepartureMinute() const { return _departureMinute; }

private:
    string _destinationName;
    int _trainNumber;
    int _departureHour;
    int _departureMinute;
};

struct Trains
{
    Trains(vector<Train> &vec);

    void out();
    void sortTrains();
    void selectedOut();

private:
    vector <Train> _trains;
};

#endif // TRAINBOARD_H
