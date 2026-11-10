/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a9554; name: FUN_024a9554
 */


void FUN_024a9554(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 != param_3) {
    do {
      FUN_024a967c(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
      plVar1 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar1 = param_2 + 2;
        plVar2 = (long *)*plVar1;
        if ((long *)*plVar2 != param_2) {
          do {
            lVar3 = *plVar1;
            plVar1 = (long *)(lVar3 + 0x10);
            plVar2 = (long *)*plVar1;
          } while (*plVar2 != lVar3);
        }
      }
      else {
        do {
          plVar2 = plVar1;
          plVar1 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      param_2 = plVar2;
    } while (plVar2 != param_3);
  }
  return;
}


