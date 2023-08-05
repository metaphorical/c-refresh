# Makefile

# Compiler and compiler flags
CC := gcc
CFLAGS := -Wall -Wextra

# Target executable name
TARGET := game_of_life

# Source files
SRCS := main.c lib/files.c

# Object files (auto-generated from source files)
OBJS := $(SRCS:.c=.o)

# Include paths (if needed, add the paths to your local headers)
INCLUDES := -I.

# Build rule for the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^ $(LIBS)

# Build rule for object files from C source files
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

# Clean rule to remove generated files
clean:
	rm -f $(OBJS) $(TARGET)
