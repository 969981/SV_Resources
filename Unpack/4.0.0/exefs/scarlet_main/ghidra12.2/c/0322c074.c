/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322c074; name: FUN_0322c074
 */


void FUN_0322c074(long *param_1,long param_2)

{
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = (long)(param_1 + 2);
  param_1[1] = -0x7ffffffc00000000;
  *(undefined2 *)((long)param_1 + 0x52) = 1;
  param_1[0xb] = param_2;
  param_1[0xc] = (long)DAT_04885508;
  DAT_04885508 = param_1;
  return;
}


