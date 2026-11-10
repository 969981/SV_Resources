/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029f7930; name: FUN_029f7930
 */


void FUN_029f7930(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_1[0xb] != 0) {
    plVar2 = (long *)param_1[6];
    while (plVar2 != (long *)0x0) {
      plVar9 = (long *)*plVar2;
      if ((code *)plVar2[3] != (code *)0x0) {
        (*(code *)plVar2[3])(plVar2 + 4);
      }
      plVar8 = (long *)param_1[7];
      uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar3 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar2,0x40,8);
        plVar2 = plVar9;
      }
      else {
        FUN_00c48fe8(plVar8,plVar2,0x40,8);
        plVar2 = plVar9;
      }
    }
    uVar3 = param_1[1];
    param_1[6] = 0;
    if (uVar3 != 0) {
      uVar5 = uVar3 & 3;
      if (uVar3 - 1 < 3) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar6 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar6 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar6 * 8 + 0x10) = 0;
          lVar7 = uVar6 * 8;
          uVar6 = uVar6 + 4;
          *(undefined8 *)(*param_1 + lVar7 + 0x18) = 0;
        } while ((uVar3 & 0xfffffffffffffffc) != uVar6);
      }
      if (uVar5 != 0) {
        lVar7 = uVar6 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar7) = 0;
          uVar5 = uVar5 - 1;
          lVar7 = lVar7 + 8;
        } while (uVar5 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  plVar2 = (long *)param_1[6];
  while (plVar2 != (long *)0x0) {
    plVar9 = (long *)*plVar2;
    if ((code *)plVar2[3] != (code *)0x0) {
      (*(code *)plVar2[3])(plVar2 + 4);
    }
    plVar8 = (long *)param_1[7];
    uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar3 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar2,0x40,8);
      plVar2 = plVar9;
    }
    else {
      FUN_00c48fe8(plVar8,plVar2,0x40,8);
      plVar2 = plVar9;
    }
  }
  lVar7 = *param_1;
  *param_1 = 0;
  if (lVar7 == 0) {
    return;
  }
  lVar1 = param_1[1];
  plVar2 = (long *)param_1[2];
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x029f7a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar7,lVar1 << 3,8);
    return;
  }
  FUN_00c48fe8(plVar2,lVar7,lVar1 << 3,8);
  return;
}


