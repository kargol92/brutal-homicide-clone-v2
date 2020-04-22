#ifndef PLAYER_H
#define PLAYER_H
#include <allegro.h>

enum Direction
{
    up = 1,
    up_right = 2,
    right = 3,
    right_down = 4,
    down = 5,
    down_left = 6,
    left = 7,
    left_up = 8
};

enum Edge
{
    up_edge = 1,
    right_edge = 3,
    down_edge = 5,
    left_edge = 7
};

class Player
{
    public:
        const int width = 14; //20
        const int height = 18; //18

        char direction;
        char edge;

        BITMAP *bitmap;
        int map_x;
        int map_y;
        int map_X;
        int map_Y;
        int map_x1;
        int map_y1;
        int map_X1;
        int map_Y1;
        int screen_x;
        int screen_y;
        int scroll_x;
        int scroll_y;

        bool collision;

        int ammo;
        int grenades;
        int energy;
        int lives;
        int money;
        int weapon;

        Player();
        Player(int x, int y);
        void load_bitmap();
        void draw(BITMAP* &buffer, int frame);
        void delete_bitmap();

        void check_key();
        void update();

    private:
        bool move;
        int run_speed;

        char edge_collision;

        void go_up();
        void go_down();
        void go_left();
        void go_right();
};

#endif
