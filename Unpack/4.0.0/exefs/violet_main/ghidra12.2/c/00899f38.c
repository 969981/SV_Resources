/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00899f38; name: FUN_00899f38
 */


long FUN_00899f38(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = (**(code **)PTR_DAT_047d2258)(0x1d0,0x10,*(undefined8 *)PTR_DAT_047d2268);
  if (lVar2 != 0) {
    FUN_008c6f90(lVar2,param_2);
  }
  lVar3 = *(long *)(param_1 + 0x30);
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar5 = *(long *)(lVar3 + 0x10);
  *(int *)(lVar3 + 0x18) = iVar1 + 1;
  lVar3 = (long)iVar1 * 0x18;
  *(long *)(lVar5 + lVar3) = lVar2;
  plVar4 = (long *)(lVar5 + lVar3 + 8);
  lVar3 = *plVar4;
  plVar6 = (long *)(param_1 + 0x50);
  *plVar4 = *plVar6;
  *(long **)(lVar3 + 8) = plVar6;
  *(long **)(*plVar6 + 8) = plVar4;
  *plVar6 = lVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return lVar2;
}


