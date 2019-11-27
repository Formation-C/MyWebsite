#ifndef POST_H
#define POST_H

#include <iostream>
#include <vector>
#include "Thread.h"


class Post
{
    public:
        Post(Thread* _thread, std::string _content);
        virtual ~Post();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        std::string GetauthorName() { return authorName; }
        void SetauthorName(std::string val) { authorName = val; }
        std::string Getcontent() { return content; }
        void Setcontent(std::string val) { content = val; }
        double Getdate() { return date; }
        void Setdate(double val) { date = val; }
        Thread* Getthread() { return thread; }
        void Setthread(Thread* val) { thread = val; }

        static std::vector<Thread*> Getthreads();

        static std::vector<Post*> objects;

    protected:

    private:
        int id;
        std::string authorName;
        std::string content;
        double date;
        Thread* thread;
};

#endif // POST_H
