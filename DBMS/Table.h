//
// Created by hulia on 7.1.2021 г..
//

#ifndef DBMS_TABLE_H
#define DBMS_TABLE_H

#include "Column.h"
#include "IntColumn.h"
#include "DoubleColumn.h"
#include "BoolColumn.h"
#include "StringColumn.h"


class Table {
private:
    std::string name;
    std::vector<Column*>table;

public:
    Table();
    Table (const std::string& nameVal);
    ~Table();


    //adds an empty column

    void addColumn(const std::string& colName, int type);
    //here the added column must be allocated dynamically on heap;
    void addColumn(Column *c);
    void printName();
    void setName(const std::string& nameVal);
    void printTable();
    void printColumn(int number);
    void addRow();
    std::string& getName();

};


#endif //DBMS_TABLE_H