/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b1d60; name: FUN_003b1d60
 */


undefined4 FUN_003b1d60(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 < 0x800) {
      if (iVar1 < 0x80) {
        lVar3 = 0;
        switch(iVar1) {
        case 1:
          break;
        case 2:
          lVar3 = 1;
          break;
        default:
          goto switchD_003b1da4_caseD_3;
        case 4:
          lVar3 = 2;
          break;
        case 8:
          lVar3 = 3;
          break;
        case 0x10:
          lVar3 = 4;
          break;
        case 0x20:
          lVar3 = 5;
          break;
        case 0x40:
          lVar3 = 6;
        }
      }
      else if (iVar1 < 0x200) {
        if (iVar1 == 0x80) {
          lVar3 = 7;
        }
        else {
          if (iVar1 != 0x100) {
            return 0;
          }
          lVar3 = 8;
        }
      }
      else if (iVar1 == 0x200) {
        lVar3 = 9;
      }
      else {
        if (iVar1 != 0x400) {
          return 0;
        }
        lVar3 = 10;
      }
    }
    else if (iVar1 < 0x10000) {
      if (iVar1 < 0x2000) {
        if (iVar1 == 0x800) {
          lVar3 = 0xb;
        }
        else {
          if (iVar1 != 0x1000) {
            return 0;
          }
          lVar3 = 0xc;
        }
      }
      else if (iVar1 == 0x2000) {
        lVar3 = 0xd;
      }
      else if (iVar1 == 0x4000) {
        lVar3 = 0xe;
      }
      else {
        if (iVar1 != 0x8000) {
          return 0;
        }
        lVar3 = 0xf;
      }
    }
    else if (iVar1 < 0x80000) {
      if (iVar1 == 0x10000) {
        lVar3 = 0x10;
      }
      else if (iVar1 == 0x20000) {
        lVar3 = 0x11;
      }
      else {
        if (iVar1 != 0x40000) {
          return 0;
        }
        lVar3 = 0x12;
      }
    }
    else if (iVar1 == 0x80000) {
      lVar3 = 0x13;
    }
    else if (iVar1 == 0x100000) {
      lVar3 = 0x14;
    }
    else {
      if (iVar1 != 0x200000) {
        return 0;
      }
      lVar3 = 0x15;
    }
    uVar2 = (&DAT_03cdc6b8)[lVar3 * 2];
  }
switchD_003b1da4_caseD_3:
  return uVar2;
}


