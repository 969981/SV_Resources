/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00899e88; name: FUN_00899e88
 */


long FUN_00899e88(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = (**(code **)PTR_DAT_047d2258)(0x70,0x10,*(undefined8 *)PTR_DAT_047d2268);
  if (lVar1 != 0) {
    FUN_00896078(lVar1,param_2);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  lVar3 = plVar2[1];
  *(int *)(plVar2 + 1) = (int)lVar3 + 1;
  plVar2 = (long *)(*plVar2 + (long)(int)lVar3 * 0x30);
  *plVar2 = lVar1;
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2 = plVar2 + 4;
  lVar3 = *plVar2;
  plVar4 = (long *)(param_1 + 0x38);
  *plVar2 = *plVar4;
  *(long **)(lVar3 + 8) = plVar4;
  *(long **)(*plVar4 + 8) = plVar2;
  *plVar4 = lVar3;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return lVar1;
}


