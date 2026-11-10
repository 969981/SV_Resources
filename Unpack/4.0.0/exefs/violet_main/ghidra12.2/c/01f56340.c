/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f56340; name: FUN_01f56340
 */


void FUN_01f56340(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[1];
  uVar3 = (long)plVar4 - *param_1 >> 3;
  if (uVar3 < param_2) {
    FUN_01f5ebc8(param_1,param_2 - uVar3);
    return;
  }
  if (uVar3 != param_2) {
    plVar1 = (long *)(*param_1 + param_2 * 8);
    if (plVar1 != plVar4) {
      plVar2 = (long *)plVar4[-1];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
      if (plVar4 + -1 != plVar1) {
        plVar2 = (long *)plVar4[-2];
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
        }
        if (plVar4 + -2 != plVar1) {
          plVar2 = (long *)plVar4[-3];
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x20))();
          }
          if (plVar4 + -3 != plVar1) {
            plVar2 = (long *)plVar4[-4];
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x20))();
            }
            if (plVar4 + -4 != plVar1) {
              do {
                if ((long *)plVar4[-5] != (long *)0x0) {
                  (**(code **)(*(long *)plVar4[-5] + 0x20))();
                }
                plVar4 = plVar4 + -1;
              } while (plVar1 + 4 != plVar4);
            }
          }
        }
      }
    }
    param_1[1] = (long)plVar1;
  }
  return;
}


