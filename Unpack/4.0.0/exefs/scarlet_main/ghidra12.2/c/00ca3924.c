/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca3924; name: FUN_00ca3924
 */


void FUN_00ca3924(long *param_1)

{
  undefined *puVar1;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_047de148 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  param_1[8] = 0;
  FUN_029c4e00(param_1 + 9);
  puVar1 = PTR_DAT_047e31b0 + 0x10;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[9] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x13) = 1;
  return;
}


