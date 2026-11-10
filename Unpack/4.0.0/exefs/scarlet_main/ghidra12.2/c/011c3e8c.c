/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c3e8c; name: FUN_011c3e8c
 */


void FUN_011c3e8c(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    lVar3 = param_1[0x10];
    plVar1 = (long *)param_1[0x11];
    param_1[0xf] = lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar3 - lVar5,8);
        goto LAB_011c3ee4;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar3 - lVar5,8);
  }
LAB_011c3ee4:
  lVar5 = param_1[7];
  if (lVar5 != 0) {
    lVar3 = param_1[9];
    plVar1 = (long *)param_1[10];
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar3 << 3,1);
        goto LAB_011c3eec;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar3 << 3,1);
  }
LAB_011c3eec:
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar6 = lVar5;
  if (param_1[1] != lVar5) {
    do {
      pcVar4 = *(code **)(lVar3 + -0x38);
      lVar6 = lVar3 + -0x40;
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar3 + -0x30) = 0;
        *(undefined8 *)(lVar3 + -0x28) = 0;
        *(undefined8 *)(lVar3 + -0x40) = 0;
        *(undefined8 *)(lVar3 + -0x38) = 0;
        (*pcVar4)(lVar3 + -0x20);
      }
      lVar3 = lVar6;
    } while (lVar5 != lVar6);
    lVar6 = *param_1;
  }
  param_1[1] = lVar5;
  lVar5 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar6,lVar5 - lVar6,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x011c3f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,lVar5 - lVar6,0x10);
  return;
}


