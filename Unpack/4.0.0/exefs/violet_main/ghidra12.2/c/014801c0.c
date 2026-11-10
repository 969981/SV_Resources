/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014801c0; name: FUN_014801c0
 */


void FUN_014801c0(long param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_30 = &local_28;
  local_28 = param_3;
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01480220(&local_30,*(undefined8 *)(param_1 + 0x170),uVar1);
  FUN_01480220(&local_30,*(undefined8 *)(param_1 + 0x150),uVar1);
  return;
}


