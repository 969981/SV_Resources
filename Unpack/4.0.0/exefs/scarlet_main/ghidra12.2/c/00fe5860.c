/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe5860; name: FUN_00fe5860
 */


ulong FUN_00fe5860(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (0xfff < param_2) {
    param_2 = 0x1000;
  }
  if (param_2 < 0x11) {
    param_2 = 0x10;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = param_1 / param_2;
  }
  lVar3 = param_1 - uVar2 * param_2;
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = param_2 - lVar3;
  }
  param_1 = lVar1 + param_1;
  if ((param_2 != 0x1000) && (0x1e0 < param_1)) {
    if (param_1 == 0x1f0) {
      return 0x200;
    }
    if (0x220 < param_1) {
      if (param_1 < 0x241) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x240 / param_2;
        }
        if (uVar2 * param_2 == 0x240) {
          return 0x240;
        }
      }
      if (param_1 < 0x261) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x260 / param_2;
        }
        if (uVar2 * param_2 == 0x260) {
          return 0x260;
        }
      }
      if (param_1 < 0x271) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x270 / param_2;
        }
        if (uVar2 * param_2 == 0x270) {
          return 0x270;
        }
      }
      if (param_1 < 0x281) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x280 / param_2;
        }
        if (uVar2 * param_2 == 0x280) {
          return 0x280;
        }
      }
      if (param_1 < 0x2a1) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x2a0 / param_2;
        }
        if (uVar2 * param_2 == 0x2a0) {
          return 0x2a0;
        }
      }
      if (param_1 < 0x2d1) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x2d0 / param_2;
        }
        if (uVar2 * param_2 == 0x2d0) {
          return 0x2d0;
        }
      }
      if (param_1 < 0x2e1) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x2e0 / param_2;
        }
        if (uVar2 * param_2 == 0x2e0) {
          return 0x2e0;
        }
      }
      if (param_1 < 0x301) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x300 / param_2;
        }
        if (uVar2 * param_2 == 0x300) {
          return 0x300;
        }
      }
      if (param_1 < 0x331) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x330 / param_2;
        }
        if (uVar2 * param_2 == 0x330) {
          return 0x330;
        }
      }
      if (param_1 < 0x361) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x360 / param_2;
        }
        if (uVar2 * param_2 == 0x360) {
          return 0x360;
        }
      }
      if (param_1 < 0x381) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x380 / param_2;
        }
        if (uVar2 * param_2 == 0x380) {
          return 0x380;
        }
      }
      if (param_1 < 0x3b1) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x3b0 / param_2;
        }
        if (uVar2 * param_2 == 0x3b0) {
          return 0x3b0;
        }
      }
      if (param_1 < 0x401) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x400 / param_2;
        }
        if (uVar2 * param_2 == 0x400) {
          return 0x400;
        }
      }
      if (param_1 < 0x451) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x450 / param_2;
        }
        if (uVar2 * param_2 == 0x450) {
          return 0x450;
        }
      }
      if (param_1 < 0x491) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x490 / param_2;
        }
        if (uVar2 * param_2 == 0x490) {
          return 0x490;
        }
      }
      if (param_1 < 0x4c1) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x4c0 / param_2;
        }
        if (uVar2 * param_2 == 0x4c0) {
          return 0x4c0;
        }
      }
      if (param_1 < 0x551) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x550 / param_2;
        }
        if (uVar2 * param_2 == 0x550) {
          return 0x550;
        }
      }
      if (param_1 < 0x601) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x600 / param_2;
        }
        if (uVar2 * param_2 == 0x600) {
          return 0x600;
        }
      }
      if (param_1 < 0x661) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x660 / param_2;
        }
        if (uVar2 * param_2 == 0x660) {
          return 0x660;
        }
      }
      if (param_1 < 0x6d1) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x6d0 / param_2;
        }
        if (uVar2 * param_2 == 0x6d0) {
          return 0x6d0;
        }
      }
      if (param_1 < 0x801) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x800 / param_2;
        }
        if (uVar2 * param_2 == 0x800) {
          return 0x800;
        }
      }
      if (param_1 < 0x991) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0x990 / param_2;
        }
        if (uVar2 * param_2 == 0x990) {
          return 0x990;
        }
      }
      if (param_1 < 0xaa1) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = 0xaa0 / param_2;
        }
        if (uVar2 * param_2 == 0xaa0) {
          return 0xaa0;
        }
      }
      lVar1 = 0;
      if ((param_1 & 0xfff) != 0) {
        lVar1 = 0x1000 - (param_1 & 0xfff);
      }
      param_1 = lVar1 + param_1;
    }
  }
  return param_1;
}


