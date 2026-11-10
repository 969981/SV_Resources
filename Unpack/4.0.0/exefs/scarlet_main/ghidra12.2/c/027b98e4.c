/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027b98e4; name: FUN_027b98e4
 */


void FUN_027b98e4(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_01cf7e20();
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  FUN_0068346c(param_1,param_2);
  return;
}


