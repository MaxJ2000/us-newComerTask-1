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
CMAKE_SOURCE_DIR = /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/union_find_set.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/union_find_set.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/union_find_set.dir/flags.make

CMakeFiles/union_find_set.dir/main.cpp.o: CMakeFiles/union_find_set.dir/flags.make
CMakeFiles/union_find_set.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/union_find_set.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/union_find_set.dir/main.cpp.o -c /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set/main.cpp

CMakeFiles/union_find_set.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/union_find_set.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set/main.cpp > CMakeFiles/union_find_set.dir/main.cpp.i

CMakeFiles/union_find_set.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/union_find_set.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set/main.cpp -o CMakeFiles/union_find_set.dir/main.cpp.s

# Object files for target union_find_set
union_find_set_OBJECTS = \
"CMakeFiles/union_find_set.dir/main.cpp.o"

# External object files for target union_find_set
union_find_set_EXTERNAL_OBJECTS =

union_find_set: CMakeFiles/union_find_set.dir/main.cpp.o
union_find_set: CMakeFiles/union_find_set.dir/build.make
union_find_set: CMakeFiles/union_find_set.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable union_find_set"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/union_find_set.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/union_find_set.dir/build: union_find_set

.PHONY : CMakeFiles/union_find_set.dir/build

CMakeFiles/union_find_set.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/union_find_set.dir/cmake_clean.cmake
.PHONY : CMakeFiles/union_find_set.dir/clean

CMakeFiles/union_find_set.dir/depend:
	cd /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set/cmake-build-debug /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set/cmake-build-debug /home/john/Documents/Code/UniqueStudio/Newcomer-task/1/union-find-set/cmake-build-debug/CMakeFiles/union_find_set.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/union_find_set.dir/depend

