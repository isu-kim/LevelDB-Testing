#include "dbTest.h"
#define STRLENGTH 100
#define ITERCOUNT 100

/**
 * @brief A function that generates random string.
 * 
 * @param len 
 * @return std::string 
 */
std::string gen_random(const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    
    return tmp_s;
}

/**
 * @brief A main function for this test code.
 * 
 * @return int Will return 0.
 */
int main (void) {
    dbTest* db = new dbTest();

    //db->putValue("A", "Hello world!");
    //db->putValue("B", "Good bye world!");
    //db->putValue("C", "I am hungry");

    for (int i = 0 ; i < ITERCOUNT ; i++) {
        std::string curIndex = std::to_string(i);
        std::string randomString = gen_random(STRLENGTH);

        db->putValue(curIndex, randomString);
    }

    delete(db);
    return 0;
}