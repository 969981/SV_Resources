/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0258d9dc; name: FUN_0258d9dc
 */


long FUN_0258d9dc(undefined8 param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *local_8;
  
  pcVar1 = FUN_0258e290;
  if (DAT_04851f68 == '\0') {
    pcVar1 = (code *)0x0;
  }
  FUN_0258e328(&local_8,param_1,pcVar1,0);
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


