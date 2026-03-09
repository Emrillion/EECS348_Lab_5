CC=gcc
CFLAGS=-Wall -g

# default target builds both programs
all: SalesReportMain MatrixManipulation

# individual targets
SalesReportMain: SalesReportMain.c
	$(CC) $(CFLAGS) -o $@ $<

MatrixManipulation: MatrixManipulation.c
	$(CC) $(CFLAGS) -o $@ $<

# pattern rule (optional) for future .c files
%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f SalesReportMain MatrixManipulation *.o