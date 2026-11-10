/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0200548c; name: FUN_0200548c
 */


bool FUN_0200548c(undefined4 *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_00f618d8(param_2);
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (*(long *)(param_1 + 2) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 2) + 0x30);
  }
  lVar3 = *plVar1;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (*plVar2 != 0) {
    plVar1 = (long *)(*plVar2 + 0x30);
  }
  lVar4 = *plVar1;
  if (lVar3 == lVar4) {
    FUN_0159a808(*param_1,param_1[1],param_2);
  }
  return lVar3 == lVar4;
}


