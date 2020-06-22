#include "terminal.hpp"
#include <rang.hpp>

bool Terminal::debug = false;

void Terminal::enable_debug() {
	debug = true;
}

void Terminal::toggle_debug() {
	if (debug) {
		debug = false;
	} else {
		debug = true;
	}
}

void Terminal::out_debug(const std::string &msg) {
	if (debug) {
		std::cout << "[" << rang::fg::blue << "DEBUG" << rang::fg::reset << "] " << msg << std::endl;
	}
}

void Terminal::out_info(const std::string &msg) {
	std::cout << "[INFO] " << msg << std::endl;
}

void Terminal::out_warning(const std::string &msg) {
	std::cout << "[" << rang::fg::yellow << "WARNING" << rang::fg::reset << "] " << msg << std::endl;
}

void Terminal::out_error(const std::string &msg) {
	std::cout << "[" << rang::fg::red << "ERROR" << rang::fg::reset << "] " << msg << std::endl;
}

void Terminal::wait_for_input() {
	std::cout << "\nPress Enter to continue..." << std::endl;
	std::cin.ignore();
}