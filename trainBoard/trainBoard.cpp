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
/*    switch () Здесь свитч, который выбирает ввод с клавиатуры, cin
    {
        case 1: первый поезд
            _trains. первыйПоезд.Вывод
            break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
        default:
            std::cout << "Вы выбрали неверный номер" << endl;
            break;
}
*/    }
