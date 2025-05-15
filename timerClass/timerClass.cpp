#include <ctime>
#include <cstdio>

struct timerClass {

    timerClass ( ) {

        timestamp = std::time(nullptr);
    }


private: 
    time_t timestamp;
public:
    void displayTimestamp() {

        printf("This is the timestamp: %s\n", ctime(&timestamp));

    }
};

int main () {

    timerClass tm;
    tm.displayTimestamp();
    return 0;
}
