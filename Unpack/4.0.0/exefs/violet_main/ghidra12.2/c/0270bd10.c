/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270bd10; name: FUN_0270bd10
 */


void FUN_0270bd10(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,long *param_6,undefined8 param_7,long *param_8,
                 undefined8 param_9,long *param_10)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 != param_4) {
    do {
      if (param_6 == param_8) {
        do {
          param_10 = param_10 + -1;
          param_2 = param_2 + -1;
          *param_10 = *param_2;
        } while (param_4 != param_2);
        return;
      }
      lVar2 = param_6[-1];
      plVar1 = param_2 + -1;
      if (*(int *)(*plVar1 + 0x1e4) < *(int *)(lVar2 + 0x1e4)) {
        param_10[-1] = lVar2;
        param_6 = param_6 + -1;
        plVar1 = param_2;
      }
      else {
        param_10[-1] = *plVar1;
      }
      param_10 = param_10 + -1;
      param_2 = plVar1;
    } while (plVar1 != param_4);
  }
  return;
}


