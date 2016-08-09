#include "clipboardcontroller.h"

ClipboardController *ClipboardController::instance = 0;

ClipboardController::ClipboardController()
{

}


ClipboardController *ClipboardController::get_instance()
{
    if(!instance){
        instance = new ClipboardController();
    }
    return instance;
}
