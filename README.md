# Embedded Systems Challenges Things You Must Know

## Course Snapshot

| Field | Details |
| --- | --- |
| Instructor | Ashraf S A AlMadhoun |
| Hardware Focus | Embedded Systems |
| Course Link | https://www.udemy.com |
| Repository Updated | 2025-11-18 |

## Overview

Embedded Systems Challenges Things You Must Know is a hands-on course focused on practical
Embedded Systems development. This repository contains curated starter code, wiring notes,
and a repeatable workflow that mirrors the lessons from the video curriculum.

## Learning Objectives

- Understand the core goals of the **Embedded Systems Challenges Things You Must Know** lessons.
- Map the theoretical material onto executable firmware samples.
- Practice reviewing telemetry / console logs with the provided samples.
- Customize the code to match your target hardware setup.

## Hardware & Components

Consult `CIRCUIT.md` for wiring notes. Typical builds require a development board,
sensors/actuators described in the Embedded Systems Challenges Things You Must Know
videos, jumper wires, and a USB cable for programming plus logging.

## Setup Instructions

1. Install the latest Arduino IDE or your preferred toolchain.
2. Clone this repository or download it as a ZIP.
3. Review the `README.md`, `CIRCUIT.md`, and `data/` samples.
4. Upload the code to your dev board and monitor the serial console.

## Code Walkthrough

The `*.c` files are intentionally lightweight so you can focus on the core concept taught
in the course. Each file now includes metadata comments that summarize intent, I/O
expectations, and how telemetry maps to the lesson.

## Usage

```bash
# Build and inspect the sample on a desktop toolchain
gcc -Wall -Wextra -std=c11 *.c -o demo && ./demo

# Or upload via Arduino IDE to replicate the Embedded Systems Challenges Things You Must Know lab
```

## Sample Data

Open `data/sample-telemetry.jsonl` to inspect representative console output. This is
useful when validating your hardware wiring or cloud logging pipeline.

## Additional Notes (Legacy Content)

# Embedded Systems Challenges: Things You Must Know

- Course: Embedded Systems Challenges: Things You Must Know
- Author: Ashraf S A AlMadhoun
- Link: https://www.udemy.com/course/embedded-systems-challenges-ess-things-you-must-know/?couponCode=JULYMAXDICOUNT

## Overview

Implement reliability patterns including watchdogs and retries to handle transient failures in embedded applications.

## Purchase With Discount

Enroll using the link above to get a discounted price and build resilient embedded systems.
