/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d09600; name: FUN_00d09600
 */


undefined8 FUN_00d09600(void)

{
  undefined8 local_40 [3];
  long *local_28;
  
  FUN_00d09648(local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_40[0];
}


