/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008be484; name: FUN_008be484
 */


void FUN_008be484(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  plVar3 = *(long **)(lVar1 + 0x20);
  if (plVar3 != (long *)(lVar1 + 0x18)) {
    plVar2 = (long *)plVar3[1];
    lVar4 = *plVar2;
    *(long **)(*plVar3 + 8) = plVar2;
    *plVar2 = *plVar3;
    *(long **)(lVar4 + 8) = plVar3;
    *plVar3 = lVar4;
    plVar3[3] = param_2;
    plVar3[4] = param_3;
    *(undefined4 *)(plVar3 + 2) = 7;
    plVar3[5] = 0;
    *(undefined4 *)(plVar3 + 6) = 1;
    plVar2 = (long *)(lVar1 + 8);
    *plVar3 = *plVar2;
    *(long **)(lVar4 + 8) = plVar2;
    *(long **)(*plVar2 + 8) = plVar3;
    *plVar2 = lVar4;
  }
  return;
}


