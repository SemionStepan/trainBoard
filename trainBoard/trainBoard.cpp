#include "trainBoard.h"

Train::Train(string destinationName, int trainNumber, int departureHour, int departureMinute) :

    _destinationName(destinationName),
    _trainNumber(trainNumber),
    _departureHour(departureHour),
    _departureMinute(departureMinute)
{}

void Train::out()
{
    std::cout << "[" << _destinationName << "] {" << _trainNumber << "} " << _departureHour << ':' << _departureMinute << endl;
}

Trains::Trains(vector<Train> &vec) : _trains(vec)
{}

void Trains::out()
{
    for(auto &train : _trains)
    {
        train.out();
    }
}

void Trains::sortTrains()
{
    sort(_trains.begin(), _trains.end(),
        [](Train &a, Train &b)
        {
            if(b.getTrainNumber() == a.getTrainNumber())
            {
                if(b.getDepartureMinute() > a.getDepartureMinute())
                {
                    return b.getDepartureMinute() > a.getDepartureMinute();
                }
                return b.getDepartureHour() > a.getDepartureHour();
            }
            return b.getTrainNumber() > a.getTrainNumber();
         }
         );
}

void Trains::selectedOut()
{
    std::cout << "Выберите номер поезда" << endl;
    int selected = 0;
    std::cin >> selected ;
    switch (selected) // Здесь свитч, который выбирает ввод с клавиатуры, cin
    {
        case 1:// первый поезд
        _trains[0].out();
        break;
        case 2:
        _trains[1].out();
        break;
        case 3:
        _trains[2].out();
        break;
        case 4:
        _trains[3].out();
        break;
        case 5:
        _trains[4].out();
        break;
        default:
            std::cout << "Вы выбрали неверный номер" << endl;
        break;
        }
}

void Trains::destinationSort()
{
        sort(_trains.begin(), _trains.end(),
             [](Train &a, Train &b)
             {
                 if(b.getDestinationName() == a.getDestinationName())
                 {
                     if(b.getDepartureMinute() > a.getDepartureMinute())
                     {
                         return b.getDepartureMinute() > a.getDepartureMinute();
                     }
                     return b.getDepartureHour() > a.getDepartureHour();
                 }
                 return b.getDestinationName() > a.getDestinationName();
             }
             );
}
