/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147ad4c; name: FUN_0147ad4c
 */


void FUN_0147ad4c(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  param_1[5] = 0;
  return;
}


