//
// Created by ayttekao on 3/16/21.
//

#ifndef LIPPMAN_SALES_DATA_H
#define LIPPMAN_SALES_DATA_H

class Sales_data{
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::istream &read(std::istream&, Sales_data&);
    friend std::ostream &print(std::ostream&, const Sales_data&);
    friend int compareIsbn(const Sales_data&, const Sales_data&);
public:
    Sales_data() = default;
    Sales_data(std::string  string, unsigned n, double p) : bookNo(std::move(string)), units_sold(n), revenue(n * p) { }
    Sales_data(std::string  string) : bookNo(std::move(string)) {};
    Sales_data(std::istream &is) : Sales_data() { read(is, *this); }
    std::string isbn() const
    {
        return bookNo;
    }
    Sales_data &combine(const Sales_data&);
private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

std::istream &read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

#endif //LIPPMAN_SALES_DATA_H
