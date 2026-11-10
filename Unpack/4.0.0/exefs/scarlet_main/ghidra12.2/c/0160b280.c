/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0160b280; name: FUN_0160b280
 */


void FUN_0160b280(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *local_60;
  long *plStack_58;
  
  plVar9 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar9 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    puVar11 = (undefined8 *)plVar9[6];
    if (puVar11 != (undefined8 *)0x0) {
      plVar13 = (long *)*puVar11;
      if ((long *)puVar11[3] != (long *)0x0) {
        (**(code **)(*(long *)puVar11[3] + 0x20))();
      }
      plVar12 = (long *)plVar9[7];
      uVar7 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar11,0x20,8);
      }
      else {
        FUN_00c48fe8(plVar12,puVar11,0x20,8);
      }
      if (plVar13 != (long *)0x0) {
        plVar12 = (long *)*plVar13;
        if ((long *)plVar13[3] != (long *)0x0) {
          (**(code **)(*(long *)plVar13[3] + 0x20))();
        }
        plVar14 = (long *)plVar9[7];
        uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,0x20,8);
        }
        else {
          FUN_00c48fe8(plVar14,plVar13,0x20,8);
        }
        while (plVar12 != (long *)0x0) {
          plVar13 = (long *)*plVar12;
          if ((long *)plVar12[3] != (long *)0x0) {
            (**(code **)(*(long *)plVar12[3] + 0x20))();
          }
          plVar14 = (long *)plVar9[7];
          uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,plVar12,0x20,8);
            plVar12 = plVar13;
          }
          else {
            FUN_00c48fe8(plVar14,plVar12,0x20,8);
            plVar12 = plVar13;
          }
        }
      }
    }
    lVar6 = *plVar9;
    *plVar9 = 0;
    if (lVar6 != 0) {
      lVar2 = plVar9[1];
      plVar13 = (long *)plVar9[2];
      uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar6,lVar2 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar13,lVar6,lVar2 << 3,8);
      }
    }
    plVar13 = (long *)param_1[1];
    uVar3 = param_1[2];
    uVar10 = param_1[3];
    uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar9,uVar3,uVar10);
    }
    else {
      FUN_00c48fe8(plVar13,plVar9,uVar3,uVar10);
    }
    lVar6 = FUN_00c4e600();
    iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_60 = plVar9 + plVar9[600] * 3;
        plStack_58 = plVar9;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar12 = (long *)*plVar9;
        plVar13 = plVar9;
        if (plVar9[600] != 0) {
          plVar13 = plVar9 + plVar9[600] * 3;
        }
        if (plVar13 == plVar9) {
          uVar15 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar12) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9);
            plVar12 = (long *)*plVar9;
          }
          plVar14 = plVar9 + 3;
          if (plVar13 == plVar14) {
            uVar15 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            bVar5 = (long *)*plVar14 != plVar12;
            if (bVar5) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar9,plVar9 + 3);
              plVar12 = (long *)plVar9[3];
            }
            uVar15 = (ulong)bVar5;
            plVar14 = plVar9 + 6;
            if (plVar13 == plVar14) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar14 + 0xd0))();
              if ((long *)*plVar14 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,plVar9 + 6);
                plVar12 = (long *)plVar9[6];
                uVar15 = 2;
              }
              plVar14 = plVar9 + 9;
              if (plVar13 == plVar14) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,plVar9 + 9);
                  plVar12 = (long *)plVar9[9];
                  uVar15 = 3;
                }
                plVar14 = plVar9 + 0xc;
                if (plVar13 == plVar14) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar14 + 0xd0))();
                  if ((long *)*plVar14 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,plVar9 + 0xc);
                    plVar12 = (long *)plVar9[0xc];
                    uVar15 = 4;
                  }
                  plVar14 = plVar9 + 0xf;
                  if (plVar13 == plVar14) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar14 + 0xd0))();
                    if ((long *)*plVar14 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,plVar9 + 0xf);
                      plVar12 = (long *)plVar9[0xf];
                      uVar15 = 5;
                    }
                    uVar7 = 6;
                    for (plVar14 = plVar9 + 0x12; plVar13 != plVar14; plVar14 = plVar14 + 3) {
                      (**(code **)(*(long *)*plVar14 + 0xd0))();
                      if ((long *)*plVar14 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,plVar14);
                        plVar12 = (long *)*plVar14;
                        uVar15 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + uVar15 * 3,plVar9 + uVar7 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
  }
  return;
}


