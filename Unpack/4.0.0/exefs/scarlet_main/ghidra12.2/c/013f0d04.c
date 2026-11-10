/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013f0d04; name: FUN_013f0d04
 */


void FUN_013f0d04(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  while (lVar5 = lVar6, lVar5 != param_2) {
    lVar4 = *(long *)(lVar5 + -0x38);
    lVar6 = lVar5 + -0x50;
    if (lVar4 != 0) {
      plVar1 = *(long **)(lVar5 + -0x20);
      *(long *)(lVar5 + -0x30) = lVar4;
      lVar5 = *(long *)(lVar5 + -0x28) - lVar4;
      uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
      }
      else {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
      }
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


