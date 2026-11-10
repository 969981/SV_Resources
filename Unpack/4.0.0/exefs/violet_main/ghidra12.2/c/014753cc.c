/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014753cc; name: FUN_014753cc
 */


void FUN_014753cc(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined4 param_5,long *param_6)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long **pplVar14;
  short sVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  long *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  long *local_d0;
  long *local_c8;
  long local_c0;
  long local_b8;
  long *local_b0;
  undefined4 local_a8;
  long *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  long *local_88;
  ulong uStack_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  long *local_48;
  
  if ((param_6 == (long *)0x0) ||
     ((uVar16 = (**(code **)(*param_6 + 0xb8))(param_6), (uVar16 & 1) != 0 &&
      (uVar16 = (**(code **)(**(long **)(param_2 + 0x3a0) + 0xb8))(), (uVar16 & 1) != 0)))) {
    param_6 = *(long **)(param_2 + 0x3a0);
  }
  local_70 = (long *)0x0;
  plVar11 = (long *)(param_2 + 0x2f0);
  lVar18 = *plVar11;
  local_68 = param_6;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar18) {
    lVar10 = nn::os::GetCurrentThread();
LAB_01475424:
    if (*plVar11 == 0) goto code_r0x0147542c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar11 == 0) {
            cVar6 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar21) {
              *plVar11 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_01475434;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar21) {
        *plVar11 = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_01475434:
    bVar21 = false;
    goto LAB_01475438;
  }
  bVar21 = true;
