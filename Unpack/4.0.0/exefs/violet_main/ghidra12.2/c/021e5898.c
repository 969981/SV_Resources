/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e5898; name: FUN_021e5898
 */


undefined2 FUN_021e5898(undefined8 param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  undefined4 local_8 [2];
  
  local_40 = &DAT_e4d07a996e5ef5e8;
  puStack_38 = &DAT_03c60f6f;
  local_30 = 4;
  local_28 = (long *)0x0;
  uVar2 = FUN_00f844f4(param_1,&local_40);
  local_8[0] = (undefined4)*param_2;
  uVar1 = FUN_018f8f1c(uVar2,local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar1;
}


