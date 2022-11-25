#include <iostream>
#include <string>
using namespace std;

//_________________________________Описание игры_____________________________________

//      Написать игру в которой имитируется
//      бросание кубиков компьютером и пользователем.
//      В игре 2 кубика и на каждом из них может выпасть от 1 до 6 очков.
//      Реализовать определение программой первого ходящего.
//      Каждый делает по четыре броска.
//      После бросков показать, нарисованные символами кубики и количество очков, выпавших на них.
//      После  пары бросков (бросок компьютера + бросок пользователя)
//      выводить на экран промежуточный результат  –
//      количество набранных очков игроком и компьютером.
//      В конце сообщить о том, кто выиграл по итогам всех бросков.

class Player
{
public:
    //конструктор
    Player()
    {
        UserScore = 0;
    }
    //метод броска кубиков
    void tossCubes()
    {
        cubeOne = 1 + rand() % 6;
        cubeSecond = 1 + rand() % 6;
        UserScore += cubeOne + cubeSecond;
        cout << "на 1 кубике игрока выпало " << cubeOne << endl;
        cout << "на 2 кубике игрока выпало " << cubeSecond << endl;
        if(cubeOne == 1)
        {
            cout << "@@@@@@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@ @@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeOne == 2)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeOne == 3)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@@@\n";
            cout << "@@@ @@@\n";
            cout << "@@@@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeOne == 4)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeOne == 5)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@ @@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else
        {
            cout << "@@@@@@@\n";
            cout << "@ @ @ @\n";
            cout << "@@@@@@@\n";
            cout << "@ @ @ @\n";
            cout << "@@@@@@@\n\n";
        }

        if(cubeSecond == 1)
        {
            cout << "@@@@@@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@ @@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeSecond == 2)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeSecond == 3)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@@@\n";
            cout << "@@@ @@@\n";
            cout << "@@@@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeSecond == 4)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeSecond == 5)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@ @@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else
        {
            cout << "@@@@@@@\n";
            cout << "@ @ @ @\n";
            cout << "@@@@@@@\n";
            cout << "@ @ @ @\n";
            cout << "@@@@@@@\n\n";
        }
    }
    //геттер для получения счёта игрока
    int getUserScore() const
    {
        return UserScore;
    }

private:
    int cubeOne;//кубик 1
    int cubeSecond;//кубик 2
    int UserScore;//счёт игрока
};

class Computer
{
public:
    //конструктор
    Computer()
    {
        cubeSecond = 0;
    }

    //метод броска кубиков
    void tossCubes()
    {
        cubeOne = 1 + rand() % 6;
        cubeSecond = 1 + rand() % 6;
        ComputerScore += cubeOne + cubeSecond;
        cout << "на 1 кубике компьютера выпало " << cubeOne << endl;
        cout << "на 2 кубике компьютера выпало " << cubeSecond << endl;
        if(cubeOne == 1)
        {
            cout << "@@@@@@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@ @@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeOne == 2)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeOne == 3)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@@@\n";
            cout << "@@@ @@@\n";
            cout << "@@@@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeOne == 4)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeOne == 5)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@ @@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeOne == 6)
        {
            cout << "@@@@@@@\n";
            cout << "@ @ @ @\n";
            cout << "@@@@@@@\n";
            cout << "@ @ @ @\n";
            cout << "@@@@@@@\n\n";
        }

        if(cubeSecond == 1)
        {
            cout << "@@@@@@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@ @@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeSecond == 2)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@@@\n";
            cout << "@@@@@@@\n";
            cout << "@@@@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeSecond == 3)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@@@\n";
            cout << "@@@ @@@\n";
            cout << "@@@@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeSecond == 4)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeSecond == 5)
        {
            cout << "@@@@@@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@ @@@\n";
            cout << "@ @@@ @\n";
            cout << "@@@@@@@\n\n";
        }
        else if(cubeSecond == 6)
        {
            cout << "@@@@@@@\n";
            cout << "@ @ @ @\n";
            cout << "@@@@@@@\n";
            cout << "@ @ @ @\n";
            cout << "@@@@@@@\n\n";
        }
    }
    //геттер для получения счёта компа
    int getComputerScore() const
    {
        return ComputerScore;
    }

private:
    int cubeOne;
    int cubeSecond;
    int ComputerScore;

};

//функция броска монетки(Реализовать определение программой первого ходящего)
int Flip()
{
    srand(time(NULL));
    int Flip = 1 + rand() %2;
    return Flip;
}

int main()
{
    setlocale(LC_ALL, "ru");
    Player Yana;
    Computer computer;

    if(Flip() == 1)
    {
        cout << "На монетке номер 1 первый ходит Игрок" << endl;
        for (int toss = 0; toss < 4; ++toss)
        {
            Yana.tossCubes();
            computer.tossCubes();
            if(toss == 1)
            {
                cout << "Счёт игрока: " << Yana.getUserScore() << endl;
                cout << "Счёт компьютера: " << computer.getComputerScore() << endl;
            }
        }
    }
    else
    {
        cout << "На монетке номер 2 первый ходит компьютер" << endl;
        for (int toss = 0; toss < 4; ++toss)
        {
            computer.tossCubes();
            Yana.tossCubes();
            if(toss == 1)
            {
                cout << "Счёт игрока: " << Yana.getUserScore() << endl;
                cout << "Счёт компьютера: " << computer.getComputerScore() << endl;
            }
        }
    }
    cout << "Счёт игрока: " << Yana.getUserScore() << endl;
    cout << "Счёт компьютера: " << computer.getComputerScore() << endl;
    if(Yana.getUserScore() > computer.getComputerScore())
    {
        cout << "Игрок победил" << endl << endl;
    }
    else if(Yana.getUserScore() < computer.getComputerScore())
    {
        cout << "Компьютер победил" << endl << endl;
    }
    else
    {
        cout << "Ничья" << endl << endl;
    }



    return 0;
}










