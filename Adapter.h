#pragma once
#include <string>

class OldPrinter {
public:
    std::string OldPrint() const { return "Printing from old printer"; }
};

class Printer {
public:
    virtual std::string Print() const = 0;
    virtual ~Printer() = default;
};

class PrinterAdapter : public Printer {
    OldPrinter* oldPrinter;
public:
    PrinterAdapter(OldPrinter* p) : oldPrinter(p) {}
    std::string Print() const override { return oldPrinter->OldPrint(); }
};
