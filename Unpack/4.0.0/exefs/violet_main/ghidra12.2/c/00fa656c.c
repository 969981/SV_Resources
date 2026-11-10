/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fa656c; name: FUN_00fa656c
 */


void FUN_00fa656c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)FUN_00896e78(0x18);
  if (plVar1 != (long *)0x0) {
    *plVar1 = (long)plVar1;
    plVar1[1] = (long)plVar1;
    plVar1[2] = 0;
  }
  plVar1[2] = param_2;
  lVar2 = *plVar1;
  plVar3 = (long *)(param_1 + 8);
  *plVar1 = *plVar3;
  *(long **)(lVar2 + 8) = plVar3;
  *(long **)(*plVar3 + 8) = plVar1;
  *plVar3 = lVar2;
  return;
}


