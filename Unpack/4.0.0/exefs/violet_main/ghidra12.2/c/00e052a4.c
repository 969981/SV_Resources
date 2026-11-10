/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e052a4; name: FUN_00e052a4
 */


bool FUN_00e052a4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    return false;
  }
  plVar3 = *(long **)(lVar2 + 0xb0);
  plVar1 = *(long **)(lVar2 + 0xb8);
  if ((plVar3 != plVar1) && (*plVar3 != param_2)) {
    do {
      plVar3 = plVar3 + 1;
      if (plVar1 == plVar3) {
        plVar3 = plVar1;
        goto LAB_00e052e0;
      }
    } while (*plVar3 != param_2);
  }
LAB_00e052e0:
  return plVar1 != plVar3;
}


