CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Algorithm.o stringRotate.o

LIBS =

TARGET =	Algorithm.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
