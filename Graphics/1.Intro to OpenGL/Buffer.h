#pragma once

class Buffer
{
public:
	unsigned int m_VAO;
	unsigned int m_VBO;
	unsigned int m_IBO;

	void generateGrid(unsigned int, unsigned int);
	
	Buffer();
	~Buffer();

private:

};