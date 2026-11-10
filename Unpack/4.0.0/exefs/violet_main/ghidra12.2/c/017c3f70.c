/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017c3f70; name: FUN_017c3f70
 */


void FUN_017c3f70(undefined8 param_1,undefined8 param_2)

{
  long *local_28;
  long *local_8;
  
  FUN_017c3fdc(&local_8);
  FUN_017c3fdc(&local_28,param_2);
  FUN_017c407c(&local_8,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x60))();
  }
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x60))();
  }
  return;
}


