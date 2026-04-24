tasks = []

def show_menu():
    print("\n--- To-Do List ---")
    print("1. View tasks")
    print("2. Add task")
    print("3. Remove task")
    print("4. Exit")

while True:
    show_menu()
    choice = input("Choose an option: ")

    if choice == "1":
        if tasks:
            for i, task in enumerate(tasks, 1):
                print(f"{i}. {task}")
        else:
            print("No tasks yet.")

    elif choice == "2":
        task = input("Enter task: ")
        tasks.append(task)
        print(f'"{task}" added.')

    elif choice == "3":
        task = input("Enter task to remove: ")
        if task in tasks:
            tasks.remove(task)
            print(f'"{task}" removed.')
        else:
            print("Task not found.")

    elif choice == "4":
        print("Goodbye!")
        break

    else:
        print("Invalid option.")