/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01260850; name: FUN_01260850
 */


bool FUN_01260850(long param_1,ulong param_2,long *param_3,undefined4 param_4,long *param_5)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long **pplVar17;
  short sVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined1 auVar25 [12];
  long *local_118;
  long *local_110;
  long *local_108;
  undefined8 uStack_100;
  long *local_f8;
  long *local_f0;
  undefined8 local_e8;
  long *local_e0;
  long *local_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  undefined4 local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  if (((*PTR_DAT_047d8c40 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  puVar10 = PTR_DAT_047d8c50;
  lVar22 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar22;
  if ((param_5 == (long *)0x0) ||
     ((uVar15 = (**(code **)(*param_5 + 0xb8))(param_5), (uVar15 & 1) != 0 &&
      (uVar15 = (**(code **)(**(long **)(lVar22 + 0x3a0) + 0xb8))(), (uVar15 & 1) != 0)))) {
    param_5 = *(long **)(lVar22 + 0x3a0);
  }
  local_80 = (long *)0x0;
  plVar19 = (long *)(lVar22 + 0x2f0);
  lVar23 = *plVar19;
  local_78 = param_5;
  lVar13 = nn::os::GetCurrentThread();
  if (lVar13 != lVar23) {
    lVar13 = nn::os::GetCurrentThread();
    bVar11 = false;
LAB_01261ab0:
    if (*plVar19 == 0) goto code_r0x01261ab8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0x2f8));
    bVar11 = false;
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0x2f8));
          while (*plVar19 == 0) {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar11) {
              *plVar19 = lVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
            bVar11 = false;
            if (cVar5 == '\0') goto LAB_012608d0;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = lVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_012608d0;
  }
  bVar11 = true;
