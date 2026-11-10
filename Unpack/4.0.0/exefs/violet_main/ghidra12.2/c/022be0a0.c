/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022be0a0; name: FUN_022be0a0
 */


undefined8 FUN_022be0a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  uVar1 = 0x70;
  if (DAT_04846360 == '\0') {
    uVar1 = 0;
  }
  FUN_022bfd2c(auStack_40,param_1,uVar1,DAT_04846368);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


