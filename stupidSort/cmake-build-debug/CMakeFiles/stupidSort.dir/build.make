# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/john/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.6183.77/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/john/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.6183.77/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stupidSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stupidSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stupidSort.dir/flags.make

CMakeFiles/stupidSort.dir/main.cpp.o: CMakeFiles/stupidSort.dir/flags.make
CMakeFiles/stupidSort.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stupidSort.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stupidSort.dir/main.cpp.o -c /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort/main.cpp

CMakeFiles/stupidSort.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stupidSort.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort/main.cpp > CMakeFiles/stupidSort.dir/main.cpp.i

CMakeFiles/stupidSort.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stupidSort.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort/main.cpp -o CMakeFiles/stupidSort.dir/main.cpp.s

# Object files for target stupidSort
stupidSort_OBJECTS = \
"CMakeFiles/stupidSort.dir/main.cpp.o"

# External object files for target stupidSort
stupidSort_EXTERNAL_OBJECTS =

stupidSort: CMakeFiles/stupidSort.dir/main.cpp.o
stupidSort: CMakeFiles/stupidSort.dir/build.make
stupidSort: CMakeFiles/stupidSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stupidSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stupidSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stupidSort.dir/build: stupidSort

.PHONY : CMakeFiles/stupidSort.dir/build

CMakeFiles/stupidSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stupidSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stupidSort.dir/clean

CMakeFiles/stupidSort.dir/depend:
	cd /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort/cmake-build-debug /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort/cmake-build-debug /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/stupidSort/cmake-build-debug/CMakeFiles/stupidSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stupidSort.dir/depend

