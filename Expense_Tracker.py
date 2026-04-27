records = []


def add_income():
    amount = float(input("Enter income amount: Rs. "))
    source = input("Enter income source: ")

    record = {
        "type": "Income",
        "amount": amount,
        "category": source
    }

    records.append(record)
    print("Income added successfully.")


def add_expense():
    amount = float(input("Enter expense amount: Rs. "))
    category = input("Enter expense category: ")

    record = {
        "type": "Expense",
        "amount": amount,
        "category": category
    }

    records.append(record)
    print("Expense added successfully.")


def view_records():
    if len(records) == 0:
        print("No records found.")
        return

    print("\n===== All Records =====")

    for i in range(len(records)):
        print("\nRecord", i + 1)
        print("Type     :", records[i]["type"])
        print("Amount   : Rs.", records[i]["amount"])
        print("Category :", records[i]["category"])


def view_summary():
    total_income = 0
    total_expense = 0

    for record in records:
        if record["type"] == "Income":
            total_income += record["amount"]
        elif record["type"] == "Expense":
            total_expense += record["amount"]

    balance = total_income - total_expense

    print("\n===== Summary =====")
    print("Total Income  : Rs.", total_income)
    print("Total Expense : Rs.", total_expense)
    print("Balance       : Rs.", balance)


def search_by_category():
    category = input("Enter category/source to search: ")
    found = False

    print("\n===== Search Results =====")

    for record in records:
        if record["category"].lower() == category.lower():
            print("Type     :", record["type"])
            print("Amount   : Rs.", record["amount"])
            print("Category :", record["category"])
            print("----------------------")
            found = True

    if found == False:
        print("No records found.")


def delete_record():
    view_records()

    if len(records) == 0:
        return

    number = int(input("Enter record number to delete: "))

    if number >= 1 and number <= len(records):
        records.pop(number - 1)
        print("Record deleted successfully.")
    else:
        print("Invalid record number.")


def main():
    while True:
        print("\n==== Personal Expense Tracker ====")
        print("1. Add Income")
        print("2. Add Expense")
        print("3. View All Records")
        print("4. View Summary")
        print("5. Search by Category")
        print("6. Delete Record")
        print("7. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            add_income()
        elif choice == "2":
            add_expense()
        elif choice == "3":
            view_records()
        elif choice == "4":
            view_summary()
        elif choice == "5":
            search_by_category()
        elif choice == "6":
            delete_record()
        elif choice == "7":
            print("Thank you for using Expense Tracker.")
            break
        else:
            print("Invalid choice. Try again.")


main()