LAB_012608d0:
  plVar19 = *(long **)(lVar22 + 0x290);
  plVar24 = (long *)param_3[1];
  if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
    plVar24 = (long *)((long)plVar19 - 1U & (ulong)plVar24);
  }
  else if (plVar19 <= plVar24) {
    uVar15 = 0;
    if (plVar19 != (long *)0x0) {
      uVar15 = (ulong)plVar24 / (ulong)plVar19;
    }
    plVar24 = (long *)((long)plVar24 - uVar15 * (long)plVar19);
  }
  FUN_00d00258(&local_98,lVar22,plVar24,param_3,local_78);
  if (local_98 != (long *)0x0) {
    lVar13 = local_98[9];
    if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar13 + 0x1a);
      sVar18 = *(short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar18) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar18 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01261b64;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01261b64:
          bVar6 = false;
        }
        if (bVar6) {
          puVar20 = *(undefined8 **)(lVar13 + 0x10);
          if (puVar20 != (undefined8 *)0x0) {
            plVar19 = puVar20 + -5;
            puVar16 = (undefined8 *)(**(code **)*puVar20)(puVar20);
            if (((*PTR_DAT_047dd4a0 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047dd4a0), iVar12 != 0)) {
              uVar14 = FUN_02173f9c();
              *(undefined8 *)PTR_DAT_047dd4a8 = uVar14;
              __cxa_guard_release(PTR_DAT_047dd4a0);
            }
            if (puVar16 != (undefined8 *)0x0) goto LAB_01261bb4;
            plVar24 = (long *)0x0;
            goto LAB_01261bc0;
          }
          break;
        }
        sVar18 = sVar4;
      } while (sVar4 != 0);
    }
    goto LAB_01261340;
  }
  plVar19 = (long *)FUN_01261d84(*(undefined8 *)(lVar22 + 0x3a0),param_3,&local_78);
  if (plVar19 != (long *)0x0) {
    lVar13 = plVar19[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_01261ac4;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar18 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar14;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) goto LAB_01260ddc;
  }
  plVar21 = local_80;
  local_80 = (long *)0x0;
  if (plVar21 != (long *)0x0) {
    lVar13 = plVar21[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar18 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar21 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_01260d24;
  }
  puVar20 = *(undefined8 **)(*(long *)(lVar22 + 0x288) + (long)plVar24 * 8);
  local_88 = *(long **)(lVar22 + 0x290);
  local_98 = (long *)0x0;
  if (puVar20 != (undefined8 *)0x0) {
    local_98 = (long *)*puVar20;
  }
  local_90 = plVar24;
  local_80 = plVar19;
  if (local_98 != (long *)0x0) {
    if (((ulong)local_88 & (long)local_88 - 1U) == 0) {
      do {
        plVar21 = (long *)PTR_DAT_047d8b70;
        if (local_98[2] != 0) {
          plVar21 = (long *)(local_98[2] + 0x30);
        }
        plVar3 = (long *)PTR_DAT_047d8b70;
        if (*param_3 != 0) {
          plVar3 = (long *)(*param_3 + 0x30);
        }
        if ((*plVar21 == *plVar3) && ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0))))
        goto LAB_01261488;
        local_98 = (long *)*local_98;
      } while ((local_98 != (long *)0x0) && ((long *)(local_98[1] & (long)local_88 - 1U) == plVar24)
              );
    }
    else {
      do {
        plVar21 = (long *)PTR_DAT_047d8b70;
        if (local_98[2] != 0) {
          plVar21 = (long *)(local_98[2] + 0x30);
        }
        plVar3 = (long *)PTR_DAT_047d8b70;
        if (*param_3 != 0) {
          plVar3 = (long *)(*param_3 + 0x30);
        }
        if ((*plVar21 == *plVar3) && ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0))))
        goto LAB_01261488;
        local_98 = (long *)*local_98;
        if (local_98 == (long *)0x0) break;
        plVar21 = (long *)local_98[1];
        if (local_88 <= plVar21) {
          uVar15 = 0;
          if (local_88 != (long *)0x0) {
            uVar15 = (ulong)plVar21 / (ulong)local_88;
          }
          plVar21 = (long *)((long)plVar21 - uVar15 * (long)local_88);
        }
      } while (plVar21 == plVar24);
    }
  }
  local_98 = (long *)0x0;
  (**(code **)(*plVar19 + 0x18))(&local_e0,plVar19);
  local_108 = (long *)0x0;
  uStack_100 = 0;
  plVar24 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar24 = plVar19 + 5;
  }
  if ((long *)local_e0[2] == plVar24) {
    FUN_00d1f904(&local_108,&local_e0);
  }
  if (local_e0 != (long *)0x0) {
    plVar19 = local_e0 + 3;
    do {
      sVar18 = (short)*plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(short *)plVar19 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_f8 = (long *)*local_e0;
        FUN_00c44438(lVar13 + 0x8040,&local_f8);
      }
    }
    else if (sVar18 == 0) goto LAB_01260ed8;
  }
  local_e8 = 0;
  local_f8 = local_78;
  local_f0 = (long *)0x0;
  FUN_00dc7a68(&local_f0,&local_108);
  local_e0 = (long *)*param_3;
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x18))();
  }
  local_d8 = (long *)param_3[1];
  local_d0 = param_3[2];
  local_c8 = param_3[3];
  local_c0 = (long *)param_3[4];
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x18))();
  }
  local_b8 = (undefined4)param_3[5];
  local_b0 = local_f8;
  local_a8 = (long *)0x0;
  local_a0 = 0;
  FUN_00dc7a68(&local_a8,&local_f0);
  FUN_00ed01b8(lVar22 + 0x288,&local_e0);
  plVar19 = local_a8;
  if (local_a8 != (long *)0x0) {
    plVar24 = local_a8 + 3;
    do {
      sVar18 = (short)*plVar24;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *(short *)plVar24 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_70[0] = (long *)*plVar19;
        FUN_00c44438(lVar13 + 0x8040,local_70);
      }
    }
    else if (sVar18 == 0) goto LAB_01260ed8;
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  plVar19 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar24 = local_f0 + 3;
    do {
      sVar18 = (short)*plVar24;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *(short *)plVar24 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_70[0] = (long *)*plVar19;
        FUN_00c44438(lVar13 + 0x8040,local_70);
      }
    }
    else if (sVar18 == 0) goto LAB_01260ed8;
  }
  plVar19 = local_108;
  if (local_108 != (long *)0x0) {
    plVar24 = local_108 + 3;
    do {
      sVar18 = (short)*plVar24;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *(short *)plVar24 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 != 1) goto LAB_01260eb0;
    piVar2 = (int *)((long)local_108 + 0x1c);
    do {
      iVar12 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      pplVar17 = local_70;
      lVar13 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar13;
      local_70[0] = (long *)*plVar19;
      goto LAB_01261240;
    }
  }
  goto LAB_01260a50;
