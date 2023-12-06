#include <iostream>
#include <conio.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int x = 10;
    int y = 10;

    while (true) {
        system("cls");
        gotoxy(x, y);
        std::cout << "####" << std::endl;
        gotoxy(x, y + 1);
        std::cout << "#  #" << std::endl;
        gotoxy(x, y + 2);
        std::cout << "####" << std::endl;

        if (_kbhit()) {
            char key = _getch();
            switch (key) {
                case 'w':
                    y--;
                    break;
                case 's':
                    y++;
                    break;
                case 'a':
                    x--;
                    break;
                case 'd':
                    x++;
                    break;
                case 'q':
                    return 0;
            }
        }
    }

    return 0;
}
