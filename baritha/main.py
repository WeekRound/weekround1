print("-----------------------------")
print("Calculator V1")

def main():
    while True:
        first = input("Input first number (or type 'exit' to quit): ")
        if first.lower() == "exit":
            print("Goodbye!")
            break

        try:
            n1 = int(first)
            n2 = int(input("Input second number: "))

            print("Which operation do you prefer?")
            print("1 = add, 2 = sub, 3 = div, 4 = mul")
            op = int(input("Enter operation number: "))

            if op == 1:
                print("Answer is:", n1 + n2)
            elif op == 2:
                print("Answer is:", n1 - n2)
            elif op == 3:
                if n2 == 0:
                    print("Error: Cannot divide by zero.")
                else:
                    print("Answer is:", n1 / n2)
            elif op == 4:
                print("Answer is:", n1 * n2)
            else:
                print("Invalid operation selected.")

        except ValueError:
            print("Invalid input. Please enter numbers and a valid operation.")

main()
