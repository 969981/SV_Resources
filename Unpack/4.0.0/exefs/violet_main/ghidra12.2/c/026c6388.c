/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026c6388; name: FUN_026c6388
 */


undefined8 FUN_026c6388(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  puVar1 = &LAB_02ba4de8;
  if (DAT_04859200 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_026c7940(auStack_40,param_1,puVar1,0);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


