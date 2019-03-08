#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

int main() {
    // Vous pouvez remplacer le int par n'importe quel type primitif et le reste de la lecture ne change pas.
    int i;
    
    // /!\ On suppose que le fichier est bien formé : on ne gère pas les erreurs.

    // On boucle sur les lignes de l'entrée standard.
    // On place chaque message dans la string s, puis on le traite
    for (string s; getline(cin, s);) {
        // on lit les entiers présents sur la ligne courante.
        // Ici, il n'y a qu'un entier qu'on affiche sur une ligne.
        istringstream stream(s);
        if(s.size() >0) {
          // La ligne n'est pas vide
          do {
            stream >> i;
            cout << i << endl;
          } while (stream.good());
        }
    }
    return 0;
}
