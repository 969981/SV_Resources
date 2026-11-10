/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f70d3c; name: FUN_01f70d3c
 */


void FUN_01f70d3c(long param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 != 0) {
    for (plVar1 = *(long **)(param_1 + 0x98); plVar1 != *(long **)(param_1 + 0xa0);
        plVar1 = plVar1 + 1) {
      if (*plVar1 == param_2) {
        FUN_027bdb24((long *)(param_1 + 0x98),plVar1);
        return;
      }
    }
  }
  return;
}


