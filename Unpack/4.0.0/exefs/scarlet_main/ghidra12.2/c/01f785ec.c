/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f785ec; name: FUN_01f785ec
 */


long * FUN_01f785ec(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar2;
    do {
      iVar1 = FUN_01f78dac(plVar4 + 4,param_2);
      if (iVar1 >= 0) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[iVar1 < 0];
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (iVar1 = FUN_01f78dac(param_2,plVar3 + 4), -1 < iVar1)) {
      return plVar3;
    }
  }
  return plVar2;
}


