#ifndef CLIPBOARDCONTROLLER_H
#define CLIPBOARDCONTROLLER_H

#include <QClipboard>

class ClipboardController
{

private:
    ClipboardController();
    static ClipboardController *instance;
public:
    static ClipboardController *get_instance();
};

#endif // CLIPBOARDCONTROLLER_H
