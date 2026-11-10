/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014b02a8; name: FUN_014b02a8
 */


void FUN_014b02a8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *local_68;
  long *local_48;
  
  *param_1 = &PTR_FUN_04544b00;
  param_1[4] = &PTR_LAB_04544b38;
  FUN_00d67358(param_1,0);
  puVar8 = (undefined8 *)param_1[0x91];
  param_1[0x91] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar8)(puVar8);
    plVar12 = (long *)param_1[0x92];
    uVar9 = param_1[0x93];
    uVar10 = param_1[0x94];
    uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar9,uVar10);
    }
    else {
      FUN_00c48fe8(plVar12,puVar8,uVar9,uVar10);
    }
    lVar6 = FUN_00c4e600();
    iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_68 = plVar12 + plVar12[600] * 3;
        local_48 = plVar12;
        FUN_00c4ea30(&local_48,&local_68);
        plVar11 = (long *)*plVar12;
        plVar3 = plVar12;
        if (plVar12[600] != 0) {
          plVar3 = plVar12 + plVar12[600] * 3;
        }
        if (plVar3 == plVar12) {
          uVar13 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar11) {
            (**(code **)(*plVar11 + 0x100))(plVar11,plVar12,plVar12);
            plVar11 = (long *)*plVar12;
          }
          plVar2 = plVar12 + 3;
          if (plVar3 == plVar2) {
            uVar13 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar5 = (long *)*plVar2 != plVar11;
            if (bVar5) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar12,plVar12 + 3);
              plVar11 = (long *)plVar12[3];
            }
            uVar13 = (ulong)bVar5;
            plVar2 = plVar12 + 6;
            if (plVar3 == plVar2) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar12 + 6);
                plVar11 = (long *)plVar12[6];
                uVar13 = 2;
              }
              plVar2 = plVar12 + 9;
              if (plVar3 == plVar2) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar12 + 9);
                  plVar11 = (long *)plVar12[9];
                  uVar13 = 3;
                }
                plVar2 = plVar12 + 0xc;
                if (plVar3 == plVar2) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar12 + 0xc);
                    plVar11 = (long *)plVar12[0xc];
                    uVar13 = 4;
                  }
                  plVar2 = plVar12 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar12 + 0xf);
                      plVar11 = (long *)plVar12[0xf];
                      uVar13 = 5;
                    }
                    uVar7 = 6;
                    for (plVar2 = plVar12 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar2);
                        plVar11 = (long *)*plVar2;
                        uVar13 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar11 + 0x100))(plVar11,plVar12 + uVar13 * 3,plVar12 + uVar7 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
  }
  FUN_014b06b4(param_1 + 0x2e);
  FUN_014b07c0(param_1 + 6);
  return;
}


