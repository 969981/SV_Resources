/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0272c3ec; name: FUN_0272c3ec
 */


void FUN_0272c3ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [16];
  long local_58;
  
  uVar1 = FUN_0272e79c(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 + 1);
  FUN_0272e7f8(auStack_68,uVar1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333,param_1 + 3);
  FUN_0272c2c0(param_1 + 3,local_58,param_2,param_3,param_4);
  local_58 = local_58 + 0x28;
  FUN_0272e888(param_1,auStack_68);
  FUN_0272e930(auStack_68);
  return;
}


