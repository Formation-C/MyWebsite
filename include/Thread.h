#ifndef THREAD_H
#define THREAD_H

#include <iostream>
#include <vector>


class Thread
{
    public:
        Thread(std::string title);
        virtual ~Thread();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        std::string Gettitle() { return title; }
        void Settitle(std::string val) { title = val; }
        bool Getlocked() { return locked; }
        void Setlocked(bool val) { locked = val; }

        static std::vector<Thread*> objects;

    protected:

    private:
        int id;
        std::string title;
        bool locked;
};

#endif // THREAD_H
