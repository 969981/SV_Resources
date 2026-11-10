/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a43810; name: FUN_00a43810
 */


void FUN_00a43810(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int *piVar5;
  int *piVar4;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[0x10];
  *param_1 = &PTR_FUN_04540ef8;
  plVar1 = DAT_04836488;
  if (lVar7 != 0) {
    if ((int *)param_1[2] == (int *)param_1[3]) {
      lVar6 = 0;
    }
    else {
      lVar6 = 1;
      piVar4 = (int *)param_1[2];
      do {
        piVar5 = piVar4 + 1;
        lVar6 = (long)*piVar4 * (long)(int)lVar6;
        piVar4 = piVar5;
      } while ((int *)param_1[3] != piVar5);
      lVar6 = lVar6 * 0x88;
    }
    uVar2 = (**(code **)(*DAT_04836488 + 0xf8))(DAT_04836488);
    if ((uVar2 & 1) == 0) {
LAB_00a43888:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar6,0x40);
    }
    else {
      lVar3 = FUN_00c4e600();
      if (*(int *)(lVar3 + 0x12c8) < 1) goto LAB_00a43888;
      FUN_00c48fe8(plVar1,lVar7,lVar6,0x40);
    }
    param_1[0x10] = 0;
  }
  param_1[3] = param_1[2];
  lVar7 = param_1[9];
  param_1[10] = lVar7;
  if (lVar7 != 0) {
    lVar6 = param_1[0xb];
    plVar1 = (long *)param_1[0xc];
    param_1[10] = lVar7;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar7,lVar6 - lVar7,4);
        goto LAB_00a438f8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar6 - lVar7,4);
  }
LAB_00a438f8:
  lVar7 = param_1[2];
  if (lVar7 == 0) {
    return;
  }
  lVar6 = param_1[4];
  plVar1 = (long *)param_1[5];
  param_1[3] = lVar7;
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar7,lVar6 - lVar7,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00a43944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar6 - lVar7,4);
  return;
}


