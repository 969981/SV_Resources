/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015ade94; name: FUN_015ade94
 */


int FUN_015ade94(byte param_1,byte param_2,byte param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 7;
  if ((param_1 != 0x12) && (param_2 != 0x12)) {
    cVar1 = (&DAT_03d6286c)[(ulong)param_2 + (ulong)param_1 * 0x12];
    if (cVar1 == '\x04') {
      uVar5 = 7;
    }
    else {
      if (cVar1 == '\x02') {
        uVar3 = 6;
        uVar4 = 8;
      }
      else {
        if (cVar1 != '\b') {
          if (cVar1 == '\0') {
            uVar4 = 8;
            if ((param_4 & 1) == 0) {
              uVar4 = 0;
            }
            uVar5 = (ulong)uVar4;
          }
          else {
            uVar5 = 0;
          }
          goto LAB_015aded8;
        }
        uVar4 = 6;
        uVar3 = 8;
      }
      if ((param_4 & 1) == 0) {
        uVar4 = uVar3;
      }
      uVar5 = (ulong)uVar4;
    }
  }
LAB_015aded8:
  uVar6 = 7;
  if ((param_1 != 0x12) && (param_3 != 0x12)) {
    cVar1 = (&DAT_03d6286c)[(ulong)param_3 + (ulong)param_1 * 0x12];
    if (cVar1 == '\x04') {
      uVar6 = 7;
    }
    else {
      if (cVar1 == '\x02') {
        uVar3 = 6;
        uVar4 = 8;
      }
      else {
        if (cVar1 != '\b') {
          if (cVar1 == '\0') {
            uVar4 = 8;
            if ((param_4 & 1) == 0) {
              uVar4 = 0;
            }
            uVar6 = (ulong)uVar4;
          }
          else {
            uVar6 = 0;
          }
          goto LAB_015adf10;
        }
        uVar4 = 6;
        uVar3 = 8;
      }
      if ((param_4 & 1) == 0) {
        uVar4 = uVar3;
      }
      uVar6 = (ulong)uVar4;
    }
  }
LAB_015adf10:
  uVar4 = (uint)((&DAT_03d629b0)[uVar6] * (&DAT_03d629b0)[uVar5]) >> 6;
  if (0xfff < uVar4) {
    uVar4 = 0x1000;
  }
  uVar3 = 0xffffffff;
  if ((uVar4 == 0 && (int)uVar5 != 0) && (int)uVar6 != 0) {
    uVar4 = 1;
  }
  do {
    uVar2 = uVar3;
    if (uVar2 == 0x1f) {
      return 0;
    }
    uVar3 = uVar2 + 1;
  } while ((uVar4 >> (ulong)(uVar3 & 0x1f) & 1) == 0);
  if (uVar3 < 0xc) {
    return uVar2 + 2;
  }
  return 0xd;
}


