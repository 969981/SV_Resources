/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f6074; name: FUN_001f6074
 */


long FUN_001f6074(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_3 * 0xc + 0xc;
  if (param_3 != 0) {
    plVar4 = (long *)(param_2 + 0x18);
    do {
      plVar1 = plVar4 + -1;
      lVar2 = *plVar4;
      plVar4 = plVar4 + 5;
      lVar3 = *plVar1 + lVar3 + lVar2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return lVar3;
}


