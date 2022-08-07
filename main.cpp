#include "dbTest.h"

/**
 * @brief A main function for this test code.
 * 
 * @return int Will return 0.
 */
int main (void) {
    dbTest* db = new dbTest();

    db->putValue("A", "Hello world!");
    db->putValue("B", "Good bye world!");
    db->putValue("C", "I am hungry");

    delete(db);
    return 0;
}