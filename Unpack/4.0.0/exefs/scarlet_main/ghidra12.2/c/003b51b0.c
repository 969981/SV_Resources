/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b51b0; name: FUN_003b51b0
 */


undefined4 FUN_003b51b0(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (0 < param_2) {
    return 0;
  }
  uVar3 = FUN_00480c60();
  if (uVar3 != 0) {
    uVar4 = 5;
    if ((uVar3 & 0xff000000) != 0x2000000) {
      uVar4 = 1;
    }
    return uVar4;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 3) {
    if (*(long *)(param_1 + 0x860) != 0) {
      return 2;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    iVar2 = FUN_003e8cc0(uVar5,1);
    if (iVar2 != 0) {
      return 2;
    }
    iVar2 = FUN_003e8cc0(uVar5,2);
    if (iVar2 != 0) {
      return 3;
    }
    iVar2 = FUN_003e8cc0(uVar5,4);
    if (iVar2 != 0) goto LAB_003b52d4;
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 == 2) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    iVar2 = FUN_003e8cc0(uVar5,2);
    if (iVar2 != 0) {
      return 3;
    }
    iVar2 = FUN_003e8cc0(uVar5,1);
    if (iVar2 != 0) {
      return 2;
    }
    iVar2 = FUN_003e8cc0(uVar5,4);
    if (iVar2 != 0) {
LAB_003b52d4:
      iVar2 = FUN_003e98e0(uVar5);
      uVar4 = 8;
      if (iVar2 != 3) {
        uVar4 = 5;
      }
      uVar1 = 7;
      if (iVar2 != 2) {
        uVar1 = uVar4;
      }
      return uVar1;
    }
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 - 4U < 4) {
    return *(undefined4 *)(&DAT_03caab60 + (long)(int)(iVar2 - 4U) * 4);
  }
  if (((*(byte *)(param_1 + 0x44) >> 1 & 1) == 0) ||
     (*(int *)(*(long *)(param_1 + 0xa8) + 0xf4) != 0)) {
    return 5;
  }
  return 6;
}


