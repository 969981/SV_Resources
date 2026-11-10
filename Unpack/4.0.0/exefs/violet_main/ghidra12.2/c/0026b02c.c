/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026b02c; name: FUN_0026b02c
 */


long * FUN_0026b02c(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (plVar1 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar1 = (long)(PTR_DAT_047cc2f8 + 0x10);
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x30);
    }
    plVar1 = (long *)FUN_00520c00(param_1,0x30);
    *plVar1 = (long)(PTR_DAT_047cc2f8 + 0x10);
    plVar1[1] = param_1;
    plVar1[2] = param_1;
  }
  *(undefined4 *)(plVar1 + 3) = 0;
  FUN_0026c014();
  *(undefined4 *)(plVar1 + 3) = 0;
  *(undefined4 *)(plVar1 + 5) = 0;
  if (*(int *)PTR_DAT_047cc2d0 == 0) {
    return plVar1;
  }
  FUN_0052b230(PTR_DAT_047cc2d0);
  return plVar1;
}


