/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c9518; name: FUN_014c9518
 */


void FUN_014c9518(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    lVar4 = (long)*(int *)(param_1 + 0x38) * 0x30;
    uVar1 = FUN_00c4e564(plVar3);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,lVar4,0x10);
    }
    else {
      FUN_00c48fe8(plVar3,lVar2,lVar4,0x10);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}


