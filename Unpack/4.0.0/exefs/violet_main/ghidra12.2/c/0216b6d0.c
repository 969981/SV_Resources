/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216b6d0; name: FUN_0216b6d0
 */


long FUN_0216b6d0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != param_2) && ((*(long *)(param_3 + 8) != 0) == (*(long *)(param_1 + 8) == 0))) {
    lVar3 = param_1;
    do {
      if (param_2 + -0x40 == lVar3) {
        return param_2;
      }
      param_1 = lVar3 + 0x40;
      plVar1 = (long *)(lVar3 + 0x48);
      lVar3 = param_1;
    } while ((*(long *)(param_3 + 8) != 0) == (*plVar1 == 0));
  }
  lVar3 = param_1;
  if (param_1 != param_2) {
    while (lVar2 = lVar3 + 0x40, lVar2 != param_2) {
      plVar1 = (long *)(lVar3 + 0x48);
      lVar3 = lVar2;
      if ((*plVar1 == 0) == (*(long *)(param_3 + 8) != 0)) {
        FUN_0216b844(param_1,lVar2);
        param_1 = param_1 + 0x40;
      }
    }
  }
  return param_1;
}


