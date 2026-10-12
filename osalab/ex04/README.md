# PROGRAM 4 : PROCESS CREATION AND MANAGEMENT USING LINUX SYSTEM CALLS

## AIM :
To study process creation, execution, and synchronization using Linux process system calls:
• fork()
• exec()
• wait()
• getpid()
• getppid()
and to understand parent-child process relationships.

## CONTEXT :
A process is a program that is currently being executed. Linux allows a process to create another process (called a child process) and manage its execution.

## LINUX SYSTEM CALLS USED :

| System Call | Function |
|---|---|
| `fork()` | Creates a new child process by duplicating the current (parent) process. |
| `getpid()` | Returns the Process ID (PID) of the currently executing process. |
| `getppid()` | Returns the Process ID (PID) of the parent process. |
| `wait()` | Suspends the parent process until the child process terminates. |
| `sleep()` | Suspends the execution of the current process for the specified number of seconds. *(Library function that internally uses kernel timing services; often included in OS labs.)* |

## SOURCE CODE (Process Creation) :
**File:** [forkDemo.c](https://github.com/Balakrishna0907/osLab/blob/e8972d1e2c1c5162f3e1aace93b050e4c35a48ce/ex04/ProcessCreation/forkDemo.c)

## COMPILATION :

```bash
gcc forkDemo.c -o forkDemo
```

## EXECUTION :

```bash
./forkDemo
```
## OUTPUT :
![Output for Experiment 4_1](https://github.com/VIGNESHWAR2058/osLab/blob/e770c6aa4d6ee765483e2b7a80153cbc0bcdc06d/osalab/ex04/ProcessCreation/image.png)

## SOURCE CODE (Process Management) :
**File:** [waitDemo.c](https://github.com/VIGNESHWAR2058/osLab/tree/fc718462f0ca4584889655dd5fac6c32ab1dacd0/osalab/ex04)

## COMPILATION :

```bash
gcc waitDemo.c -o waitDemo
```

## EXECUTION :

```bash
./waitDemo
```

## OUTPUT :
![Output for Experiment 4_2](https://github.com/VIGNESHWAR2058/osLab/blob/65f07c976d6d00e34f8d84e7c4cf9f3d2ec586bc/osalab/ex04/ProcessManagement/image.png)
