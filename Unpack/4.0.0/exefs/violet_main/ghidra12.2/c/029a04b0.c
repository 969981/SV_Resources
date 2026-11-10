/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a04b0; name: FUN_029a04b0
 */


long FUN_029a04b0(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != param_2) && (*(long *)(param_1 + 0x80) != *param_3)) {
    lVar3 = param_1;
    do {
      if (param_2 + -0x90 == lVar3) {
        return param_2;
      }
      param_1 = lVar3 + 0x90;
      plVar1 = (long *)(lVar3 + 0x110);
      lVar3 = param_1;
    } while (*plVar1 != *param_3);
  }
  lVar3 = param_1;
  if (param_1 != param_2) {
    while (lVar2 = lVar3, lVar3 = lVar2 + 0x90, lVar3 != param_2) {
      if (*(long *)(lVar2 + 0x110) != *param_3) {
        FUN_029a072c(param_1,lVar3);
        *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar2 + 0x110);
        param_1 = param_1 + 0x90;
      }
    }
  }
  return param_1;
}


