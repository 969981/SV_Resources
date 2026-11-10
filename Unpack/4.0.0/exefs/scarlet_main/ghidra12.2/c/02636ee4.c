/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02636ee4; name: FUN_02636ee4
 */


undefined8 FUN_02636ee4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if ((*param_1 != 0) && (plVar2 = *(long **)(*param_1 + 8), plVar2 != (long *)0x0)) {
    plVar1 = (long *)FUN_0263724c();
    do {
      if (plVar2 == plVar1) {
        return 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return 0;
}


