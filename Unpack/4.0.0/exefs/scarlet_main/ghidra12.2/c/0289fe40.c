/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289fe40; name: FUN_0289fe40
 */


void FUN_0289fe40(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_2 + 0x20);
  lVar4 = *(long *)(param_2 + 0x28);
  lVar2 = lVar3 + lVar4 * 0x10;
  lVar1 = param_3 + 0x10;
  if (lVar1 != lVar2) {
    FUN_0178f674(param_3,lVar1);
    lVar3 = param_3 + 0x20;
    if (lVar3 != lVar2) {
      FUN_0178f674(lVar1,lVar3);
      lVar1 = param_3 + 0x30;
      while (lVar1 != lVar2) {
        FUN_0178f674(lVar3,lVar3 + 0x10);
        lVar1 = lVar3 + 0x20;
        lVar3 = lVar3 + 0x10;
      }
    }
    lVar3 = *(long *)(param_2 + 0x20);
    lVar4 = *(long *)(param_2 + 0x28);
  }
  FUN_0175be68(lVar3 + lVar4 * 0x10 + -0x10);
  *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + -1;
  *param_1 = param_3;
  return;
}


