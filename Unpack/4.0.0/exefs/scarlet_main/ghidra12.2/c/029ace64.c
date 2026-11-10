/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ace64; name: FUN_029ace64
 */


void FUN_029ace64(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    FUN_029acdd0(7);
  }
  *param_1 = 0;
  return;
}


