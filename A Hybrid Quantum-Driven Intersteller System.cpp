#include<iostream>       // input/output Library
#include<string>        // string Library
#include<cmath>        // cmath Library(Mathematical Calculations) //square
#include<iomanip>     // input/output manipulator Library(Precision Output) 
#include<cstdlib>    // c standandard Library(Random Generation)
#include<ctime>     // Time Calculation Library //time 
#include<windows.h>// Windows Library(Sound Beeps) // console color
#include <thread> // Sleep Effect
#include <chrono>// Precise Time Intervals
using namespace std;
	

// These below are the color numbers to display output with colors of your choice

//Number	Color
//---------------
//0   		Black
//1			Blue
//2			Green
//3			Aqua
//4			Red
//5			Purple
//6			Yellow
//7			White (Default)
//8			Gray
//9			Light Blue
//10		Light Green
//11		Light Aqua
//12		Light Red
//13		Light Purple
//14		Light Yellow
//15		Bright White


// Colored + speed + color version (with default params)
void typeEffect(string text, int speed = 5, int color = 7) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
    
    for (int i = 0; i < text.length(); i++) {
        cout << text[i];
        Sleep(speed);
    }
    SetConsoleTextAttribute(hConsole, 7);
    cout << endl;
}

// Simple delay-only version (no default delay!)
void typeEffect(const string& text, int delayMs) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delayMs));
    }
    cout << endl;
}




class User{    //Base Class
	protected:
		string userName;
		
	public:	
	
	void showIntro(){
    typeEffect("************************************\n");
    typeEffect("      10million Productions       ");
    typeEffect("          By: M.Talha              ");
    typeEffect("************************************\n\n");

    this_thread::sleep_for(chrono::seconds(3));
    system("cls");
}

	
	
	void title(){
		 typeEffect( "\n***********************************************\n ",40 ,3);
		 typeEffect( "  A Hybrid Quantum-Driven Interstellar System       \n ",40 ,3);
		 typeEffect( "***********************************************\n\n ",40 ,3);
		Beep(500, 700);
	}
	
	void getUserName(){
		 typeEffect( "Enter your name Quanta-Explorer:  ",40 ,6);
		getline(cin, userName);
	}
	
	void displayUserName(){
		 typeEffect( "Welcome "+ userName +" to The 10million Hybrid Quantum-Driven Interstellar System, ",40 ,8); 
		 typeEffect( " where the future of interstellar exploration and cosmic innovation awaits your command!",40 ,8);
		Beep(800, 500);
	}
	
	void showSpaceship() {
     typeEffect( "        _   " ,40, 10);
     typeEffect( "       / \" ",40, 10);
     typeEffect( "      / _ \"" ,40, 10);
     typeEffect( "     | (_) |" ,40, 10);
     typeEffect( "     | | | |" ,40, 10);
     typeEffect( "     |_| |_|" ,40, 10);
}
	
	

};

class GalacticNexus : public User{   //GalacticNexus Class
public:
    void galacticNexus();
    void planets();
    void stars();
    void celestialBodies();
    
public:
    // SUBfunctions of Planets
    void planetaryInsight();
    void gravitationalWeightCalculator();
    void orbitalVelocityCalculator();

    // SUBfunctions of Stars
    void stellarChronicle();
    void stellarGravityCalculator();
    void solarFlareIntensityAnalyzer();
    
    // SUBfunctions of Celestial Bodies
    void cosmicMystery();
    void quantumGravityCalculator();
    void eventHorizonExplorer();
};

   
    // Function Definitions
