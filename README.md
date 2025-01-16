# Tudorache-Andrei-Theodor---RC-Car
# RC Car

# Introducere
Proiectul de față are ca scop dezvoltarea unei mașini autonome controlate de la distanță prin intermediul unei conexiuni Bluetooth.
Prin utilizarea unei plăci Arduino Uno, împreună cu un modul Bluetooth, proiectul explorează concepte fundamentale din domeniul roboticii, cum ar fi controlul motorului, transmiterea datelor wireless și interacțiunea om-mașină.
# Descriere generală
Proiectul constă în realizarea unei mașini de mici dimensiuni, controlate de la distanță prin Bluetooth, utilizând o placă Arduino Uno. Sistemul include un modul Bluetooth pentru comunicare wireless, motoare pentru deplasare, un șasiu de susținere și diverse componente auxiliare precum un driver pentru motoare și o sursă de alimentare.
Controlul mașinii se realizează printr-o aplicație mobilă, permițând transmiterea comenzilor de direcție și viteză. Modulul Bluetooth preia comenzile și le transmite către Arduino, care le procesează și gestionează funcționarea motoarelor.

# Hardware Design
  *Schema Bloc*:![image](https://github.com/user-attachments/assets/aae731c7-2073-4219-ae03-4617bbf79459)

  *Schema Electrica*:![image](https://github.com/user-attachments/assets/80467f68-32b8-4456-91d4-0c23f34074cc)
  
## Lista de piese
- *Microcontroller:* Arduino Uno 
- *Fire de conexiune*
- Modul Bluetooth Master Slave HC-05
- Modul cu Driver de Motoare Dual L298N Rosu
- Roti x4
- Motoare x4

# Software Design

## Software Design

### Mediul de dezvoltare
- *Arduino IDE*: Utilizat pentru scrierea, compilarea și încărcarea codului pe microcontroller.

### Biblioteci utilizate

### Funcționalități implementate
Control wireless prin Bluetooth
    Mașina poate fi controlată de la distanță printr-o aplicație mobilă sau un dispozitiv compatibil Bluetooth. Aceasta permite transmiterea comenzilor de mișcare, precum înainte, înapoi, stânga și dreapta.

Gestionarea motoarelor DC
    Utilizarea unui modul driver de motoare L298N permite controlul precis al rotației motoarelor, oferind posibilitatea de a ajusta direcția și viteza mașinii.

Răspuns rapid la comenzi
    Sistemul este configurat pentru a răspunde rapid la comenzile transmise, asigurând o experiență fluidă de control la distanță.

Extensibilitate
    Proiectul permite adăugarea de noi funcționalități, cum ar fi senzori de proximitate sau linii, pentru a transforma mașina într-un sistem semiautonom sau complet autonom.

 # Rezultate Obținute


https://github.com/user-attachments/assets/a1ddef9b-09e5-4b80-9fa6-d96be943861c


 # Concluzii

 # Bibliografie/Resurse
