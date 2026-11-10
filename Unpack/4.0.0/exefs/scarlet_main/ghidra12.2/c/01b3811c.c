/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


