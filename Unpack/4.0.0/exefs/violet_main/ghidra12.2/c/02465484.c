/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02465484; name: FUN_02465484
 */


long FUN_02465484(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_28;
  long *local_8;
  
  puVar1 = &LAB_024665a8;
  if (DAT_048497d0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_28 = param_2;
  FUN_0246660c(&local_8,param_1,puVar1,0,&local_28);
  plVar2 = (long *)PTR_PTR_047d4508;
  if (local_8 != (long *)0x0) {
    plVar2 = local_8 + 7;
  }
  lVar3 = *plVar2;
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x20))();
  }
  return lVar3;
}


