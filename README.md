# Palindrome Checker

A small command-line project with Python and C implementations for checking whether text reads the same forward and backward.

## Implementations

- `palindrome.py` checks a string entered by the user.
- `palindrome.c` checks a single word entered by the user.

Both implementations compare the input exactly as entered. They are case-sensitive and do not ignore spaces or punctuation.

## Run the Python version

Requires Python 3.

```bash
python3 palindrome.py
```

Enter a string when prompted. The program reports whether it is a palindrome.

## Build and run the C version

Requires a C compiler such as GCC.

```bash
gcc palindrome.c -o palindrome
./palindrome
```

Enter one word when prompted.

## Example

```text
Enter a string: level
The string is a palindrome!
```

## How it works

The Python implementation compares the input with its reverse. The C implementation compares characters from the beginning and end of the word, moving toward the middle.
