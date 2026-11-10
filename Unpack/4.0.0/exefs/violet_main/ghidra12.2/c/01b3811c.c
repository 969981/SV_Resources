/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b3811c; name: FUN_01b3811c
 */


undefined8 FUN_01b3811c(undefined8 param_1)

{
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  FUN_01b39dcc(auStack_40,param_1,-((ulong)~(uint)DAT_04806378 & 1));
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


