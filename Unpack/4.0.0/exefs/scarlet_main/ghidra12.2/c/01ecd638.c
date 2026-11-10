/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ecd638; name: FUN_01ecd638
 */


void FUN_01ecd638(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0126a9c0();
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = uVar1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uVar1;
  param_1[5] = 0x52bf5a814afd6a;
  return;
}


