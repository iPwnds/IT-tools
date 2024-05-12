# JavaScript project: 2023-2024

In dit project implementeer je de Nonogram-puzzel in Javascript.
Dit project wordt ingediend via GitLab.
Tijdens de verdediging kijken we naar de recentst gepushte commit versie vóór het verstrijken van de deadline.

**Inhoudsopgave**

- [JavaScript project: 2023-2024](#javascript-project-2023-2024)
  - [Afspraken](#afspraken)
    - [Gedragscode](#gedragscode)
    - [Toelichting](#toelichting)
    - [Forum](#forum)
    - [Opgave downloaden](#opgave-downloaden)
    - [Oplossing indienen](#oplossing-indienen)
    - [Verdediging](#verdediging)
  - [Evaluatiecriteria](#evaluatiecriteria)
    - [Functionaliteit](#functionaliteit)
    - [Leesbaarheid code](#leesbaarheid-code)
    - [Correcte inzending](#correcte-inzending)
    - [Niet gequoteerd](#niet-gequoteerd)
  - [Opgave](#opgave)
    - [Nonogram](#nonogram)
      - [Werking](#werking)
        - [Doel van de puzzel](#doel-van-de-puzzel)
        - [Het puzzelbord](#het-puzzelbord)
        - [De puzzel](#de-puzzel)
      - [Voorbeelden](#voorbeelden)
    - [Functionaliteit](#functionaliteit-1)
    - [Oplossingsstrategie](#oplossingsstrategie)

## Afspraken

Overloop eerst de afspraken vooraleer je begint aan de opgave.
Dit practicum heeft AC-code [ES-NGW-TP-TS-NPP-NVP](https://www.cs.kuleuven.be/assignment-commons/explain?ac_code=ES-NGW-TP-TS-NPP-NVP).

### Gedragscode

De practica worden gequoteerd, en het examenreglement is dan ook van toepassing.
Soms is er echter wat onduidelijkheid over wat toegestaan is en wat niet inzake samenwerking bij opdrachten zoals deze.

De oplossing en/of programmacode die ingediend wordt, moet volledig het resultaat zijn van werk dat je zelf gepresteerd hebt.
Je mag je werk uiteraard bespreken met andere studenten, in de zin dat je praat over algemene oplossingsmethoden of algoritmen, maar de bespreking mag niet gaan over specifieke code die je aan het schrijven bent of die je wenst in te dienen.
Als je het met anderen over je practicum hebt, mag dit er dus *nooit* toe leiden, dat je op om het even welk moment in het bezit bent van een geheel of gedeeltelijke kopie van het opgeloste practicum van anderen, onafhankelijk van of die code op papier staat of in elektronische vorm beschikbaar is, en onafhankelijk van wie de code geschreven heeft (mede-studenten, eventueel uit andere studiejaren, volledige buitenstaanders, internet-bronnen, e.d.).
Dit houdt tevens ook in dat er geen enkele geldige reden is om je code door te geven aan mede-studenten, noch om ze beschikbaar te stellen via publiek bereikbare directories of websites. De Git-repository die we jullie ter beschikking stellen is standaard op privaat ingesteld.

Elke student is verantwoordelijk voor de code en het werk dat hij of zij indient.
Als er tijdens de beoordeling van het practicum twijfels zijn over het feit of het practicum zelf gemaakt is (bvb. gelijkaardige code, of oplossingen met andere practica), zal de student gevraagd worden hiervoor een verklaring te geven.
Indien dit de twijfels niet wegwerkt, zal er worden overgegaan tot het melden van een onregelmatigheid, zoals voorzien in het onderwijs- en examenreglement (zie http://www.kuleuven.be/onderwijs/oer/).

**Alle inzendingen worden automatisch met elkaar vergeleken met behulp van plagiaatsoftware voor code.
Deze software geeft een score van gelijkaardigheid aan projecten.
Projecten die hard op elkaar lijken worden nadien manueel nagekeken.**

### Toelichting

Het is toegestaan om gebruik te maken van informatie en code (bijvoorbeeld hulpfuncties) op het internet om je practicum op te lossen, **indien je de bron vermeldt**.
Het is niet de bedoeling om een volledig opgelost spel te downloaden en dit in te dienen, zelfs met bronvermelding.

Bij het uitwerken van dit project is het ook toegestaan om gebruik te maken van GenAI voor het genereren van stukken code.
Opnieuw is het niet de bedoeling om de volledige oplossing te proberen genereren met behulp van deze tools.
Indien je gebruik maakt van GenAI **vermeld je dit bij de gegenereerde code**.

Zorg er tevens voor dat je elk stuk code in je project begrijpt en kan uitleggen.
Bij de uitleg over [de verdediging](#verdediging) vind je meer informatie over het gebruik van deze hulpmiddelen tijdens de verdediging.

Indien je twijfelt over wat al dan niet toegestaan is, stel dan een vraag op het discussieforum!

### Forum

Alle vragen over het practicum, *inclusief vragen aan medestudenten*, moeten gesteld worden via het **discussieforum** op [Toledo](https://toledo.kuleuven.be/portal).

Alle antwoorden van assistenten op het discussieforum worden beschouwd als **deel van de opgave** en kunnen bijgevolg aanvullingen of correcties bevatten.
Zorg er dus voor dat je deze posts leest!

> :bulb: Moest je nog geen meldingen krijgen van nieuwe berichten op discussiefora, dan kan je dit wijzigen door je algemene [Toledo Ultra meldingsinstellingen](https://ultra.edu.kuleuven.cloud/ultra/stream/notification/settings) aan te passen.

### Opgave downloaden

De opgave download je via het `git clone` commando (vervang `<r-nummer>` door je eigen r-nummer):

```bash
git clone git@gitlab.kuleuven.be:distrinet/education/informaticawerktuigen/2023-2024/javascript-project/nonogram-<r-nummer>.git
```

In de map `code` staan alvast drie bestanden die een startpunt vormen.
Het HTML-bestand `index.html` is reeds gekoppeld aan een leeg Javascript-bestand en een leeg CSS-bestand.
Je kan het practicum oplossen door je code te schrijven in deze bestanden, je hoeft dus geen extra bestanden aan te maken.

Zou je toch graag nieuwe bestanden aanmaken (om welke reden dan ook), zorg dan dat je nog steeds voldoet aan onderstaande vereisten:

- Alle bestanden die deel uitmaken van de oplossing staan in de map `code` (submappen zijn toegestaan).
- **Het spel kan geopend worden door `index.html` in te laden in de web browser, zonder bijkomende stappen**.

### Oplossing indienen

De *deadline* voor dit practicum is **zondag 19 november 2023** om **23u59**.
Het practicum wordt ingediend met behulp van _Git_, door simpelweg je oplossing te pushen naar de online repository die je kreeg.

Wijzigingen aan jullie repository na deze datum zullen niet aanvaard worden.

Hieronder zie je een voorbeeld van hoe je bestanden kan pushen:

```bash
# Alle gewijzigde bestanden in map 'code' toevoegen
git add code/
# Bestanden committen
git commit -m "Update oplossing"
# Gemaakte commit versturen naar online repository
git push origin main
```

> :exclamation: Het is ten zeerste aangeraden om gedurende het maken van je project regelmatig je bestanden te committen en te pushen met Git.
> Zo heb je altijd een back-up van je code!
> Je kan zo vaak pushen als je wilt, enkel de laatste versie vóór de deadline zal tellen als je finale indiening.

**Kijk goed na of je alle bestanden correct hebt ingediend. Een foute inzending wordt gelijkgesteld aan laattijdige inzending!**
Controleer je inzending door je eigen repository opnieuw te clonen in een tijdelijke folder.

Je kan de inhoud van de repository ook nakijken op de website van GitLab zelf.
Daarnaast kan je het ingediende spel ook uittesten via deze URL (vervang <r-nummer> door je eigen r-nummer):

```
https://distrinet.pages.gitlab.kuleuven.be/education/informaticawerktuigen/2023-2024/javascript-project/nonogram-<r-nummer>
```

### Verdediging

Tijdens de verdediging is het uiterst belangrijk dat je goed kan uitleggen wat je code doet, en waarom je bepaalde keuzes hebt gemaakt.
Vergeet zeker niet om als voorbereiding voor de verdediging je eigen code opnieuw te bekijken, zeker de ingewikkelde delen.
Met code waarvan je niet kan uitleggen hoe ze werkt, kan je uiteraard weinig punten verdienen.

Er zal tijdens de verdediging ook gevraagd worden aanpassingen te doen aan de code die je hebt geschreven.
Op deze manier controleren we enerzijds of je de code zelf hebt geschreven, en anderzijds of je de taal voldoende begrijpt.
Tijdens de verdediging zal het niet toegestaan zijn om gebruik te maken van communicatiemiddelen of GenAI.
Zorg er dus voor dat je zelf de materie beheerst.

De praktische informatie omtrent de verdediging en de planning volgen later via Toledo.

De verdediging is een examenmoment, behandel dit ook zo.
**Zorg ervoor dat je op tijd aanwezig bent.**
Indien je om eender welke reden niet op tijd op de verdediging kan geraken, neem dan zo snel mogelijk contact op met het assistententeam zodat er naar een oplossing gezocht kan worden.
***Niet komen opdagen op je verdediging, zonder enige verwittiging, zal resulteren in een 0 op dit practicum***.
Indien je door ziekte je verdediging niet kan halen, bezorg je je ombudspersoon een doktersattest.
Via de ombudspersoon kan dan een inhaalverdediging vastgelegd worden.

## Evaluatiecriteria

In deze sectie beschrijven we kort enkele criteria die we gebruiken om een score toe te kennen aan het practicum.

### Functionaliteit

In de eerste plaats wordt er gekeken naar een correcte, foutloze werking van je programma.
Zorg ervoor dat alle functionaliteit die in de opgave gevraagd wordt, ook aanwezig is in je programma.
**Je zal enkel kunnen slagen voor dit practicum als je een werkend spel indient!**

### Leesbaarheid code

Zorg ervoor dat je code leesbaar is!

Enkele tips:

* Gebruik duidelijke, verklarende namen voor alle variabelen en functies.
* Maak gebruik van functies om je code op te delen. Deel lange functies op in kleinere subfuncties die je probleem stap voor stap oplossen. Als je je code voldoende opsplitst in functies met heldere namen zal de code snel leesbaar worden.
* *Indenteer* je code!!! Vele editors hebben auto-formatting functionaliteit. Maak daar gebruik van! Er is niets vervelender dan code te lezen met foute of geen indentatie.
* Maak gebruik van commentaar, maar enkel voor de stukken code die slecht leesbaar zijn. Voeg deze commentaar dus pas toe nadat je alle bovenstaande stappen hebt uitgevoerd en nog steeds merkt dat het stuk code lastig te lezen is.
* Wees consequent met alle stijlkeuzes die je maakt. Indien je bijvoorbeeld beslist om een accolade telkens op een nieuwe regel te laten beginnen, doe dit dan voor het volledige document.

### Correcte inzending

Zorg ervoor dat je code correct en tijdig is ingediend via GitLab.
Dat wil ook zeggen dat je je wijzigingen regelmatig dient te committen en pushen en niet eenmalig nadat je het volledige project hebt afgewerkt.
Zorg er daarbij ook voor dat je beschrijvende commit-messages schrijft die duidelijk maken wat je in elke commit gedaan hebt.

### Niet gequoteerd

We geven geen punten op:

* De esthetiek van de user interface. Het kan leuk zijn om je spel mooier te maken, maar dit levert je geen extra punten op.
* Extra (ongevraagde) functionaliteit. Je mag weliswaar eigen functies toevoegen, maar dit levert je eveneens geen extra punten op.

## Opgave

De opdracht van dit practicum bestaat eruit om een [Nonogram](https://nl.wikipedia.org/wiki/Nonogram)-puzzel te implementeren met behulp van HTML, CSS en JavaScript.
In deze sectie beschrijven we eerst de algemene regels en werking van het spel.
Vervolgens beschrijven we de specifieke functionaliteit die we verwachten in jullie oplossing.

### Nonogram

We beschrijven de werking van een Nonogram in deze sectie.

#### Werking

##### Doel van de puzzel

Voor elke puzzel is het doel om het een specifiek aantal vakjes per rij of kolom in te kleuren.
Het aantal vakjes dat gekleurd moet zijn komt overeen met het aangegeven aantal naast of boven het puzzelbord.

##### Het puzzelbord

Het bord is doorgaans een vierkant opgedeeld in kleinere vakjes.
Op zich is het perfect mogelijk om een rechthoekig puzzelbord te hebben voor een Nonogram, maar dit zullen we niet implementeren.
Boven en links naast het puzzelbord bevinden zich getallen (één of meerdere) die aangeven hoeveel aaneengrenzende vakjes ingekleurd moeten worden in die rij of kolom.
Indien er zich meerdere getallen bevinden moeten die groepen van gekleurde vakjes gescheiden zijn door minstens 1 ongekleurd (leeg) vakje.

##### De puzzel

De puzzel begint volledig leeg, met alle getallen erboven en links ernaast zichtbaar voor de speler.
Elk vakje heeft drie mogelijke waarden:

- Leeg
- Ingekleurd
- Afgeschreven (een 'X' wordt weergegeven in het vakje)

De speler heeft de optie om een vakje in te kleuren of af te schrijven.
Een vakje dat gekleurd of afgeschreven is kan niet meer gewijzigd worden naar een andere waarde.
Als alle juiste vakjes in een rij of kolom ingekleurd zijn, zullen de lege vakjes automatisch als afgeschreven worden gemarkeerd.
Indien de speler een fout vakje kleurt of afschrijft (bv. een vakje afschrijft dat gekleurd hoort te zijn), dan zal de speler een leven verliezen.
Als een speler per ongeluk een verkeerd vakje inkleurt of afvinkt, wordt automatisch de juiste staat toegekend (omdat er slechts twee mogelijke opties zijn, heeft het geen zin om de speler opnieuw te laten proberen, aangezien hij of zij het antwoord nu toch weet).
Een speler begint het spel met 3 levens, en als het aantal levens daalt tot 0, eindigt het spel met een bericht waarin staat dat de speler heeft gefaald.
Het spel is afgelopen als alle vakjes die ingekleurd moeten zijn ook effectief ingekleurd zijn, er verschijnt dan een bericht om aan te duiden dat de speler de puzzel correct opgelost heeft.

#### Voorbeelden

In de map *voorbeeldlevels* zijn enkele voorbeelden van opgeloste puzzels beschikbaar.
We verwachten dat je ten minste alle voorbeeldlevels implementeert, maar je hebt ook de vrijheid om daarbovenop zelfgemaakte levels toe te voegen.
De speler kan kiezen welk level gespeeld wordt, je mag kiezen hoe je dit implementeert.

(*De puzzels werden gemaakt met behulp van een [online tool](http://www.landofcrispy.com/nonogrammer/nonogram.html?mode=build), de ontwerpen komen van de Nonogram Android app.*)

> :bulb: Om een beter idee te krijgen van de Nonogram-spelregels, kan je het spel spelen op verschillende gratis websites en apps.
> Houd er echter rekening mee dat de functionaliteit van die spellen onderling kan verschillen en dus mogelijk ook afwijkt van de spelregels die je hier moet implementeren.

### Functionaliteit

In deze sectie beschrijven we de functionaliteit die we verwachten voor dit practicum.

* Voorzie een spelbord dat bestaat uit een variabel aantal rijen en kolommen (maar evenveel rijen als kolommen).
* Voorzie een plaats voor de getallen boven en links naast het spelbord.
* Zorg ervoor dat er een visueel verschil is tussen de verschillende waarden in een cel (de lege, gekleurde en afgeschreven cellen hebben bijvoorbeeld een andere achtergrondkleur).
* De speler moet cellen kunnen inkleuren en afschrijven.
  Dit kan bijvoorbeeld door middel van een knop die tussen de twee modi wisselt of door gebruik van de linker- en rechtermuisknop.
* Een speler heeft 3 levens.
  Indien de speler een fout maakt (en dus een vakje inkleurt dat afgeschreven zou moeten worden of andersom) moet er een leven afgetrokken worden.
  De fout moet onmiddelijk verbeterd worden op het spelbord en dus moet de juiste waarde op het spelbord getoond worden.
  Bij het maken van een fout krijgt de speler een melding van die fout.
  Indien de speler geen levens meer heeft, eindigt het spel en wordt dit in een bericht aan de speler getoond.
  Vervolgens start het spel opnieuw.
* Toon een timer die aangeeft hoe lang het huidige spel al loopt.
* Toon een teller die aangeeft hoeveel zetten de speler heeft gemaakt in het huidige spel (het inkleuren of afschrijven van een vakje is een zet).
  Als een speler op een vakje klikt dat reeds ingekleurd of afgeschreven mag dat niet meer meetellen als zet.
* Indien alle vakjes die ingekleurd moeten zijn ook daadwerkelijk ingekleurd werden, is het spel gedaan.
  Het is **niet** nodig dat ook alle afgeschreven vakjes zijn aangeduid.
  Toon op dat moment een bericht met felicitaties en een overzicht van de tijd die de speler nodig had en het aantal zetten.
* Voorzie de optie om elk van de voorbeeldlevels in de map *voorbeeldlevels* in te laden (uiteraard kan je ook zelf nog extra levels toevoegen als je wilt, maar dat hoeft niet).
* Als in een rij of kolom alle juiste vakje ingekleurd zijn, moeten al de lege vakjes automatisch afgeschreven worden.
  Dit moet dus gebeuren bij het inkleuren van het laatste juiste vakje in een rij of kolom, en telt niet mee als extra zet.
* Voorzie een knop om het spel opnieuw te starten.
  Bij gebruik van de knop gaat het spelbord terug naar de startconfiguratie en worden de timer en zet-teller terug op nul gezet.

Het spel moet speelbaar en duidelijk zijn, maar verlies niet te veel tijd met het perfectioneren van de HTML en CSS.

### Oplossingsstrategie

Om dit practicum op te lossen kan je het werk opsplitsen in een aantal stappen:

1. Maak eerst met behulp van HTML en CSS de volledige interface voor een willekeurige puzzel.
  Zorg ervoor dat je hierin alle grafische elementen al verwerkt.
2. Bedenk een representatie in JavaScript die de volledige staat van de puzzel kan beschrijven.
  Denk bijvoorbeeld aan de oefenzitting, waarin we een tweedimensionale lijst gebruikten om een Sliding Puzzle voor te stellen.
3. Schrijf een functie die de interne Javascript-representatie kan omzetten naar jouw HTML-representatie.
  Kijk bijvoorbeeld naar de functies *draw_puzzle* en *generate_puzzle_html* uit de oefenzitting.
4. Vervolgens kan je functies schrijven die gebruik maken van de interne voorstelling van de puzzel om het spel te spelen.
  Bij iedere aanpassing van de interne representatie kan je deze opnieuw omzetten naar HTML met behulp van je omzetfunctie.
  Je kan de functies telkens testen door deze uit te voeren vanuit de JavaScript console.
  Je kan best een aparte representatie gebruiken voor het spelbord en de juiste oplossing, zodat je eenvoudig kan controleren of een actie van de speler correct is of niet.
5. Maak gebruik van de onclick-attributen van HTML om ervoor te zorgen dat wanneer men op de puzzel klikt, de correcte JavaScript functies (geschreven in de vorige stap) uitgevoerd worden.
