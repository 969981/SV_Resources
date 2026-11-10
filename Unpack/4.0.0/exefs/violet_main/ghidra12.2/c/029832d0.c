/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029832d0; name: FUN_029832d0
 */


void FUN_029832d0(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  long *local_30;
  undefined4 local_28;
  byte local_24;
  
  local_24 = (**(code **)(*param_2 + 0x220))(param_2,0x22);
  local_24 = local_24 & 1;
  local_28 = 3;
  local_30 = param_2;
  FUN_01461214(param_1);
  uVar1 = FUN_0297f9d8();
  FUN_0297f9e0(uVar1,auStack_38,&local_30);
  return;
}


