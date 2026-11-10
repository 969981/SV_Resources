/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02356020; name: FUN_02356020
 */


void FUN_02356020(long param_1)

{
  undefined1 auStack_58 [24];
  long *local_40;
  long *local_28;
  
  FUN_0235608c(auStack_58,param_1 + 0x80);
  FUN_023560e8(param_1,auStack_58);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return;
}


