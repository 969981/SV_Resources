/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003447a0; name: FUN_003447a0
 */


void FUN_003447a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    plVar3 = (long *)(param_1 + 0x60);
    do {
      lVar2 = lVar2 + -1;
      uVar1 = param_3;
      if (lVar2 != 0) {
        uVar1 = 0;
      }
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2,uVar1);
      plVar3 = plVar3 + 3;
    } while (lVar2 != 0);
  }
  return;
}


