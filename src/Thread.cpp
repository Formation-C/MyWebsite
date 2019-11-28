#include "Thread.h"

Thread::Thread(std::string _title) : title(_title)
{
    objects.push_back(this);
}

Thread::~Thread()
{
    //dtor
}

// Méthode permattant de récupérer tous les messages dans ce fil de discussion
std::vector<Post*> Thread::Getposts() {
    // Retourne le résultat de la fonction générique permettant de filtrer des objets
    return Templates::Filterobjects<Post>(
        // ...en spécifiant que l'objet doit référencer ce fil de discussion pour être valide
        [this](Post* object) { return object->Getthread() == this; }
    );
}

std::vector<Thread*> Thread::objects;
