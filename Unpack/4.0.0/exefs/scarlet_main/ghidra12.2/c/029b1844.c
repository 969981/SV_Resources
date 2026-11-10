/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b1844; name: FUN_029b1844
 */


void FUN_029b1844(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  while (lVar4 != param_2) {
    *(long *)(param_1 + 0x10) = lVar4 + -0x60;
    lVar5 = *(long *)(lVar4 + -0x48);
    if (lVar5 != 0) {
      plVar1 = *(long **)(lVar4 + -0x30);
      *(long *)(lVar4 + -0x40) = lVar5;
      lVar4 = *(long *)(lVar4 + -0x38) - lVar5;
      uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,4);
      }
      else {
        FUN_00c48fe8(plVar1,lVar5,lVar4,4);
      }
    }
    lVar4 = *(long *)(param_1 + 0x10);
  }
  return;
}