void GalacticNexus::galacticNexus(){
     typeEffect( "Welcome " + userName + " in the Galactic Nexus",40 ,8);
     typeEffect( "Here you can access the following options:",40 ,8);
    Beep(1100,500);

    int galactic;
    do{
         typeEffect( "1. Planets\n ",40 ,14);
         typeEffect( "2. Stars\n ",40 ,14);
         typeEffect( "3. Celestial Bodies\n ",40 ,14);
         typeEffect( "4. Exit\n ",40 ,4);
         typeEffect( "\nChoose the option:\n ",40 ,6);
        cin >> galactic;
        
        switch(galactic)
        {
            case 1: planets(); break;
            case 2: stars(); break;
            case 3: celestialBodies(); break;
            case 4:  typeEffect( "Exiting the Galactic Nexus...\n ",40 ,12); return;
            default:  typeEffect( "Invalid Input!\n ",40 ,4);
        }    
    } while(galactic != 4);    
}
		
	 void GalacticNexus::planets(){     // Planet function
        int option;

        do {
             typeEffect( "\nWelcome to the Planets section. Choose an option:\n ",40 ,8);
             typeEffect( "1. Planetary Insight (Basic Information)\n ",40 ,14);
             typeEffect( "2. Gravitational Weight Calculator\n ",40 ,14);
             typeEffect( "3. Orbital Velocity Calculator\n ",40 ,14);
             typeEffect( "4. Go Back\n ",40 ,4);
             typeEffect( "Enter your choice:  ",40 ,6);
            cin >> option;

            switch(option){
                case 1:
                    planetaryInsight();
                    break;
                case 2:
                    gravitationalWeightCalculator();
                    break;
                case 3:
                    orbitalVelocityCalculator();
                    break;
                case 4:
                     typeEffect( "Returning to Galactic Nexus...\n ",40 ,12);
                    break;
                default:
                     typeEffect( "Invalid input! Please try again.\n ",40 ,4);
            }
        } while(option != 4);
    }	
    
    // SUBfunctions of Planet()
    
    void GalacticNexus::planetaryInsight(){
         typeEffect( "\nPlanetary Insight:\n ",40 ,1);
         typeEffect( "1. Mercury: Closest planet to the Sun, 58 million km away.\n ",40 ,9);
         typeEffect( "   Features: Small size, no atmosphere, extreme temperature fluctuations.\n ",40 ,9);
         typeEffect( "2. Venus: Similar in size to Earth, 108 million km away.\n ",40 ,9);
         typeEffect( "   Features: Thick, toxic atmosphere, surface temperature over 460°C.\n ",40 ,9);
         typeEffect( "3. Earth: Our home planet, 150 million km away from the Sun.\n ",40 ,9);
         typeEffect( "   Features: Liquid water, atmosphere with oxygen, supports life.\n ",40 ,9);
         typeEffect( "4. Mars: 228 million km away, the Red Planet.\n ",40 ,9);
         typeEffect( "   Features: Cold temperatures, thin atmosphere, possible signs of water in the past.\n ",40 ,9);
         typeEffect( "5. Jupiter: The gas giant, 778 million km away.\n ",40 ,9);
         typeEffect( "   Features: The largest planet, Great Red Spot, many moons.\n ",40 ,9);
         typeEffect( "6. Saturn: Known for its rings, 1.4 billion km away.\n ",40 ,9);
         typeEffect( "   Features: Gas giant, beautiful ring system, many moons.\n ",40 ,9);
         typeEffect( "7. Uranus: 2.9 billion km away, an ice giant.\n ",40 ,9);
         typeEffect( "   Features: Tilted rotational axis, cold temperatures, faint rings.\n ",40 ,9);
         typeEffect( "8. Neptune: 4.5 billion km away, another ice giant.\n ",40 ,9);
         typeEffect( "   Features: Winds up to 2,100 km/h, blue color due to methane.\n ",40 ,9);
         typeEffect( "9. Pluto: A dwarf planet, 5.9 billion km away.\n ",40 ,9);
         typeEffect( "   Features: Small, icy, part of the Kuiper Belt.\n ",40 ,9);
    }

    void GalacticNexus::gravitationalWeightCalculator(){
        double weight, newWeight;
        int planetChoice;

         typeEffect( "Enter your weight on Earth (kg):  ");
        cin >> weight;

         typeEffect( "Choose the planet to calculate your weight on:\n ",40 ,8);
         typeEffect( "1. Mercury\n2. Venus\n3. Earth\n4. Mars\n5. Jupiter\n6. Saturn\n7. Uranus\n8. Neptune\n ",40 ,8);
        cin >> planetChoice;

        double gravity[] = {3.7, 8.87, 9.81, 3.71, 24.79, 10.44, 8.69, 11.15};

        if(planetChoice >= 1 && planetChoice <= 8){
            newWeight = weight * gravity[planetChoice - 1] / gravity[2];
             typeEffect( "Your weight on  ");
            switch(planetChoice){
                case 1:  typeEffect( "Mercury:  ",40 ,9); break;
                case 2:  typeEffect( "Venus:  ",40 ,9); break;
                case 3:  typeEffect( "Earth:  ",40 ,9); break;
                case 4:  typeEffect( "Mars:  ",40 ,9); break;
                case 5:  typeEffect( "Jupiter:  "); break;
                case 6:  typeEffect( "Saturn:  "); break;
                case 7:  typeEffect( "Uranus:  "); break;
                case 8:  typeEffect( "Neptune:  "); break;
            }
              cout << newWeight << " kg\n";
        } else {
             typeEffect( "Invalid planet choice!\n ");
        }
    }

    void GalacticNexus::orbitalVelocityCalculator(){
        double radius, velocity;
        const double G = 6.67430e-11;
        const double M = 1.989e30;

         typeEffect( "Enter the distance from the Sun (in meters):  ");
        cin >> radius;

        velocity = sqrt(G * M / radius);
        cout << "The orbital velocity at a distance of ";
		typeEffect(to_string(radius) + " meters from the Sun is: ");
		cout << velocity << " m/s\n";
    }
    
    
     void GalacticNexus::stars() {  // Star Function
        int option;

        do {
             typeEffect( "\nWelcome to the Stars section. Choose an option:\n ");
             typeEffect( "1. Stellar Chronicle (Information on 12 Stars)\n ");
             typeEffect( "2. Stellar Gravity Calculator\n ");
             typeEffect( "3. Solar Flare Intensity Analyzer\n ");
             typeEffect( "4. Go Back\n ");
             typeEffect( "Enter your choice:  ");
            cin >> option;

            switch(option) {
                case 1:
                    stellarChronicle();
                    break;
                case 2:
                    stellarGravityCalculator();
                    break;
                case 3:
                    solarFlareIntensityAnalyzer();
                    break;
                case 4:
                     typeEffect( "Returning to Galactic Nexus...\n ");
                    break;
                default:
                     typeEffect( "Invalid input! Please try again.\n ");
            }
        } while(option != 4);
    }
    
    
    
    // SUBfunction of Stars()
    
    	void GalacticNexus::stellarChronicle() {
     typeEffect( "\nStellar Chronicle:\n ");
     typeEffect( "1. Sun: Our star, around 4.6 billion years old, located at the center of the Solar System.\n ");
     typeEffect( "   Features: Main-sequence star, provides light and heat to Earth.\n ");
     typeEffect( "   Mass: 1.989 × 10^30 kg\n ");
     typeEffect( "   Radius: 6.96 × 10^8 meters\n ");
    
     typeEffect( "2. Alpha Centauri A: Part of the Alpha Centauri system, 4.37 light-years away.\n ");
     typeEffect( "   Features: Brightest star in the system, similar to the Sun.\n ");
     typeEffect( "   Mass: 1.10 × 10^30 kg\n ");
     typeEffect( "   Radius: 1.22 × 10^9 meters\n ");

     typeEffect( "3. Sirius: The brightest star in the night sky, 8.6 light-years away.\n ");
     typeEffect( "   Features: Binary star system, visible even in the daytime.\n ");
     typeEffect( "   Mass: 2.02 × 10^30 kg\n ");
     typeEffect( "   Radius: 1.71 × 10^9 meters\n ");

     typeEffect( "4. Betelgeuse: A red supergiant in the constellation Orion, 642 light-years away.\n ");
     typeEffect( "   Features: One of the largest stars, likely to explode as a supernova.\n ");
     typeEffect( "   Mass: 20 × 10^30 kg (estimate)\n ");
     typeEffect( "   Radius: 9.44 × 10^10 meters (estimate)\n ");

     typeEffect( "5. Vega: Part of the Lyra constellation, 25 light-years away.\n ");
     typeEffect( "   Features: A young and bright star, used as a standard for brightness.\n ");
     typeEffect( "   Mass: 2.13 × 10^30 kg\n ");
     typeEffect( "   Radius: 1.61 × 10^9 meters\n ");

     typeEffect( "6. Rigel: A blue supergiant in Orion, 860 light-years away.\n ");
     typeEffect( "   Features: One of the brightest stars in the sky, 120,000 times more luminous than the Sun.\n ");
     typeEffect( "   Mass: 21 × 10^30 kg\n ");
     typeEffect( "   Radius: 5.30 × 10^9 meters\n ");

     typeEffect( "7. Polaris: The North Star, located about 430 light-years away.\n ");
     typeEffect( "   Features: A bright supergiant star that is used for navigation.\n ");
     typeEffect( "   Mass: 4.4 × 10^30 kg\n ");
     typeEffect( "   Radius: 2.4 × 10^9 meters\n ");   

     typeEffect( "8. Proxima Centauri: The closest known star to Earth, 4.24 light-years away.\n ");
     typeEffect( "   Features: A red dwarf star, part of the Alpha Centauri system.\n ");
     typeEffect( "   Mass: 0.12 × 10^30 kg\n ");
     typeEffect( "   Radius: 1.30 × 10^6 meters\n ");

     typeEffect( "9. Arcturus: A giant red star, 36.7 light-years away.\n ");
     typeEffect( "   Features: The brightest star in the constellation Boötes.\n ");
     typeEffect( "   Mass: 1.5 × 10^30 kg\n ");
     typeEffect( "   Radius: 2.5 × 10^9 meters\n ");

     typeEffect( "10. Antares: A red supergiant in the constellation Scorpius, 600 light-years away.\n ");
     typeEffect( "   Features: One of the largest visible stars, nearing the end of its life cycle.\n ");
     typeEffect( "   Mass: 12 × 10^30 kg\n ");
     typeEffect( "   Radius: 8.85 × 10^10 meters\n ");

     typeEffect( "11. Altair: A bright star in the constellation Aquila, 16.7 light-years away.\n ");
     typeEffect( "   Features: A fast-rotating star, visible from Earth as the 12th brightest star.\n ");
     typeEffect( "   Mass: 1.79 × 10^30 kg\n ");
     typeEffect( "   Radius: 1.63 × 10^9 meters\n ");

     typeEffect( "12. Alpha Centauri B: Part of the Alpha Centauri system, 4.37 light-years away.\n ");
     typeEffect( "   Features: A binary companion to Alpha Centauri A, has a similar mass to the Sun.\n ");
     typeEffect( "   Mass: 0.92 × 10^30 kg\n ");
     typeEffect( "   Radius: 8.60 × 10^8 meters\n ");
}
     void GalacticNexus::stellarGravityCalculator() {
        double mass, radius, gravity;

         typeEffect( "Enter the mass of the star in kg:  ");
        cin >> mass;

         typeEffect( "Enter the radius of the star in meters:  ");
        cin >> radius;

        const double G = 6.67430e-11;  // Gravitational constant (m^3 kg^-1 s^-2)

        gravity = (G * mass) / (radius * radius);
       typeEffect("The gravity on the star is: " + to_string(gravity) + " m/s^2\n");
    }

    void GalacticNexus::solarFlareIntensityAnalyzer() {
        double flareIntensity, distance, observedIntensity;

         typeEffect( "Enter the solar flare intensity at the star's surface (W/m^2):  ");
        cin >> flareIntensity;

         typeEffect( "Enter the distance from the star (in meters):  ");
        cin >> distance;

        observedIntensity = flareIntensity / (distance * distance);
         typeEffect("The observed solar flare intensity at the distance of " + to_string(distance) + " meters is: " + to_string(observedIntensity) + " W/m^2\n");

    }

    void GalacticNexus::celestialBodies() {    // Celestial Bodies Function
        int option;
        do {
             typeEffect( "\nWelcome to the Celestial Bodies section. Choose an option:\n ");
             typeEffect( "1. Cosmic Mystery\n ");
             typeEffect( "2. Quantum Gravity Calculator\n ");
             typeEffect( "3. Event Horizon Explorer\n ");
             typeEffect( "4. Go Back\n ");
             typeEffect( "Enter your choice:  ");
            cin >> option;

            switch(option) {
                case 1:
                    cosmicMystery();
                    break;
                case 2:
                    quantumGravityCalculator();
                    break;
                case 3:
                    eventHorizonExplorer();
                    break;
                case 4:
                     typeEffect( "Returning to Galactic Nexus...\n ");
                    break;
                default:
                     typeEffect( "Invalid input! Please try again.\n ");
            }
        } while(option != 4);
    }
    
    
    // SUBfunctions of celestialBodies()
    
    	void GalacticNexus::cosmicMystery() {
         typeEffect( "\nCosmic Mystery:\n ");
         typeEffect( "1. Black Hole (Cygnus X-1):\n ");
         typeEffect( "   High mass, intense gravitational pull, event horizon, singularity, accretion disk, emits X-rays, space-time curvature.\n ");
         typeEffect( "   Surprise: It's one of the first black holes to be detected.\n ");

         typeEffect( "2. Neutron Star (Crab Nebula):\n ");
         typeEffect( "   Small radius, incredibly dense, rotates rapidly, magnetic field, emits pulses, very hot, forms from supernova.\n ");
         typeEffect( "   Surprise: It emits radiation detectable from Earth.\n ");

         typeEffect( "3. Quasar (3C 273):\n ");
         typeEffect( "   Extremely bright, located in Virgo, powered by black holes, high redshift, energetic emissions, visible at great distances.\n ");
         typeEffect( "   Surprise: It's the most distant object visible to the naked eye.\n ");

         typeEffect( "4. Nebula (Horsehead Nebula):\n ");
         typeEffect( "   Star-forming region, contains gas and dust, visible in infrared, located in Orion, cold, birthplace of stars.\n ");
         typeEffect( "   Surprise: The shape of a horse's head is what makes it famous.\n ");

         typeEffect( "5. Andromeda Galaxy:\n ");
         typeEffect( "   Spiral galaxy, closest large galaxy to the Milky Way, contains one trillion stars, merging with the Milky Way.\n ");
         typeEffect( "   Surprise: It's on a collision course with our Milky Way.\n ");

         typeEffect( "6. Supernova (SN 1987A):\n ");
         typeEffect( "   Stellar explosion, emits bright light, forms neutron stars or black holes, heavy element formation.\n ");
         typeEffect( "   Surprise: It was the closest supernova observed in the 20th century.\n ");

         typeEffect( "7. Comet (Halley's Comet):\n ");
         typeEffect( "   Icy body, long elliptical orbit, visible from Earth every 75-76 years, bright tail, dust and gas.\n ");
         typeEffect( "   Surprise: It is the only short-period comet visible to the naked eye.\n ");

         typeEffect( "8. Asteroid Belt (Ceres):\n ");
         typeEffect( "   Dwarf planet, largest object in the asteroid belt, located between Mars and Jupiter, made of rock and ice.\n ");
         typeEffect( "   Surprise: Ceres was once considered a planet.\n ");

         typeEffect( "9. Red Giant (Antares):\n ");
         typeEffect( "   Very large, nearing end of life, located in Scorpius, hundreds of times more luminous than the Sun.\n ");
         typeEffect( "   Surprise: If it replaced the Sun, it would extend beyond Mars.\n ");

         typeEffect( "10. Magnetar (SGR 1806-20):\n ");
         typeEffect( "   Extremely powerful magnetic field, dense neutron star, emits gamma rays, rapid rotation, strong radiation bursts.\n ");
         typeEffect( "   Surprise: It has the strongest magnetic field in the known universe.\n ");
    }

    void GalacticNexus::quantumGravityCalculator() {
        double mass, radius, gravity;
        const double G = 6.67430e-11;

         typeEffect( "\nQuantum Gravity Calculator:\n ");
         typeEffect( "Enter the mass of the celestial body (in kg):  ");
        cin >> mass;
         typeEffect( "Enter the radius of the celestial body (in meters):  ");
        cin >> radius;

        gravity = G * mass / (radius * radius);
        typeEffect("Gravity at the surface of the celestial body: " + to_string(gravity) + " m/s^2\n");
    }

    void GalacticNexus::eventHorizonExplorer() {
        double mass, eventHorizon;
        const double G = 6.67430e-11;
        const double c = 3.0e8;

         typeEffect( "\nEvent Horizon Explorer:\n ");
         typeEffect( "Enter the mass of the black hole (in kg):  ");
        cin >> mass;

        eventHorizon = (2 * G * mass) / (c * c);
        typeEffect("The event horizon radius is: " + to_string(eventHorizon) + " meters\n");
    }
    
    
