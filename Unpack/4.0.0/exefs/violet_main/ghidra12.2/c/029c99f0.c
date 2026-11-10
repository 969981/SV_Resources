/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029c99f0; name: FUN_029c99f0
 */


bool FUN_029c99f0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_2 + 8) == 0) {
    plVar2 = (long *)FUN_00da5204();
  }
  else {
    plVar2 = (long *)(*(long *)(param_2 + 8) + 0x40);
  }
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (*plVar2 != 0) {
    plVar1 = (long *)(*plVar2 + 0x30);
  }
  plVar2 = (long *)PTR_DAT_047d8b70;
  if (*param_1 != 0) {
    plVar2 = (long *)(*param_1 + 0x30);
  }
  return *plVar1 == *plVar2;
}


