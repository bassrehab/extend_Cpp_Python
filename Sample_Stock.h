/*
 * Sample_Stock.h
 *
 *  Created on: 25-Feb-2016
 *      Author: subhadipmitra
 */

#ifndef SAMPLE_STOCK_H_
#define SAMPLE_STOCK_H_

#include <string>
class Stock {
public:
    Stock(const std::string &ticker, double price, double div);
    Stock(const Stock &p);
    ~Stock();
    Stock &operator=(const Stock &p);
    std::string ticker();
    double price();
    void setPrice(double price);
    double dividend();
    void setDividend(double div);
    double dividendYield();
private:
    std::string m_ticker;
    double m_currentPrice;
    double m_dividend;
};



#endif /* SAMPLE_STOCK_H_ */