class AstralVoyager : public User{  //AstralVoyager Class
	public:
		void astralVoyager();
		void spaceCrafts();
		void distanceCalculator();
};

    void AstralVoyager::astralVoyager(){
    	
			 typeEffect("Welcome "+ userName +" in the Astral Voyager");
			 typeEffect("Here you can access the following options:");
			Beep(1100,500);
		
		int galactic;
		do{
			 typeEffect("1. Space-Crafts\n ");
			 typeEffect("2. Distance and time between Planets\n ");
			 typeEffect("3. Exiting the Workshop Station! ");
			 typeEffect("\n ");
			 typeEffect("Choose the option:\n ");
			cin>>galactic;
			
		switch(galactic)
		{
			case 1:
				spaceCrafts();
				break;
			case 2:
			    distanceCalculator();
			    break;
			case 3 :
				 typeEffect("Exiting the Galactic Nexus...\n ");
				return;
				break;
			
			default:
				 typeEffect("Invalid Input!\n ");
				
			}	
		} 
		while(galactic != 3);	
		}
		
		
	void AstralVoyager::spaceCrafts(){
			
		  typeEffect( "\n\t--- Astral Voyager: Spacecraft Information ---\n ");

        string spacecrafts[10][9] = {
            {"1. Star Voyager", "Light-speed Engine", "2,000,000 km/h", "50 Light-Years", "Advanced Navigation", "Quantum Shielding", "Anti-Matter Fuel", "Hyperdrive", "350 Passengers"},
            {"2. Nebula Cruiser", "Plasma Fusion Engine", "1,500,000 km/h", "40 Light-Years", "Multi-Planetary Scanner", "Titanium Hull", "Dark Energy Fuel", "Quantum Leap", "250 Passengers"},
            {"3. Galactic Pioneer", "Ion Propulsion", "1,200,000 km/h", "35 Light-Years", "Enhanced AI Control", "Reactive Armor", "Solar Energy", "Stellar Mapping", "150 Passengers"},
            {"4. Cosmic Voyager", "Photon Engine", "1,800,000 km/h", "45 Light-Years", "Holographic Interface", "Energy Shield", "Plasma Reactor", "Wormhole Travel", "300 Passengers"},
            {"5. Celestial Wanderer", "Quantum Engine", "2,200,000 km/h", "55 Light-Years", "Smart Control System", "Neutron Shield", "Quantum Fuel", "Galaxy Mapping", "400 Passengers"},
            {"6. Aurora Explorer", "Graviton Thruster", "1,700,000 km/h", "50 Light-Years", "Advanced Star Charts", "Reflective Shielding", "Antimatter Reactor", "Supernova Drive", "280 Passengers"},
            {"7. Infinity Raider", "Solar Sail Engine", "900,000 km/h", "30 Light-Years", "Interstellar Sensors", "Carbon-Fiber Hull", "Solar Powered", "Planetary Mapping", "100 Passengers"},
            {"8. Stellar Nomad", "Pulsar Drive", "1,600,000 km/h", "48 Light-Years", "Multi-Planetary Autopilot", "Radiation Shield", "Dark Matter Fuel", "Wormhole Entry", "320 Passengers"},
            {"9. Quantum Seeker", "Wormhole Engine", "2,500,000 km/h", "60 Light-Years", "Predictive AI System", "Plasma Shield", "Neutron Fuel", "Quantum Jump", "450 Passengers"},
            {"10. Exo Horizon", "Anti-Gravity Drive", "1,400,000 km/h", "42 Light-Years", "Holographic Control", "Kinetic Shield", "Anti-Matter Fuel", "Cosmic Cruise", "220 Passengers"}
        
};

            for (int i = 0; i < 10; i++) {
    typeEffect("\nSpacecraft " + to_string(i + 1) + " Information:\n");
    for (int j = 0; j < 9; j++) {
        typeEffect(spacecrafts[i][j] + "\n");
    }
    typeEffect("\n");
}

    
	
}
	
	void AstralVoyager::distanceCalculator(){
		 typeEffect( "\n\t--- Astral Voyager: Distance Calculator ---\n ");

        string planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
        double distances[] = {0.0, 77.3, 147.1, 227.9, 778.5, 1427.0, 2871.0, 4497.1};

        int choice;
         typeEffect( "\nChoose a Spacecraft (1-10):  ");
        cin >> choice;
        choice--;

        if (choice < 0 || choice >= 10) {
             typeEffect( "\nInvalid choice. Please try again. ");
            return;
        }

        string startPlanet, endPlanet;
         typeEffect( "\nEnter Start Planet:  ");
        cin >> startPlanet;
         typeEffect( "Enter End Planet:  ");
        cin >> endPlanet;

        double startDistance = -1, endDistance = -1;
        for (int i = 0; i < 8; i++) {
            if (planets[i] == startPlanet) startDistance = distances[i];
            if (planets[i] == endPlanet) endDistance = distances[i];
        }

        if (startDistance == -1 || endDistance == -1) {
             typeEffect( "\nInvalid planet names. Please try again. ");
            return;
        }

        double distance = abs(endDistance - startDistance);

        string speeds[] = {"2000000", "1500000", "1200000", "1800000", "2200000", "1700000", "900000", "1600000", "2500000", "1400000"};
        double speed = stod(speeds[choice]);

        double time = (distance * 1000000) / speed;

       typeEffect("\nDistance: " + to_string(distance) + " million km ");
         typeEffect( "\nEstimated Travel Time: "  + to_string(time) + " hours\n ");
    }
    
    
    
