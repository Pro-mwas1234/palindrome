def is_palindrome(text: str):
    if text == text[::-1]:
        print("The string is a palindrome!")
    else:
        print("This string is not a palindrome!")


def main():
    text = input("Enter a string: ")
    is_palindrome(text)


if __name__ == "__main__":
    main()
