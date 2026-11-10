/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00585ef0; name: FUN_00585ef0
 */


long * FUN_00585ef0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  
  if (param_1 == 0) {
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    puVar2 = PTR_DAT_047ce350;
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    *(undefined4 *)(plVar3 + 3) = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[1] = 0;
    iVar1 = *(int *)PTR_DAT_047ce358;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x20);
    }
    plVar3 = (long *)FUN_00520c00(param_1,0x20);
    *plVar3 = (long)(PTR_DAT_047ce350 + 0x10);
    plVar3[1] = param_1;
    *(undefined4 *)(plVar3 + 3) = 0;
    iVar1 = *(int *)PTR_DAT_047ce358;
  }
  if (iVar1 != 0) {
    FUN_0052b230(PTR_DAT_047ce358);
  }
  plVar3[2] = 0;
  return plVar3;
}


