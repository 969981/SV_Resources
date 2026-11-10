/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d149c; name: thunk_FUN_001d1464
 */


void thunk_FUN_001d1464(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x12d8);
  if (plVar1 != (long *)0x0) {
    do {
      if (*(int *)(*plVar1 + 0x28) == param_2) {
        FUN_001cb600(param_1 + 0x12d8,plVar1,0);
        return;
      }
      plVar1 = (long *)plVar1[2];
    } while (plVar1 != (long *)0x0);
  }
  return;
}


