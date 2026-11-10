/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f24d4; name: FUN_014f24d4
 */


void FUN_014f24d4(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar8 = FUN_00c4e600();
  iVar5 = *(int *)(lVar8 + 0x12c8);
  iVar1 = iVar5 + 1;
  *(int *)(lVar8 + 0x12c8) = iVar1;
  if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
    *(int *)(lVar8 + 0x12cc) = iVar1;
  }
  lVar8 = *param_2;
  if (lVar8 != 0) {
    lVar14 = param_2[1];
    lVar11 = lVar8;
    if (lVar14 != lVar8) {
      plVar9 = *(long **)(lVar14 + -8);
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar3 = plVar9 + 2;
        do {
          lVar11 = *plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
      if (lVar14 + -0x50 != lVar8) {
        plVar9 = *(long **)(lVar14 + -0x58);
        lVar14 = lVar14 + -0xa0;
        if (plVar9 == (long *)0x0) goto LAB_014f25b0;
        if (plVar9[1] == 0) goto LAB_014f25b0;
        plVar3 = plVar9 + 2;
        do {
          lVar11 = *plVar3 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          if (lVar11 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
LAB_014f25b0:
          do {
            if (lVar14 == lVar8) goto LAB_014f25e4;
            plVar9 = *(long **)(lVar14 + -8);
            lVar14 = lVar14 + -0x50;
          } while ((plVar9 == (long *)0x0) || (plVar9[1] == 0));
          plVar3 = plVar9 + 2;
          do {
            lVar11 = *plVar3 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *plVar3 = lVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        } while( true );
      }
LAB_014f25e4:
      lVar11 = *param_2;
    }
    lVar14 = param_2[2];
    plVar9 = (long *)param_2[3];
    param_2[1] = lVar8;
    uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar11,lVar14 - lVar11,0x10);
    }
    else {
      FUN_00c48fe8(plVar9,lVar11,lVar14 - lVar11,0x10);
    }
  }
  plVar9 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar12 = param_1[2];
  uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2,uVar4,uVar12);
  }
  else {
    FUN_00c48fe8(plVar9,param_2,uVar4,uVar12);
  }
  lVar8 = FUN_00c4e600();
  iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
  *(int *)(lVar8 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar9 = (long *)FUN_00c4e600();
    if (plVar9[600] != 0) {
      local_60 = plVar9 + plVar9[600] * 3;
      plStack_58 = plVar9;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar13 = (long *)*plVar9;
      plVar3 = plVar9;
      if (plVar9[600] != 0) {
        plVar3 = plVar9 + plVar9[600] * 3;
      }
      if (plVar3 == plVar9) {
        uVar15 = 0;
        uVar10 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar9 + 0xd0))();
        if ((long *)*plVar9 != plVar13) {
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9);
          plVar13 = (long *)*plVar9;
        }
        plVar2 = plVar9 + 3;
        if (plVar3 == plVar2) {
          uVar15 = 0;
          uVar10 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar7 = (long *)*plVar2 != plVar13;
          if (bVar7) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9 + 3);
            plVar13 = (long *)plVar9[3];
          }
          uVar15 = (ulong)bVar7;
          plVar2 = plVar9 + 6;
          if (plVar3 == plVar2) {
            uVar10 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar15 * 3,plVar9 + 6);
              plVar13 = (long *)plVar9[6];
              uVar15 = 2;
            }
            plVar2 = plVar9 + 9;
            if (plVar3 == plVar2) {
              uVar10 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar15 * 3,plVar9 + 9);
                plVar13 = (long *)plVar9[9];
                uVar15 = 3;
              }
              plVar2 = plVar9 + 0xc;
              if (plVar3 == plVar2) {
                uVar10 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar15 * 3,plVar9 + 0xc);
                  plVar13 = (long *)plVar9[0xc];
                  uVar15 = 4;
                }
                plVar2 = plVar9 + 0xf;
                if (plVar3 == plVar2) {
                  uVar10 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar15 * 3,plVar9 + 0xf);
                    plVar13 = (long *)plVar9[0xf];
                    uVar15 = 5;
                  }
                  uVar10 = 6;
                  for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar15 * 3,plVar2);
                      plVar13 = (long *)*plVar2;
                      uVar15 = uVar10;
                    }
                    uVar10 = uVar10 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar15 * 3,plVar9 + uVar10 * 3);
      plVar9[600] = 0;
    }
    *(undefined4 *)(lVar8 + 0x12cc) = 0;
  }
  return;
}


