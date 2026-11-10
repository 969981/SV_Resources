/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00898b4c; name: FUN_00898b4c
 */


long FUN_00898b4c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = (**(code **)PTR_DAT_047d2258)(0x40,4,*(undefined8 *)PTR_DAT_047d2268);
  if (lVar1 != 0) {
    FUN_0088d0a0(lVar1);
    plVar2 = (long *)(lVar1 + 8);
    lVar3 = *plVar2;
    plVar4 = (long *)(param_1 + 8);
    *plVar2 = *plVar4;
    *(long **)(lVar3 + 8) = plVar4;
    *(long **)(*plVar4 + 8) = plVar2;
    *plVar4 = lVar3;
  }
  return lVar1;
}


