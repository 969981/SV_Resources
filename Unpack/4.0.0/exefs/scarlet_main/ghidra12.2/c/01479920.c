/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01479920; name: FUN_01479920
 */


void FUN_01479920(long param_1,undefined4 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x1c8) = param_2;
  for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_01479954(plVar1[6]);
  }
  return;
}


