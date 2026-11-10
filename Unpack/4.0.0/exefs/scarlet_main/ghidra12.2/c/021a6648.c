/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021a6648; name: FUN_021a6648
 */


void FUN_021a6648(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_0179d360(param_1,(param_1[1] - *param_1 >> 5) * -0x5555555555555555 + 1);
  FUN_0179d3bc(auStack_58,uVar1,(param_1[1] - *param_1 >> 5) * -0x5555555555555555,param_1 + 3);
  FUN_021a6550(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x60;
  FUN_0179d450(param_1,auStack_58);
  FUN_0179d5d4(auStack_58);
  return;
}


