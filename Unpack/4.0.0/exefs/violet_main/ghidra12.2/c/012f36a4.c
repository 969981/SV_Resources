/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f36a4; name: FUN_012f36a4
 */


void FUN_012f36a4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [16];
  long local_58;
  
  uVar1 = FUN_012f3758(param_1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555 + 1);
  FUN_018a69f4(auStack_68,uVar1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555,param_1 + 3);
  FUN_018a6b90(param_1 + 3,local_58,param_2,param_3);
  local_58 = local_58 + 0x30;
  FUN_018a6c98(param_1,auStack_68);
  FUN_018a6a88(auStack_68);
  return;
}


