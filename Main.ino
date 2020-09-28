long unsigned currentMillis =0;
unsigned long previousMillis =0;

int colonnes[] = {2,3,4,5,6,7,19,18,17,16,15,14,35,37,41,39,43,45,34,36,38,40,42,44,23,25,27,29,31,33,22,24,26,28,30,32};
int etages[] = {8,9,10,11,12,13};
int RandEtage; // Variable pour les étages
int RandColonnes; //Variable pour les colonnes

//============================================================
// POUR LA FONCTION CARRE
//============================================================
int liste_carre_1[] = {22, 24, 26, 23, 25, 27, 34, 36, 38, 41, 43, 45, 16, 15, 14, 5, 6, 7};
int liste_carre_2[] = {22, 24, 26, 23, 27, 34, 36, 38, 41, 43, 45, 16, 14, 5, 6, 7};
int liste_carre_3[] = {28, 30, 32, 29, 31, 33, 40, 42, 44, 35, 37, 39, 19, 18, 17, 2, 3, 4};
int liste_carre_4[] = {28, 30, 32, 29, 33, 40, 42, 44, 35, 37, 39, 19, 17, 2, 3, 4};
int taille_liste_carre_1 = 18;
int taille_liste_carre_2 = 16;

//============================================================
// POUR LA FONCTION 
//============================================================


//============================================================
// POUR LA FONCTION Eollienne
//============================================================



//============================================================
// POUR LA FONCTION Plateau
//============================================================

int etage_1[] = {8}; 
int etage_2[] = {9}; 
int etage_3[] = {10}; 
int etage_4[] = {11}; 
int etage_5[] = {12}; 
int etage_6[] = {13};

//============================================================
// POUR LA FONCTION EollienneBIS2
//============================================================




//============================================================

void setup()
{

Serial.begin(9600);
//Serial.println(sizeof(liste_Carre_1)/sizeof(liste_Carre_1[1]));
//Serial.println(sizeof(liste_Carre_1));  
int compteur;

for (int compteur = 0; compteur < 37; compteur++){
pinMode(colonnes[compteur], OUTPUT); }
for (int compteur = 1; compteur < 7; compteur++){
pinMode(etages[compteur], OUTPUT); }
}
void loop()
{
//RandLed();

//Carre(500);
//Plateau(200);

//digitalWrite(colonnes[8],HIGH);
//digitalWrite(12,HIGH);
affichage(colonnes,36, etages, 6);
//affichage(L1,1,liste2_1bis_Eollienne1bis,1);
}

void affichage(int L[],int l,int M[],int m){

for (int compteur = 0; compteur < m; compteur++){
    
digitalWrite(M[compteur],HIGH);

for (int compteurbis = 0; compteurbis < l; compteurbis++){
    digitalWrite(L[compteurbis],HIGH);
    //Serial.println("on envoie la sauce");
    delay(0.9);
    digitalWrite(L[compteurbis],LOW);
    
}
digitalWrite(M[compteur],LOW);
    
}

}
void Clean_All(){
  
  for (int compteur = 0; compteur < 36; compteur++){
    digitalWrite(colonnes[compteur],LOW);  }
  
  for (int compteur = 0; compteur < 6; compteur++){
    digitalWrite(etages[compteur],LOW); }
  
  }


//============================================================
// Fonction pour creer des formes...
//============================================================

void Carre(int temps){
currentMillis = millis();
previousMillis = currentMillis;

while ((millis() - previousMillis) < temps) {
affichage(liste_carre_1,taille_liste_carre_1,etage_1,1); 
affichage(liste_carre_2,taille_liste_carre_2,etage_2,1);
affichage(liste_carre_1,taille_liste_carre_1,etage_3,1);
affichage(liste_carre_3,taille_liste_carre_1,etage_4,1);
affichage(liste_carre_4,taille_liste_carre_2,etage_5,1);
affichage(liste_carre_3,taille_liste_carre_1,etage_6,1);
}}

void Plateau(int temps){
currentMillis = millis();
previousMillis = currentMillis;
while ((millis() - previousMillis) < temps) {
affichage(colonnes,36,etage_1,1); }

while ((millis() - previousMillis) < temps*2) {
affichage(colonnes,36,etage_2,1); }

while ((millis() - previousMillis) < temps*3) {
affichage(colonnes,36,etage_3,1); }

while ((millis() - previousMillis) < temps*4) {
affichage(colonnes,36,etage_4,1); }

while ((millis() - previousMillis) < temps*5) {
affichage(colonnes,36,etage_5,1); }

while ((millis() - previousMillis) < temps*6) {
affichage(colonnes,36,etage_6,1); }
}

/*
void EollienneBIS2(int temps){
currentMillis = millis();
previousMillis = currentMillis;

while ((millis() - previousMillis) < temps) {
affichage(liste2_1bis_Eollienne1,3,liste2_1bis_Eollienne1bis,1);
affichage(liste2_1bis_Eollienne2,3,liste2_1bis_Eollienne2bis,1);
affichage(liste2_1bis_Eollienne3,3,liste2_1bis_Eollienne3bis,1);
}

while ((millis() - previousMillis) < temps*2) {
affichage(liste2_2bis_Eollienne1,9,liste2_2bis_Eollienne1bis,1);
}

Clean_All();
while ((millis() - previousMillis) < temps*3) {
affichage(liste2_1bis_Eollienne1,3,liste2_1bis_Eollienne3bis,1);
affichage(liste2_1bis_Eollienne2,3,liste2_1bis_Eollienne2bis,1);
affichage(liste2_1bis_Eollienne3,3,liste2_1bis_Eollienne1bis,1);
}
Clean_All();
while ((millis() - previousMillis) < temps*4) {
affichage(liste2_3bis_Eollienne1,9,liste2_3bis_Eollienne1bis,3);

}
}
*/


/*
void Clignoter_carre(int temps){
Clean_All();
Inv_Carre(temps);

Clean_All();
Carre(temps);

}*/



void RandLed()
{
RandEtage = random(0,6);
RandColonnes = random(0,36);
digitalWrite(etages[RandEtage], HIGH);
digitalWrite(colonnes[RandColonnes], HIGH);
//Serial.println(etages[RandEtage]);
//Serial.println(colonnes[RandColonnes]);
delay(750);
digitalWrite(etages[RandEtage], LOW);
digitalWrite(colonnes[RandColonnes], LOW);
delay(500);
}
