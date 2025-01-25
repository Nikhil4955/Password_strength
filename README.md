# Password Strength Checker

## Overview
This C++ program checks whether a given password is strong or weak based on specific criteria. It also provides guidelines for creating a strong password if the entered one is deemed weak.

## Features
- Validates password strength.
- Checks for:
  - Minimum length of 8 characters.
  - Presence of at least one uppercase letter.
  - Presence of at least one lowercase letter.
  - Presence of at least one digit.
  - Presence of at least one special character.
- Provides feedback on how to improve a weak password.

## Usage
### Input
The program prompts the user to enter a password.

### Output
- If the password is strong, the program outputs:
  ```
  The Password is strong
  ```
- If the password is weak, the program outputs:
  ```
  The Password is weak
  A strong password should be:
  1. At least 8 characters long
  2. Containing Uppercase letters
  3. Containing Lowercase letters
  4. Containing Special characters
  ```

## How to Run
1. Copy the code into a C++ compiler or IDE.
2. Compile and run the program.
3. Enter a password when prompted.

## Code Explanation
### Function: `isStrong`
- **Input:** A reference to a string (`password`).
- **Output:** Returns `true` if the password meets all criteria; otherwise, returns `false`.
- **Logic:**
  - Iterates through each character of the password.
  - Checks for the presence of uppercase letters, lowercase letters, digits, and special characters.

### Main Function
- Prompts the user to enter a password.
- Calls the `isStrong` function to validate the password.
- Displays whether the password is strong or weak and provides suggestions if weak.

## Example
### Input:
```
Enter Password: Passw0rd!
```
### Output:
```
The Password is strong
```

### Input:
```
Enter Password: weakpass
```
### Output:
```
The Password is weak
A strong password should be:
1. At least 8 characters long
2. Containing Uppercase letters
3. Containing Lowercase letters
4. Containing Special characters
```

## Requirements
- A C++ compiler (e.g., GCC, Clang, or Visual Studio).
- C++ Standard Library headers: `<iostream>`, `<string>`, `<cctype>`.
- 
Feel free to use, modify, and distribute the code as you see fit.
