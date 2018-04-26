#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

//Nous avons besoin de pouvoir manipuler des entrées/sorties et des string

int main() {
    int i;
    // On boucle sur l'entrée standard. On place chaque message dans la
    // string s, puis on le traite
    for (std::string s; getline(std::cin, s);) {
        // On supprime les caractères blancs.
        // Se référer à la doc. C++ pour string::erase et std::remove_if
        s.erase(std::remove_if(s.begin(), s.end(), ::isspace), s.end());
        // Ici un traitement : (pas utile pour echo)

        // Affichage (si la chaîne n'est pas vide), on affiche l'entier correspondant à la chaîne
        // suivi d'une nouvelle ligne :
        if(s.size()){
            i = stoi(s, nullptr, 10);
            std::cout << i << std::endl;
        }
    }
    return 0;
}
