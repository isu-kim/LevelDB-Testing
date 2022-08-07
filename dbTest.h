#include <iostream>
#include <cassert>
#include <leveldb/db.h>
#include <string>

#define DB_DIR "./tmp"

using std::cout;
using std::endl;
using std::string;


/**
 * @brief A class that uses leveldb's basic features such as PUT, DELETE (all put related).
 * 
 */
class dbTest {
    private:
        leveldb::DB* db;
        void openDB();
    public:
        dbTest();
        ~dbTest();
        void putValue(string, string);
        void deleteValue(string);
};

