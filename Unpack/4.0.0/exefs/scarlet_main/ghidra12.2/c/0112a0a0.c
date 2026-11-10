/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0112a0a0; name: FUN_0112a0a0
 */


undefined8 FUN_0112a0a0(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x630) == 0) && (*(int *)(param_1 + 0x11c) == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0x23) >> 3 & 1) != 0) || (*(int *)(param_1 + 0x48) == 0)) {
    iVar3 = *(int *)(param_1 + 0x644);
    if (iVar3 == 0) {
      iVar3 = FUN_0011f640();
      *(int *)(param_1 + 0x644) = iVar3;
      *(undefined4 *)(param_1 + 0x69c) = 0;
      *(int *)(param_1 + 0x648) = *(int *)(param_1 + 0x630) + -1;
    }
    if ((*(int *)(param_1 + 300) != 0) && (*(int *)(*(long *)(param_1 + 0x1b8) + 0x5c) == 1)) {
      FUN_001025d0(param_1);
    }
    iVar4 = FUN_0011f640();
    if (*(int *)(param_1 + 0x640) + 1U < 2) {
      iVar1 = *(int *)(param_1 + 0x11c);
    }
    else {
      *(int *)(param_1 + 0x668) = (iVar4 - *(int *)(param_1 + 0x640)) + *(int *)(param_1 + 0x668);
      *(undefined4 *)(param_1 + 0x640) = 0;
      iVar1 = *(int *)(param_1 + 0x11c);
    }
    if ((iVar1 == 0) && ((*(int *)(param_1 + 300) == 0 || (*(int *)(param_1 + 0x40) != 0)))) {
      uVar2 = *(uint *)(param_1 + 0x14);
      if (uVar2 == 0) {
        return 0;
      }
      uVar5 = 0;
      if ((ulong)uVar2 != 0) {
        uVar5 = ((ulong)(uint)(*(int *)(param_1 + 0x630) - *(int *)(param_1 + 0x648)) *
                 (ulong)*(uint *)(param_1 + 0x18) * 1000) / (ulong)uVar2;
      }
      iVar3 = (iVar4 - iVar3) -
              (int)((uVar5 & 0xffffffff) * (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + 0x4c) >>
                   0x10);
      if (-1 < iVar3) {
        if (*(int *)(param_1 + 300) != 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x64c) * 2 < iVar3) {
          *(undefined4 *)(param_1 + 0x644) = 0;
          return 0;
        }
        return 0;
      }
    }
    if ((*(long *)(param_1 + 0x1f8) == 0) && ((*(byte *)(param_1 + 0x23) >> 3 & 1) != 0)) {
      if ((*(code **)(param_1 + 0x240) == (code *)0x0) ||
         (uVar5 = (**(code **)(param_1 + 0x240))(param_1 + 0x210,0), (uVar5 & 1) == 0)) {
        (**(code **)(param_1 + 0x230))(param_1 + 0x210);
      }
    }
  }
  return 1;
}


