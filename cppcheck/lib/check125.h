/**
* @Author: wangchi
* @Date:   2016-04-14T22:56:03+08:00
* @Last modified by:   wangchi
* @Last modified time: 2016-04-14T22:56:03+08:00
*/
#ifndef CHECK125_H
#define CHECK125_H


#include "config.h"
#include "check.h"
#include "mathlib.h"

class CPPCHECKLIB CheckR125: public Check{
private:
    static std::string myName(){
        return "CheckR125";
    }
    std::string classInfo() const{
        return "CheckR125";
    }

public:
    CheckR125():Check(myName()){};

    CheckR125(const Tokenizer *tokenizer, const Settings *settings, ErrorLogger *errorLogger): Check(myName(), tokenizer, settings, errorLogger){};

    void runChecks(const Tokenizer *, const Settings *, ErrorLogger *);

    void runSimplifiedChecks(const Tokenizer *tokenizer, const Settings *settings, ErrorLogger *errorLogger){};

    void docheckr125();

    void getErrorMessages(ErrorLogger *errorLogger, const Settings *settings) const{

    };

};

#endif // CHECK125_H
