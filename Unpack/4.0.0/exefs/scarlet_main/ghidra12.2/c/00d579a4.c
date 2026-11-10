/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d579a4; name: FUN_00d579a4
 */


void FUN_00d579a4(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long *local_70;
  long *plStack_68;
  
  lVar9 = *param_1;
  *param_1 = 0;
  if (lVar9 != 0) {
    if ((char)param_1[2] != '\0') {
      lVar11 = *(long *)(lVar9 + 0x18);
      *(undefined8 *)(lVar9 + 0x18) = 0;
      if (lVar11 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar8 = FUN_00c4e600();
        iVar5 = *(int *)(lVar8 + 0x12c8);
        iVar1 = iVar5 + 1;
        *(int *)(lVar8 + 0x12c8) = iVar1;
        if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
          *(int *)(lVar8 + 0x12cc) = iVar1;
        }
        FUN_00d58900(lVar11);
        plVar10 = *(long **)(lVar9 + 0x20);
        uVar4 = *(undefined8 *)(lVar9 + 0x28);
        uVar12 = *(undefined8 *)(lVar9 + 0x30);
        uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,uVar4,uVar12);
        }
        else {
          FUN_00c48fe8(plVar10,lVar11,uVar4,uVar12);
        }
        lVar11 = FUN_00c4e600();
        iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
        *(int *)(lVar11 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar10 = (long *)FUN_00c4e600();
          if (plVar10[600] != 0) {
            local_70 = plVar10 + plVar10[600] * 3;
            plStack_68 = plVar10;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar13 = (long *)*plVar10;
            plVar3 = plVar10;
            if (plVar10[600] != 0) {
              plVar3 = plVar10 + plVar10[600] * 3;
            }
            if (plVar3 == plVar10) {
              uVar14 = 0;
              uVar7 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar10 + 0xd0))();
              if ((long *)*plVar10 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar10,plVar10);
                plVar13 = (long *)*plVar10;
              }
              plVar2 = plVar10 + 3;
              if (plVar3 == plVar2) {
                uVar14 = 0;
                uVar7 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar6 = (long *)*plVar2 != plVar13;
                if (bVar6) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar10,plVar10 + 3);
                  plVar13 = (long *)plVar10[3];
                }
                uVar14 = (ulong)bVar6;
                plVar2 = plVar10 + 6;
                if (plVar3 == plVar2) {
                  uVar7 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + uVar14 * 3,plVar10 + 6);
                    plVar13 = (long *)plVar10[6];
                    uVar14 = 2;
                  }
                  plVar2 = plVar10 + 9;
                  if (plVar3 == plVar2) {
                    uVar7 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + uVar14 * 3,plVar10 + 9);
                      plVar13 = (long *)plVar10[9];
                      uVar14 = 3;
                    }
                    plVar2 = plVar10 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar7 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + uVar14 * 3,plVar10 + 0xc);
                        plVar13 = (long *)plVar10[0xc];
                        uVar14 = 4;
                      }
                      plVar2 = plVar10 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar7 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))
                                    (plVar13,plVar10 + uVar14 * 3,plVar10 + 0xf);
                          plVar13 = (long *)plVar10[0xf];
                          uVar14 = 5;
                        }
                        uVar7 = 6;
                        for (plVar2 = plVar10 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar13) {
                            (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + uVar14 * 3,plVar2);
                            plVar13 = (long *)*plVar2;
                            uVar14 = uVar7;
                          }
                          uVar7 = uVar7 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + uVar14 * 3,plVar10 + uVar7 * 3);
            plVar10[600] = 0;
          }
          *(undefined4 *)(lVar11 + 0x12cc) = 0;
        }
      }
    }
    plVar10 = *(long **)param_1[1];
    uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar7 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar9,0x38,8);
    }
  }
  return;
}


