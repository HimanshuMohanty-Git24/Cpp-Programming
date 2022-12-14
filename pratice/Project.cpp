// Sriram Nilakantha Padhy...2128098
// Sumit Kumar Samal...2128102
#include <iostream>
using namespace std;
static const int res = 15;
char show[res][res];

class Shape
{
protected:
    int x = (res / 2) + 1, y = x;

public:
    virtual int move() = 0;
    void instruction()
    {
        cout << "Enter e->return w->UP s-> DOWN a->LEFT d->RIGHT" << endl;
    }
    void screen()
    {
        for (int i = 0; i < res; i = i + 1)
        {
            for (int j = 0; j < res; j = j + 1)
            {
                if (i == x && j == y)
                    show[x][y] = '*';
                else
                    show[i][j] = ' ';
            }
        }
    }
    void display()
    {
        for (int i = 0; i < res; i = i + 1)
        {
            for (int j = 0; j < res; j = j + 1)
            {
                cout << show[i][j] << " ";
            }
            cout << "\n";
        }
    }
};
class ComplexShape : public Shape
{
    int cx = x, cy = y;

public:
    void create_crown()
    {
        for (int i = 0; i < 4; i = i + 1)
        {
            for (int j = 0; j <= i; j = j + 1)
            {
                show[cx + i][cy + j] = '*';
            }
            for (int k = 0; k <= i; k = k + 1)
            {
                show[cx + i][cy + 6 - k] = '*';
            }
        }
    }
    int move()
    {
        char check;
        while (check != 'e')
        {
            screen();
            create_crown();
            display();
            instruction();
            cin >> check;
            cout << endl;
            switch (check)
            {
            case 'w':
                cx -= 1;
                break;
            case 's':
                cx += 1;
                break;
            case 'a':
                cy -= 1;
                break;
            case 'd':
                cy += 1;
                break;
            case 'e':
                cout << "end";
                break;
            default:
                cout << "Invalid key";
                break;
            }
        }
    }
};
class SimpleShape : public Shape
{
protected:
    int rx = x, ry = y, tx = x, ty = y;

public:
    int move() {}
};
class Box : public SimpleShape
{
public:
    void create_rectangle()
    {
        for (int i = 0; i < 4; i = i + 1)
        {
            for (int j = 0; j < 4; j = j + 1)
            {
                show[rx + i][ry + j] = '*';
            }
        }
    }
    int move()
    {
        char check;
        while (check != 'e')
        {
            screen();
            create_rectangle();
            display();
            instruction();
            cin >> check;
            cout << endl;
            switch (check)
            {
            case 'w':
                rx -= 1;
                break;
            case 's':
                rx += 1;
                break;
            case 'a':
                ry -= 1;
                break;
            case 'd':
                ry += 1;
                break;
            case 'e':
                cout << "end";
                break;
            default:
                cout << "Invalid key";
                break;
            }
        }
    }
};
class Tent : public SimpleShape
{
public:
    void create_triangle()
    {
        for (int i = 0; i < 4; i = i + 1)
        {
            for (int j = 0; j <= i; j = j + 1)
            {
                show[tx + i][ty + j] = '*';
            }
        }
    }
    int move()
    {
        char check;
        while (check != 'e')
        {
            screen();
            create_triangle();
            display();
            instruction();
            cin >> check;
            cout << endl;
            switch (check)
            {
            case 'w':
                tx -= 1;
                break;
            case 's':
                tx += 1;
                break;
            case 'a':
                ty -= 1;
                break;
            case 'd':
                ty += 1;
                break;
            case 'e':
                cout << "end";
                break;
            default:
                cout << "Invalid key";
                break;
            }
        }
    }
};
int main()
{
    ComplexShape s;
    Box b;
    Tent t;

    char input;
    while (input != 'e')
    {
        cout << "Enter" << endl
             << "r to Create Box" << endl
             << "t to Create Tent" << endl
             << "c to Create Trown" << endl
             << "e to Exit" << endl;
        cin >> input;
        switch (input)
        {
        case 'r':
            b.move();
            break;
        case 't':
            t.move();
            break;
        case 'c':
            s.move();
            break;
            ;
        case 'e':
            cout << "OVER";
            break;
        default:
            cout << "invalid input";
            break;
        }
    }
}