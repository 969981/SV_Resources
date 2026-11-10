/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e6678; name: FUN_004e6678
 */


long * FUN_004e6678(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  
  if (param_1 == 0) {
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x60);
    puVar2 = PTR_DAT_047cd858;
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar3[2] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[1] = 0;
    iVar1 = *(int *)PTR_DAT_047cd860;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x60);
    }
    plVar3 = (long *)FUN_00520c00(param_1,0x60);
    *plVar3 = (long)(PTR_DAT_047cd858 + 0x10);
    plVar3[1] = param_1;
    plVar3[2] = 0;
    iVar1 = *(int *)PTR_DAT_047cd860;
  }
  if (iVar1 != 0) {
    FUN_0052b230(PTR_DAT_047cd860);
  }
  plVar3[9] = 0;
  puVar2 = PTR_DAT_047cba80;
  *(undefined8 *)((long)plVar3 + 0x54) = 0x100000001;
  *(undefined1 *)(plVar3 + 10) = 0;
  plVar3[3] = (long)puVar2;
  plVar3[4] = (long)puVar2;
  plVar3[5] = (long)puVar2;
  plVar3[6] = (long)puVar2;
  plVar3[7] = (long)puVar2;
  plVar3[8] = 0;
  return plVar3;
}


