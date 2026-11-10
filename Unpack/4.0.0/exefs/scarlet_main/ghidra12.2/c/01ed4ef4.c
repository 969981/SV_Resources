/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ed4ef4; name: FUN_01ed4ef4
 */


void FUN_01ed4ef4(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = *param_2;
  *param_1 = 1;
  param_1[8] = 0;
  param_1[0x20] = 0;
  param_1[0x30] = 0;
  param_1[0x3c] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


