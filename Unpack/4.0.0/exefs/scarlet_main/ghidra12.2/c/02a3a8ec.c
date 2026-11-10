/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3a8ec; name: FUN_02a3a8ec
 */


void FUN_02a3a8ec(long param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00ca1ea4(param_2,param_1);
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_00ca1ea4(param_2 + 2,param_1 + 0x10);
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x20);
  return;
}


