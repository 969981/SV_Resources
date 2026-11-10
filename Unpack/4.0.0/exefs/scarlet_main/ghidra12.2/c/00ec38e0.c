/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec38e0; name: FUN_00ec38e0
 */


void FUN_00ec38e0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != 0) {
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        if (*(long **)(lVar4 + -0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x10) + 0x20))();
        }
        plVar1 = (long *)(lVar4 + -0x30);
        lVar4 = lVar4 + -0x48;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = *(long *)(param_1 + 0x80);
    }
    plVar1 = *(long **)(param_1 + 0x98);
    *(long *)(param_1 + 0x88) = lVar5;
    lVar5 = *(long *)(param_1 + 0x90) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_00ec3990;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_00ec3990:
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    lVar3 = *(long *)(param_1 + 0x50);
    lVar4 = lVar5;
    if (lVar3 != lVar5) {
      do {
        plVar1 = (long *)(lVar3 + -8);
        lVar3 = lVar3 + -0x28;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar5 != lVar3);
      lVar4 = *(long *)(param_1 + 0x48);
    }
    plVar1 = *(long **)(param_1 + 0x60);
    *(long *)(param_1 + 0x50) = lVar5;
    lVar5 = *(long *)(param_1 + 0x58) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_00ec3a14;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_00ec3a14:
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ec3a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


