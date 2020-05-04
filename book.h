#ifndef BOOK_H__
#define BOOK_H__

#include "item.h"

class Book : public Item{
    std::string  author;
public:
    explicit Book(std::string = "Autor nieznany");
    explicit Book(const Book & book);
    ~Book();

    //GETTERS
    std::string  getAuthor() const { return author; };

    //SETTERS
    void  setAuthor(std::string a) { author = a; };

    //METODS
    void write_data() override;
    void display_data() const override;

    //OVERLOADED OPERATORS
    Book & operator=(const Book & book);
};

#endif // BOOK_H__
