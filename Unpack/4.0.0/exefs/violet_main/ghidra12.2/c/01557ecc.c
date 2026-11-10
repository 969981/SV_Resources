/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01557ecc; name: FUN_01557ecc
 */


undefined4 FUN_01557ecc(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = &DAT_fbec41851566601b;
  pcStack_38 = "values";
  local_30 = 6;
  local_28 = (long *)0x0;
  puVar1 = (undefined4 *)FUN_00efa07c(param_1,&local_40);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar2;
}


