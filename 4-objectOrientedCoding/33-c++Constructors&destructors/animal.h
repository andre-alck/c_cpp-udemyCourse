#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
private:
    bool hungry;

public:
    void isHungry(void);
    void makeHungry(void);
    void makeNotHungry(void);

    Animal();
    ~Animal();
};

#endif