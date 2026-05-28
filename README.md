# Leap Year Tool

[![Python](https://img.shields.io/badge/Python-3.10%2B-blue?logo=python&logoColor=white)](https://www.python.org/)
[![C](https://img.shields.io/badge/C-GCC-orange?logo=c)](https://www.msys2.org/)
[![License](https://img.shields.io/badge/License-MIT-green)](LICENSE)
[![GitHub](https://img.shields.io/badge/GitHub-arifislaminfo-181717?logo=github)](https://github.com/arifislaminfo)

A small, beginner-friendly CLI that checks whether a year is a leap year — implemented in **both C and Python** so you can compare how the same logic looks in two languages.
Perfect for learning date rules, practicing terminal apps, or forking and extending with your own features (GUI, API, tests, and more).

---

## Why this project?

Leap years look simple until you hit edge cases like **1900** (not leap) and **2000** (leap). This repo keeps the logic clear, readable, and easy to run — no frameworks, no bloat.

| Year  | Leap? | Why                          |
| ----- | ----- | ---------------------------- |
| 2024  | Yes   | Divisible by 4               |
| 1900  | No    | Divisible by 100, not by 400 |
| 2000  | Yes   | Divisible by 400             |

---

## Features

- Check a **single year** interactively
- List **all leap years** in a range (e.g. 1900–2100)
- **Input validation** for invalid entries
- Same menu flow in **C** and **Python**
- Clean, commented logic you can reuse anywhere

---

## Demo

```
=== Leap Year Tool (Python) ===
1. Check a single year
2. List leap years in a range
3. Exit
Choose an option (1-3): 1

Enter a year: 2024
2024 is a leap year.
```

```
Choose an option (1-3): 2

Enter start year: 2000
Enter end year: 2028

Leap years from 2000 to 2028:
2000 2004 2008 2012 2016 2020 2024 2028
```

---

## Quick start

### Clone the repo

```bash
git clone https://github.com/arifislaminfo/leapyear-tool.git
cd leapyear-tool
```

### Python (recommended — no compiler needed)

**Requirements:** Python 3.10+

```powershell
python leap_year_tool.py
```

Or, if you use the Windows launcher:

```powershell
py -3.12 leap_year_tool.py
```

### C (optional)

**Requirements:** GCC (e.g. [MSYS2](https://www.msys2.org/) on Windows)

```powershell
gcc leap_year_tool.c -o leap_year_tool
.\leap_year_tool
```

---

## Leap year rule

A year is a **leap year** if:

1. It is divisible by **400**, **or**
2. It is divisible by **4** but **not** by **100**

```python
def is_leap_year(year: int) -> bool:
    if year % 400 == 0:
        return True
    if year % 100 == 0:
        return False
    return year % 4 == 0
```

The C version uses the same logic in `is_leap_year()`.

---

## Project structure

```
leapyear-tool/
├── leap_year_tool.py   # Python CLI
├── leap_year_tool.c    # C CLI
├── README.md
└── LICENSE
```

---

## Fork it — ideas to extend

Looking for a first open-source contribution or a portfolio piece? Fork this repo and try:

- [ ] Add unit tests (`pytest` / Unity for C)
- [ ] Accept year from command-line args: `python leap_year_tool.py 2024`
- [ ] Build a simple **GUI** with Tkinter or a web page
- [ ] Export range results to CSV or JSON
- [ ] Add a REST API (FastAPI / Flask)
- [ ] Support other calendars or locales

Pull requests and ideas are welcome.

---

## Contributing

1. **Fork** the repository
2. Create a branch: `git checkout -b feature/my-improvement`
3. Commit your changes: `git commit -m "Add: describe your change"`
4. Push and open a **Pull Request**

Please keep changes focused and easy to review.

---

## License

This project is licensed under the [MIT License](LICENSE) — fork and modify freely with attribution.

---

## Author

**[Arif (@arifislaminfo)](https://github.com/arifislaminfo)** — CSE student building practical projects in C and Python.

If this helped you, give the repo a **star** and feel free to **fork** it.

### More from this author

- [Electronic Gadget Shop Management System](https://github.com/arifislaminfo/Electronic-Gadget-Shop-Management-System) — C shop management system for beginners
- [PID Controlled Human Following Robot](https://github.com/arifislaminfo/PID-Controlled-Human-Following-Robot) — ESP32 + Arduino + MediaPipe project
