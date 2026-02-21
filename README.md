# distance_control_system,

# 🚗 Autonomous Vehicle Distance Control System

This project is a **C-based simulation** of an autonomous vehicle's distance control and emergency braking system. It simulates real-time sensor data to make driving decisions, such as speed adjustment and safety analysis.

## 🛠 Features
* **Sensor Data Simulation:** Generates dynamic distance data using `stdlib.h` and `time.h`.
* **Emergency Braking:** Automatically triggers a warning if any sensor detects an object closer than **20cm**.
* **Smart Speed Suggestion:** Analyzes environment density and suggests an optimal speed (10km/h to 80km/h).
* **Obstacle Detection:** Identifies the nearest obstacle to ensure immediate awareness.
* **Data Organization:** Implements the **Bubble Sort** algorithm to sort sensor readings for systematic reporting.

## 💻 Technologies Used
* **Language:** C (C99 Standard)
* **Concepts:** Arrays, Functions, Pointers, Algorithms (Sorting), and Randomization.

## 🚀 How to Run
1.  Ensure you have a C compiler installed (GCC, Clang, or MSVC).
2.  Clone the repository:
    ```bash
    git clone [https://github.com/yourusername/distance-control-system.git](https://github.com/yourusername/distance-control-system.git)
    ```
3.  Compile the code:
    ```bash
    gcc distance_control_system.c -o system
    ```
4.  Run the application:
    ```bash
    ./system
    ```

## 📊 Logic & Safety Thresholds
The system evaluates the environment based on the following average distance logic:

| Average Distance | Driving Status | Suggested Speed |
| :--- | :--- | :--- |
| > 150 cm | Road Clear | 80 km/h |
| 100 - 150 cm | Cautious Driving | 50 km/h |
| 50 - 100 cm | Slow Down | 30 km/h |
| < 50 cm | High Danger | 10 km/h |

## 🛡️ Future Improvements
- [ ] Integration of a real-time data log file (.txt or .csv).
- [ ] Transitioning to more advanced sorting algorithms like **QuickSort**.
- [ ] Developing a basic GUI or dashboard simulation.

---
*Developed as a part of my Computer Science / MIS learning journey.*
