/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


