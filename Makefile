CC=gcc
CFLAGS=-Wall -g

all: SalesReportMain

SalesReportMain: SalesReportMain.c
	$(CC) $(CFLAGS) -o SalesReportMain SalesReportMain.c

clean:
	rm -f SalesReportMain