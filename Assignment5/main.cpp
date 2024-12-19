#include <iostream>
#include <vector>
#include "autobot.h"
#include "decepticon.h"

int main() {
    Autobot optimusPrime("Optimus Prime");
    optimusPrime.transform();
    optimusPrime.openFire();
    optimusPrime.ultimate();

    Decepticon megatron("Megatron");
    megatron.transform();
    megatron.openFire();
    megatron.ultimate();

    Transformer* transformer = &optimusPrime;
    transformer->transform();
    transformer->openFire();
    transformer->ultimate();

    transformer = &megatron;
    transformer->transform();
    transformer->openFire();
    transformer->ultimate();


    std::vector<Transformer*> transformers;
    transformers.push_back(new Autobot("Bumblebee"));
    transformers.push_back(new Autobot("Jazz"));
    transformers.push_back(new Autobot("Ironhide"));
    transformers.push_back(new Decepticon("Starscream"));
    transformers.push_back(new Decepticon("Soundwave"));
    transformers.push_back(new Decepticon("Shockwave"));
    transformers.push_back(new Autobot("Ratchet"));
    transformers.push_back(new Autobot("Wheeljack"));
    transformers.push_back(new Decepticon("Thundercracker"));


    for (Transformer* t : transformers) {
        t->transform();
        t->openFire();
        t->ultimate();
    }

 
    for (Transformer* t : transformers) {
        delete t;
    }

    return 0;
}
