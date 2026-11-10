/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352754c; name: FUN_0352754c
 */


void FUN_0352754c(long param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x98); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if ((long *)plVar1[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[1] + 0x80))();
    }
  }
  return;
}


