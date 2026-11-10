/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9f428; name: FUN_02b9f428
 */


undefined1  [16] FUN_02b9f428(undefined1 param_1 [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmin(*param_2,param_1,4);
  return auVar1;
}


