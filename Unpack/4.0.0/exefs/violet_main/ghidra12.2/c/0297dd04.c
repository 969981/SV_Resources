/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297dd04; name: FUN_0297dd04
 */


uint FUN_0297dd04(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 local_28 [8];
  undefined4 local_8 [2];
  
  local_8[0] = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01461214(param_1);
  uVar2 = FUN_0126ebb4();
  FUN_0126ebbc(uVar2,local_28,local_8);
  uVar1 = FUN_015c7890(local_28[0]);
  return uVar1 & 1;
}


