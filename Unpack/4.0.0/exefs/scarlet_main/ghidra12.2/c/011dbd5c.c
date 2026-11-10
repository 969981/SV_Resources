/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011dbd5c; name: FUN_011dbd5c
 */


void FUN_011dbd5c(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  if ((ulong)param_3[1] < param_3[2] + 0x16U) {
    *param_1 = 0xd;
    return;
  }
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  FUN_01eb1b70(0xb9,param_2);
  return;
}


