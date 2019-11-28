#include "Thread.h"

Thread::Thread(Category* _category, std::string _title) : category(_category), title(_title)
{
    objects.push_back(this);
}

Thread::~Thread()
{
    //dtor
}

// M�thode permattant de r�cup�rer tous les messages dans ce fil de discussion
std::vector<Post*> Thread::Getposts() {
    // Retourne le r�sultat de la fonction g�n�rique permettant de filtrer des objets
    return Templates::Filterobjects<Post>(
        // ...en sp�cifiant que l'objet doit r�f�rencer ce fil de discussion pour �tre valide
        // fonction lambda
        [this](Post* object) { return object->Getthread() == this; }
        // [this] : on capture le contexte de this pour le passer � la function par la suite
        //
    );
}

std::vector<Thread*> Thread::objects;
