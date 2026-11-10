/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ad548; name: FUN_012ad548
 */


void FUN_012ad548(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long *local_8;
  
  *(undefined4 *)(param_1 + 0x2b0) = *param_3;
  *(undefined8 *)(param_1 + 0x2a8) = param_2;
  local_8 = *(long **)(param_3 + 2);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x18))();
  }
  FUN_012b9ba0(param_1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x20))();
  }
  return;
}


