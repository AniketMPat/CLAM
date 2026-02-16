#!/usr/bin/env bash

# Save the current directory (project root)
PROJECT_ROOT=$(pwd)

# Change to the grun subdirectory
cd antlrLab/

# Run the grun command with the file path argument
java org.antlr.v4.gui.TestRig CPP14 translationUnit -gui < "$PROJECT_ROOT/$1"

# Change back to project root
cd "$PROJECT_ROOT"