code_r0x01261ab8:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar6) {
    *plVar19 = lVar13;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_012608d0;
  goto LAB_01261ab0;
LAB_01261488:
  (**(code **)(*plVar19 + 0x18))(&local_e0,plVar19);
  local_f8 = (long *)0x0;
  local_f0 = (long *)0x0;
  plVar24 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar24 = plVar19 + 5;
  }
  if ((long *)local_e0[2] == plVar24) {
    FUN_00d1f904(&local_f8,&local_e0);
  }
  if (local_e0 != (long *)0x0) {
    plVar19 = local_e0 + 3;
    do {
      sVar18 = (short)*plVar19;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *(short *)plVar19 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_108 = (long *)*local_e0;
        FUN_00c44438(lVar13 + 0x8040,&local_108);
      }
    }
    else if (sVar18 == 0) goto LAB_01260ed8;
  }
  local_d0 = 0;
  local_e0 = local_78;
  local_d8 = (long *)0x0;
  FUN_00dc7a68(&local_d8,&local_f8);
  local_98[8] = (long)local_e0;
  FUN_00dc7a68(local_98 + 9,&local_d8);
  plVar19 = local_d8;
  if (local_d8 != (long *)0x0) {
    plVar24 = local_d8 + 3;
    do {
      sVar18 = (short)*plVar24;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *(short *)plVar24 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_d8 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_108 = (long *)*plVar19;
        FUN_00c44438(lVar13 + 0x8040,&local_108);
      }
    }
    else if (sVar18 == 0) goto LAB_01260ed8;
  }
  plVar19 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar24 = local_f8 + 3;
    do {
      sVar18 = (short)*plVar24;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *(short *)plVar24 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == -1) goto LAB_01260a50;
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      pplVar17 = &local_108;
      lVar13 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar13;
      local_108 = (long *)*plVar19;
LAB_01261240:
      FUN_00c44438(lVar13 + 0x8040,pplVar17);
    }
    else {
LAB_01260eb0:
      if (sVar18 == 0) goto LAB_01260ed8;
    }
  }
  goto LAB_01260a50;
  while( true ) {
    puVar16 = (undefined8 *)*puVar16;
    plVar24 = (long *)0x0;
    if (puVar16 == (undefined8 *)0x0) break;
LAB_01261bb4:
    if (puVar16 == (undefined8 *)PTR_DAT_047dd4a8) {
      plVar24 = plVar19;
      break;
    }
  }
LAB_01261bc0:
  FUN_01db74ec(&local_80,plVar24);
  plVar24 = local_80;
  lVar13 = puVar20[1];
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar18 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) goto LAB_01260d24;
  if (plVar24 == (long *)0x0) {
LAB_01261340:
    plVar19 = (long *)FUN_01261d84(*(undefined8 *)(lVar22 + 0x3a0),param_3,&local_78);
    if (plVar19 != (long *)0x0) {
      lVar13 = plVar19[6];
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_01261ac4;
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar14;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_01260ddc;
    }
    plVar24 = local_80;
    local_80 = (long *)0x0;
    if (plVar24 != (long *)0x0) {
      lVar13 = plVar24[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar24 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_01260d24;
    }
    local_80 = plVar19;
    (**(code **)(*plVar19 + 0x18))(&local_e0,plVar19);
    local_f8 = (long *)0x0;
    local_f0 = (long *)0x0;
    plVar24 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      plVar24 = plVar19 + 5;
    }
    if ((long *)local_e0[2] == plVar24) {
      FUN_00d1f904(&local_f8,&local_e0);
    }
    plVar19 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar24 = local_e0 + 3;
      do {
        sVar18 = (short)*plVar24;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *(short *)plVar24 = sVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_108 = (long *)*plVar19;
          FUN_00c44438(lVar13 + 0x8040,&local_108);
        }
      }
      else if (sVar18 == 0) goto LAB_01260ed8;
    }
    FUN_00dc7a68(local_98 + 9,&local_f8);
    plVar19 = local_f8;
    if (local_f8 != (long *)0x0) {
      plVar24 = local_f8 + 3;
      do {
        sVar18 = (short)*plVar24;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *(short *)plVar24 = sVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 != 1) goto LAB_01260eb0;
      piVar2 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        pplVar17 = &local_e0;
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_e0 = (long *)*plVar19;
        goto LAB_01261240;
      }
    }
  }
