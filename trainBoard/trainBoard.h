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


using namespace std;

struct Train
{
    Train(string destinationName, int trainNumber)
    {
        _destinationName = destinationName;
        _trainNumber = trainNumber;
//        _departureTime = departureTime;
    }

    void out();
private:
    string _destinationName;
    int _trainNumber;
// time _departureTime;
};

struct Trains
{
    Trains(vector <Train> &vec);
    void out();
    void sortedOut();
private:
    vector <Train> _trains;
};

#endif // TRAINBOARD_H
