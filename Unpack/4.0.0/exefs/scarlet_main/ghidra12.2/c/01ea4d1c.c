/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea4d1c; name: FUN_01ea4d1c
 */


void FUN_01ea4d1c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  lVar1 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = (lVar1 >> 3) * 0x5d + -1;
  }
  if ((ulong)(lVar3 - (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40))) < 0x5d) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,0xffc,4);
  }
  else {
    FUN_00c48fe8(plVar5,uVar4,0xffc,4);
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  return;
}