LAB_01260a50:
  if (!bVar11) {
    *(undefined8 *)(lVar22 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar22 + 0x308),local_80,param_4);
  plVar19 = local_80;
  if (local_80 != (long *)0x0) {
    lVar22 = local_80[6];
    if (*(long *)(lVar22 + 0x10) == 0) {
LAB_01261ac4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar14;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) {
LAB_01260ddc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (local_80 != (long *)0x0) {
      lVar22 = local_80[6];
      psVar1 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_01260d24;
    }
  }
  plVar21 = (long *)(param_1 + 8);
  plVar24 = (long *)*plVar21;
  *plVar21 = 0;
  if (plVar24 != (long *)0x0) {
    lVar22 = plVar24[6];
    psVar1 = (short *)(lVar22 + 0x1a);
    do {
      sVar18 = *psVar1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar24 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_01260d24;
  }
  *plVar21 = (long)plVar19;
  lVar22 = 0;
  if (plVar19 != (long *)0x0) {
    local_e0 = (long *)0x0;
    local_d8 = (long *)0x0;
    FUN_00c43ef0(&local_e0,plVar19 + 6);
    puVar7 = PTR_DAT_047d3908;
    if ((long *)local_e0[2] == plVar19 + 5) {
      do {
        plVar19 = local_d8;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(&local_d8,0x10);
        if (bVar11) {
          local_d8 = (long *)0x0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      puVar9 = PTR_DAT_047d3918;
      puVar8 = PTR_DAT_047d3910;
      uVar14 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar14;
      FUN_00c44204(&local_f8,uVar14,plVar19);
      plVar19 = local_e0;
      local_e0 = (long *)0x0;
      if (plVar19 != (long *)0x0) {
        plVar24 = plVar19 + 3;
        do {
          sVar18 = (short)*plVar24;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar11) {
            *(short *)plVar24 = sVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar18 == 1) {
          piVar2 = (int *)((long)plVar19 + 0x1c);
          do {
            iVar12 = *piVar2;
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar11) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 != -1) {
            if (((*puVar7 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)puVar8;
            *(long *)puVar9 = lVar22;
            local_98 = (long *)*plVar19;
            FUN_00c44438(lVar22 + 0x8040,&local_98);
          }
        }
        else if (sVar18 == 0) goto LAB_01260ed8;
      }
      plVar19 = local_f8;
      if (local_f8 != (long *)0x0) {
        local_f8 = (long *)0x0;
      }
    }
    else {
      plVar19 = (long *)0x0;
    }
    plVar24 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar3 = local_e0 + 3;
      do {
        sVar18 = (short)*plVar3;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *(short *)plVar3 = sVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_98 = (long *)*plVar24;
          FUN_00c44438(lVar22 + 0x8040,&local_98);
        }
      }
      else if (sVar18 == 0) goto LAB_01260ed8;
    }
    if (plVar19 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      plVar24 = plVar19 + 3;
      *(long *)(param_1 + 0x10) = *plVar19;
      do {
        sVar18 = (short)*plVar24;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar11) {
          *(short *)plVar24 = sVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 == 1) {
        piVar2 = (int *)((long)plVar19 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_e0 = (long *)*plVar19;
          FUN_00c44438(lVar22 + 0x8040,&local_e0);
        }
      }
      else if (sVar18 == 0) {
LAB_01260ed8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar22 = *plVar21;
  }
  if (lVar22 == 0) {
    bVar11 = false;
  }
  else {
    FUN_01081b2c(&local_e0,plVar21);
    FUN_00cfe35c(local_e0,param_1 + 0x18,1);
    if ((param_2 & 1) == 0) {
      auVar25 = FUN_00d1f59c(local_e0);
      if ((auVar25._0_8_ >> 0x20 & 0xff) == 0) {
        bVar11 = false;
      }
      else {
        bVar11 = auVar25._8_4_ == 0;
      }
    }
    else {
      if (((*PTR_DAT_047d8c40 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      uVar14 = *(undefined8 *)PTR_DAT_047d8c48;
      *(undefined8 *)puVar10 = uVar14;
      FUN_00cfc3c0(&local_98,uVar14,local_e0);
      local_110 = local_98;
      local_98 = (long *)0x0;
      FUN_00cfbe68(param_1 + 0x20,&local_110);
      if (local_110 != (long *)0x0) {
        lVar22 = local_110[6];
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_110 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_01260d24;
      }
      local_118 = local_90;
      local_90 = (long *)0x0;
      FUN_00cfc114(param_1 + 0x30,&local_118);
      if (local_118 != (long *)0x0) {
        lVar22 = local_118[6];
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_118 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_01260d24;
      }
      if (local_90 != (long *)0x0) {
        lVar22 = local_90[6];
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_90 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_01260d24;
      }
      if (local_98 != (long *)0x0) {
        lVar22 = local_98[6];
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_98 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_01260d24;
      }
      bVar11 = true;
    }
    if (local_e0 != (long *)0x0) {
      lVar22 = local_e0[6];
      psVar1 = (short *)(lVar22 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_e0 + 0x50))();
      }
      else if (sVar18 == 0) {
LAB_01260d24:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return bVar11;
}


