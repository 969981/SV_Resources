/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d92508; name: FUN_00d92508
 */


void FUN_00d92508(long param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00d92540(param_2,param_1);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x10);
  return;
}


