#include "Thread.h"
#include "Post.h"


Thread::Thread(std::string _title) : title(_title)
{
    objects.push_back(this);
}

Thread::~Thread()
{
    //dtor
}


std::vector<Post*> Thread::Getposts() {
    std::vector<Post*> result;

    std::vector<Post*>::iterator iter, iter_end;
    for (iter = Post::objects.begin(), iter_end = Post::objects.end(); iter != iter_end; ++iter) {
        Post* post = *iter;
        if (post->Getthread() == this) {
            result.push_back(post);
        }
    }
    return result;
}

bool Thread::Haspost(Post* _post){

    bool result = false;

#if 0
    auto Threadpost = this->Getposts();

    std::vector<Post*>::iterator iter, iter_end;

    for (iter = Threadpost.begin(), iter_end = Threadpost.end(); iter != iter_end; ++iter) {

        if (*iter == _post) {
            result = true;
        }
    }

    //other method
#else
        if (_post->Getthread() == this)
            result = true;
#endif

    return result;
}

std::vector<Thread*> Thread::objects;
