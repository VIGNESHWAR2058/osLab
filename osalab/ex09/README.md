# PROGRAM 9 : MEMORY MANAGEMENT - PAGE REPLACEMENT ALGORITHMS

## AIM :
To simulate page replacement algorithms (FIFO, LRU, and Optimal) (Memory management)

## CONTEXT :
FIFO (First-In, First-Out) Page Replacement Algorithm, which is one of the page replacement techniques used by an operating system for virtual memory management.
When the CPU requests a page that is not currently in the available memory frames, a page fault occurs. If all memory frames are occupied, the operating system must decide which page to remove to make room for the new page. The FIFO algorithm replaces the page that has been in memory the longest (the oldest page).

## SOURCE CODE :
**File :** [exp9.c](https://github.com/VIGNESHWAR2058/osLab/tree/d9e689a225fa706807662cf34d883b732d245be9/osalab/ex09)

## COMPILATION :

```bash
gcc exp9.c -o exp9
```

## EXECUTION :

```bash
./exp9
```

## OUTPUT :
![Output for Experiment 9](https://github.com/Balakrishna0907/osLab/blob/1e04e24b469c368935d96f07eacdfa719337dfde/ex09/output.png)
