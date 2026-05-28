def is_leap_year(year: int) -> bool:
    if year % 400 == 0:
        return True
    if year % 100 == 0:
        return False
    return year % 4 == 0


def read_int(prompt: str) -> int | None:
    try:
        return int(input(prompt).strip())
    except ValueError:
        print("Invalid input. Please enter a valid integer year.")
        return None


def check_single_year() -> None:
    year = read_int("\nEnter a year: ")
    if year is None:
        return

    if is_leap_year(year):
        print(f"{year} is a leap year.")
    else:
        print(f"{year} is not a leap year.")


def check_year_range() -> None:
    start = read_int("\nEnter start year: ")
    if start is None:
        return

    end = read_int("Enter end year: ")
    if end is None:
        return

    if start > end:
        print("Start year cannot be greater than end year.")
        return

    leap_years = [str(y) for y in range(start, end + 1) if is_leap_year(y)]
    print(f"\nLeap years from {start} to {end}:")
    print(" ".join(leap_years) if leap_years else "None")


def main() -> None:
    while True:
        print("\n=== Leap Year Tool (Python) ===")
        print("1. Check a single year")
        print("2. List leap years in a range")
        print("3. Exit")
        choice = input("Choose an option (1-3): ").strip()

        if choice == "1":
            check_single_year()
        elif choice == "2":
            check_year_range()
        elif choice == "3":
            print("Goodbye!")
            break
        else:
            print("Please choose a valid option (1-3).")


if __name__ == "__main__":
    main()
