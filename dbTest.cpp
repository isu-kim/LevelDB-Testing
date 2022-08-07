#include "dbTest.h"



/**
 * @brief A function that opens DB file.
 * 
 * @param db pointer to leveldb::DB* for opening db and saving opened db as.
 */
void dbTest::openDB() {
    leveldb::Options options;
    options.create_if_missing = true;
    leveldb::Status s = leveldb::DB::Open(options, "./tmp", &db);

    if (s.ok()) {
        cout << "[+] Successfully opened db" << endl;
    } else {
        cout << "[+] Could not open db : " << s.ToString() << endl;
        assert(s.ok());
    }
}

/**
 * @brief A simple member function for class dbTest that puts key and value pair.
 * 
 * @param key The key in std::string.
 * @param value The value in std::string.
 */
void dbTest::putValue(string key, string value) {
    leveldb::Status s;
    cout << "[+] Putting {" << key << " : " << value << "} to DB..." << endl;
    s = db->Put(leveldb::WriteOptions(), key, value);
    if (s.ok()) {
        cout << "[+] Successfully put {" << key << " : " << value << "} to DB." << endl;
    } else {
        cout << "[-] Failed putting {" << key << " : " << value << "} to DB : " << s.ok() << endl;
    }
}

/**
 * @brief A simple member function for class dbTest that deletes key from db.
 * 
 * @param key The key in std::string.
 */
void dbTest::deleteValue(string key) {
    leveldb::Status s;
    cout << "[+] Deleting " << key << " from db..." << endl;
    s = db->Delete(leveldb::WriteOptions(), key);
    if (s.ok()) {
        cout << "[+] Successfully deleted " << key << " from db." << endl;
    } else {
        cout << "[-] Failed deleting " << key << " from db : " << s.ok() << endl;
    }
}

/**
 * @brief Construct a new db Test::db Test object.
 * 
 */
dbTest::dbTest() {
    this->openDB();
}

/**
 * @brief Destroy the db Test::db Test object.
 * 
 */
dbTest::~dbTest() {
    delete this->db;
}

