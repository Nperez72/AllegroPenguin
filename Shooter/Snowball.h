#include<allegro5/allegro.h>
#include <cstdlib>



class Snowball {
public:
    Snowball(float screenWidth);

    void update();
    void draw(ALLEGRO_BITMAP* snowballSprite);
    bool isOffScreen(float screenHeight);
    void collide(float targetX, float targetY, float targetWidth, float targetHeight);
    int getY() { return y; }
	int getX() { return x; }
	float getSpeed() { return speed; }
    bool isActive() { return active; }
    void setActive(bool state) { active = state; }

private:
    int x, y;
    float speed;
    bool active;
};



