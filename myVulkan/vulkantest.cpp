#include <vulkan\vulkan.h>

#include <iostream>
#include <stdexcept>
#include <functional>
#include <cstdlib>

class HelloTriangleApplication {
public:
	void run() {
		initVulKan();
		mainLoop();
		cleanup();
	}
private:
	void initVulKan() {

	}

	void mainLoop() {

	}

	void cleanup() {

	}
};

int main() {
	HelloTriangleApplication app;

	try {
		app.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << "\n";
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}