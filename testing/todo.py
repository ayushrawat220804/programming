#!/usr/bin/env python
import os
import json
from datetime import datetime

class TodoList:
    def __init__(self, filename="todos.json"):
        self.filename = filename
        self.todos = self.load_todos()
    
    def load_todos(self):
        if os.path.exists(self.filename):
            try:
                with open(self.filename, 'r') as f:
                    return json.load(f)
            except json.JSONDecodeError:
                return []
        return []
    
    def save_todos(self):
        with open(self.filename, 'w') as f:
            json.dump(self.todos, f, indent=2)
    
    def add_todo(self, task):
        todo = {
            "id": len(self.todos) + 1,
            "task": task,
            "completed": False,
            "created_at": datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        }
        self.todos.append(todo)
        self.save_todos()
        return todo
    
    def list_todos(self):
        return self.todos
    
    def complete_todo(self, todo_id):
        for todo in self.todos:
            if todo["id"] == todo_id:
                todo["completed"] = True
                self.save_todos()
                return True
        return False
    
    def delete_todo(self, todo_id):
        for i, todo in enumerate(self.todos):
            if todo["id"] == todo_id:
                del self.todos[i]
                self.save_todos()
                return True
        return False


def display_menu():
    print("\n===== TODO LIST MANAGER =====")
    print("1. Add new task")
    print("2. List all tasks")
    print("3. Mark task as complete")
    print("4. Delete task")
    print("5. Exit")
    return input("Enter your choice (1-5): ")


def main():
    todo_list = TodoList()
    
    while True:
        choice = display_menu()
        
        if choice == '1':
            task = input("Enter task description: ")
            todo = todo_list.add_todo(task)
            print(f"Task added with ID: {todo['id']}")
            
        elif choice == '2':
            todos = todo_list.list_todos()
            if not todos:
                print("No tasks found!")
            else:
                print("\nID | Status | Task")
                print("-" * 50)
                for todo in todos:
                    status = "✓" if todo["completed"] else " "
                    print(f"{todo['id']:2} | [{status}]    | {todo['task']}")
                    
        elif choice == '3':
            try:
                todo_id = int(input("Enter task ID to mark as complete: "))
                if todo_list.complete_todo(todo_id):
                    print("Task marked as complete!")
                else:
                    print("Task not found!")
            except ValueError:
                print("Please enter a valid ID")
                
        elif choice == '4':
            try:
                todo_id = int(input("Enter task ID to delete: "))
                if todo_list.delete_todo(todo_id):
                    print("Task deleted!")
                else:
                    print("Task not found!")
            except ValueError:
                print("Please enter a valid ID")
                
        elif choice == '5':
            print("Goodbye!")
            break
            
        else:
            print("Invalid choice, please try again.")


if __name__ == "__main__":
    main() 