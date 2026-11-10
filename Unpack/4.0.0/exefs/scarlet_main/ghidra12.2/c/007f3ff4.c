/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f3ff4; name: FUN_007f3ff4
 */


undefined8 FUN_007f3ff4(long param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  sVar3 = *(short *)(param_1 + 8);
  if (sVar3 == 0) {
    sVar3 = param_2 + -1;
    *(short *)(param_1 + 8) = sVar3;
  }
  uVar2 = (uint)(short)(param_2 - sVar3);
  if ((int)uVar2 < 1) {
    return 0;
  }
  if (sVar3 != 0) {
    uVar2 = uVar2 - ((int)(uint)(ushort)-sVar3 < (int)uVar2);
  }
  uVar2 = uVar2 & 0xffff;
  if (*(char *)(param_1 + 0xe) != '\0') {
    uVar1 = *(ushort *)(param_1 + 10) + uVar2;
    if (uVar1 >> 0x10 != 0) {
      *(ushort *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + ~*(ushort *)(param_1 + 10);
      *(undefined2 *)(param_1 + 10) = 0xffff;
      *(undefined1 *)(param_1 + 0xe) = 0;
      uVar1 = *(uint *)(param_1 + 0x10);
      goto joined_r0x007f4064;
    }
    *(short *)(param_1 + 10) = (short)uVar1;
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + (short)(uVar2 - 1);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
joined_r0x007f4064:
  if (uVar1 != 0xffffffff) {
    if (CARRY4(uVar1,uVar2)) {
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + ~uVar1;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    else {
      *(uint *)(param_1 + 0x10) = uVar1 + uVar2;
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (uVar2 - 1);
    }
  }
  *(short *)(param_1 + 8) = param_2;
  return 1;
}


