/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003de4e0; name: FUN_003de4e0
 */


undefined8 FUN_003de4e0(byte *param_1,int param_2,ulong *param_3)

{
  byte bVar1;
  ulong uVar2;
  
  if (param_2 < 1) {
    return 0;
  }
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    *param_3 = (ulong)bVar1 & 0x7f;
    return 1;
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    if (param_2 < 2) {
      return 0xffffffff;
    }
    if ((param_1[1] & 0xc0) == 0x80) {
      uVar2 = ((ulong)bVar1 & 0x1f) << 6 | (ulong)param_1[1] & 0x3f;
      if (uVar2 < 0x80) {
        return 0xfffffffc;
      }
      *param_3 = uVar2;
      return 2;
    }
  }
  else if ((bVar1 & 0xf0) == 0xe0) {
    if (param_2 < 3) {
      return 0xffffffff;
    }
    if (((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) {
      uVar2 = ((ulong)bVar1 & 0xf) << 0xc | ((ulong)param_1[1] & 0x3f) << 6 |
              (ulong)param_1[2] & 0x3f;
      if (uVar2 < 0x800) {
        return 0xfffffffc;
      }
      *param_3 = uVar2;
      return 3;
    }
  }
  else if ((bVar1 & 0xf8) == 0xf0) {
    if (param_2 < 4) {
      return 0xffffffff;
    }
    if ((((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) &&
       ((param_1[3] & 0xc0) == 0x80)) {
      uVar2 = ((ulong)bVar1 & 7) << 0x12 | ((ulong)param_1[1] & 0x3f) << 0xc |
              ((ulong)param_1[2] & 0x3f) << 6 | (ulong)param_1[3] & 0x3f;
      if (uVar2 < 0x10000) {
        return 0xfffffffc;
      }
      *param_3 = uVar2;
      return 4;
    }
  }
  else if ((bVar1 & 0xfc) == 0xf8) {
    if (param_2 < 5) {
      return 0xffffffff;
    }
    if ((((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) &&
       (((param_1[3] & 0xc0) == 0x80 && ((param_1[4] & 0xc0) == 0x80)))) {
      uVar2 = ((ulong)bVar1 & 3) << 0x18 | ((ulong)param_1[1] & 0x3f) << 0x12 |
              ((ulong)param_1[2] & 0x3f) << 0xc | ((ulong)param_1[3] & 0x3f) << 6 |
              (ulong)param_1[4] & 0x3f;
      if (uVar2 < 0x200000) {
        return 0xfffffffc;
      }
      *param_3 = uVar2;
      return 5;
    }
  }
  else {
    if ((bVar1 & 0xfe) != 0xfc) {
      return 0xfffffffe;
    }
    if (param_2 < 6) {
      return 0xffffffff;
    }
    if (((((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) &&
        ((param_1[3] & 0xc0) == 0x80)) &&
       (((param_1[4] & 0xc0) == 0x80 && ((param_1[5] & 0xc0) == 0x80)))) {
      uVar2 = (ulong)((uint)bVar1 << 0x1e) & 0x40000000 | ((ulong)param_1[1] & 0x3f) << 0x18;
      if (uVar2 >> 0x1a == 0) {
        return 0xfffffffc;
      }
      *param_3 = uVar2 | ((ulong)param_1[2] & 0x3f) << 0x12 | ((ulong)param_1[3] & 0x3f) << 0xc |
                 ((ulong)param_1[4] & 0x3f) << 6 | (ulong)param_1[5] & 0x3f;
      return 6;
    }
  }
  return 0xfffffffd;
}