class NebulaTransmissionHub : public User{  //NebullaTransmissionHub Class
     public:
     	
    string planets[5];
    string spacecrafts[5];
    int planetCount;
    int spacecraftCount;

     public:
    NebulaTransmissionHub() : planetCount(0), spacecraftCount(0) {

			 typeEffect(" Welcome my good fellow "+ userName +" to the Nebula Transmission Hub, not all have excess to this place. If you have discovered a Galactic Nexus or crafted a SpaceCraft, then you may store the data in the Hub for future use.\n ");
}
    void addPlanet() {
        if (planetCount < 5) {
             typeEffect( "Enter Planet Name:  ");
            cin.ignore();
            getline(cin, planets[planetCount]);
            planetCount++;
             typeEffect( "Planet added successfully!\n ");
            Beep(1100, 500);
        } else {
             typeEffect( "Maximum planets reached (5).\n ");
            Beep(1500, 800);
        }
    }

    void addSpacecraft() {
        if (spacecraftCount < 5) {
             typeEffect( "Enter Spacecraft Name:  ");
            cin.ignore();
            getline(cin, spacecrafts[spacecraftCount]);
            spacecraftCount++;
             typeEffect( "Spacecraft added successfully!\n ");
        } 
		
		else {
             typeEffect( "Maximum spacecrafts reached (5).\n ");
        }
    }

