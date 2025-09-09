# **Virtual Memory Paging Simulator**

A **C++ project** that simulates **Virtual Memory Management** using different **Page Replacement Algorithms**.  
It demonstrates key **Operating System concepts** such as **page faults, memory management, and scheduling**.  

---

## **Features**
- Implements:
  - **FIFO (First In, First Out)**
  - **LRU (Least Recently Used)** *(coming soon)*
  - **Optimal Replacement** *(coming soon)*
- Tracks:
  - **Page Hits**
  - **Page Faults**
- Supports **custom page reference strings** and **frame sizes**

---

## **Tech Stack**
- **Language**: C++
- **Compiler**: g++
- **Concepts Covered**: Virtual Memory, Page Replacement, OS Scheduling

---

## **Getting Started**

### **1. Clone the Repository**
```bash
git clone https://github.com/<your-username>/PagingSimulator.git
cd PagingSimulator
```

### **2. Compile the Program**
```bash
g++ paging.cpp -o paging

```

### **3. Run the Program**
```bash
./paging
```

### **Learning Outcomes**
1. Implemented OS-level memory management concepts
2. Simulated page faults and replacement decisions
3. Strengthened understanding of FIFO vs LRU vs Optimal trade-offs

### **Future Enhancements**
1. Add LRU and Optimal algorithms
2. Compare performance between algorithms
3. Provide step-by-step visualization of page replacement

