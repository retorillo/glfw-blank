ifeq ($(OS), Windows_NT)
  BUILDTOOL := cl /Zl
else
  # TODO: Linux
endif

buid: app.cpp
	$(BUILDTOOL) app.cpp
