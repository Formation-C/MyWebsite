#pragma once
#ifndef USER_H
#define USER_H

//#include "Event.h"
#include <iostream>

using namespace std;

class User
{
    public:
        User();
        virtual ~User();

        string Getemail() { return email; }
        string Getname() { return name; }

//        virtual void subscribeEvent(Event _event) = 0;
//        virtual void hasEvent(Event _event) = 0;
//        virtual void unsubscribeEvent(Event _event) = 0;
//        virtual Event* getEvent() = 0;

        string email;
        string name;

    protected:

    private:
};

#endif // USER_H
