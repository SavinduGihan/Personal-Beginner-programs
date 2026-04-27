FILE_NAME = "passwords.txt"


def add_password():
    website = input("Enter website/app name: ")
    username = input("Enter username: ")
    password = input("Enter password: ")

    with open(FILE_NAME, "a") as file:
        file.write(website + "," + username + "," + password + "\n")

    print("Password saved successfully!")


def view_passwords():
    try:
        with open(FILE_NAME, "r") as file:
            data = file.readlines()

            if len(data) == 0:
                print("No passwords saved.")
            else:
                print("\nSaved Passwords:")
                for line in data:
                    website, username, password = line.strip().split(",")
                    print("Website/App:", website)
                    print("Username:", username)
                    print("Password:", password)
                    print("--------------------")

    except FileNotFoundError:
        print("No password file found.")


def search_password():
    search = input("Enter website/app name to search: ")
    found = False

    try:
        with open(FILE_NAME, "r") as file:
            for line in file:
                website, username, password = line.strip().split(",")

                if website.lower() == search.lower():
                    print("\nPassword Found:")
                    print("Website/App:", website)
                    print("Username:", username)
                    print("Password:", password)
                    found = True

        if found == False:
            print("Password not found.")

    except FileNotFoundError:
        print("No password file found.")


while True:
    print("\n===== Password Manager =====")
    print("1. Add Password")
    print("2. View Passwords")
    print("3. Search Password")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        add_password()
    elif choice == "2":
        view_passwords()
    elif choice == "3":
        search_password()
    elif choice == "4":
        print("Exiting program.")
        break
    else:
        print("Invalid choice. Try again.")
