# Groepsopdracht

Welkom op de GitLab repository voor de informaticawerktuigen groepsopdracht!


## Mappen en bestanden in deze repository

### Project

Onderstaande mappen en folders zijn gerelateerd aan het project dat jullie zullen maken.

* **/beschrijving/**:
    In deze map staat de beschrijving van jullie onderwerp en extra informatie over de groepsleden.
* **/portfolio/**:
    Deze map bevat alle bestanden die jullie portfolio omvatten.
    Dit zijn onder andere de verzameling van verslagen, zoekcriteria, referenties en de inhoudsopgave.
* **/presentatie/**:
    In deze map plaatsen jullie de bronbestanden van de presentatie (geen door Latex gegenereerde bestanden!).
* **/tekst/**:
    In deze map plaatsen jullie de bronbestanden van het artikel (geen door Latex gegenereerde bestanden!).
* **.gitignore**:
    Dit bestand geeft aan welke bestanden door git genegeerd mogen worden.
    Meer informatie over `.gitignore` vinden jullie [hier](https://git-scm.com/docs/gitignore).
* **README.md**:
    Dit Markdown-bestand wordt door GitLab gebruikt om deze uitleg te genereren op de repository webpagina.
    Klik op de volgende links voor meer informatie over [README.md](https://help.github.com/en/articles/about-readmes) en [Markdown](https://guides.github.com/features/mastering-markdown/).

### Continuous integration

Om de badges bovenaan de GitLab repository webpagina te generen, wordt gebruik gemaakt van continuous integration (CI).
CI is geen leerdoel voor dit vak, maar je kan [hier](https://docs.gitlab.com/ee/ci/introduction/) terecht indien je je hier graag meer in zou willen verdiepen.
Aan onderstaande map of bestand zal je dus niets hoeven wijzigen.

* **/.gitlab/**:
    Dit Python-programma wordt aangeroepen door het CI script voor het genereren van de badges bovenaan de GitLab webpagina (zie [GitLab badges](#gitlab-badges)).
* **.gitlab-ci.yml**:
    Met dit bestand configureren we de GitLab CI pipeline voor het generen van de repository badges.


## GitLab badges

Bovenaan deze de repository webpagina worden drie badges getoond.
Badges zoals deze worden gebruikt om interessante informatie over de repository weer te geven, bv. of de code compileert, of alle testen slagen etc.

In deze repository geven ze aan of de LaTeX-code voor het artikel compileert, of er geen tijdelijke LaTeX-bestanden gepusht zijn en of er voldaan is aan de woordlimiet.
Meer informatie hierover zullen jullie vinden in de opgave omtrent het schrijven van het artikel, die in de loop van het semester ter beschikking zal worden gesteld op Toledo.
Natuurlijk zijn deze badges pas relevant wanneer jullie daadwerkelijk zijn begonnen met het schrijven aan het artikel, en is het niet erg als deze daarvoor falen (`FAIL`).
Wanneer jullie het artikel indienen, zullen deze wel moeten slagen (`OK`).
