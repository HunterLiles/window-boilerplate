#include <GLFW/glfw3.h>
#include <iostream>

void processInput(GLFWwindow* window);

int main() {
				glfwInit();
				glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
				glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

				GLFWwindow* window = glfwCreateWindow(800, 600, "Graphics Engine", NULL, NULL);
				if (window == NULL) {
								std::cout << "Failed to create glfw window." << std::endl;
								glfwTerminate();
								return -1;
				}
				glfwMakeContextCurrent(window);

				while (!glfwWindowShouldClose(window)){
								processInput(window);

								glfwSwapBuffers(window);
								glfwPollEvents();
				}
				glfwTerminate();
				return 0;
}

void processInput(GLFWwindow* window) {
				if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
								glfwSetWindowShouldClose(window, true);
}
