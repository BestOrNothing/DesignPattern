/**
* @Author: wangchi
* @Date:   2016-04-14T22:42:12+08:00
* @Last modified by:   wangchi
* @Last modified time: 2016-04-14T22:42:12+08:00
*/
#ifndef CHECK137_H
#define CHECK137_H


#include "config.h"
#include "check.h"
#include "mathlib.h"

class CPPCHECKLIB CheckR137: public Check{
private:
    static std::string myName(){
        return "CheckR137";
    }
    std::string classInfo() const{
        return "CheckR137";
    }

public:
    CheckR137():Check(myName()){};

    CheckR137(const Tokenizer *tokenizer, const Settings *settings, ErrorLogger *errorLogger): Check(myName(), tokenizer, settings, errorLogger){};

    void runChecks(const Tokenizer *, const Settings *, ErrorLogger *);

    void runSimplifiedChecks(const Tokenizer *tokenizer, const Settings *settings, ErrorLogger *errorLogger){};

    void docheckr137();

    void getErrorMessages(ErrorLogger *errorLogger, const Settings *settings) const{

    };

};

#endif // CHECK137_H
