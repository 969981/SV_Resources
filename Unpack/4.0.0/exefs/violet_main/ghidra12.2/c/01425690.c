/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01425690; name: FUN_01425690
 */


void FUN_01425690(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_1[1];
  lVar3 = lVar4;
  if (lVar5 != lVar4) {
    if (*(long **)(lVar5 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + -0x10) + 0x20))();
    }
    if (*(long **)(lVar5 + -0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + -0x18) + 0x20))();
    }
    FUN_00db239c(lVar5 + -0x58);
    FUN_00db239c(lVar5 + -0x98);
    if (lVar5 + -0xb0 != lVar4) {
      if (*(long **)(lVar5 + -0xc0) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + -0xc0) + 0x20))();
      }
      if (*(long **)(lVar5 + -200) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + -200) + 0x20))();
      }
      FUN_00db239c(lVar5 + -0x108);
      FUN_00db239c(lVar5 + -0x148);
      if (lVar5 + -0x160 != lVar4) {
        do {
          if (*(long **)(lVar5 + -0x170) != (long *)0x0) {
            (**(code **)(**(long **)(lVar5 + -0x170) + 0x20))();
          }
          if (*(long **)(lVar5 + -0x178) != (long *)0x0) {
            (**(code **)(**(long **)(lVar5 + -0x178) + 0x20))();
          }
          FUN_00db239c(lVar5 + -0x1b8);
          FUN_00db239c(lVar5 + -0x1f8);
          lVar5 = lVar5 + -0xb0;
        } while (lVar4 + 0x160 != lVar5);
      }
    }
    lVar3 = *param_1;
  }
  param_1[1] = lVar4;
  lVar4 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0142575c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar4 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar3,lVar4 - lVar3,8);
  return;
}


