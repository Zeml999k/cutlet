#include <iostream>//you can put K meatballs in a frying pan.
//the cutlet needs to be fried on each side for M minutes
//in what MIN time can N cutlets be fried on both sides

int fire(int cutlet, int firstTime, int pan, int ALLTime)
{
    firstTime *= 2;
    for(int i = 0; i < pan; i++)
    {
        for(int j = 0; j < 1; j++)
        {
        ALLTime += firstTime * pan;
        cutlet -= pan;
        if(cutlet < pan)
        {
            ALLTime += firstTime * cutlet;
            return ALLTime;
        }
        
        }
    }
    return ALLTime;
}

int main()
{
int cutlet = 0, firstTime = 0, pan = 0, ALLtime = 0;
std::cout << "введите количество котлет: " << std::endl;
std::cin >> cutlet;
std::cout << "сколько котлет помещается на сковороде? " << std::endl;
std::cin >> pan;
std::cout << "какое количество времени нужно обжаривать котлету с одной стороны?(в минутах)" << std::endl;
std::cin >> firstTime;
int Time = fire(cutlet, firstTime, pan, ALLtime);
std::cout << "мин время жарки котлет: " << Time << " минут" << std::endl;
return 0;
}

