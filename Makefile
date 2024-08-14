CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

# use all .cpp files in this directory
# add a dependency on the header files
VulkanWindowTest: *.cpp *.hpp
	g++ $(CFLAGS) -o VulkanWindowTest *.cpp $(LDFLAGS)


.PHONY: test clean

test: VulkanWindowTest
	./VulkanWindowTest

clean:
	rm -f VulkanWindowTest