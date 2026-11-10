/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01913dc4; name: FUN_01913dc4
 */


void FUN_01913dc4(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  lVar1 = param_1 + 0x10;
  if (*(long *)(param_1 + 0x18) != lVar1) {
    iVar2 = *(int *)(param_1 + 0x24);
    plVar4 = (long *)(*(long *)(param_1 + 0x18) - (long)iVar2);
    do {
      iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
      if (iVar3 == param_2) {
        FUN_0078fa2c(lVar1,(long)plVar4 + (long)*(int *)(param_1 + 0x24));
        (**(code **)*plVar4)(plVar4);
        FUN_007bfae0(plVar4);
        FUN_007bfaa0(plVar4);
        return;
      }
      plVar4 = (long *)(*(long *)((long)plVar4 + (long)*(int *)(param_1 + 0x24) + 8) -
                       (long)*(int *)(param_1 + 0x24));
    } while (plVar4 != (long *)(lVar1 - iVar2));
  }
  return;
}


