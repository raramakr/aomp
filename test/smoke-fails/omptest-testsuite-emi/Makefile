include ../../Makefile.defs

TESTNAME     = omptest-testsuite-emi
TESTSRC_MAIN = omptest_testsuite_emi.cpp
TESTSRC_AUX  =
TESTSRC_ALL  = $(TESTSRC_MAIN) $(TESTSRC_AUX)

CLANG        ?= clang++
OMP_BIN      = $(AOMP)/bin/$(CLANG)
RUNENV       += OMPTEST_USE_OMPT_EMI=1
RUNENV       += OMPTEST_RUN_AS_TESTSUITE=1
RUNCMD       = ./$(TESTNAME)
CC           = $(OMP_BIN) $(VERBOSE) $(OMPTEST)
#-ccc-print-phases
#"-\#\#\#"

include ../Makefile.rules
