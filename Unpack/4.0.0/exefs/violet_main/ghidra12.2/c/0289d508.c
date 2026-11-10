/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289d508; name: FUN_0289d508
 */


void FUN_0289d508(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_0289efec(param_1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  FUN_0289f048(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555,param_1 + 3);
  FUN_0289d41c(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x18;
  FUN_0289f0d8(param_1,auStack_58);
  FUN_0289f180(auStack_58);
  return;
}


