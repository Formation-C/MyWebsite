#ifndef DATA_H
#define DATA_H

#include <vector>
#include "Post.h"
#include "Thread.h"


class Data
{
    public:
        Data();
        virtual ~Data();

        std::vector<Post*> Getposts() { return posts; }
        void Setposts(std::vector<Post*> val) { posts = val; }
        std::vector<Thread*> Getthreads() { return threads; }
        void Setthreads(std::vector<Thread*> val) { threads = val; }

    protected:

    private:
        std::vector<Post*> posts;
        std::vector<Thread*> threads;
};

#endif // DATA_H
