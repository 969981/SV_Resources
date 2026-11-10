/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006163e4; name: FUN_006163e4
 */


long * FUN_006163e4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  
  if (param_1 == 0) {
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x58);
    puVar2 = PTR_DAT_047cedb0;
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    *(undefined4 *)(plVar3 + 10) = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[1] = 0;
    plVar3[2] = 0;
    iVar1 = *(int *)PTR_DAT_047cedb8;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x58);
    }
    plVar3 = (long *)FUN_00520c00(param_1,0x58);
    puVar2 = PTR_DAT_047cedb0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    plVar3[1] = param_1;
    plVar3[2] = param_1;
    *(undefined4 *)(plVar3 + 10) = 0;
    iVar1 = *(int *)PTR_DAT_047cedb8;
  }
  if (iVar1 != 0) {
    FUN_0052b230(PTR_DAT_047cedb8);
  }
  puVar2 = PTR_DAT_047cba80;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[5] = (long)puVar2;
  return plVar3;
}


