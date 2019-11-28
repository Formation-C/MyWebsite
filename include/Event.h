#pragma once
#ifndef EVENT_H
#define EVENT_H

#include <User.h>
#include <iostream>
using namespace std;

class Event
{
    public:
        Event();
        virtual ~Event();

        void getUsers();
        void hasUser(User _user);
        void addUser(User _user);
        void removeUser(User _user);

        string Getname() { return name; }
        void Setname(string val) { name = val; }
        string Getdescription() { return description; }
        void Setdescription(string val) { description = val; }
        string Getdate() { return date; }
        void Setdate(string val) { date = val; }

        string name;
        string description;
        string date;

    protected:

    private:
};

#endif // EVENT_H
