# GIP-dierenspeeltje

Motorbesturing met knop (Arduino)
Dit project bestuurt twee DC-motoren met behulp van een knop. Wanneer de knop wordt ingedrukt, draaien beide motoren 5 seconden op volle snelheid en stoppen daarna.

Benodigdheden
Arduino (bijv. Arduino Uno)

2x DC-motoren

1x drukknop

Bedrading en eventueel een breadboard

Aansluitingen
Motor 1 aangesloten op pin 9 (PWM)

Motor 2 aangesloten op pin 10 (PWM)

Drukknop aangesloten op pin 2 (met interne pull-up weerstand ingeschakeld)

Werking
De knop is verbonden met pin 2, ingesteld als input met interne pull-up weerstand.

Zodra de knop ingedrukt wordt (pin 2 gaat LOW), starten beide motoren met maximale snelheid (PWM waarde 255).

De motoren draaien gedurende 5 seconden.

Na 5 seconden stoppen beide motoren.

Door de buttonState variabele wordt voorkomen dat de motoren meerdere keren achter elkaar geactiveerd worden zonder dat de knop losgelaten wordt.