LAB_01475438:
  uVar16 = *(ulong *)(param_2 + 0x290);
  uVar19 = param_4[1];
  if ((uVar16 & uVar16 - 1) == 0) {
    uVar19 = uVar16 - 1 & uVar19;
  }
  else if (uVar16 <= uVar19) {
    uVar7 = 0;
    if (uVar16 != 0) {
      uVar7 = uVar19 / uVar16;
    }
    uVar19 = uVar19 - uVar7 * uVar16;
  }
  FUN_00d00258(&local_88,param_2,uVar19,param_4,local_68);
  if (local_88 != (long *)0x0) {
    lVar10 = local_88[9];
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar15 = *(short *)(lVar10 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar15) {
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_01475f88;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01475f88:
          bVar5 = false;
        }
        if (bVar5) {
          puVar20 = *(undefined8 **)(lVar10 + 0x10);
          if (puVar20 != (undefined8 *)0x0) {
            plVar11 = puVar20 + -5;
            puVar13 = (undefined8 *)(**(code **)*puVar20)(puVar20);
            if (((*PTR_DAT_047dd6e8 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd6e8), puVar8 = PTR_DAT_047d93b8, iVar9 != 0
               )) {
              if (((*PTR_DAT_047d93b0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d93b0), iVar9 != 0)) {
                uVar12 = FUN_01df5d9c();
                *(undefined8 *)puVar8 = uVar12;
                __cxa_guard_release(PTR_DAT_047d93b0);
              }
              *(undefined **)PTR_DAT_047dd6f0 = puVar8;
              __cxa_guard_release(PTR_DAT_047dd6e8);
            }
            if (puVar13 != (undefined8 *)0x0) goto LAB_01475fe0;
            plVar17 = (long *)0x0;
            goto LAB_01475fec;
          }
          break;
        }
        sVar15 = sVar4;
      } while (sVar4 != 0);
    }
    goto LAB_01475694;
  }
  plVar11 = (long *)FUN_01476368(&local_d0,*(undefined8 *)(param_2 + 0x3a0),param_4,&local_68);
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[6];
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_014761c0;
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar12;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) goto LAB_014759e0;
  }
  plVar17 = local_70;
  local_70 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    lVar10 = plVar17[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))();
    }
    else if (sVar15 == 0) goto LAB_01475820;
  }
  plVar17 = *(long **)(*(long *)(param_2 + 0x288) + uVar19 * 8);
  local_78 = *(ulong *)(param_2 + 0x290);
  local_88 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    local_88 = (long *)*plVar17;
  }
  uStack_80 = uVar19;
  local_70 = plVar11;
  if (local_88 != (long *)0x0) {
    if ((local_78 & local_78 - 1) == 0) {
      do {
        plVar17 = (long *)PTR_DAT_047d8b70;
        if (local_88[2] != 0) {
          plVar17 = (long *)(local_88[2] + 0x30);
        }
        plVar3 = (long *)PTR_DAT_047d8b70;
        if (*param_4 != 0) {
          plVar3 = (long *)(*param_4 + 0x30);
        }
        if ((*plVar17 == *plVar3) && ((local_88[9] == 0 || (*(short *)(local_88[9] + 0x1a) == 0))))
        goto LAB_01475c4c;
        local_88 = (long *)*local_88;
      } while ((local_88 != (long *)0x0) && ((local_88[1] & local_78 - 1) == uVar19));
    }
    else {
      do {
        plVar17 = (long *)PTR_DAT_047d8b70;
        if (local_88[2] != 0) {
          plVar17 = (long *)(local_88[2] + 0x30);
        }
        plVar3 = (long *)PTR_DAT_047d8b70;
        if (*param_4 != 0) {
          plVar3 = (long *)(*param_4 + 0x30);
        }
        if ((*plVar17 == *plVar3) && ((local_88[9] == 0 || (*(short *)(local_88[9] + 0x1a) == 0))))
        goto LAB_01475c4c;
        local_88 = (long *)*local_88;
        if (local_88 == (long *)0x0) break;
        uVar16 = local_88[1];
        if (local_78 <= uVar16) {
          uVar7 = 0;
          if (local_78 != 0) {
            uVar7 = uVar16 / local_78;
          }
          uVar16 = uVar16 - uVar7 * local_78;
        }
      } while (uVar16 == uVar19);
    }
  }
  local_88 = (long *)0x0;
  (**(code **)(*plVar11 + 0x18))(&local_d0,plVar11);
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  plVar17 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar17 = plVar11 + 5;
  }
  if ((long *)local_d0[2] == plVar17) {
    FUN_00d1f904(&local_f8,&local_d0);
  }
  if (local_d0 != (long *)0x0) {
    plVar11 = local_d0 + 3;
    do {
      sVar15 = (short)*plVar11;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(short *)plVar11 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_e8 = (long *)*local_d0;
        FUN_00c44438(lVar10 + 0x8040,&local_e8);
      }
    }
    else if (sVar15 == 0) goto LAB_014758d4;
  }
  local_d8 = 0;
  local_e8 = local_68;
  local_e0 = (undefined8 *)0x0;
  FUN_00dc7a68(&local_e0,&local_f8);
  local_d0 = (long *)*param_4;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x18))();
  }
  local_c8 = (long *)param_4[1];
  local_c0 = param_4[2];
  local_b8 = param_4[3];
  local_b0 = (long *)param_4[4];
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x18))();
  }
  local_a8 = (undefined4)param_4[5];
  local_a0 = local_e8;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_00dc7a68(&local_98,&local_e0);
  FUN_01476748(param_2 + 0x288,&local_d0);
  puVar20 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_98 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = (long *)*puVar20;
        FUN_00c44438(lVar10 + 0x8040,&local_48);
      }
    }
    else if (sVar15 == 0) goto LAB_014758d4;
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  puVar20 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_e0 + 3);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = (long *)*puVar20;
        FUN_00c44438(lVar10 + 0x8040,&local_48);
      }
    }
    else if (sVar15 == 0) goto LAB_014758d4;
  }
  puVar20 = local_f8;
  if (local_f8 == (undefined8 *)0x0) goto LAB_014755c8;
  psVar1 = (short *)(local_f8 + 3);
  do {
    sVar15 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar15 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar15 != 1) goto LAB_014758d0;
  piVar2 = (int *)((long)local_f8 + 0x1c);
  do {
    iVar9 = *piVar2;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar9 == -1) goto LAB_014755c8;
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  pplVar14 = &local_48;
  lVar10 = *(long *)PTR_DAT_047d3910;
  *(long *)PTR_DAT_047d3918 = lVar10;
  local_48 = (long *)*puVar20;
LAB_01475c1c:
  FUN_00c44438(lVar10 + 0x8040,pplVar14);
  goto LAB_014755c8;
