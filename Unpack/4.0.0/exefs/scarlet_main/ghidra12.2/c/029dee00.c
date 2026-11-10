/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029dee00; name: FUN_029dee00
 */


void FUN_029dee00(long param_1,undefined8 *param_2)

{
  short *psVar1;
  LightEventType *pLVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  short sVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  float fVar20;
  undefined4 uVar21;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  if (*(char *)(param_1 + 0x24b) == '\0') {
    FUN_011897a4(param_1);
  }
  plVar17 = (long *)(param_1 + 0x140);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_029dee4c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar17 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_029dee4c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_029dee4c:
  if ((((*(char *)(param_1 + 0x246) != '\0') &&
       ((*(long *)(param_1 + 0x130) == 0 || (*(short *)(*(long *)(param_1 + 0x130) + 0x1a) == 0))))
      || (lVar9 = *(long *)(param_1 + 0x120), lVar9 == 0)) || (*(short *)(lVar9 + 0x1a) == 0))
  goto LAB_029dee5c;
  psVar1 = (short *)(lVar9 + 0x1a);
  sVar12 = *(short *)(lVar9 + 0x1a);
LAB_029def04:
  sVar4 = *psVar1;
  if (sVar4 == sVar12) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar12 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_029def28;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_029def28:
    bVar6 = false;
  }
  if (!bVar6) {
    sVar12 = sVar4;
    if (sVar4 == 0) {
LAB_029dee5c:
      *(undefined8 *)(param_1 + 0x140) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
      return;
    }
    goto LAB_029def04;
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if (lVar9 == 0) goto LAB_029dee5c;
  if (*(char *)(lVar9 + 0xf2) == '\0') {
    (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
    goto LAB_029dee5c;
  }
  iVar8 = *(int *)(lVar9 + 0x108);
  (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
  pLVar2 = (LightEventType *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent(pLVar2);
  if (iVar8 != 3) {
    return;
  }
  plVar10 = (long *)FUN_00c8dda0(param_1);
  if (plVar10 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar10 + 0x58))();
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  if ((*(byte *)(param_1 + 0x278) & 1) == 0) {
LAB_029df374:
    FUN_029de608(param_1);
    plVar17 = *(long **)(param_1 + 0x178);
    plVar14 = *(long **)(param_1 + 0x180);
    if (plVar17 != plVar14) {
      do {
        lVar18 = *plVar17;
        plVar13 = (long *)(lVar18 + 0x60);
        lVar9 = nn::os::GetCurrentThread();
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_029df3b4;
        }
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x68));
        do {
          if (*plVar13 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x68));
              while (*plVar13 == 0) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar6) {
                  *plVar13 = lVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_029df3b4;
              }
            } while( true );
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_029df3b4:
        cVar5 = *(char *)(lVar18 + 0xeb);
        *(undefined8 *)(lVar18 + 0x60) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x68));
        if ((cVar5 == '\0') && (uVar11 = FUN_00ff4d4c(*plVar17), (uVar11 & 1) != 0)) {
          lVar9 = *plVar17;
          plVar16 = *(long **)(lVar9 + 0x40);
          uVar15 = *(undefined8 *)(param_1 + 0x170);
          (**(code **)(*plVar16 + 0x20))(local_78,plVar16);
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          plVar13 = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            plVar13 = plVar16 + 1;
          }
          if ((long *)local_78[0][2] == plVar13) {
            FUN_0127427c(&local_88,local_78);
          }
          puVar7 = local_78[0];
          if (local_78[0] != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78[0] + 3);
            do {
              sVar12 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              piVar3 = (int *)((long)local_78[0] + 0x1c);
              do {
                iVar8 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar18 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar18;
                local_68 = *puVar7;
                FUN_00c44438(lVar18 + 0x8040,&local_68);
              }
            }
            else if (sVar12 == 0) goto LAB_029df798;
          }
          FUN_012745a0(uVar15,lVar9 + 0x1d0,&local_88);
          puVar7 = local_88;
          if (local_88 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_88 + 3);
            do {
              sVar12 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              piVar3 = (int *)((long)local_88 + 0x1c);
              do {
                iVar8 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar9 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar9;
                local_78[0] = (undefined8 *)*puVar7;
                FUN_00c44438(lVar9 + 0x8040,local_78);
              }
            }
            else if (sVar12 == 0) goto LAB_029df798;
          }
        }
        plVar17 = plVar17 + 1;
        if (plVar17 == plVar14) break;
      } while( true );
    }
    goto LAB_029df1ec;
  }
  plVar13 = *(long **)(param_1 + 0x180);
  for (plVar14 = *(long **)(param_1 + 0x178); plVar14 != plVar13; plVar14 = plVar14 + 1) {
    lVar18 = *plVar14;
    plVar16 = (long *)(lVar18 + 0x60);
    lVar9 = nn::os::GetCurrentThread();
LAB_029deff8:
    if (*plVar16 == 0) goto code_r0x029df000;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x68));
    do {
      if (*plVar16 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x68));
          while (*plVar16 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar6) {
              *plVar16 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_029df008;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_029df008:
    cVar5 = *(char *)(lVar18 + 0xeb);
    *(undefined8 *)(lVar18 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x68));
    if (cVar5 == '\0') goto LAB_029df374;
  }
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_029df084;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar17 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_029df084;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_029df084:
  if (*(char *)(param_1 + 0x247) != '\0') {
    FUN_029dc63c(param_1,param_1 + 0x1b0);
    plVar14 = *(long **)(param_1 + 0x1b0);
    plVar13 = *(long **)(param_1 + 0x1b8);
    while (plVar13 != plVar14) {
      plVar13 = plVar13 + -1;
      plVar16 = (long *)*plVar13;
      if (plVar16 != (long *)0x0) {
        plVar19 = plVar16 + 5;
        do {
          lVar9 = *plVar19;
          iVar8 = (int)lVar9 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *(int *)plVar19 = iVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_029df698;
      }
    }
    *(long **)(param_1 + 0x1b8) = plVar14;
    *(undefined1 *)(param_1 + 0x247) = 0;
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent(pLVar2);
  plVar14 = (long *)(param_1 + 0x158);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_029df0b8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x160));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x160));
        while (*plVar14 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_029df0b8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_029df0b8:
  if (*(int *)(param_1 + 0x24c) == 0) {
    if (*(char *)(param_1 + 0x24a) == '\0') {
      lVar9 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      fVar20 = (float)((double)*(long *)(lVar9 + 8) / 1000000000.0);
      goto LAB_029df0f8;
    }
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
  else {
    fVar20 = (float)*(int *)(param_1 + 0x24c) / 1000.0;
    *(undefined1 *)(param_1 + 0x24a) = 1;
    *(undefined4 *)(param_1 + 0x24c) = 0;
LAB_029df0f8:
    *(float *)(param_1 + 0x240) = fVar20;
  }
  if (*(char *)(param_1 + 0x249) == '\0') {
    plVar13 = *(long **)(param_1 + 0x180);
    for (plVar14 = *(long **)(param_1 + 0x178); plVar14 != plVar13; plVar14 = plVar14 + 1) {
      lVar18 = *plVar14;
      plVar16 = (long *)(lVar18 + 0x60);
      lVar9 = nn::os::GetCurrentThread();
      while (*plVar16 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_029df130;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x68));
      do {
        if (*plVar16 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x68));
            while (*plVar16 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar6) {
                *plVar16 = lVar9;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_029df130;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_029df130:
      cVar5 = *(char *)(lVar18 + 0xeb);
      *(undefined8 *)(lVar18 + 0x60) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x68));
      if (cVar5 == '\0') {
        uVar11 = FUN_00ff4d4c(*plVar14);
        if ((uVar11 & 1) != 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x170);
          lVar9 = *plVar14;
          plVar19 = *(long **)(lVar9 + 0x40);
          (**(code **)(*plVar19 + 0x20))(local_78,plVar19);
          local_98 = (undefined8 *)0x0;
          uStack_90 = 0;
          plVar16 = (long *)0x0;
          if (plVar19 != (long *)0x0) {
            plVar16 = plVar19 + 1;
          }
          if ((long *)local_78[0][2] == plVar16) {
            FUN_0127427c(&local_98,local_78);
          }
          puVar7 = local_78[0];
          if (local_78[0] != (undefined8 *)0x0) {
            psVar1 = (short *)(local_78[0] + 3);
            do {
              sVar12 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              piVar3 = (int *)((long)local_78[0] + 0x1c);
              do {
                iVar8 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar18 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar18;
                local_68 = *puVar7;
                FUN_00c44438(lVar18 + 0x8040,&local_68);
              }
            }
            else if (sVar12 == 0) goto LAB_029df798;
          }
          FUN_012745a0(uVar15,lVar9 + 0x1d0,&local_98);
          puVar7 = local_98;
          if (local_98 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_98 + 3);
            do {
              sVar12 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              piVar3 = (int *)((long)local_98 + 0x1c);
              do {
                iVar8 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar9 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar9;
                local_78[0] = (undefined8 *)*puVar7;
                FUN_00c44438(lVar9 + 0x8040,local_78);
              }
            }
            else if (sVar12 == 0) {
LAB_029df798:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
        }
      }
      else {
        FUN_012822f8(*(undefined4 *)(param_1 + 0x240),*plVar14,param_2,
                     *(undefined1 *)(param_1 + 0x291));
      }
    }
    if ((*(long **)(param_1 + 0x250) != (long *)0x0) && (*(long *)(param_1 + 0x270) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x250) + 0x88))();
      plVar14 = *(long **)(param_1 + 0x178);
      plVar13 = *(long **)(param_1 + 0x180);
      if (plVar14 != plVar13) {
        lVar9 = *plVar14;
        uVar21 = (**(code **)(**(long **)(param_1 + 0x250) + 0x78))();
        *(undefined4 *)(lVar9 + 0x1c8) = uVar21;
        if (plVar14 + 1 != plVar13) {
          lVar9 = plVar14[1];
          uVar21 = (**(code **)(**(long **)(param_1 + 0x250) + 0x78))();
          *(undefined4 *)(lVar9 + 0x1c8) = uVar21;
          if (plVar14 + 2 != plVar13) {
            lVar9 = plVar14[2];
            uVar21 = (**(code **)(**(long **)(param_1 + 0x250) + 0x78))();
            *(undefined4 *)(lVar9 + 0x1c8) = uVar21;
            for (plVar14 = plVar14 + 3; plVar14 != plVar13; plVar14 = plVar14 + 1) {
              lVar9 = *plVar14;
              uVar21 = (**(code **)(**(long **)(param_1 + 0x250) + 0x78))();
              *(undefined4 *)(lVar9 + 0x1c8) = uVar21;
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x160));
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_029df1d8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar17 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_029df1d8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_029df1d8:
  if (*(char *)(param_1 + 0x248) != '\0') {
    FUN_029dcf54(param_1,param_1 + 0x1e8);
    plVar14 = *(long **)(param_1 + 0x1e8);
    plVar13 = *(long **)(param_1 + 0x1f0);
    while (plVar13 != plVar14) {
      plVar13 = plVar13 + -1;
      plVar16 = (long *)*plVar13;
      if (plVar16 != (long *)0x0) {
        plVar19 = plVar16 + 5;
        do {
          lVar9 = *plVar19;
          iVar8 = (int)lVar9 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar6) {
            *(int *)plVar19 = iVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
        else if ((int)lVar9 == 0) {
LAB_029df698:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    *(long **)(param_1 + 0x1f0) = plVar14;
    *(undefined1 *)(param_1 + 0x248) = 0;
  }
  *plVar17 = 0;
  nn::os::SignalLightEvent(pLVar2);
LAB_029df1ec:
  (**(code **)(*plVar10 + 0x60))();
  return;
code_r0x029df000:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar6) {
    *plVar16 = lVar9;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_029df008;
  goto LAB_029deff8;
}


