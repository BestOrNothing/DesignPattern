/**
* @Author: wangchi
* @Date:   2016-04-14T22:42:12+08:00
* @Last modified by:   wangchi
* @Last modified time: 2016-04-14T22:42:12+08:00
*/
#include "check137.h"

namespace {
    CheckR137 checker_r137;
}

void CheckR137::runChecks(const Tokenizer *tokenizer, const Settings *settings, ErrorLogger *errorLogger){
    CheckR137 checker_r137(tokenizer, settings, errorLogger);
    checker_r137.docheckr137();
}

void CheckR137::docheckr137(){
    for(const Token *tok = _tokenizer->tokens(); tok; tok = tok->next()){
        if(Token::Match(tok, "%type% %any% %name% ;")){
            if(tok->tokAt(1)->str()=="*")
                continue;
            tok = tok->tokAt(2);
            std::string name = tok->str();
            tok = tok->tokAt(2);
            if(Token::Match(tok, "%name% = ( %type * ) malloc")){
                if(name==tok->str())
                    continue;
            }
            reportError(tok, Severity::warning, "checkr137", "Suggest Dynamically allocated pointer which not be assigned space when definition should be NULL.");
        }
    }
}

