/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b3b54; name: FUN_008b3b54
 */


void FUN_008b3b54(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = param_1;
  do {
    plVar2 = (long *)plVar2[1];
    if (param_1 == plVar2) {
      return;
    }
  } while (plVar2[0x12] != param_2);
  if (param_1 != plVar2) {
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


