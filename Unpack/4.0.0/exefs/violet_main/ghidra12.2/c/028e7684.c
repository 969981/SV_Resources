/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028e7684; name: FUN_028e7684
 */


void FUN_028e7684(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_028e9604(param_1,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7 + 1);
  FUN_028e9668(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7,param_1 + 3);
  FUN_028e7578(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x38;
  FUN_028e96f8(param_1,auStack_58);
  FUN_028e97a0(auStack_58);
  return;
}


