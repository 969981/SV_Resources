/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003de7b0; name: FUN_003de7b0
 */


undefined4 FUN_003de7b0(byte *param_1,int param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = (uint)param_3;
  bVar1 = (byte)param_3;
  if (param_1 == (byte *)0x0) {
    if (param_3 < 0x80) {
      return 1;
    }
    param_2 = 6;
  }
  else {
    if (param_2 < 1) {
      return 0xffffffff;
    }
    if (param_3 < 0x80) {
      *param_1 = bVar1;
      return 1;
    }
  }
  if (param_3 < 0x800) {
    uVar4 = 2;
    if (param_2 < 2) {
      uVar4 = 0xffffffff;
    }
    if ((param_1 != (byte *)0x0) && (1 < param_2)) {
      *param_1 = (byte)(param_3 >> 6) | 0xc0;
      param_1[1] = bVar1 & 0x3f | 0x80;
      return 2;
    }
  }
  else if (param_3 >> 0x10 == 0) {
    uVar4 = 3;
    if (param_2 < 3) {
      uVar4 = 0xffffffff;
    }
    if ((param_1 != (byte *)0x0) && (2 < param_2)) {
      *param_1 = (byte)(param_3 >> 0xc) | 0xe0;
      param_1[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      param_1[2] = bVar1 & 0x3f | 0x80;
      return 3;
    }
  }
  else if (param_3 >> 0x15 == 0) {
    uVar4 = 4;
    if (param_2 < 4) {
      uVar4 = 0xffffffff;
    }
    if ((param_1 != (byte *)0x0) && (3 < param_2)) {
      *param_1 = (byte)(param_3 >> 0x12) | 0xf0;
      param_1[1] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
      param_1[3] = bVar1 & 0x3f | 0x80;
      param_1[2] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
      return 4;
    }
  }
  else {
    bVar2 = (byte)(param_3 >> 0x18);
    if (param_3 >> 0x1a == 0) {
      uVar4 = 5;
      if (param_2 < 5) {
        uVar4 = 0xffffffff;
      }
      if ((param_1 != (byte *)0x0) && (4 < param_2)) {
        *param_1 = bVar2 | 0xf8;
        param_1[1] = (byte)(uVar3 >> 0x12) & 0x3f | 0x80;
        param_1[4] = bVar1 & 0x3f | 0x80;
        param_1[2] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
        param_1[3] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
        return 5;
      }
    }
    else {
      uVar4 = 6;
      if (param_2 < 6) {
        uVar4 = 0xffffffff;
      }
      if ((param_1 != (byte *)0x0) && (5 < param_2)) {
        *param_1 = bVar2 >> 6 & 1 | 0xfc;
        param_1[1] = bVar2 & 0x3f | 0x80;
        param_1[2] = (byte)(uVar3 >> 0x12) & 0x3f | 0x80;
        param_1[3] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
        param_1[5] = bVar1 & 0x3f | 0x80;
        param_1[4] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
        uVar4 = 6;
      }
    }
  }
  return uVar4;
}


