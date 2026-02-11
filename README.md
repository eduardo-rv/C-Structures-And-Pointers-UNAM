🚀 C Development & Git Cheat Sheet
Course: Programación I - UNAM FES Acatlán

Student: Eduardo Rosas Vazquez

This guide contains the essential commands for editing, compiling, and managing C projects in a Linux-based terminal environment like GitHub Codespaces.

📝 1. Text Editing (Nano)
Use these commands to modify your source code directly in the terminal.

nano main.c — Open or create a C file for editing.

Ctrl + O + Enter — Save (Write Out) changes to the file.

Ctrl + X — Exit the editor.

Ctrl + K — Cut (delete) a whole line.

Ctrl + U — Uncut (paste) a line.

🛠️ 2. Compiling and Running (GCC)
Turn your C logic into an executable program.

gcc main.c -o converter — Compile the code and create an output file named converter.

./converter — Run the compiled program.

📂 3. File Navigation (Linux)
Move through your project directories.

ls — List all files in the current folder.

cd [folder_name] — Change Directory to enter a folder.

pwd — Print Working Directory to see exactly where you are.

☁️ 4. Version Control (Git)
Keep your progress safe on GitHub.

git status — Check which files have been modified.

git add . — Prepare all changes for saving (Staging).

git commit -m "Your message" — Save a snapshot of your progress locally.

git push origin main — Upload your changes to the GitHub repository.

