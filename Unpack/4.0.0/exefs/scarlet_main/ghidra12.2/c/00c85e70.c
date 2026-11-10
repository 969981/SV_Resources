/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c85e70; name: FUN_00c85e70
 */


void FUN_00c85e70(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (*(ulong *)(param_1 + 0x40) < 0x40) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x50);
  uVar3 = **(undefined8 **)(param_1 + 8);
  uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar3,0x1000,0x10);
  }
  else {
    FUN_00c48fe8(plVar4,uVar3,0x1000,0x10);
  }
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x20;
  return;
}


