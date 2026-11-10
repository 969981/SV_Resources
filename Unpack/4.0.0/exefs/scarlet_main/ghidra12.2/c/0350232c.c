/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350232c; name: FUN_0350232c
 */


void FUN_0350232c(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_3 & 1) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x194);
    if ((param_2 & 1) == (uint)(*(short *)(param_1 + 0xc4) == 0)) {
      uVar2 = uVar2 | 2;
      *(char *)(param_1 + 0x194) = (char)uVar2;
    }
    *(short *)(param_1 + 0xc4) = (short)(param_2 & 1);
    if (((uVar2 >> 1 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x114) = 0x42ca0000;
    }
  }
  if ((param_3 >> 1 & 1) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x194);
    if ((uint)(*(short *)(param_1 + 0xf4) == 0) == (param_2 & 2) >> 1) {
      uVar2 = uVar2 | 2;
      *(char *)(param_1 + 0x194) = (char)uVar2;
    }
    *(short *)(param_1 + 0xf4) = (short)((param_2 & 2) >> 1);
    if (((uVar2 >> 1 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x114) = 0x42ca0000;
    }
  }
  if ((param_3 >> 2 & 1) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x194);
    if ((uint)(*(short *)(param_1 + 0x124) == 0) == (param_2 & 4) >> 2) {
      uVar2 = uVar2 | 2;
      *(char *)(param_1 + 0x194) = (char)uVar2;
    }
    *(short *)(param_1 + 0x124) = (short)((param_2 & 4) >> 2);
    if (((uVar2 >> 1 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x114) = 0x42ca0000;
    }
  }
  if ((param_3 >> 3 & 1) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x194);
    if ((uint)(*(short *)(param_1 + 0x154) == 0) == (param_2 & 8) >> 3) {
      uVar2 = uVar2 | 2;
      *(char *)(param_1 + 0x194) = (char)uVar2;
    }
    *(short *)(param_1 + 0x154) = (short)((param_2 & 8) >> 3);
    if (((uVar2 >> 1 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x114) = 0x42ca0000;
    }
  }
  if ((param_3 >> 4 & 1) != 0) {
    uVar1 = param_2 >> 4 & 1;
    uVar2 = (uint)*(byte *)(param_1 + 0x194);
    if (uVar1 == (*(short *)(param_1 + 400) == 0)) {
      uVar2 = uVar2 | 2;
      *(char *)(param_1 + 0x194) = (char)uVar2;
    }
    *(short *)(param_1 + 400) = (short)uVar1;
    if (((uVar2 >> 1 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x114) = 0x42ca0000;
    }
  }
  return;
}


