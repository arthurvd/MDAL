/*
 MDAL - Mesh Data Abstraction Library (MIT License)
 Copyright (C) 2020 Lutra Consulting Limited
*/

#ifndef MDAL_SQLITE3_HPP
#define MDAL_SQLITE3_HPP

#include <string>
/** A simple C++ wrapper around SQLITE3 library API */

#include <sqlite3.h>

#include "mdal_logger.hpp"

class Sqlite3Db
{
  public:
    Sqlite3Db();
    ~Sqlite3Db();

    bool open( const std::string &fileName );
    void close();

    sqlite3 *get()
    {
      return mDb;
    }

  private:
    sqlite3 *mDb = nullptr;
};




#endif // MDAL_SQLITE3_HPP