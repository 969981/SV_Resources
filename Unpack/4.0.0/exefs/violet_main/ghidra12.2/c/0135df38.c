/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0135df38; name: FUN_0135df38
 */


void FUN_0135df38(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x10);
  while( true ) {
    if ((long *)(param_1 + 8) == plVar2) {
      return;
    }
    if (plVar2[2] == param_2) break;
    plVar2 = (long *)plVar2[1];
  }
  if ((long *)(param_1 + 8) != plVar2) {
    plVar1 = (long *)plVar2[1];
    lVar3 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
  }
  FUN_00896e98();
  return;
}


