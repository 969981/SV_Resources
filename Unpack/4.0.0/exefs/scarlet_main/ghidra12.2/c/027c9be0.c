/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027c9be0; name: FUN_027c9be0
 */


void FUN_027c9be0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = uVar1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01e74fb0(param_1 + 4);
  param_1[5] = 0x14;
  FUN_027c3f5c(param_1 + 6,&DAT_03c886bc);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = FUN_01cf7e20();
  param_1[0xe] = uVar1;
  *(undefined4 *)(param_1 + 0xf) = 1;
  return;
}


