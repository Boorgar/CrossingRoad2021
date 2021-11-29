#include "CrossingRoad.h"

void GotoXY(int x, int y);

Player::Player()
{
    xPos = 0;
    yPos = 0;
    length = 3;
    width = 1;
}

Player::Player(int xPos, int yPos, int length, int width)
{
    this->xPos = xPos;
    this->yPos = yPos;
    this->length = length;
    this->width = width;
}

void Player::draw()
{
    GotoXY(xPos, yPos);
    cout << "0";
}

void Player::takeKBinput()
{
    if(kbhit())
    {
        char input = getch();
        if(input == 'a')
        {
            GotoXY(xPos, yPos);
            cout << " ";
            xPos -= 1;
        }
        else if(input == 'd')
        {
            GotoXY(xPos, yPos);
            cout << " ";
            xPos += 1;
        }
        else if(input == 'w')
        {
            GotoXY(xPos, yPos);
            cout << " ";
            yPos -= 1;
        }
        else if(input == 's')
        {
            GotoXY(xPos, yPos);
            cout << " ";
            yPos += 1;
        }
    }
}

void Player::setPosition(int xPos, int yPos)
{
    this->xPos = xPos;
    this->yPos = yPos;
}

int Player::getXPos()
{
    return xPos;
}

int Player::getYPos()
{
    return yPos;
}

int Player::getLength()
{
    return length;
}

int Player::getWidth()
{
    return width;
}
