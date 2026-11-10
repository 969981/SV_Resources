/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02004d74; name: FUN_02004d74
 */


void FUN_02004d74(long param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  
  if (param_4 != param_5) {
    param_5 = (long *)*param_5;
    if (param_1 != param_3) {
      lVar1 = 1;
      if (param_5 != param_4) {
        plVar2 = param_4;
        do {
          plVar2 = (long *)plVar2[1];
          lVar1 = lVar1 + 1;
        } while (plVar2 != param_5);
      }
      *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) - lVar1;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar1;
    }
    *(long *)(*param_4 + 8) = param_5[1];
    *(long *)param_5[1] = *param_4;
    *(long **)(*param_2 + 8) = param_4;
    *param_4 = *param_2;
    *param_2 = (long)param_5;
    param_5[1] = (long)param_2;
  }
  return;
}


