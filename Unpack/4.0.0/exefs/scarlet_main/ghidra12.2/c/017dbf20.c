/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017dbf20; name: FUN_017dbf20
 */


void FUN_017dbf20(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar4 = param_1[1];
  if (lVar4 == lVar5) {
    lVar4 = lVar5;
  }
  else {
    if (*(long **)(lVar4 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + -0x10) + 0x20))();
    }
    if (lVar4 + -0x28 != lVar5) {
      if (*(long **)(lVar4 + -0x38) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x38) + 0x20))();
      }
      if (lVar4 + -0x50 != lVar5) {
        if (*(long **)(lVar4 + -0x60) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x60) + 0x20))();
        }
        if (lVar4 + -0x78 != lVar5) {
          if (*(long **)(lVar4 + -0x88) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + -0x88) + 0x20))();
          }
          if (lVar4 + -0xa0 != lVar5) {
            if (*(long **)(lVar4 + -0xb0) != (long *)0x0) {
              (**(code **)(**(long **)(lVar4 + -0xb0) + 0x20))();
            }
            if (lVar4 + -200 != lVar5) {
              do {
                if (*(long **)(lVar4 + -0xd8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar4 + -0xd8) + 0x20))();
                }
                lVar4 = lVar4 + -0x28;
              } while (lVar5 + 200 != lVar4);
            }
          }
        }
      }
    }
    lVar4 = *param_1;
  }
  param_1[1] = lVar5;
  lVar5 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x017dbfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5 - lVar4,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar4,lVar5 - lVar4,8);
  return;
}


