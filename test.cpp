#include "pch.h"
#include "Adapter.h"

TEST(AdapterTest, AdapterReturnsOldPrint) {
    OldPrinter oldPrinter;
    PrinterAdapter adapter(&oldPrinter);
    EXPECT_EQ(adapter.Print(), "Printing from old printer");
}