    void displayInformation() {
         typeEffect( "\n--- Saved Planets ---\n ");
          for (int i = 0; i < planetCount; i++) {
    		typeEffect(to_string(i + 1) + ". " + planets[i]);
		}

			typeEffect("\n--- Saved Spacecrafts ---\n");

		for (int i = 0; i < spacecraftCount; i++) {
   			typeEffect(to_string(i + 1) + ". " + spacecrafts[i]);
		}

    
   
	 
     typeEffect("Thankyou :) "+ userName +" for the data, We hope that you will visit us again. Safe Travels... ");
}
};

class QuantumParadox : public User {  // QuantumParadox Class
public:

    double planetMass[5] = {6.42e23, 5.97e24, 4.87e24, 1.90e27, 5.68e26};
    string planets[5] = {"Mars", "Earth", "Venus", "Jupiter", "Saturn"};
    string spacecrafts[5] = {"Voyager 1", "Apollo 11", "Curiosity", "New Horizons", "Juno"};
    string spacecraftPurpose[5] = {"Exploration", "Moon Landing", "Mars Exploration", "Pluto Exploration", "Jupiter Study"};
    double starsLuminosity[5] = {1.0, 0.1, 5.0, 10.0, 0.8};

    QuantumParadox() {
         typeEffect( "There is a surprise message in the end, the one who wins the Quiz will win the prize, go and win it and discover the Secrets Of The Realms." );
        Beep(1100,500); 
    }

    void askRandomQuestion(int &score) {
        srand(time(0));
        int qType = rand() % 3;

        if (qType == 0) {
            int planetIndex = rand() % 5;
          typeEffect("What is the mass of planet " + planets[planetIndex] + " in kg?\n ");
            double answer;
            cin >> answer;
            if (answer == planetMass[planetIndex]) {
                 typeEffect( "Correct!\n ");
                score++;
            } else {
                 typeEffect("Wrong! The correct mass is: " + to_string(planetMass[planetIndex]) + " kg.\n ");

                Beep(1800, 900);
            }
        } else if (qType == 1) {
            int spacecraftIndex = rand() % 5;
             typeEffect("What is the purpose of spacecraft " + spacecrafts[spacecraftIndex] + "?\n ");

            string answer;
            cin.ignore(); 
            getline(cin, answer); 
            if (answer == spacecraftPurpose[spacecraftIndex]) {
                 typeEffect( "Correct!\n ");
                score++;
            } else {
                 typeEffect( "Wrong! The correct purpose is: " + spacecraftPurpose[spacecraftIndex] + "\n ");
                Beep(1800, 900);
            }
        } else if (qType == 2) {
            int starIndex = rand() % 5;
             typeEffect( "What is the luminosity of star " + to_string(starsLuminosity[starIndex]) + " in solar luminosities?\n ");
            double answer;
            cin >> answer;
            if (answer == starsLuminosity[starIndex]) {
                 typeEffect( "Correct!\n ");
                score++;
            } else {
                 typeEffect( "Wrong! The correct luminosity is: " + to_string(starsLuminosity[starIndex]) + " solar luminosities.\n ");
                Beep(1800, 900);
            }
        }
    }

    void startQuiz() {
        string levels[] = {"Medium"};

        for (int i = 0; i < 6; i++) { // level loops
             typeEffect( "\n--- " + levels[i] + " Level Quiz ---\n ");
            int score = 0; // Reset score 

            // Ask 10 questions at each level
            for (int j = 0; j < 10; j++) {
                askRandomQuestion(score);
            }

            // Assign titles based on the score
            if (score >= 10) {
                 typeEffect( "\nYou are now a Celestial Monarch: A Warlord of Space!\n ");
                 typeEffect( "Greetings, Galaxy Explorer:"+ userName +" You stand at the brink of an impossible tier—one only ever conquered by a legend. ");
                 typeEffect( " His name echoes through the Celestial Realms: the CR Monarch, Shadow Emperor Talha10million. ");
                 typeEffect( " And now, you’ve ascended to a rare pinnacle—you are now worthy to meet the Shadow Emperor in person. ");
                break;
            } else if (score == 9) {
                 typeEffect( "\nYou are now a Legendary Explorer: An Interstellar Legend!\n ");
            } else if (score >= 7) {
                 typeEffect( "\nYou are now a Starborn Conqueror: A Celestial Voyager!\n ");
            } else if (score >= 5) {
                 typeEffect( "\nYou are now a Supernova Challenger: A Space Pioneer!\n ");
            } else if (score >= 3) {
                 typeEffect( "\nYou are now a Solar Explorer: A Nebula Wanderer!\n ");
            } else {
                 typeEffect( "\nYou are now a Cosmic Novice: An Astral Voyager!\n ");
            }

            // If the player reaches Celestial Monarch, the quiz will end
            if (score >= 10) break;
        }
    }
};


