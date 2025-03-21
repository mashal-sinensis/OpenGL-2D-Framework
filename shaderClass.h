#pragma once

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cerrno>

std::string get_file_contents(const char* filename);

class Shader
{
public:
	// Reference ID
	GLuint ID;
	// Constructor that builds the Shader Program from 2 different shaders
	Shader(const char* vertexFile, const char* fragmentFile);
	void Activate();
	void Delete();
private:
	// Checks if the different shaders have compiled properly
	void compileErrors(unsigned int shader, const char* type);
};