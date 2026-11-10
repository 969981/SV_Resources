/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e2e474; name: FUN_01e2e474
 */


void FUN_01e2e474(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar7 = FUN_00c4e600();
  iVar5 = *(int *)(lVar7 + 0x12c8);
  iVar1 = iVar5 + 1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
    *(int *)(lVar7 + 0x12cc) = iVar1;
  }
  *param_2 = (long)&PTR_FUN_04545770;
  pcVar10 = (code *)param_2[0x51];
  if (pcVar10 != (code *)0x0) {
    param_2[0x53] = 0;
    param_2[0x52] = 0;
    param_2[0x51] = 0;
    param_2[0x50] = 0;
    (*pcVar10)(param_2 + 0x54);
  }
  pcVar10 = (code *)param_2[0x41];
  if (pcVar10 != (code *)0x0) {
    param_2[0x43] = 0;
    param_2[0x42] = 0;
    param_2[0x41] = 0;
    param_2[0x40] = 0;
    (*pcVar10)(param_2 + 0x44);
  }
  pcVar10 = (code *)param_2[0x31];
  if (pcVar10 != (code *)0x0) {
    param_2[0x32] = 0;
    param_2[0x33] = 0;
    param_2[0x30] = 0;
    param_2[0x31] = 0;
    (*pcVar10)(param_2 + 0x34);
  }
  pcVar10 = (code *)param_2[0x21];
  if (pcVar10 != (code *)0x0) {
    param_2[0x22] = 0;
    param_2[0x23] = 0;
    param_2[0x20] = 0;
    param_2[0x21] = 0;
    (*pcVar10)(param_2 + 0x24);
  }
  pcVar10 = (code *)param_2[0x11];
  if (pcVar10 != (code *)0x0) {
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    (*pcVar10)(param_2 + 0x14);
  }
  *param_2 = (long)(PTR_DAT_047d9450 + 0x10);
  plVar9 = param_2 + 10;
  plVar3 = plVar9;
  if (param_2[0xe] != 0) {
    plVar3 = plVar9 + param_2[0xe];
  }
  if (plVar3 != plVar9) {
    (**(code **)(*(long *)param_2[10] + 8))((long *)param_2[10],param_2);
    for (plVar9 = param_2 + 0xb; plVar3 != plVar9; plVar9 = plVar9 + 1) {
      (**(code **)(*(long *)*plVar9 + 8))((long *)*plVar9,param_2);
    }
  }
  if ((long *)param_2[4] != (long *)0x0) {
    (**(code **)(*(long *)param_2[4] + 0x20))();
  }
  plVar9 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar11 = param_1[2];
  uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2,uVar4,uVar11);
  }
  else {
    FUN_00c48fe8(plVar9,param_2,uVar4,uVar11);
  }
  lVar7 = FUN_00c4e600();
  iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar9 = (long *)FUN_00c4e600();
    if (plVar9[600] != 0) {
      local_60 = plVar9 + plVar9[600] * 3;
      plStack_58 = plVar9;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar12 = (long *)*plVar9;
      plVar3 = plVar9;
      if (plVar9[600] != 0) {
        plVar3 = plVar9 + plVar9[600] * 3;
      }
      if (plVar3 == plVar9) {
        uVar13 = 0;
        uVar8 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar9 + 0xd0))();
        if ((long *)*plVar9 != plVar12) {
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9);
          plVar12 = (long *)*plVar9;
        }
        plVar2 = plVar9 + 3;
        if (plVar3 == plVar2) {
          uVar13 = 0;
          uVar8 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar6 = (long *)*plVar2 != plVar12;
          if (bVar6) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9 + 3);
            plVar12 = (long *)plVar9[3];
          }
          uVar13 = (ulong)bVar6;
          plVar2 = plVar9 + 6;
          if (plVar3 == plVar2) {
            uVar8 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 6);
              plVar12 = (long *)plVar9[6];
              uVar13 = 2;
            }
            plVar2 = plVar9 + 9;
            if (plVar3 == plVar2) {
              uVar8 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 9);
                plVar12 = (long *)plVar9[9];
                uVar13 = 3;
              }
              plVar2 = plVar9 + 0xc;
              if (plVar3 == plVar2) {
                uVar8 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 0xc);
                  plVar12 = (long *)plVar9[0xc];
                  uVar13 = 4;
                }
                plVar2 = plVar9 + 0xf;
                if (plVar3 == plVar2) {
                  uVar8 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + 0xf);
                    plVar12 = (long *)plVar9[0xf];
                    uVar13 = 5;
                  }
                  uVar8 = 6;
                  for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar2);
                      plVar12 = (long *)*plVar2;
                      uVar13 = uVar8;
                    }
                    uVar8 = uVar8 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar13 * 3,plVar9 + uVar8 * 3);
      plVar9[600] = 0;
    }
    *(undefined4 *)(lVar7 + 0x12cc) = 0;
  }
  return;
}


