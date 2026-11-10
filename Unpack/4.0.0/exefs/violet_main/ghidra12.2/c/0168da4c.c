/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0168da4c; name: FUN_0168da4c
 */


undefined8 FUN_0168da4c(undefined8 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  undefined4 local_4;
  
  puVar1 = &LAB_01d48434;
  if (DAT_04831068 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_4 = param_2;
  FUN_0168dabc(auStack_40,param_1,puVar1,0,&local_4);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return local_38;
}


