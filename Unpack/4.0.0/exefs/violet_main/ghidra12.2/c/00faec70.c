/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00faec70; name: FUN_00faec70
 */


void FUN_00faec70(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)param_1[0x49];
  *param_1 = (long)&DAT_045d0ea0;
  param_1[4] = (long)&PTR_LAB_045d0f38;
  param_1[5] = (long)&DAT_045d0f88;
  if (plVar7 != (long *)0x0) {
    plVar5 = (long *)param_1[0x4a];
    if ((long *)param_1[0x4a] == plVar7) {
      plVar5 = plVar7;
    }
    else {
      do {
        plVar8 = plVar5 + -7;
        lVar6 = *plVar8;
        if (lVar6 != 0) {
          lVar4 = plVar5[-6];
          if (lVar4 == lVar6) {
            lVar4 = lVar6;
          }
          else {
            do {
              lVar4 = lVar4 + -0x40;
              FUN_00faeeac(lVar4);
            } while (lVar6 != lVar4);
            lVar4 = *plVar8;
          }
          plVar5[-6] = lVar6;
          lVar6 = plVar5[-5];
          plVar5 = (long *)plVar5[-4];
          uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if ((uVar2 & 1) != 0) {
            lVar3 = FUN_00c4e600();
            if (0 < *(int *)(lVar3 + 0x12c8)) {
              FUN_00c48fe8(plVar5,lVar4,lVar6 - lVar4,8);
              goto LAB_00faed20;
            }
          }
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar6 - lVar4,8);
        }
LAB_00faed20:
        plVar5 = plVar8;
      } while (plVar8 != plVar7);
      plVar5 = (long *)param_1[0x49];
    }
    lVar6 = param_1[0x4b];
    param_1[0x4a] = (long)plVar7;
    plVar7 = (long *)param_1[0x4c];
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar7,plVar5,lVar6 - (long)plVar5,8);
        goto LAB_00faed78;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar5,lVar6 - (long)plVar5,8);
  }
LAB_00faed78:
  lVar6 = param_1[0x42];
  if (lVar6 != 0) {
    lVar4 = param_1[0x43];
    if (lVar4 == lVar6) {
      lVar4 = lVar6;
    }
    else {
      do {
        lVar4 = lVar4 + -400;
        FUN_00faf2d8(lVar4);
      } while (lVar6 != lVar4);
      lVar4 = param_1[0x42];
    }
    lVar3 = param_1[0x44];
    param_1[0x43] = lVar6;
    plVar7 = (long *)param_1[0x45];
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar2 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar4,lVar3 - lVar4,0x10);
        goto LAB_00faede4;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,lVar3 - lVar4,0x10);
  }
LAB_00faede4:
  puVar1 = PTR_DAT_047dd550;
  *param_1 = (long)(PTR_DAT_047dd550 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_00faf5e0(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}


