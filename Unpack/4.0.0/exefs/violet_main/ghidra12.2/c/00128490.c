/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00128490; name: FUN_00128490
 */


undefined4 FUN_00128490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  int local_54;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  int local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 0x10000;
  local_54 = 0;
  local_50 = 0;
  local_44 = 0;
  local_40 = 0;
  local_34 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_80 = param_2;
  local_30 = param_4;
  uStack_28 = param_3;
  uVar1 = FUN_001282b0(param_1,&LAB_00128580,&local_80,
                       *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x30),
                       *(undefined8 *)(param_1 + 0xa8));
  local_78 = FUN_0012d4f0(param_1,local_78,local_68,0);
  local_68 = 0;
  FUN_0012d6c0(param_1,local_60,(long)local_54 * 0x18);
  FUN_0012d6c0(param_1,local_50,(long)local_44 * 0x18);
  FUN_0012d6c0(param_1,local_40,(long)local_34 * 0x18);
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -0x10000;
  return uVar1;
}


