/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023390e8; name: FUN_023390e8
 */


void FUN_023390e8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_70 [12];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_50[0] = param_3;
  local_40[0] = param_2;
  uVar1 = FUN_01060ed0();
  local_64 = param_6;
  local_60 = param_5;
  uVar1 = FUN_02339180(uVar1,local_40,local_50,&local_60,&local_64);
  FUN_0199aeb0(auStack_58,uVar1);
  FUN_023392f0(auStack_70,auStack_58);
  FUN_023392f0(param_1,auStack_70);
  *(undefined4 *)(param_1 + 8) = param_4;
  FUN_0199ade8(auStack_70);
  FUN_0199ade8(auStack_58);
  return;
}


