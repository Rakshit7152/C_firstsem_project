C_firstsem_project: Number Guessing Game

This project implements a simple command-line number guessing game in C, demonstrating best practices for separating code into source (.c) and header (.h) files across different directories.

📁 Project Structure

The project is organized into two main folders, following standard C development practice:


├── include/

│   └── random.h  (Function declarations for RNG initialization)

├── src/

│   └── guess_game.c     (Main game logic)

└── README.md



🛠️ Build and Compilation

The program is compiled using the GNU Compiler Collection (GCC). The -Iinclude flag is crucial, as it tells the compiler to look inside the include directory for the header file (random.h).

Open your terminal and navigate to the main project folder (C_firstsem_project).

Compile the source files to create the executable:

gcc -Iinclude src/rand.c include/random.h -o guess_game


-Iinclude: Informs GCC to look for headers (like "random_seeder.h") in the include directory.

src/guess_game.c: The main program source file.

random.h: The implementation of the random number seed function.

-o guess_game: Names the resulting executable file guess_game.

▶️ Execution

Once the executable is successfully created, run the program using the following command:

./guess_game



The program will prompt you to guess a number between 1 and 10.