class QuantumOperationalHub : public User { //QuantumOperationalHub Class 
public:

    void simulateQuantumTeleportation() {
         typeEffect( "\nSimulating Quantum Teleportation...\n ");
         typeEffect( "You are about to teleport a quantum particle across vast distances...\n ");
         typeEffect( "As the particle is measured at its original location, its quantum state is transferred instantly to a remote location.\n ");
         typeEffect( "This happens faster than the speed of light, defying classical laws of physics!\n ");
         Beep(1100, 500);
    }

    void simulateQuantumTunneling() {
         typeEffect( "\nSimulating Quantum Tunneling...\n ");
         typeEffect( "A particle encounters a potential barrier, but instead of bouncing back, it passes through the barrier...\n ");
         typeEffect( "This is quantum tunneling, where the particle 'tunnels' through the barrier due to the wave-like nature of particles.\n ");
         typeEffect( "In classical physics, this would be impossible, but in the quantum world, it's a normal occurrence!\n ");
         Beep(1100, 500);
    }

    void simulateWaveParticleDuality() {
         typeEffect( "\nSimulating Wave-Particle Duality...\n ");
         typeEffect( "Imagine a photon passing through a double-slit experiment...\n ");
         typeEffect( "It behaves like both a wave and a particle, creating an interference pattern on the screen.\n ");
         typeEffect( "This duality is a fundamental aspect of quantum mechanics that challenges our classical understanding of reality!\n ");
         Beep(1100, 500);
    }

    void celestialQuantumHub() {
        int choice;
         typeEffect( "\n--- Celestial Quantum Operational Hub ---\n ");
         typeEffect( "1. Simulate Quantum Teleportation\n ");
         typeEffect( "2. Simulate Quantum Tunneling\n ");
         typeEffect( "3. Simulate Wave-Particle Duality\n ");
         typeEffect( "Enter your choice:  ");
        cin >> choice;

        switch(choice) {
            case 1:
                simulateQuantumTeleportation();
                break;
            case 2:
                simulateQuantumTunneling();
                break;
            case 3:
                simulateWaveParticleDuality();
                break;
            case 4:
			     typeEffect("Exiting the Quantum Dimention... ");    
            default:
                 typeEffect( "Invalid choice! Please select a valid option.\n ");
        }
        while(choice != 4);
    }
    
};


class CurrentTime : public User{  // CurrentTime Class
	public:
	     void currentTimeCalculation(){
	     	time_t now = time(0);
	     	char* dt = ctime(&now);
	     typeEffect(string("The current time on Terra-001(Earth) is: ") + dt);
	     	 Beep(400, 1500);
		 }
	    
};

class EclipseDilusion : public User{
	public:
		
		void EclipseDelusion() {
		
		int make;
		
	do{
		 typeEffect("1. Scenario 1\n ");
		 typeEffect("2. Scenario 2\n ");
		 typeEffect("3. Scenario 3\n\n ");
		 typeEffect("4. Exiting the Dillusion mode...\n ");
		 typeEffect("Choose a dilusional Enigma: ");
		Beep(1000, 500);
		cin>>make;
	
	
		
		switch(make){
			
			case 1:{
				scenario1();
				break;
			}
			case 2:{
				scenario2();
				break;
			}
			case 3:{
				scenario3();
				break;
			}
			case 4:{
				 typeEffect("Returning to the Menupage... ");
				return;
				break;
			}
			default:{
				 typeEffect("Invalid Input! ");
				break;
			}	
			
		}
	
	}	while(make != 4);
	
}
	    
