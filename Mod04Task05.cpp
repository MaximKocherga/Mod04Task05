#include <iostream>
#include <string>

// Задача 2. Счётчик

class Counter
{
public:
    int firstNum;
    int curNum;

    void setfirstNum(int firstNum)
    {
        this->firstNum = firstNum;
    }

    void counterUp(int curValue)
    {
        this->curNum = curValue + 1;
    }

    void counterDown(int curValue)
    {
        this->curNum = curValue - 1;
    }

    void counterShow(int curValue)
    {
        std::cout << "The current number is: " << curValue << std::endl;
    }

};

int main()
{
    std::string yesNo;
    std::string userCommand;    // команда от пользователя
    int firstNum;   // первонач значение счётчика
    int curVal;     // текущее значение счётчика

    Counter val;
    val.curNum = 0;

    std::cout << "Wanna set the first number? (YES/NO): " << std::endl;
    std::cin >> yesNo;

    if (yesNo == "YES")
    {
        std::cout << "Please enter the first number: " << std::endl;
        std::cin >> firstNum;

        val.setfirstNum(firstNum);
    }
    else
    {
        
        do
        {
            std::cout << "Please enter your command ('+', '-', '=' or 'x' - for cancel): " << std::endl;
            std::cin >> userCommand;

            if (userCommand == "+")
            {
                val.counterUp(val.curNum);
            }
            else if (userCommand == "-")
            {
                val.counterDown(val.curNum);
            }
            else (userCommand == "=" );
            {
                val.counterShow(val.curNum);
            }
        }

        while (userCommand != "x");
    }
    return 0;
}