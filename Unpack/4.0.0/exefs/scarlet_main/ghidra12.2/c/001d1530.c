/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d1530; name: FUN_001d1530
 */


void FUN_001d1530(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  if (*(int *)(lVar2 + 0x60) != 2) {
    *(undefined4 *)(lVar2 + 0x60) = 2;
    FUN_001e2330(lVar2);
  }
  FUN_001cb600((long *)(param_1 + 0x40),plVar1,0);
  FUN_001cea34(lVar2,0,6);
  return;
}


