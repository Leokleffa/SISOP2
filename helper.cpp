#include "helper.hpp"

#define NAME_MIN 4
#define NAME_MAX 20

using namespace std;

bool check_name(string name){

    if (name.length() < NAME_MIN || name.length() > NAME_MAX) {
        return false;
    }

    return true;
};

string get_timestamp(){

    auto currentTime = chrono::system_clock::now();
    auto seconds = chrono::duration_cast<chrono::seconds>(currentTime.time_since_epoch()).count();

    return to_string(seconds);
}