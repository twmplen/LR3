# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5

# Include any dependencies generated for this target.
include CMakeFiles/task5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/task5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/task5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task5.dir/flags.make

CMakeFiles/task5.dir/main.cpp.o: CMakeFiles/task5.dir/flags.make
CMakeFiles/task5.dir/main.cpp.o: main.cpp
CMakeFiles/task5.dir/main.cpp.o: CMakeFiles/task5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task5.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/task5.dir/main.cpp.o -MF CMakeFiles/task5.dir/main.cpp.o.d -o CMakeFiles/task5.dir/main.cpp.o -c /home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5/main.cpp

CMakeFiles/task5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/task5.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5/main.cpp > CMakeFiles/task5.dir/main.cpp.i

CMakeFiles/task5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/task5.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5/main.cpp -o CMakeFiles/task5.dir/main.cpp.s

# Object files for target task5
task5_OBJECTS = \
"CMakeFiles/task5.dir/main.cpp.o"

# External object files for target task5
task5_EXTERNAL_OBJECTS =

task5: CMakeFiles/task5.dir/main.cpp.o
task5: CMakeFiles/task5.dir/build.make
task5: CMakeFiles/task5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task5.dir/build: task5
.PHONY : CMakeFiles/task5.dir/build

CMakeFiles/task5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task5.dir/clean

CMakeFiles/task5.dir/depend:
	cd /home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5 /home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5 /home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5 /home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5 /home/Aleksandr1/Documents/453505/OAuP/LR3/Task_5/CMakeFiles/task5.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/task5.dir/depend

