/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d56874; name: FUN_00d56874
 */


undefined1  [16]
FUN_00d56874(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  long local_90;
  long *local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  long *plStack_68;
  
  FUN_00d571f4(&local_90,param_2,param_3,param_4,param_5);
  plVar10 = param_1 + 0xe;
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0 && param_1[0xf] == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      param_1[0xf] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00d568d0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar10 != 0 || param_1[0xf] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar10 == 0 && param_1[0xf] == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            param_1[0xf] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00d568d0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      param_1[0xf] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00d568d0:
  uVar13 = *(undefined8 *)(local_90 + 0x40);
  uVar14 = *(undefined8 *)(local_90 + 0x60);
  if (*(char *)(local_90 + 0x90) != '\0') {
    if (param_1[0x1a] == param_1[0x1b]) {
      iVar16 = (int)param_1[0x21];
      *(int *)(param_1 + 0x21) = iVar16 + 1;
    }
    else {
      piVar12 = (int *)(param_1[0x1b] + -4);
      iVar16 = *piVar12;
      param_1[0x1b] = (long)piVar12;
    }
    (**(code **)PTR_DAT_047e1e08)(param_1 + 0x16,iVar16,uVar13,uVar14);
    *(int *)(local_90 + 0x88) = iVar16;
  }
  if (*(char *)(local_90 + 0x91) != '\0') {
    if (param_1[0x1a] == param_1[0x1b]) {
      iVar16 = (int)param_1[0x21];
      *(int *)(param_1 + 0x21) = iVar16 + 1;
    }
    else {
      piVar12 = (int *)(param_1[0x1b] + -4);
      iVar16 = *piVar12;
      param_1[0x1b] = (long)piVar12;
    }
    (**(code **)PTR_DAT_047e1e10)(param_1 + 0x16,iVar16,uVar13,uVar14);
    *(int *)(local_90 + 0x8c) = iVar16;
  }
  *param_1 = local_90;
  plVar7 = (long *)FUN_00d575b4(param_1 + 1,param_1);
  lVar6 = local_90;
  local_90 = 0;
  lVar15 = *plVar7;
  *plVar7 = lVar6;
  if (lVar15 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar3 = *(int *)(lVar6 + 0x12c8);
    iVar16 = iVar3 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar16;
    if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
      *(int *)(lVar6 + 0x12cc) = iVar16;
    }
    FUN_00d58900(lVar15);
    plVar17 = (long *)plVar7[1];
    lVar6 = plVar7[2];
    lVar8 = plVar7[3];
    uVar9 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,lVar15,lVar6,lVar8);
    }
    else {
      FUN_00c48fe8(plVar17,lVar15,lVar6,lVar8);
    }
    lVar6 = FUN_00c4e600();
    iVar16 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar16;
    if (iVar16 == 0) {
      plVar17 = (long *)FUN_00c4e600();
      if (plVar17[600] != 0) {
        local_70 = plVar17 + plVar17[600] * 3;
        plStack_68 = plVar17;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar18 = (long *)*plVar17;
        plVar1 = plVar17;
        if (plVar17[600] != 0) {
          plVar1 = plVar17 + plVar17[600] * 3;
        }
        if (plVar1 == plVar17) {
          uVar19 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar17 + 0xd0))();
          if ((long *)*plVar17 != plVar18) {
            (**(code **)(*plVar18 + 0x100))(plVar18,plVar17,plVar17);
            plVar18 = (long *)*plVar17;
          }
          plVar20 = plVar17 + 3;
          if (plVar1 == plVar20) {
            uVar19 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar20 + 0xd0))();
            bVar5 = (long *)*plVar20 != plVar18;
            if (bVar5) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar17,plVar17 + 3);
              plVar18 = (long *)plVar17[3];
            }
            uVar19 = (ulong)bVar5;
            plVar20 = plVar17 + 6;
            if (plVar1 == plVar20) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar20 + 0xd0))();
              if ((long *)*plVar20 != plVar18) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar17 + uVar19 * 3,plVar17 + 6);
                plVar18 = (long *)plVar17[6];
                uVar19 = 2;
              }
              plVar20 = plVar17 + 9;
              if (plVar1 == plVar20) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar20 + 0xd0))();
                if ((long *)*plVar20 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar17 + uVar19 * 3,plVar17 + 9);
                  plVar18 = (long *)plVar17[9];
                  uVar19 = 3;
                }
                plVar20 = plVar17 + 0xc;
                if (plVar1 == plVar20) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar20 + 0xd0))();
                  if ((long *)*plVar20 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar17 + uVar19 * 3,plVar17 + 0xc);
                    plVar18 = (long *)plVar17[0xc];
                    uVar19 = 4;
                  }
                  plVar20 = plVar17 + 0xf;
                  if (plVar1 == plVar20) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar20 + 0xd0))();
                    if ((long *)*plVar20 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar17 + uVar19 * 3,plVar17 + 0xf);
                      plVar18 = (long *)plVar17[0xf];
                      uVar19 = 5;
                    }
                    uVar9 = 6;
                    for (plVar20 = plVar17 + 0x12; plVar1 != plVar20; plVar20 = plVar20 + 3) {
                      (**(code **)(*(long *)*plVar20 + 0xd0))();
                      if ((long *)*plVar20 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar17 + uVar19 * 3,plVar20);
                        plVar18 = (long *)*plVar20;
                        uVar19 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar18 + 0x100))(plVar18,plVar17 + uVar19 * 3,plVar17 + uVar9 * 3);
        plVar17[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
  }
  plVar7[2] = lStack_80;
  plVar7[3] = local_78;
  plVar7[1] = (long)local_88;
  lVar6 = *param_1;
  do {
    lVar15 = *plVar10;
    lVar8 = param_1[0xf];
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar15;
      param_1[0xf] = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar11 = *plVar10;
    lVar2 = param_1[0xf];
    if (lVar11 != lVar15 || lVar2 != lVar8) {
      bVar5 = false;
      ClearExclusiveLocal();
      goto LAB_00d569b0;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = 0;
      *(long *)((long)param_1 + 0x74) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar5 = true;
LAB_00d569b0:
  if (!bVar5) {
    do {
      lVar15 = *plVar10;
      lVar8 = param_1[0xf];
      if (lVar15 != lVar11 || lVar8 != lVar2) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d56fa0;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = 0;
        *(long *)((long)param_1 + 0x74) = lVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar5 = true;
joined_r0x00d56fa0:
    if (!bVar5) {
      do {
        lVar11 = *plVar10;
        lVar2 = param_1[0xf];
        if (lVar11 != lVar15 || lVar2 != lVar8) {
          bVar5 = false;
          ClearExclusiveLocal();
          lVar15 = lVar11;
          lVar8 = lVar2;
          goto joined_r0x00d56fa0;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = 0;
          *(long *)((long)param_1 + 0x74) = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar5 = true;
      lVar15 = lVar11;
      lVar8 = lVar2;
      goto joined_r0x00d56fa0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  lVar15 = local_90;
  local_90 = 0;
  if (lVar15 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar3 = *(int *)(lVar8 + 0x12c8);
    iVar16 = iVar3 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar16;
    if (*(int *)(lVar8 + 0x12cc) <= iVar3) {
      *(int *)(lVar8 + 0x12cc) = iVar16;
    }
    FUN_00d58900(lVar15);
    uVar9 = (**(code **)(*local_88 + 0xf8))(local_88);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*local_88 + 0x18))(local_88,lVar15,lStack_80,local_78);
    }
    else {
      FUN_00c48fe8(local_88,lVar15,lStack_80,local_78);
    }
    lVar15 = FUN_00c4e600();
    iVar16 = *(int *)(lVar15 + 0x12c8) + -1;
    *(int *)(lVar15 + 0x12c8) = iVar16;
    if (iVar16 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_70 = plVar10 + plVar10[600] * 3;
        plStack_68 = plVar10;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar17 = (long *)*plVar10;
        plVar7 = plVar10;
        if (plVar10[600] != 0) {
          plVar7 = plVar10 + plVar10[600] * 3;
        }
        if (plVar7 == plVar10) {
          uVar19 = 0;
          uVar9 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar17) {
            (**(code **)(*plVar17 + 0x100))(plVar17,plVar10,plVar10);
            plVar17 = (long *)*plVar10;
          }
          plVar1 = plVar10 + 3;
          if (plVar7 == plVar1) {
            uVar19 = 0;
            uVar9 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar5 = (long *)*plVar1 != plVar17;
            if (bVar5) {
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar10,plVar10 + 3);
              plVar17 = (long *)plVar10[3];
            }
            uVar19 = (ulong)bVar5;
            plVar1 = plVar10 + 6;
            if (plVar7 == plVar1) {
              uVar9 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar17) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar10 + 6);
                plVar17 = (long *)plVar10[6];
                uVar19 = 2;
              }
              plVar1 = plVar10 + 9;
              if (plVar7 == plVar1) {
                uVar9 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar10 + 9);
                  plVar17 = (long *)plVar10[9];
                  uVar19 = 3;
                }
                plVar1 = plVar10 + 0xc;
                if (plVar7 == plVar1) {
                  uVar9 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar10 + 0xc);
                    plVar17 = (long *)plVar10[0xc];
                    uVar19 = 4;
                  }
                  plVar1 = plVar10 + 0xf;
                  if (plVar7 == plVar1) {
                    uVar9 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar10 + 0xf);
                      plVar17 = (long *)plVar10[0xf];
                      uVar19 = 5;
                    }
                    uVar9 = 6;
                    for (plVar1 = plVar10 + 0x12; plVar7 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar1);
                        plVar17 = (long *)*plVar1;
                        uVar19 = uVar9;
                      }
                      uVar9 = uVar9 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar17 + 0x100))(plVar17,plVar10 + uVar19 * 3,plVar10 + uVar9 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar15 + 0x12cc) = 0;
    }
  }
  auVar21._8_8_ = lVar6;
  auVar21._0_8_ = 1;
  return auVar21;
}


