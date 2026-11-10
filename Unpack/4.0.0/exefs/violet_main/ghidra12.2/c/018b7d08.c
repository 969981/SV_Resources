/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018b7d08; name: FUN_018b7d08
 */


undefined4 FUN_018b7d08(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_00d8fb98(auStack_40,PTR_DAT_047de378);
  uVar1 = FUN_018b7d70(param_1,auStack_40,param_2);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar1;
}


