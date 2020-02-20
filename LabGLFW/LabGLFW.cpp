#include <GLFW/glfw3.h>
#include <cmath>

#pragma comment(lib, "GLFW3.lib")
#pragma comment(lib, "OpenGL32.lib")

int main(void) {
	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	
	if (!window) {
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window)) {
		/* Render here */
		glClearColor(0.95f, 0, 0, 0);
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_TRIANGLES);
		glColor3f(0, 0.6f, 0);
		glVertex3f(-1.0f, -1.0f, 0.0f); // bottom left
		glVertex3f(1.0f, -1.0f, 0.0f); // bottom right
		glVertex3f(0.0f, 1.0f, 0.0f); // middle top
		glEnd();
		glLoadIdentity();
		float angle = 0.1*(float)glfwGetTime(); // This GLFW function returns the time in seconds as a double
		float c = 0.1f * std::cos(angle * 3.14159f / 180.0f);
		float s = 0.1f * std::cos(angle * 3.14159f / 180.0f);
		glTranslatef(c, s, 0.0f);
		glScalef(1 + c, 1 + s, 1.0f);
		glRotatef(angle * 30.0f, 0.0f, 0.0f, 1.0f);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}