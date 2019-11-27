#include <iostream>
#include <vector>
#include <algorithm>

#include "Thread.h"
#include "Post.h"


using namespace std;

void displayThread(Thread* thread) {
    cout << "Thread titled '" << thread->Gettitle() << "'" << endl;
}

void displayPost(Post* post) {
    cout << "Post content '" << post->Getcontent() << "' in thread titled '" << post->Getthread()->Gettitle() << "'" << endl;
}

int main()
{
    new Thread("Le C++ est-il bon pour la santé?");
    new Thread("Regardes ces images de développeurs (la 5ème va vous étonner)!");
    new Thread("Je suis venu, j'ai vu, j'ai codu");

    new Post(Thread::objects[0], "Mais oui c'est clair!");
    new Post(Thread::objects[0], "Ca ne fait aucun doute!");
    new Post(Thread::objects[0], "Poussez-vous bande de noobs!");
    new Post(Thread::objects[1], "Oh la 5ème!");
    new Post(Thread::objects[1], "TMTC frère!");
    new Post(Thread::objects[2], "Moi aussu!");
    new Post(Thread::objects[2], "Représente J.C. -52!");
    new Post(Thread::objects[2], "Plagiat!");

    for_each(Thread::objects.begin(), Thread::objects.end(), displayThread);

    std::vector<Post*>::iterator iter, iter_end;
    for (iter = Post::objects.begin(), iter_end = Post::objects.end(); iter != iter_end; ++iter) {
        Post* post = *iter;
        if (post->Getthread() == Thread::objects[2]) {
            displayPost(*iter);
        }
    }

    //cout << "Hello world!" << endl;
    return 0;
}
