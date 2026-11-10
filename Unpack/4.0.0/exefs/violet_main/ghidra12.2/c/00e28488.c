/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e28488; name: FUN_00e28488
 */


void FUN_00e28488(long *param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *local_28;
  
  uVar1 = *param_3;
  uVar2 = *(undefined8 *)(*(long *)(*param_1 + 0x38) + 0x40);
  (**(code **)(*(long *)*param_2 + 0x40))(&local_28);
  FUN_00e284f8(uVar2,local_28,(long)param_3 + (ulong)uVar1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x60))();
  }
  return;
}


