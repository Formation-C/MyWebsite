#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <vector>
#include <functional>


namespace Templates
{
    // Définit un modèle de fonction qui va pouvoir prendre n'importe quel type T
    template<typename T>
    // Méthode permettant de filtrer les objets en fonction d'un critère précis
    std::vector<T*> Filterobjects(std::function<bool(T*)> validator) {
        // Initialise le vecteur à renvoyer
        std::vector<T*> result;

        // Initialise les itérateurs pour parcourir le vecteur
        auto iter = T::objects.begin();
        auto iter_end = T::objects.end();
        for (; iter != iter_end; ++iter) {
            // Récupère la référence de l'éléménet actuellement parcouru
            T* object = *iter;
            // Exécute la fonction de validation spécifiée par l'appelant
            if (validator(object)) {
                // Si la fonction valide l'objet, l'ajoute dans le vecteur à renvoyer
                result.push_back(object);
            }
        }
        // Renvoie le résultat
        return result;
    }
};

#endif // TEMPLATES_H
