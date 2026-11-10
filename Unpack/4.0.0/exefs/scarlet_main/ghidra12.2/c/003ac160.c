/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ac160; name: FUN_003ac160
 */


undefined8 FUN_003ac160(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_18 [8];
  
  if ((*(int *)(param_1 + 0x40) != 0) || (iVar1 = FUN_003c3900(param_1), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x44) = 3;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0x44);
  if ((uVar3 & 1) == 0) {
    *(uint *)(param_1 + 0x44) = uVar3 | 1;
    FUN_003ad170(param_1,1,0);
    if (*(int *)(*(long *)(param_1 + 0xa8) + 0xfc) != 0) {
      return 0xffffffff;
    }
  }
  else if (*(int *)(*(long *)(param_1 + 0xa8) + 0xfc) == 0) {
    if ((uVar3 >> 1 & 1) == 0) {
      (**(code **)(*(long *)(param_1 + 8) + 0x68))(param_1,0,0,0,0,0,auStack_18);
      uVar3 = *(uint *)(param_1 + 0x44);
      if ((uVar3 >> 1 & 1) == 0) {
        return 0xffffffff;
      }
      goto LAB_003ac244;
    }
  }
  else {
    uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x78))(param_1);
    if ((int)uVar2 == -1) {
      return uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x44);
LAB_003ac244:
  if ((uVar3 == 3) && (*(int *)(*(long *)(param_1 + 0xa8) + 0xfc) == 0)) {
    return 1;
  }
  return 0;
}


