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

// Entry demonstrating reliability patterns
// Main routine: orchestrates the embedded systems challenges things you must know scenario
int main(void) { // Begin main function
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
  return 0; // Exit success
} // End main

