/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0109b460; name: FUN_0109b460
 */


void FUN_0109b460(long *param_1)

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
        goto LAB_0109b4b8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar3 - lVar5,8);
  }
LAB_0109b4b8:
  lVar5 = param_1[7];
  if (lVar5 != 0) {
    lVar3 = param_1[9];
    plVar1 = (long *)param_1[10];
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,lVar3 << 3,1);
        goto LAB_0109b4c0;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar3 << 3,1);
  }
LAB_0109b4c0:
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar6 = lVar5;
  if (param_1[1] != lVar5) {
    do {
      pcVar4 = *(code **)(lVar3 + -0x78);
      lVar6 = lVar3 + -0x80;
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar3 + -0x70) = 0;
        *(undefined8 *)(lVar3 + -0x68) = 0;
        *(undefined8 *)(lVar3 + -0x80) = 0;
        *(undefined8 *)(lVar3 + -0x78) = 0;
        (*pcVar4)(lVar3 + -0x60);
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
                    /* WARNING: Could not recover jumptable at 0x0109b548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,lVar5 - lVar6,0x10);
  return;
}


