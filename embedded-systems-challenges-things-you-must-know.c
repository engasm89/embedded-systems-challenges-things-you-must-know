/*
 * Course: Embedded Systems Challenges Things You Must Know
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Embedded Systems Challenges Things You Must Know" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Embedded Systems)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/embedded-systems-challenges-things-you-must-know/
 * Repository: https://github.com/engasm89/embedded-systems-challenges-things-you-must-know
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

/*
 * Course: Embedded Systems Challenges Things You Must Know
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Embedded Systems Challenges Things You Must Know
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for challenge logs
#include <unistd.h> // Include POSIX sleep for timing

// Simulated watchdog and retry counters
static int watchdog_counter = 0; // Watchdog tick counter
static int retries = 0; // Retry attempts counter

// Program entry point demonstrating reliability patterns
// Main routine: orchestrates the embedded systems challenges things you must know scenario
int main(void) { // Main function implementation function
  printf("Embedded Systems Challenges: Things You Must Know\n"); // Title
  for (int i = 0; i < 6; ++i) { // Loop over cycles
    watchdog_counter++; // Increment watchdog
    int ok = (i % 3 != 0); // Simulate failure every 3rd cycle
    if (!ok) { // If failure occurs
      retries++; // Increment retries
      printf("FAIL cycle=%d retries=%d\n", i, retries); // Log failure
    } else { // If success
      printf("OK cycle=%d wd=%d\n", i, watchdog_counter); // Log success
    } // End condition
    usleep(300000); // Delay 300 ms
  } // End loop
  return 0; // Exit successfully
} // End of main function

