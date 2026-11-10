/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cba688; name: FUN_01cba688
 */


undefined8 FUN_01cba688(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  puVar1 = PTR_LAB_047d6aa0;
  if (DAT_0481b9d8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01cbb260(auStack_40,param_1,puVar1,0);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


