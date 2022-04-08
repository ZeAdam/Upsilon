#ifndef BOOTLOADER_INTERFACE
#define BOOTLOADER_INTERFACE

#include <stdint.h>
#include <kandinsky/context.h>
#include <escher/image.h>

namespace Bootloader {
class Interface {

public:
  static void drawImage(KDContext * ctx, const Image * image, int offset);
  static void drawLoading();
  static void drawHeader();
  static void drawMenu();
  static void drawFlasher();
  static void drawAbout();
  static void drawCrash(const char * error);
  static void drawRecovery();
  static void drawInstallerSelection();
  static void drawBootloaderUpdate();
  static void drawEpsilonAdvertisement();

};

}

#endif