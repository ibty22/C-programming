#include<stdio.h>
#include<string.h>
typedef void(*SpeakFunction)();
struct Animal{
    SpeakFunction speak;
};
struct Dog{
    struct Animal base;
};
void dogSpeak(){
    printf("Woof Woof!\n");
}
void genericSound(){
    printf("Some generic animal sound.\n");
}
void dogBark() {
    printf("Bark Bark!\n");
}
int main(){
    printf("--- Simulating Non-Virtual (Base only) ---\n");
struct Animal myAnimal;
myAnimal.speak = genericSound;
myAnimal.speak(); 
printf("--- Simulating Non-Virtual (Derived) ---\n");
struct Dog myDog;
myDog.base.speak = dogSpeak;
struct Animal* animalPtr = (struct Animal*)&myDog;
animalPtr->speak();
return 0;
}




