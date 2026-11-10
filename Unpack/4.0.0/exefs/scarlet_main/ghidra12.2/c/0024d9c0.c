/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0024d9c0; name: FUN_0024d9c0
 */


void FUN_0024d9c0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01cf7e20();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *param_1 = 8;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  param_1[4] = param_2[3];
  param_1[5] = 0;
  return;
}


