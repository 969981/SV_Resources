/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d4b5ec; name: FUN_01d4b5ec
 */


void FUN_01d4b5ec(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[3];
  if (plVar4 != *(long **)(param_2 + 0x18)) {
    lVar2 = *param_1;
    lVar5 = param_1[1];
    if (lVar5 == lVar2) {
      lVar5 = lVar2;
    }
    else {
      if (*(long **)(lVar5 + -0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + -0x10) + 0x20))();
      }
      if (lVar5 + -0x28 != lVar2) {
        if (*(long **)(lVar5 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar5 + -0x38) + 0x20))();
        }
        if (lVar5 + -0x50 != lVar2) {
          if (*(long **)(lVar5 + -0x60) != (long *)0x0) {
            (**(code **)(**(long **)(lVar5 + -0x60) + 0x20))();
          }
          if (lVar5 + -0x78 != lVar2) {
            if (*(long **)(lVar5 + -0x88) != (long *)0x0) {
              (**(code **)(**(long **)(lVar5 + -0x88) + 0x20))();
            }
            if (lVar5 + -0xa0 != lVar2) {
              if (*(long **)(lVar5 + -0xb0) != (long *)0x0) {
                (**(code **)(**(long **)(lVar5 + -0xb0) + 0x20))();
              }
              if (lVar5 + -200 != lVar2) {
                if (*(long **)(lVar5 + -0xd8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar5 + -0xd8) + 0x20))();
                }
                if (lVar5 + -0xf0 != lVar2) {
                  do {
                    if (*(long **)(lVar5 + -0x100) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar5 + -0x100) + 0x20))();
                    }
                    lVar5 = lVar5 + -0x28;
                  } while (lVar2 + 0xf0 != lVar5);
                }
              }
            }
          }
        }
      }
      plVar4 = (long *)param_1[3];
      lVar5 = *param_1;
    }
    lVar3 = param_1[2];
    param_1[1] = lVar2;
    uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar3 - lVar5,8);
    }
    else {
      FUN_00c48fe8(plVar4,lVar5,lVar3 - lVar5,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x30);
  param_1[5] = *(long *)(param_2 + 0x28);
  param_1[6] = lVar3;
  param_1[3] = lVar2;
  param_1[4] = lVar5;
  return;
}


