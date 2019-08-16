#include <chrono>
#include <thread>

#include "beeper.h"

void sleep(int duration) {
    std::this_thread::sleep_for(
        std::chrono::milliseconds(duration)
    );
}

int main()
{
    SDL_Init(SDL_INIT_AUDIO);
    Beeper::open();
    Beeper::setVolume(1.0);
    Beeper::play();

    const double c4 = 261.63;
    const double e4 = 329.63;
    const double g4 = 392.00;

    Beeper::setFrequency(c4);
    sleep(500);
    Beeper::setFrequency(e4);
    sleep(500);
    Beeper::setFrequency(g4);
    sleep(500);

    Beeper::stop();
    Beeper::close();
    SDL_Quit();
    return 0;
}
