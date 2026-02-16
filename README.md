<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

---

<p align="center">
  <strong>Computer Programming</strong>
</p>

<h1 align="center">
  Control Structures
</h1>

<p align="center">
  <strong>Vasileios Evangelos Athanasiou</strong><br>
  Student ID: 19390005
</p>

<p align="center">
  <a href="https://github.com/Ath21" target="_blank">GitHub</a> ·
  <a href="https://www.linkedin.com/in/vasilis-athanasiou-7036b53a4/" target="_blank">LinkedIn</a>
</p>

<hr/>

<p align="center">
  <strong>Supervision</strong>
</p>

<p align="center">
  Supervisor: Nikolaos Vassilas, Professor<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/nikolaos-vassilas/" target="_blank">UNIWA Profile</a>
</p>


<p align="center">
  Co-supervisor: Georgios Meletiou, Laboratory Teaching Staff<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-meletiou/" target="_blank">UNIWA Profile</a>
</p>

</hr>

---

# Project Overview

The primary focus of this laboratory work is the **theoretical understanding and practical application of control structures in C**, specifically:
- `if`
- `if-else`
- `switch`

These structures are essential for directing program flow based on logical conditions and user input.


---

## Table of Contents


| Section | Folder / File | Description |
|------:|---------------|-------------|
| 1 | `assign/` | Assignment material |
| 1.1 | `assign/project3.png` | Assignment description / problem statement (English) |
| 1.2 | `assign/εργασία3.png` | Assignment description / problem statement (Greek) |
| 2 | `docs/` | Theoretical documentation |
| 2.1 | `docs/Control-Structures.pdf` | Control structures in C (English) |
| 2.2 | `docs/Δομές-Ελέγχου.pdf` | Control structures in C (Greek) |
| 3 | `src/` | Source code implementations |
| 3.1 | `src/if.c` | Basic conditional statement (`if`) |
| 3.2 | `src/if1.c` | Extended conditional logic |
| 3.3 | `src/switch.c` | Multi-branch selection (`switch`) |
| 3.4 | `src/MaxInteger.c` | Maximum value selection using conditionals |
| 3.5 | `src/2ndGradeEquation.c` | Solving a second-degree equation using control logic |
| 4 | `README.md` | Repository overview and instructions |

---


## Contents

## 1. Theory Fundamentals

The documentation explores the **logic and syntax of conditional execution** in C.

### if and if-else Statements
- Detailed explanation of how expressions (arithmetic, relational, or logical) are evaluated as:
  - **True** (non-zero)
  - **False** (zero)
- Demonstrates how evaluation results determine the execution path of a program.

### Nested Conditions
- Examples of placing `if` statements inside other `if-else` structures.
- Used to handle more complex decision-making scenarios, such as:
  - Determining whether a number is **negative**, **positive**, or **zero**.

### switch Statement
- Analysis of integer-based decision-making using:
  - `case`
  - `default`
- Emphasizes the critical role of the `break` statement in preventing unwanted fall-through behavior.

---

## 2. Source Code & Documentation

The project includes fully documented source code for the following programs:

- **`if.c` & `if1.c`**
  - Programs designed to find the **maximum of three integers**.
  - Implemented using:
    - Nested `if-else` blocks
    - The ternary operator (`?:`)

- **`switch.c`**
  - Demonstrates how the `switch` statement operates on integer variables.
  - Shows how execution flows through cases unless explicitly stopped using `break`.

- **`2ndGradeEquation.c`**
  - A comprehensive program that solves **quadratic equations** of the form:

$$
ax^2 + bx + c = 0
$$


---

## Detailed Feature: Quadratic Equation Solver

The program **`2ndGradeEquation.c`** performs the following technical functions:

### Input Handling
- Reads three `double` coefficients (`a`, `b`, `c`) from standard input.

### Mathematical Analysis
- Calculates the **discriminant**:
  
$$
D = b^2 - 4ac
$$


- Determines whether the equation is:
  - **Quadratic** (`a ≠ 0`)
  - **Linear / Degenerate** (`a = 0`)

### Root Calculation
- **D > 0**  
  - Calculates **two distinct real roots**.

- **D = 0**  
  - Calculates **one real (double) root**.

- **D < 0**  
  - Identifies the equation as **impossible in the set of real numbers**.

### Output
- Formats and prints:
  - Input coefficients
  - Calculated roots
- Uses **high numerical precision** for clarity and correctness.



---

# Installation & Setup Guide

This repository contains **introductory laboratory material** for the  
**Computer Programming** course at the **University of West Attica (UNIWA)**.

---

## Prerequisites

### Required Software

- **C Compiler**
  - Recommended:
    - **GCC** (Linux / macOS / Windows via MinGW or WSL)

- **Text Editor or IDE**
  - Visual Studio Code `(Recommended)`
  - Code::Blocks
  - Dev-C++
  - CLion
  - Any plain text editor

### Supported Operating Systems
- Windows
- Linux `(Recommended)`
- macOS

---

## Installation

### 1. Clone the Repository

Clone the repository to your local machine:

```bash
git clone https://github.com/Computer-Programming-aka-Uniwa/Control.git
```

#### Alternative (Without Git)

- Open the repository URL in your browser
- Click Code → Download ZIP
- Extract the ZIP file to a local directory

## Compiling & Running the Programs
### 2. Navigate to Source Directory
```bash
cd Control/src
```

### 3. Compile the Programs
```bash
gcc if.c -o if
gcc if1.c -o if1
gcc switch.c -o switch
gcc MaxInteger.c -o MaxInteger
gcc 2ndGradeEquation.c -o 2ndGradeEquation -lm
```
> `-lm` is required to link the math library

### 4. Run the Programs
Linux / macOS
```bash
./if
./if1
./switch
./MaxInteger
./2ndGradeEquation
```
Windows
```bash
if.exe
if1.exe
switch.exe
MaxInteger.exe
2ndGradeEquation.exe
```

---

## Open the Documentation
1. Navigate to the `docs/` directory
2. Open the report corresponding to your preferred language:
    - English: `Control-Structures.pdf`
    - Greek: `Δομές-Ελέγχου.pdf`