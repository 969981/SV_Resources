/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021635a8; name: FUN_021635a8
 */


void FUN_021635a8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (0x3ff < *(ulong *)(param_1 + 0x40)) {
    plVar3 = *(long **)(param_1 + 0x50);
    uVar2 = **(undefined8 **)(param_1 + 8);
    uVar1 = FUN_00c4e564(plVar3);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,0x1000,8);
    }
    else {
      FUN_00c48fe8(plVar3,uVar2,0x1000,8);
    }
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x200;
  }
  return;
}


