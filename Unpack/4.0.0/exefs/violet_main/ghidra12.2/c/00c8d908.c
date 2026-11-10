/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c8d908; name: FUN_00c8d908
 */


void FUN_00c8d908(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_00c8d9b4(param_1,(param_1[1] - *param_1 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1);
  FUN_00c8da18(auStack_58,uVar1,(param_1[1] - *param_1 >> 4) * 0x4ec4ec4ec4ec4ec5,param_1 + 3);
  FUN_00c8db54(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0xd0;
  FUN_00c8daac(param_1,auStack_58);
  FUN_00c8dc4c(auStack_58);
  return;
}


