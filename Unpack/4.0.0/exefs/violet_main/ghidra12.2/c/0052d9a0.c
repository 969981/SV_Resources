/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052d9a0; name: FUN_0052d9a0
 */


void FUN_0052d9a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  plVar1 = (long *)PTR_DAT_047cdc70;
  plVar2 = (long *)PTR_DAT_047cdc78;
  if (*(long *)PTR_DAT_047cdc70 != 0) {
    plVar1 = (long *)PTR_DAT_047cdc78;
    plVar2 = (long *)(*(long *)PTR_DAT_047cdc78 + 8);
  }
  *plVar2 = param_1;
  *plVar1 = param_1;
  return;
}


