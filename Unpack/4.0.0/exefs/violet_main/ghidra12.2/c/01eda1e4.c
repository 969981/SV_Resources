/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eda1e4; name: FUN_01eda1e4
 */


void FUN_01eda1e4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [16];
  long local_58;
  
  uVar1 = FUN_01eda2a0(param_1,(param_1[1] - *param_1 >> 3) * -0x50295fad40a57eb5 + 1);
  FUN_01eda304(auStack_68,uVar1,(param_1[1] - *param_1 >> 3) * -0x50295fad40a57eb5,param_1 + 3);
  FUN_01eda13c(param_1 + 3,local_58,param_2,param_3);
  local_58 = local_58 + 0x318;
  FUN_01eda394(param_1,auStack_68);
  FUN_01eda43c(auStack_68);
  return;
}


