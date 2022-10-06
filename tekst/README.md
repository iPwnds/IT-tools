# Tekst

Deze map zal alle bronbestanden bevatten die nodig zijn om het Latex-document te compileren.
Om jullie op weg te helpen, voorzien we een bare-bones template in [artikel.tex](/tekst/artikel.tex).
Gebruikte referenties kunnen jullie aanvullen in [referenties.bib](/tekst/referenties.bib).

Deze twee bestanden mogen niet hernoemd worden, maar jullie mogen wel andere bestanden waarnaar de template verwijst toevoegen aan deze map.
Zorg er steeds voor dat jullie artikel altijd compileerbaar is door middel van het volgende commando:

```bash
latexmk -pdf atikel.tex
```

Deze map mag **geen door Latex gegenereerde bestanden** bevatten!
Het [.gitignore](/.gitignore) bestand in de root van deze repository helpt jullie hierbij, al kunnen dit soort bestanden toch nog in jullie repository terecht komen indien er verkeerd gecommit wordt.