code_r0x0147542c:
  cVar6 = '\x01';
  bVar21 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar21) {
    *plVar11 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01475434;
  goto LAB_01475424;
LAB_01475c4c:
  (**(code **)(*plVar11 + 0x18))(&local_d0,plVar11);
  local_e8 = (long *)0x0;
  local_e0 = (undefined8 *)0x0;
  plVar17 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar17 = plVar11 + 5;
  }
  if ((long *)local_d0[2] == plVar17) {
    FUN_00d1f904(&local_e8,&local_d0);
  }
  if (local_d0 != (long *)0x0) {
    plVar11 = local_d0 + 3;
    do {
      sVar15 = (short)*plVar11;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(short *)plVar11 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_f8 = (undefined8 *)*local_d0;
        FUN_00c44438(lVar10 + 0x8040,&local_f8);
      }
    }
    else if (sVar15 == 0) goto LAB_014758d4;
  }
  local_c0 = 0;
  local_d0 = local_68;
  local_c8 = (long *)0x0;
  FUN_00dc7a68(&local_c8,&local_e8);
  local_88[8] = (long)local_d0;
  FUN_00dc7a68(local_88 + 9,&local_c8);
  plVar11 = local_c8;
  if (local_c8 != (long *)0x0) {
    plVar17 = local_c8 + 3;
    do {
      sVar15 = (short)*plVar17;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(short *)plVar17 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_f8 = (undefined8 *)*plVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_f8);
      }
    }
    else if (sVar15 == 0) goto LAB_014758d4;
  }
  plVar11 = local_e8;
  if (local_e8 != (long *)0x0) {
    plVar17 = local_e8 + 3;
    do {
      sVar15 = (short)*plVar17;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(short *)plVar17 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_e8 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_f8 = (undefined8 *)*plVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_f8);
      }
    }
    else {
LAB_014758d0:
      if (sVar15 == 0) {
LAB_014758d4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  goto LAB_014755c8;
  while( true ) {
    puVar13 = (undefined8 *)*puVar13;
    plVar17 = (long *)0x0;
    if (puVar13 == (undefined8 *)0x0) break;
LAB_01475fe0:
    if (puVar13 == (undefined8 *)PTR_DAT_047dd6f0) {
      plVar17 = plVar11;
      break;
    }
  }
LAB_01475fec:
  FUN_01db74ec(&local_70,plVar17);
  plVar17 = local_70;
  lVar10 = puVar20[1];
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar15 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar15 == 0) goto LAB_01475820;
  if (plVar17 == (long *)0x0) {
LAB_01475694:
    plVar11 = (long *)FUN_01476368(&local_d0,*(undefined8 *)(param_2 + 0x3a0),param_4,&local_68);
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[6];
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_014761c0;
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar12;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar15 == -1) goto LAB_014759e0;
    }
    plVar17 = local_70;
    local_70 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      lVar10 = plVar17[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar17 + 0x50))();
      }
      else if (sVar15 == 0) goto LAB_01475820;
    }
    local_70 = plVar11;
    (**(code **)(*plVar11 + 0x18))(&local_d0,plVar11);
    local_e8 = (long *)0x0;
    local_e0 = (undefined8 *)0x0;
    plVar17 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      plVar17 = plVar11 + 5;
    }
    if ((long *)local_d0[2] == plVar17) {
      FUN_00d1f904(&local_e8,&local_d0);
    }
    plVar11 = local_d0;
    if (local_d0 != (long *)0x0) {
      plVar17 = local_d0 + 3;
      do {
        sVar15 = (short)*plVar17;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(short *)plVar17 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_d0 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_f8 = (undefined8 *)*plVar11;
          FUN_00c44438(lVar10 + 0x8040,&local_f8);
        }
      }
      else if (sVar15 == 0) goto LAB_014758d4;
    }
    FUN_00dc7a68(local_88 + 9,&local_e8);
    plVar11 = local_e8;
    if (local_e8 != (long *)0x0) {
      plVar17 = local_e8 + 3;
      do {
        sVar15 = (short)*plVar17;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(short *)plVar17 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 != 1) goto LAB_014758d0;
      piVar2 = (int *)((long)local_e8 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        pplVar14 = &local_d0;
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_d0 = (long *)*plVar11;
        goto LAB_01475c1c;
      }
    }
  }
LAB_014755c8:
  if (!bVar21) {
    *(undefined8 *)(param_2 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(param_2 + 0x308),local_70,param_5);
  *param_1 = local_70;
  if (local_70 != (long *)0x0) {
    lVar10 = local_70[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_014761c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar21) {
        *psVar1 = sVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar12;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) {
LAB_014759e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (local_70 != (long *)0x0) {
      lVar10 = local_70[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar21) {
          *psVar1 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar15 == 0) {
LAB_01475820:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


