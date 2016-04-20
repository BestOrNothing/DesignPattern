/**
* @Author: wangchi
* @Date:   2016-04-14T22:56:03+08:00
* @Last modified by:   wangchi
* @Last modified time: 2016-04-14T22:56:03+08:00
*/
#include "check125.h"

namespace {
    CheckR125 checker_r125;
}

void CheckR125::runChecks(const Tokenizer *tokenizer, const Settings *settings, ErrorLogger *errorLogger){
    CheckR125 checker_r125(tokenizer, settings, errorLogger);
    checker_r125.docheckr125();
}

void CheckR125::docheckr125(){
    for(const Token *tok = _tokenizer->tokens(); tok; tok = tok->next()){
        if(Token::Match(tok, "%comp% %name%|%num%|%str% %op%")){
            reportError(tok, Severity::warning, "checkr125", "The operation items in a logical discrimination expression must use parentheses.");
        }
        if(Token::Match(tok, "%op% %name%|%num%|%str% %comp%")){
            reportError(tok, Severity::warning, "checkr125", "The operation items in a logical discrimination expression must use parentheses.");
        }
    }
}
