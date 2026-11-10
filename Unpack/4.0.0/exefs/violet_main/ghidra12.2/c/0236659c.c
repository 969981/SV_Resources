/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0236659c; name: FUN_0236659c
 */


undefined8 FUN_0236659c(undefined8 param_1)

{
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  FUN_02366e98(auStack_40,param_1,-((ulong)~(uint)DAT_04849080 & 1));
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


