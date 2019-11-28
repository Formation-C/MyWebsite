#ifndef THREAD_H
#define THREAD_H

// Forward declarations
class Post;

#include <iostream>
#include <vector>
#include "CategoryForum.h"

using namespace Forum;

class Thread
{
    public:
        Thread(Category* _category, std::string title);
        virtual ~Thread();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        std::string Gettitle() { return title; }
        void Settitle(std::string val) { title = val; }
        bool Getlocked() { return locked; }
        void Setlocked(bool val) { locked = val; }
        Category* Getcategory() { return category; }

        static std::vector<Thread*> objects;

        std::vector<Post*> Getposts();

    protected:

    private:
        int id;
        std::string title;
        bool locked;
        Category* category;
};

#include "Post.h"
#include "Templates.h"


#endif // THREAD_H
