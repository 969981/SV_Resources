/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f77a54; name: FUN_01f77a54
 */


long * FUN_01f77a54(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*plVar1 == param_1) {
    *plVar1 = 0;
    plVar1 = *(long **)(param_1 + 0x10);
    while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
      do {
        plVar1 = plVar2;
        plVar2 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
    }
  }
  else {
    plVar1[1] = 0;
    plVar1 = *(long **)(param_1 + 0x10);
    plVar2 = (long *)*plVar1;
    while (plVar2 != (long *)0x0) {
      do {
        plVar1 = plVar2;
        plVar2 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
      plVar2 = (long *)plVar1[1];
    }
  }
  return plVar1;
}


