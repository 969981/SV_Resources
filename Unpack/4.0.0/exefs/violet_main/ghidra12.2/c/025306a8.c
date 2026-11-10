/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025306a8; name: FUN_025306a8
 */


void FUN_025306a8(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  thunk_FUN_02530714(&local_60);
  uVar1 = local_60;
  *param_1 = 1;
  local_60 = 0;
  local_40 = 0;
  uStack_38 = uStack_58;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  *(undefined8 *)(param_1 + 0x18) = local_50;
  *(undefined8 *)(param_1 + 0x20) = uStack_48;
  FUN_00d8b4f4(&local_40,0);
  FUN_00d8b4f4(&local_60,0);
  return;
}


