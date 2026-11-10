/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c130a0; name: FUN_01c130a0
 */


undefined8 FUN_01c130a0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if ((*param_2 != 0) && (plVar2 = *(long **)(*param_2 + 8), plVar2 != (long *)0x0)) {
    plVar1 = (long *)FUN_01c13408();
    do {
      if (plVar2 == plVar1) {
        return 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return 0;
}


