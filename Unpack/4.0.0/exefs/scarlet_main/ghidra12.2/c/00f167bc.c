/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f167bc; name: FUN_00f167bc
 */


undefined8 FUN_00f167bc(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  
  uVar1 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  uVar2 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  if (uVar1 < 0x30a) {
    if (uVar1 < 0x2a9) {
      if (uVar1 < 0x22b) {
        if (uVar1 == 0x1a5) {
          if (uVar2 != 1) {
            return 0;
          }
          lVar3 = 0;
        }
        else {
          if (uVar1 != 0x15f) {
            return 0;
          }
          if (2 < (ushort)(uVar2 - 1)) {
            return 0;
          }
          lVar3 = *(long *)(&DAT_03d62d88 + (long)(short)(uVar2 - 1) * 8);
        }
      }
      else if (uVar1 == 0x22b) {
        if (uVar2 == 1) {
          lVar3 = 1;
        }
        else {
          if (uVar2 != 3) {
            return 0;
          }
          lVar3 = 2;
        }
      }
      else {
        if (uVar1 != 0x288) {
          return 0;
        }
        if (uVar2 != 1) {
          return 0;
        }
        lVar3 = 0x10;
      }
    }
    else if (uVar1 < 0x2ce) {
      if (uVar1 == 0x2a9) {
        if (uVar2 != 1) {
          return 0;
        }
        lVar3 = 3;
      }
      else {
        if (uVar1 != 0x2cc) {
          return 0;
        }
        if (uVar2 != 1) {
          return 0;
        }
        lVar3 = 0x11;
      }
    }
    else if (uVar1 == 0x2ea) {
      if (uVar2 != 1) {
        return 0;
      }
      lVar3 = 4;
    }
    else if (uVar1 == 0x2ce) {
      if (uVar2 != 4) {
        return 0;
      }
      lVar3 = 0x12;
    }
    else {
      if (uVar1 != 0x306) {
        return 0;
      }
      if (6 < uVar2) {
        return 0;
      }
      lVar3 = (ulong)uVar2 + 0x13;
    }
  }
  else if (uVar1 < 0x379) {
    if (uVar1 < 0x36b) {
      if (uVar1 == 0x30a) {
        if (uVar2 != 1) {
          return 0;
        }
        lVar3 = 5;
      }
      else {
        if (uVar1 != 0x34d) {
          return 0;
        }
        if (uVar2 == 1) {
          lVar3 = 6;
        }
        else {
          if (uVar2 != 2) {
            return 0;
          }
          lVar3 = 7;
        }
      }
    }
    else if (uVar1 == 0x378) {
      if (uVar2 != 1) {
        return 0;
      }
      lVar3 = 8;
    }
    else if (uVar1 == 0x36b) {
      if (uVar2 != 1) {
        return 0;
      }
      lVar3 = 0xb;
    }
    else {
      if (uVar1 != 0x36d) {
        return 0;
      }
      if (uVar2 != 1) {
        return 0;
      }
      lVar3 = 0xc;
    }
  }
  else if (uVar1 < 0x3a6) {
    if (uVar1 == 0x379) {
      if (uVar2 != 1) {
        return 0;
      }
      lVar3 = 9;
    }
    else {
      if (uVar1 != 0x37a) {
        return 0;
      }
      if (uVar2 != 1) {
        return 0;
      }
      lVar3 = 10;
    }
  }
  else if (uVar1 == 0x3a6) {
    if (uVar2 != 1) {
      return 0;
    }
    lVar3 = 0x1a;
  }
  else if (uVar1 == 0x3f3) {
    if (3 < (ushort)(uVar2 - 4)) {
      return 0;
    }
    lVar3 = (ulong)(ushort)(uVar2 - 4) + 0x1b;
  }
  else {
    if (uVar1 != 0x3fd) {
      return 0;
    }
    if (uVar2 == 1) {
      lVar3 = 0x1f;
    }
    else {
      if (uVar2 != 2) {
        return 0;
      }
      lVar3 = 0x20;
    }
  }
  FUN_0143b218(param_1,(&DAT_03d62cc0)[lVar3 * 3],0);
  return 1;
}