	    void scenario1(){
	    	char choice1, choice2, choice3, choice4;

     typeEffect( "Mission: The Mysterious Quantum Signal\n\n ");
     typeEffect( "Step 1: Your ship detects a mysterious quantum signal. How do you respond?\n ");
     typeEffect( "A) Investigate the source directly by moving the ship closer.\n ");
     typeEffect( "B) Dispatch an unmanned quantum probe to scan the signal.\n ");
     typeEffect( "C) Record the signal and continue your mission.\n ");
     typeEffect( "Enter your choice:  ");
    Beep(1100, 500);
    cin >> choice1;
    choice1 = toupper(choice1);

    if (choice1 == 'C') {
         typeEffect( "\nYou ignored the signal, but unknown quantum radiation overwhelms your ship.\n ");
         typeEffect( "=== GAME OVER, YOU DIED ===\n ");
        Beep(1800, 900);
        
    }

     typeEffect( "\nStep 2: The signal patterns resemble a code. What do you do?\n ");
     typeEffect( "A) Attempt to decode the signal onboard using the quantum computer.\n ");
     typeEffect( "B) Transmit the raw data back to Earth for analysis.\n ");
     typeEffect( "C) Mimic the signal with your ship's quantum emitter as a response.\n ");
     typeEffect( "Enter your choice:  ");
    Beep(1100, 500);
    cin >> choice2;
    choice2 = toupper(choice2);

     typeEffect( "\nStep 3: The system's quantum shields fluctuate suddenly. What next?\n ");
     typeEffect( "A) Divert power to strengthen quantum shields immediately.\n ");
     typeEffect( "B) Shut down the quantum emitter to avoid escalation.\n ");
     typeEffect( "C) Initiate emergency protocols and prepare for unknown threats.\n ");
     typeEffect( "Enter your choice:  ");
    Beep(1100, 500);
    cin >> choice3;
    choice3 = toupper(choice3);

     typeEffect( "\nStep 4: A small alien vessel emerges nearby. How do you respond?\n ");
     typeEffect( "A) Open peaceful communication channels and offer assistance.\n ");
     typeEffect( "B) Hold position and observe silently, avoiding contact.\n ");
     typeEffect( "C) Prepare defenses and ready weapons as a precaution.\n ");
     typeEffect( "Enter your choice:  ");
    Beep(1100, 500);
    cin >> choice4;
    choice4 = toupper(choice4);

     typeEffect( "\nMission Outcome:\n ");
    if (choice1 == 'A' && choice2 == 'A' && choice3 == 'A' && choice4 == 'A') {
         typeEffect( "You successfully decode a friendly alien greeting and form an alliance.\n ");
         typeEffect( "Advanced alien technology is shared with your crew. Mission Success!\n ");
    }
    else if (choice1 == 'A' && choice2 == 'C' && choice3 == 'B' && choice4 == 'C') {
         typeEffect( "Your mimic signal causes suspicion; the alien vessel attacks!\n ");
         typeEffect( "=== GAME OVER, YOU DIED ===\n ");
    }
    else if (choice1 == 'B' && choice2 == 'B' && choice3 == 'C' && choice4 == 'B') {
         typeEffect( "Data sent back to Earth, but tension remains with the aliens.\n ");
         typeEffect( "Mission continues but with caution.\n ");
    }
    else {
         typeEffect( "You missed key chances, the mission fails.\n ");
         typeEffect( "=== GAME OVER, YOU DIED ===\n ");
    }
		}
		
		
		void scenario2(){
			 char choice1, choice2, choice3, choice4;

     typeEffect( "Quantum Odyssey: The Lost Starship\n\n ");
     typeEffect( "Step 1: Your ship's sensors detect a derelict starship drifting in a dark nebula. How do you respond?\n ");
     typeEffect( "A) Approach cautiously and scan the starship for life signs.\n ");
     typeEffect( "B) Send a remote probe to investigate from a distance.\n ");
     typeEffect( "C) Ignore it and continue your journey.\n ");
    Beep(1100, 500);
     typeEffect( "Enter your choice:  ");
    cin >> choice1;
    choice1 = toupper(choice1);

    if (choice1 == 'C') {
         typeEffect( "\nYou ignored the starship, but it suddenly reactivates and opens fire.\n ");
         typeEffect( "=== GAME OVER, YOU DIED ===\n ");
        Beep(1800, 900);
        
    }

     typeEffect( "\nStep 2: The probe reveals strange energy readings and faint life signals inside. What do you do?\n ");
     typeEffect( "A) Board the starship with an armed crew to investigate.\n ");
     typeEffect( "B) Hack into the starship's systems remotely to access data.\n ");
     typeEffect( "C) Attempt to establish communication with any survivors.\n ");
     typeEffect( "Enter your choice:  ");
    Beep(1100, 500);
    cin >> choice2;
    choice2 = toupper(choice2);

     typeEffect( "\nStep 3: As you explore, the starship’s automated defenses activate. How do you react?\n ");
     typeEffect( "A) Override the system using your quantum computer.\n ");
     typeEffect( "B) Engage in combat to disable the defenses.\n ");
     typeEffect( "C) Retreat immediately and escape.\n ");
     typeEffect( "Enter your choice:  ");
    Beep(1100, 500);
    cin >> choice3;
    choice3 = toupper(choice3);

     typeEffect( "\nStep 4: You reach the command deck and find a holographic AI system still active. What do you do?\n ");
     typeEffect( "A) Attempt to reason with the AI for information.\n ");
     typeEffect( "B) Attempt to shut down the AI to take control.\n ");
     typeEffect( "C) Copy the AI's data and leave quickly.\n ");
     typeEffect( "Enter your choice:  ");
    Beep(1100, 500);
    cin >> choice4;
    choice4 = toupper(choice4);

     typeEffect( "\nMission Outcome:\n ");
    if (choice1 == 'A' && choice2 == 'A' && choice3 == 'A' && choice4 == 'A') {
         typeEffect( "You gain access to the starship's advanced technology and rescue the remaining survivors.\n ");
         typeEffect( "Your crew is celebrated as heroes. Mission Success!\n ");
    }
    else if (choice1 == 'A' && choice2 == 'B' && choice3 == 'B' && choice4 == 'B') {
         typeEffect( "You take control of the starship, but the AI overloads the system, causing an explosion.\n ");
         typeEffect( "=== GAME OVER, YOU DIED ===\n ");
    }
    else if (choice1 == 'B' && choice2 == 'C' && choice3 == 'A' && choice4 == 'C') {
         typeEffect( "You escape with valuable data and return safely.\n ");
         typeEffect( "Mission continues with new knowledge.\n ");
    }
    else {
         typeEffect( "Your decisions lead to confusion and conflict with the AI.\n ");
         typeEffect( "=== GAME OVER, YOU DIED ===\n ");
    }
		}
		
