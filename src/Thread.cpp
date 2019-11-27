#include "Thread.h"

Thread::Thread(std::string _title) : title(_title)
{
    objects.push_back(this);
}

Thread::~Thread()
{
    //dtor
}

void Getposts() {
    std::vector<Post*>::iterator iter, iter_end;
    for (iter = Post::objects.begin(), iter_end = Post::objects.end(); iter != iter_end; ++iter) {
        Post* post = *iter;
        if (post->Getthread() == Thread::objects[2]) {
            displayPost(*iter);
        }
    }
}

std::vector<Thread*> Thread::objects;