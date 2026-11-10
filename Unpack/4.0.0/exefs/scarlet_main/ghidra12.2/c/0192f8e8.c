/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192f8e8; name: FUN_0192f8e8
 */


void FUN_0192f8e8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0xd8);
    *(long *)(param_1 + 200) = lVar4;
    lVar5 = *(long *)(param_1 + 0xd0) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,0x10);
        goto LAB_0192f940;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,0x10);
  }
LAB_0192f940:
  FUN_017eb2f4(param_1 + 0x88);
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 == lVar4) {
      lVar5 = lVar4;
    }
    else {
      do {
        plVar1 = (long *)(lVar5 + -8);
        lVar5 = lVar5 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar4 != lVar5);
      lVar5 = *(long *)(param_1 + 0x50);
    }
    plVar1 = *(long **)(param_1 + 0x68);
    *(long *)(param_1 + 0x58) = lVar4;
    lVar4 = *(long *)(param_1 + 0x60) - lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar4,8);
        goto LAB_0192f9d0;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
  }
LAB_0192f9d0:
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0192fa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


