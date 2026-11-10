/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1a300; name: FUN_01e1a300
 */


long * FUN_01e1a300(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_3;
  if ((param_1 != param_2) && (*param_1 != lVar2)) {
    plVar3 = param_1;
    do {
      if (param_2 + -2 == plVar3) {
        return param_2;
      }
      param_1 = plVar3 + 2;
      plVar1 = plVar3 + 2;
      plVar3 = param_1;
    } while (*plVar1 != lVar2);
  }
  if ((param_1 != param_2) && (param_1 + 2 != param_2)) {
    plVar3 = param_1 + 4;
    while( true ) {
      if (plVar3[-2] != lVar2) {
        FUN_00d0a34c(param_1);
        param_1 = param_1 + 2;
      }
      if (param_2 == plVar3) break;
      lVar2 = *param_3;
      plVar3 = plVar3 + 2;
    }
  }
  return param_1;
}


