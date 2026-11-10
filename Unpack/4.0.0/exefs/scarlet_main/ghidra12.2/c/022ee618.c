/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022ee618; name: FUN_022ee618
 */


undefined8 FUN_022ee618(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  puVar1 = PTR_LAB_047de1f8;
  if (DAT_04846460 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_022ef31c(auStack_40,param_1,puVar1,0);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


