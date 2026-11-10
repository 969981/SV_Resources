/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e9698; name: FUN_007e9698
 */


long * FUN_007e9698(long *param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x19) = *param_2;
  (**(code **)(*param_1 + 0x70))();
  return param_1 + 0x1b;
}


