Wanted to brush up on my C++ after learning some basic C
Following this tutorial:
https://www.youtube.com/watch?v=vLnPwxZdW4Y

**** Currently at 4:58:49 minutes, strating function templates

Development Setup:
   - Download and use VS Code (our IDE)
   - Make sure g++ is downloaded (our compiler)
   - Ready to run

Making a File and Running It:
   - In the local directory
   - mkdir folderName
   - cd folderName
   - touch fileName.cpp
   - Put the code in that file and save
   - g++ fileName.cpp
   - ./a.out
   - OUTPUT

Added Function to ~/.bashrc file:
   - Tired of going through all those steps so I added this function to the file

mcpp() {
  if [ -z "$1" ]; then
    echo "Usage: mcpp <name>"
    return 1
  fi
  cd ~/code/cpp/cpp-tutorials && mkdir "$1" && cd "$1" && touch "$1.cpp"
}

   - source ~/.bashrc
   - Reopen terminal then the mcpp command is working