f=open("todo.txt","a+")
task=input("Enter task: ")
f.write(task+"\n")
f.seek(0)
print("Your tasks:")
print(f.read())
f.close()

// simple todo
