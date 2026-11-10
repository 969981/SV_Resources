/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


