/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029cacf8; name: FUN_029cacf8
 */


void FUN_029cacf8(long param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    *(undefined1 *)((long)plVar1 + 0x84) = 0;
  }
  return;
}


