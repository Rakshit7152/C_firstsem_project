#ifndef RANDOM_SEEDER_H
#define RANDOM_SEEDER_H

// The header file includes the necessary libraries for the function's implementation:
// <stdlib.h> for srand()
// <time.h> for time()
#include <stdlib.h>
#include <time.h>

void initialize_rng_seed() {
    // The time(NULL) function returns the current calendar time,
    // which serves as a unique seed for the random number generator.
    srand(time(NULL));
}
/**
 * @brief Initializes the random number generator seed.
 *
 * This function uses the current time to seed the random number generator,
 * ensuring a different sequence of random numbers each time the program runs.
 */
void initialize_rng_seed();

#endif 