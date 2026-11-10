/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbb1a8; name: FUN_01dbb1a8
 */


void FUN_01dbb1a8(long param_1)

{
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = &DAT_cbf29ce484222645;
  puStack_28 = &DAT_03c886bc;
  local_20 = 0;
  local_18 = (long *)0x0;
  (**(code **)(**(long **)(param_1 + 0x70) + 0x90))(*(long **)(param_1 + 0x70),&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


