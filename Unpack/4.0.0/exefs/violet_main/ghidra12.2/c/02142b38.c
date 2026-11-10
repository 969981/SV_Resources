/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02142b38; name: FUN_02142b38
 */


void FUN_02142b38(long param_1)

{
  undefined1 auStack_60 [24];
  long *local_48;
  long *local_28;
  
  FUN_02142ba0(auStack_60);
  FUN_02142c28(param_1 + 0x230,auStack_60);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


