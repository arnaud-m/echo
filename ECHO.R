ReadStdin <- function(what = integer()) {
  ## Lire un vecteur (par défaut d'entiers) depuis l'entrée standard.
  ## L'argument what permet de choisir le type de données. 
  ## Par exemple, ReadStdin(what = character()) lit un vecteur de chaînes de caractères.
  ##
  ## Capturer le flux d'entrée standard.
  stream <- file("stdin","r") 
  ## Lire le flux jusqu'à la fin dans un vecteur.
  x <- scan(file=stream, what= what, quiet=TRUE) 
  ## Ferme proprement le flux (pour éviter un warning).
  close(stream)
  ## Renvoyer le vecteur lu.
  return(x)
}

WriteStdout <- function(x, collapse = "\n") {
  ## Écrire le vecteur numérique x sur la sortie standard
  ##
  ## Utiliser l'écriture décimale (pas la notation scientifique).
  y <- format(as.numeric(x), scientific = FALSE, trim = TRUE) 
  ## Écrire le vecteur. Par défaut, il y a un nombre par ligne.
  cat(y, sep = collapse) 
  ## Attention, on appelle la fonction cat et non pas print!
}

######################################
## Script principal

## Lecture des données depuis l'entrée standard.
## Stockage des données dans un vecteur.
## Suppression des caractères d'espacement au début et à la fin de chaque chaîne avec strip.
x <- ReadStdin()

## Traitement des données 
## Ici, il n'y a rien à faire pour echo.
y <- x 

## Écriture du résultat sur la sortie standard
WriteStdout(y)
