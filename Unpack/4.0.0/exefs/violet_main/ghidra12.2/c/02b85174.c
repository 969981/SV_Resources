/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b85174; name: FUN_02b85174
 */


void FUN_02b85174(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x58);
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 6;
  }
  plVar2 = (long *)PTR_PTR_047d4508;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 7;
  }
  lVar3 = *plVar2;
  if (plVar5 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar5[8];
  }
  *param_1 = *plVar1;
  param_1[1] = lVar3;
  param_1[2] = lVar4;
  param_1[3] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  param_1[3] = (long)plVar5;
  return;
}


