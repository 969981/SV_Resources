/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ed927c; name: FUN_01ed927c
 */


void FUN_01ed927c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_01ed9d7c(param_1,(param_1[1] - *param_1 >> 3) * -0xb81702e05c0b817 + 1);
  FUN_01ed9de0(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * -0xb81702e05c0b817,param_1 + 3);
  FUN_01ed91e4(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x2c8;
  FUN_01ed9e70(param_1,auStack_58);
  FUN_01ed9f18(auStack_58);
  return;
}