		void scenario3(){
			 char choice1, choice2, choice3, choice4;

     typeEffect( "Echoes of the Void\n\n ");
     typeEffect( "Step 1: Your ship picks up a faint, repeating signal from a dark region of space. What do you do?\n ");
     typeEffect( "A) Move closer to the source to understand the signal.\n ");
     typeEffect( "B) Record the signal and try to decode it from a safe distance.\n ");
     typeEffect( "C) Ignore the signal and continue your journey.\n ");
     typeEffect( "Enter your choice:  ");
    Beep(1100, 500);
    cin >> choice1;
    choice1 = toupper(choice1);

    if (choice1 == 'C') {
         typeEffect( "\nYou ignored the signal, but a hidden force pulls your ship into darkness.\n ");
         typeEffect( "=== GAME OVER, YOU DIED ===\n ");
        Beep(1800, 900);
        
    }

     typeEffect( "\nStep 2: As you get closer, the signal gets louder. It sounds like a voice. What do you do?\n ");
     typeEffect( "A) Boost the signal strength and try to understand the message.\n ");
     typeEffect( "B) Send a reply signal to try and communicate.\n ");
     typeEffect( "C) Turn off your communication systems to avoid being tracked.\n ");
     typeEffect( "Enter your choice:  ");
    Beep(1100, 500);
    cin >> choice2;
    choice2 = toupper(choice2);

     typeEffect( "\nStep 3: Your ship's systems start to flicker. Strange symbols appear on your screens. What do you do?\n ");
     typeEffect( "A) Try to decode the symbols using your ship's computer.\n ");
     typeEffect( "B) Manually shut down the affected systems.\n ");
     typeEffect( "C) Broadcast a distress signal to anyone nearby.\n ");
     typeEffect( "Enter your choice:  ");
    cin >> choice3;
    choice3 = toupper(choice3);

     typeEffect( "\nStep 4: Suddenly, a shadowy figure appears on your screen, whispering your name. What do you do?\n ");
     typeEffect( "A) Ask who they are and why they are contacting you.\n ");
     typeEffect( "B) Cut the transmission and prepare weapons.\n ");
     typeEffect( "C) Try to trace the source of the signal.\n ");
     typeEffect( "Enter your choice:  ");
    Beep(1100, 500);
    cin >> choice4;
    choice4 = toupper(choice4);

     typeEffect( "\nMission Outcome:\n ");
    if (choice1 == 'A' && choice2 == 'A' && choice3 == 'A' && choice4 == 'A') {
         typeEffect( "You decode the message and realize it’s a distress call from a lost explorer.\n ");
         typeEffect( "You rescue them, and they reward you with a star map of hidden treasures. Mission Success!\n ");
    }
    else if (choice1 == 'A' && choice2 == 'B' && choice3 == 'B' && choice4 == 'B') {
         typeEffect( "You cut the connection, but the shadowy figure appears on your ship, whispering your name.\n ");
         typeEffect( "=== GAME OVER, YOU DIED ===\n ");
    }
    else if (choice1 == 'B' && choice2 == 'A' && choice3 == 'C' && choice4 == 'C') {
         typeEffect( "You trace the signal to a hidden star base filled with technology and treasures.\n ");
         typeEffect( "Mission continues with new discoveries.\n ");
    }
    else {
         typeEffect( "The voice gets louder, and your ship is pulled into a dark void.\n ");
         typeEffect( "=== GAME OVER, YOU DIED ===\n ");
    }
		}
};

   
class FinalMessage : public User{    // FinalMessage Class
	public:
		void message(){
			 cout << endl;

    cout << "                                                ____               ____                       ___                    " << endl;
    cout << " ||   =======          |\\  /|  | |     |     | |    | |\\   |      |    |        /\\    |\\  /| |            O     O    " << endl;
    cout << " ||  ||     ||   ===   | \\/ |  | |     |     | |    | | \\  |      |            /  \\   | \\/ | |___            I       " << endl;
    cout << " ||  ||     ||   ===   |    |  | |     |     | |    | |  \\ |      |    ____   /----\\  |    | |                       " << endl;
    cout << " ||   =======          |    |  | |____ |____ | |____| |   \\|      |_____|  | /      \\ |    | |___         \\_____/    " << endl;

    cout << endl;
    typeEffect("Assalam Alaikum, I am Talha10million, Creater of this Hybrid Realm!",40 ,5);
    typeEffect("I hope you enjoyed my program" + userName + ". Thankyou for using my code :)\n",40 ,13);
    Beep(1500, 500);
		}
};   


class MenuPage : public User{  // Menu Class
public:
    void openMenu() {
        int decision;

        do {
             typeEffect( "\n!!! A HYBRID QUANTUM-DRIVEN INTERSTELLAR SYSTEM !!! \n ",40 ,3);
             typeEffect( "\n ");
             typeEffect( "1. Galactic Nexus\n ",40 ,11);
             typeEffect( "2. Astral Voyager\n ",40 ,11);
             typeEffect( "3. Nebula Transmission Hub\n ",40 ,11);
             typeEffect( "4. Quantum Paradox: The Pioneer’s Odyssey\n ",40 ,11);
             typeEffect( "5. Celestial Quantum Operational Hub\n ",40 ,11);
             typeEffect( "6. Current Time on Terra-001\n ",40 ,11);
             typeEffect( "7. EclipseDilusion\n ",40 ,11);
             typeEffect( "8. Final Message for " + userName + "\n",40 ,5);
             typeEffect( "9. Deactivate The Quantum Cosmos Realm\n ",40 ,4);
             typeEffect( "\n  ");
             typeEffect( "Initiate your command:\n ",40 ,6);
            cin >> decision;

            switch (decision) {
                case 1:{
                    GalacticNexus gn;
                    gn.galacticNexus();
                    break;
                }
                case 2:{
                    AstralVoyager av;
                    av.astralVoyager();
                    break;
                }
                 case 3:{
                    NebulaTransmissionHub nth;
                 	nth.addPlanet();
					nth.addSpacecraft();
					nth.displayInformation();
				}
                     break;
                 case 4:{
                 	QuantumParadox qp;
                    qp.startQuiz();
				 }
                     break;
                 case 5:{
					QuantumOperationalHub qoh;
  					qoh.celestialQuantumHub();
				 }
				 	 break;
				case 6:{
					CurrentTime ct;
					ct.currentTimeCalculation();
				}	
				     break;
				 case 7:{
				 	EclipseDilusion ed;
				 	ed.EclipseDelusion();
				 	ed.scenario1();
				 	ed.scenario2();
				 	ed.scenario3();
				 }    
				    break;
				case 8:{
					FinalMessage fm;
					fm.message();
					exit(0);  
				}    
			      	return;
			    	break;
                case 9:
                     typeEffect( "\nThe Quantum Cosmos Realm has been deactivated successfully.\n ");
                     typeEffect( "Thank you for using the 10million Hybrid Quantum-Driven Interstellar System.\n ");
                     typeEffect( "Goodbye, Quanta-Explorer: " + userName );
                    exit(0);  
                    break;
                default:
                     typeEffect( "\nInvalid Input!\n ");
            }
        } while (decision != 9);
    }
};    
	



    
  // Main Function
int main(){
	
	
	MenuPage mp;             // MenuPage Class
	mp.showIntro();
	mp.showSpaceship();
    mp.title();
    mp.getUserName();
    mp.displayUserName();
    mp.openMenu();
    
    GalacticNexus gn;          // GalacticNexus Class
    gn.galacticNexus();
    	
	AstralVoyager av;          // AstralVoyager Class
	av.astralVoyager();
	av.spaceCrafts();
	av.distanceCalculator();
	
	NebulaTransmissionHub nth; // NebulaTransmissionHub Class
	nth.addPlanet();
	nth.addSpacecraft();
	nth.displayInformation();
	
    QuantumParadox qp;        // QuantumParadox Class
    qp.startQuiz();
    
    QuantumOperationalHub qoh;//  QuantumOperationalHub Class
    qoh.celestialQuantumHub();
    
   	CurrentTime ct;           //  CurrentTime Class
   	ct.currentTimeCalculation();
   	
   	EclipseDilusion ed;       //  EclipseDilusion Class
   	ed.EclipseDelusion();
   	ed.scenario1();
   	ed.scenario2();
   	ed.scenario3();
   	
   	FinalMessage fm;         //  FinalMessage Class
	fm.message();
	
    
    return 0;
}