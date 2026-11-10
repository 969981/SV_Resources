/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01283ad4; name: FUN_01283ad4
 */


void FUN_01283ad4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 != param_3) {
    plVar3 = *(long **)(param_1 + 8);
    plVar5 = (long *)((long)param_2 + ((long)param_3 - (long)param_2));
    if (plVar5 != plVar3) {
      lVar4 = (long)param_3 - (long)param_2 >> 3;
      plVar5 = param_2;
      do {
        plVar1 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))();
        }
        lVar2 = plVar5[lVar4];
        plVar5[lVar4] = 0;
        param_2 = plVar5 + 1;
        *plVar5 = lVar2;
        plVar5 = param_2;
      } while (plVar3 + -lVar4 != param_2);
      plVar5 = *(long **)(param_1 + 8);
    }
    if (plVar5 != param_2) {
      plVar3 = (long *)plVar5[-1];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))();
      }
      if (plVar5 + -1 != param_2) {
        plVar3 = (long *)plVar5[-2];
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))();
        }
        if (plVar5 + -2 != param_2) {
          plVar3 = (long *)plVar5[-3];
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x18))();
          }
          if (plVar5 + -3 != param_2) {
            do {
              if ((long *)plVar5[-4] != (long *)0x0) {
                (**(code **)(*(long *)plVar5[-4] + 0x18))();
              }
              plVar5 = plVar5 + -1;
            } while (param_2 + 3 != plVar5);
          }
        }
      }
    }
    *(long **)(param_1 + 8) = param_2;
  }
  return;
}


