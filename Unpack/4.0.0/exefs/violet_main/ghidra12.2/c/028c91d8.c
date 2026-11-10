/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028c91d8; name: FUN_028c91d8
 */


void FUN_028c91d8(long param_1,long *param_2)

{
  long lVar1;
  long *plVar3;
  long *plVar2;
  
  if (*(long **)(param_1 + 8) != param_2) {
    plVar2 = *(long **)(param_1 + 8);
    do {
      plVar3 = plVar2 + -4;
      lVar1 = *plVar3;
      *plVar3 = 0;
      if (lVar1 != 0) {
        FUN_00df40ec(plVar2 + -3);
      }
      plVar2 = plVar3;
    } while (param_2 != plVar3);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


