/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029827c0; name: FUN_029827c0
 */


void FUN_029827c0(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  undefined4 local_8;
  undefined1 local_4;
  
  local_8 = (**(code **)(*param_2 + 0x98))(param_2);
  local_4 = 1;
  FUN_01461214(param_1);
  uVar1 = FUN_018776d0();
  FUN_018776d8(uVar1,auStack_28,&local_8);
  return;
}


