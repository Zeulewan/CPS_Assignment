#include <stdio.h>
#define MINUTE 60 //Minutes in an get_n_hours
#define M_LITRE 1000 //mL in a M_LITRE
#define SENTINEL 5

int get_problem(void);
double get_n_hours(double num_hours); 
void get_rate_drop_factor(double*, double*);
void get_kg_rate_conc(double*, double*, double*);
void get_units_conc(double*, double*);
double fig_drops_min(double, double);
double fig_ml_hr(double);
double by_weight(double, double, double);

int main(void){
    int value;                  //option chosen
    double answer;              //return value of functions
    double ml_hour;             //rate in ml/hr
    double drops_ml;            //tubing factor in drops/ml
    double mg_kg_hour;          //rate in mg/kg/hr
    double pat_weight;          //patient's weight in kg
    double mg_ml;               //concentration in mg/ml
    double units_hour;          //rate in units/hr
    double units_ml;            //concentration in units/ml
    double num_hours;           //number of hours for 1 L to be delivered
    
    value =  ;                  //fill blank
    
    while( ){                   //fill blank
    
    switch(value){              //Using the variables decalred within the main() program and the given function prototypes, complete the bodyy of the switch statement
    
        if(value < 0 || value > 5)
        default:
        printf("Wrong input.\n");
    
    }
    value =  ;                  //fill blank
}

//function displays menu and gets user's input
int get_problem(void){
    int menu_number;
    
    //TO DO                     //body of function
    
    return (menu_number);
}

//function to get the number of hours
void get_n_hours(double num_hours){
    
    //TO DO                     //body of function
    
    
}

//function prompts the user to enter rate and tubing's drop factor the returns values through ouput parameters
void get_rate_drop_factor(double *ml_hour, double *drops_ml){
        
        //TO DO                 //body of function
}

//function prompts for rate, patients weight and concentration then returns values through output paramaters
void get_kg_rate_conc(double *mg_kg_hour, double *pat_weight, double *mg_ml){
        
        //TO DO                 //body of function
        
}

//function prompts for rate and concentration then returns values through output paramaters
void get_units_conc(double *units_hour, double *units_ml){
    
        //TO DO             //body of function
        
}

//function takes as input rate and concentration then returns as its value the result of dividing there product by MINUTE
double fig_drops_min(double ml_hour, double drops_ml){
    
        //TO DO             //body of function
        
}

//function takes as input num_hours and returns as its value the quotient of * 1000 and num_hours
double fig_ml_hr(double num_hours){
    
        //TO DO         //body of function
        
}

//function takes 3 inputs and returns as its value the product of rate and patients weight divided by concentration
double by_weight(double mg_kg_hr, double pat_weight, doublemg_ml){
    
        //TO DO         //body of function
        
}
//function takes 2 inputs and returns as its value the quotient of units_hr and units_ml
double by_units(double units_hour, double units_ml){
    
        //TO DO             //body of function
    
}
    

    int a;
    printf("GIVEN A MEDICAL ORDER IN\t\t CALCULATE RATE IN");

    printf("\n(1) ml/hr & drop factor\t\t\t drops/min");

    printf("\n(2) 1L for n hr\t\t\t\t ml/hr");

    printf("\n(3) mg/kg/hr & concentration in mg/ml\t ml/hr");

    printf("\n(4) units/hr & concentration in units/ml ml/hr");

    printf("\n(5) QUIT");

    printf("\nEnter a number for option of choice: ");

    scanf("%d", &a);
    
    if(a == 1)
    
    printf("You have selected option 1.");
    
    if(a == 2)
    
    printf("You have selected option 2.");
    
    if(a == 3)
    
    printf("You have selected option 3.");
    
    if(a == 4)
    
    printf("You have selected option 4.");
    
    if(a == 5)
    
    printf("You have quit the program.");
    
    if(a > 5 || a < 1)
    
    printf("You have entered an invalid option.");
    

    return 0;
}
