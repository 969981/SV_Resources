/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00894a10; name: FUN_00894a10
 */


void FUN_00894a10(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_047d2130 + 0x10);
  plVar1 = (long *)param_1[4];
  while (param_1 + 3 != plVar1) {
    plVar3 = (long *)plVar1[1];
    if (param_1 + 3 != plVar1) {
      lVar2 = *plVar3;
      *(long **)(*plVar1 + 8) = plVar3;
      *plVar3 = *plVar1;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
    }
    FUN_00896e98();
    plVar1 = plVar3;
  }
  return;
}


