# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jack/sddm.bak

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jack/sddm.bak/build

# Utility rule file for ConfigurationTest_automoc.

# Include the progress variables for this target.
include test/CMakeFiles/ConfigurationTest_automoc.dir/progress.make

test/CMakeFiles/ConfigurationTest_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/jack/sddm.bak/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc for target ConfigurationTest"
	cd /home/jack/sddm.bak/build/test && /usr/bin/cmake -E cmake_autogen /home/jack/sddm.bak/build/test/CMakeFiles/ConfigurationTest_automoc.dir/ Release

ConfigurationTest_automoc: test/CMakeFiles/ConfigurationTest_automoc
ConfigurationTest_automoc: test/CMakeFiles/ConfigurationTest_automoc.dir/build.make

.PHONY : ConfigurationTest_automoc

# Rule to build all files generated by this target.
test/CMakeFiles/ConfigurationTest_automoc.dir/build: ConfigurationTest_automoc

.PHONY : test/CMakeFiles/ConfigurationTest_automoc.dir/build

test/CMakeFiles/ConfigurationTest_automoc.dir/clean:
	cd /home/jack/sddm.bak/build/test && $(CMAKE_COMMAND) -P CMakeFiles/ConfigurationTest_automoc.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/ConfigurationTest_automoc.dir/clean

test/CMakeFiles/ConfigurationTest_automoc.dir/depend:
	cd /home/jack/sddm.bak/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jack/sddm.bak /home/jack/sddm.bak/test /home/jack/sddm.bak/build /home/jack/sddm.bak/build/test /home/jack/sddm.bak/build/test/CMakeFiles/ConfigurationTest_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/ConfigurationTest_automoc.dir/depend

