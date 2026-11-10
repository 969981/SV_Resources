/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ece818; name: FUN_00ece818
 */


bool FUN_00ece818(long param_1,ulong param_2,long *param_3,long *param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long **pplVar15;
  long *plVar16;
  undefined8 *puVar17;
  short sVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined1 auVar24 [12];
  long *local_118;
  long *local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  long *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  long *local_e0;
  long *local_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  undefined4 local_b8;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70 [2];
  
  puVar8 = PTR_DAT_047d8c40;
  if (((*PTR_DAT_047d8c40 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  puVar14 = (undefined8 *)PTR_DAT_047d8c50;
  puVar23 = (undefined8 *)PTR_DAT_047d8c48;
  lVar19 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar19;
  if ((param_4 == (long *)0x0) ||
     ((uVar13 = (**(code **)(*param_4 + 0xb8))(param_4), (uVar13 & 1) != 0 &&
      (uVar13 = (**(code **)(**(long **)(lVar19 + 0x3a0) + 0xb8))(), (uVar13 & 1) != 0)))) {
    param_4 = *(long **)(lVar19 + 0x3a0);
  }
  local_80 = (long *)0x0;
  plVar16 = (long *)(lVar19 + 0x2f0);
  lVar21 = *plVar16;
  local_78 = param_4;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar21) {
    lVar11 = nn::os::GetCurrentThread();
LAB_00ece898:
    if (*plVar16 == 0) goto code_r0x00ece8a0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x2f8));
    do {
      if (*plVar16 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x2f8));
          while (*plVar16 == 0) {
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar9) {
              *plVar16 = lVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00ece8a8;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *plVar16 = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00ece8a8:
    bVar9 = false;
    goto LAB_00ece8ac;
  }
  bVar9 = true;
LAB_00ece8ac:
  plVar16 = *(long **)(lVar19 + 0x290);
  plVar22 = (long *)param_3[1];
  if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
    plVar22 = (long *)((long)plVar16 - 1U & (ulong)plVar22);
  }
  else if (plVar16 <= plVar22) {
    uVar13 = 0;
    if (plVar16 != (long *)0x0) {
      uVar13 = (ulong)plVar22 / (ulong)plVar16;
    }
    plVar22 = (long *)((long)plVar22 - uVar13 * (long)plVar16);
  }
  FUN_00d00258(&local_98,lVar19,plVar22,param_3,local_78);
  puVar7 = PTR_DAT_047d8c50;
  if (local_98 != (long *)0x0) {
    lVar11 = local_98[9];
    if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar11 + 0x1a);
      sVar18 = *(short *)(lVar11 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar18) {
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00ecf940;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00ecf940:
          bVar5 = false;
        }
        if (bVar5) {
          puVar17 = *(undefined8 **)(lVar11 + 0x10);
          puVar14 = (undefined8 *)PTR_DAT_047d8c50;
          if (puVar17 != (undefined8 *)0x0) {
            plVar16 = puVar17 + -5;
            puVar14 = (undefined8 *)(**(code **)*puVar17)();
            if (((*PTR_DAT_047e0dc8 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047e0dc8), iVar10 != 0)) {
              uVar12 = FUN_02173f9c();
              *(undefined8 *)PTR_DAT_047e0dd0 = uVar12;
              __cxa_guard_release(PTR_DAT_047e0dc8);
            }
            if (puVar14 != (undefined8 *)0x0) goto LAB_00ecf9b8;
            plVar22 = (long *)0x0;
            goto LAB_00ecf9c4;
          }
          break;
        }
        puVar14 = (undefined8 *)puVar7;
        sVar18 = sVar4;
      } while (sVar4 != 0);
    }
    goto LAB_00ece8ec;
  }
  plVar16 = (long *)FUN_00ecfed8(*(undefined8 *)(lVar19 + 0x3a0),param_3,&local_78);
  if (plVar16 != (long *)0x0) {
    lVar11 = plVar16[6];
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00ecfd80;
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar18 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar12;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      puVar14 = (undefined8 *)PTR_DAT_047d8c50;
    }
    else {
      puVar14 = (undefined8 *)PTR_DAT_047d8c50;
      if (sVar18 == -1) goto LAB_00ecf110;
    }
  }
  plVar20 = local_80;
  local_80 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    lVar11 = plVar20[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar18 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_00ecede8;
  }
  puVar17 = *(undefined8 **)(*(long *)(lVar19 + 0x288) + (long)plVar22 * 8);
  local_88 = *(long **)(lVar19 + 0x290);
  local_98 = (long *)0x0;
  if (puVar17 != (undefined8 *)0x0) {
    local_98 = (long *)*puVar17;
  }
  local_90 = plVar22;
  local_80 = plVar16;
  if (local_98 != (long *)0x0) {
    if (((ulong)local_88 & (long)local_88 - 1U) == 0) {
      do {
        plVar20 = (long *)PTR_DAT_047d8b70;
        if (local_98[2] != 0) {
          plVar20 = (long *)(local_98[2] + 0x30);
        }
        plVar3 = (long *)PTR_DAT_047d8b70;
        if (*param_3 != 0) {
          plVar3 = (long *)(*param_3 + 0x30);
        }
        if (*plVar20 == *plVar3) {
          if ((local_98[9] == 0) || (*(short *)(local_98[9] + 0x1a) == 0)) goto LAB_00ecf644;
          puVar23 = (undefined8 *)PTR_DAT_047d8c48;
          puVar14 = (undefined8 *)PTR_DAT_047d8c50;
        }
        local_98 = (long *)*local_98;
      } while ((local_98 != (long *)0x0) && ((long *)(local_98[1] & (long)local_88 - 1U) == plVar22)
              );
    }
    else {
      do {
        plVar20 = (long *)PTR_DAT_047d8b70;
        if (local_98[2] != 0) {
          plVar20 = (long *)(local_98[2] + 0x30);
        }
        plVar3 = (long *)PTR_DAT_047d8b70;
        if (*param_3 != 0) {
          plVar3 = (long *)(*param_3 + 0x30);
        }
        if ((*plVar20 == *plVar3) && ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0))))
        goto LAB_00ecf644;
        local_98 = (long *)*local_98;
        puVar23 = (undefined8 *)PTR_DAT_047d8c48;
        puVar14 = (undefined8 *)PTR_DAT_047d8c50;
        if (local_98 == (long *)0x0) break;
        plVar20 = (long *)local_98[1];
        if (local_88 <= plVar20) {
          uVar13 = 0;
          if (local_88 != (long *)0x0) {
            uVar13 = (ulong)plVar20 / (ulong)local_88;
          }
          plVar20 = (long *)((long)plVar20 - uVar13 * (long)local_88);
        }
      } while (plVar20 == plVar22);
    }
  }
  local_98 = (long *)0x0;
  (**(code **)(*plVar16 + 0x18))(&local_e0,plVar16);
  local_108 = (undefined8 *)0x0;
  uStack_100 = 0;
  plVar22 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar22 = plVar16 + 5;
  }
  if ((long *)local_e0[2] == plVar22) {
    FUN_00d1f904(&local_108,&local_e0);
  }
  if (local_e0 != (long *)0x0) {
    plVar16 = local_e0 + 3;
    do {
      sVar18 = (short)*plVar16;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(short *)plVar16 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_f8 = (long *)*local_e0;
        FUN_00c44438(lVar11 + 0x8040,&local_f8);
      }
    }
    else if (sVar18 == 0) goto LAB_00ecf04c;
  }
  local_e8 = 0;
  local_f8 = local_78;
  local_f0 = (undefined8 *)0x0;
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
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_00dc7a68(&local_a8,&local_f0);
  FUN_00ed01b8(lVar19 + 0x288,&local_e0);
  puVar17 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a8 + 3);
    do {
      sVar18 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_70[0] = (long *)*puVar17;
        FUN_00c44438(lVar11 + 0x8040,local_70);
      }
    }
    else if (sVar18 == 0) goto LAB_00ecf04c;
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  puVar17 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f0 + 3);
    do {
      sVar18 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_70[0] = (long *)*puVar17;
        FUN_00c44438(lVar11 + 0x8040,local_70);
      }
    }
    else if (sVar18 == 0) goto LAB_00ecf04c;
  }
  puVar17 = local_108;
  if (local_108 == (undefined8 *)0x0) goto LAB_00ece974;
  psVar1 = (short *)(local_108 + 3);
  do {
    sVar18 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar18 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar18 == 1) {
    piVar2 = (int *)((long)local_108 + 0x1c);
    do {
      iVar10 = *piVar2;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == -1) goto LAB_00ece974;
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar11 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar11;
    local_70[0] = (long *)*puVar17;
    pplVar15 = local_70;
LAB_00ecf400:
    FUN_00c44438(lVar11 + 0x8040,pplVar15);
  }
  else {
LAB_00ecf048:
    if (sVar18 == 0) goto LAB_00ecf04c;
  }
  goto LAB_00ece974;
code_r0x00ece8a0:
  cVar6 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar9) {
    *plVar16 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00ece8a8;
  goto LAB_00ece898;
LAB_00ecf644:
  (**(code **)(*plVar16 + 0x18))(&local_e0,plVar16);
  local_f8 = (long *)0x0;
  local_f0 = (undefined8 *)0x0;
  plVar22 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar22 = plVar16 + 5;
  }
  if ((long *)local_e0[2] == plVar22) {
    FUN_00d1f904(&local_f8,&local_e0);
  }
  if (local_e0 != (long *)0x0) {
    plVar16 = local_e0 + 3;
    do {
      sVar18 = (short)*plVar16;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(short *)plVar16 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_108 = (undefined8 *)*local_e0;
        FUN_00c44438(lVar11 + 0x8040,&local_108);
      }
    }
    else if (sVar18 == 0) goto LAB_00ecf04c;
  }
  local_d0 = 0;
  local_e0 = local_78;
  local_d8 = (long *)0x0;
  FUN_00dc7a68(&local_d8,&local_f8);
  local_98[8] = (long)local_e0;
  FUN_00dc7a68(local_98 + 9,&local_d8);
  plVar16 = local_d8;
  if (local_d8 != (long *)0x0) {
    plVar22 = local_d8 + 3;
    do {
      sVar18 = (short)*plVar22;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(short *)plVar22 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_d8 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_108 = (undefined8 *)*plVar16;
        FUN_00c44438(lVar11 + 0x8040,&local_108);
      }
    }
    else if (sVar18 == 0) goto LAB_00ecf04c;
  }
  plVar16 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar22 = local_f8 + 3;
    do {
      sVar18 = (short)*plVar22;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(short *)plVar22 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_108 = (undefined8 *)*plVar16;
        FUN_00c44438(lVar11 + 0x8040,&local_108);
      }
    }
    else if (sVar18 == 0) goto LAB_00ecf04c;
  }
  puVar23 = (undefined8 *)PTR_DAT_047d8c48;
  puVar14 = (undefined8 *)PTR_DAT_047d8c50;
  goto LAB_00ece974;
  while( true ) {
    puVar14 = (undefined8 *)*puVar14;
    plVar22 = (long *)0x0;
    if (puVar14 == (undefined8 *)0x0) break;
LAB_00ecf9b8:
    if (puVar14 == (undefined8 *)PTR_DAT_047e0dd0) {
      plVar22 = plVar16;
      break;
    }
  }
LAB_00ecf9c4:
  FUN_01db74ec(&local_80,plVar22);
  plVar22 = local_80;
  lVar11 = puVar17[1];
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar18 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar18 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16);
  }
  else if (sVar18 == 0) goto LAB_00ecede8;
  puVar14 = (undefined8 *)PTR_DAT_047d8c50;
  if (plVar22 == (long *)0x0) {
LAB_00ece8ec:
    plVar16 = (long *)FUN_00ecfed8(*(undefined8 *)(lVar19 + 0x3a0),param_3,&local_78);
    if (plVar16 != (long *)0x0) {
      lVar11 = plVar16[6];
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00ecfd80;
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar12;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar18 == -1) goto LAB_00ecf110;
    }
    plVar22 = local_80;
    local_80 = (long *)0x0;
    if (plVar22 != (long *)0x0) {
      lVar11 = plVar22[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar22 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_00ecede8;
    }
    local_80 = plVar16;
    (**(code **)(*plVar16 + 0x18))(&local_e0,plVar16);
    local_f8 = (long *)0x0;
    local_f0 = (undefined8 *)0x0;
    plVar22 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      plVar22 = plVar16 + 5;
    }
    if ((long *)local_e0[2] == plVar22) {
      FUN_00d1f904(&local_f8,&local_e0);
    }
    plVar16 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar22 = local_e0 + 3;
      do {
        sVar18 = (short)*plVar22;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar5) {
          *(short *)plVar22 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_108 = (undefined8 *)*plVar16;
          FUN_00c44438(lVar11 + 0x8040,&local_108);
        }
      }
      else if (sVar18 == 0) goto LAB_00ecf04c;
    }
    FUN_00dc7a68(local_98 + 9,&local_f8);
    plVar16 = local_f8;
    if (local_f8 != (long *)0x0) {
      plVar22 = local_f8 + 3;
      do {
        sVar18 = (short)*plVar22;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar5) {
          *(short *)plVar22 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 != 1) goto LAB_00ecf048;
      piVar2 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_e0 = (long *)*plVar16;
        pplVar15 = &local_e0;
        goto LAB_00ecf400;
      }
    }
  }
LAB_00ece974:
  if (!bVar9) {
    *(undefined8 *)(lVar19 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar19 + 0x308),local_80,0);
  plVar16 = local_80;
  puVar7 = PTR_DAT_047d3910;
  if (local_80 != (long *)0x0) {
    lVar19 = local_80[6];
    if (*(long *)(lVar19 + 0x10) == 0) {
LAB_00ecfd80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar18 = *psVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
      *(undefined8 *)(lVar19 + 8) = uVar12;
      *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
    }
    else if (sVar18 == -1) {
LAB_00ecf110:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (local_80 != (long *)0x0) {
      lVar19 = local_80[6];
      psVar1 = (short *)(lVar19 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar18 == 0) goto LAB_00ecede8;
    }
  }
  plVar20 = (long *)(param_1 + 8);
  plVar22 = (long *)*plVar20;
  *plVar20 = 0;
  if (plVar22 != (long *)0x0) {
    lVar19 = plVar22[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar18 = *psVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar22 + 0x50))();
    }
    else if (sVar18 == 0) goto LAB_00ecede8;
  }
  *plVar20 = (long)plVar16;
  lVar19 = 0;
  if (plVar16 != (long *)0x0) {
    local_e0 = (long *)0x0;
    local_d8 = (long *)0x0;
    FUN_00c43ef0(&local_e0,plVar16 + 6);
    if ((long *)local_e0[2] == plVar16 + 5) {
      do {
        plVar16 = local_d8;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(&local_d8,0x10);
        if (bVar9) {
          local_d8 = (long *)0x0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar12 = *(undefined8 *)puVar7;
      *(undefined8 *)PTR_DAT_047d3918 = uVar12;
      FUN_00c44204(&local_f8,uVar12,plVar16);
      plVar16 = local_e0;
      local_e0 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        plVar22 = plVar16 + 3;
        do {
          sVar18 = (short)*plVar22;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar9) {
            *(short *)plVar22 = sVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar18 == 1) {
          piVar2 = (int *)((long)plVar16 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar19 = *(long *)puVar7;
            *(long *)PTR_DAT_047d3918 = lVar19;
            local_98 = (long *)*plVar16;
            FUN_00c44438(lVar19 + 0x8040,&local_98);
          }
        }
        else if (sVar18 == 0) goto LAB_00ecf04c;
      }
      plVar16 = local_f8;
      if (local_f8 != (long *)0x0) {
        local_f8 = (long *)0x0;
      }
    }
    else {
      plVar16 = (long *)0x0;
    }
    plVar22 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar3 = local_e0 + 3;
      do {
        sVar18 = (short)*plVar3;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *(short *)plVar3 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar19 = *(long *)puVar7;
          *(long *)PTR_DAT_047d3918 = lVar19;
          local_98 = (long *)*plVar22;
          FUN_00c44438(lVar19 + 0x8040,&local_98);
        }
      }
      else if (sVar18 == 0) goto LAB_00ecf04c;
    }
    if (plVar16 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      plVar22 = plVar16 + 3;
      *(long *)(param_1 + 0x10) = *plVar16;
      do {
        sVar18 = (short)*plVar22;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar9) {
          *(short *)plVar22 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        piVar2 = (int *)((long)plVar16 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar19 = *(long *)puVar7;
          *(long *)PTR_DAT_047d3918 = lVar19;
          local_e0 = (long *)*plVar16;
          FUN_00c44438(lVar19 + 0x8040,&local_e0);
        }
      }
      else if (sVar18 == 0) {
LAB_00ecf04c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar19 = *plVar20;
  }
  if (lVar19 == 0) {
    bVar9 = false;
  }
  else {
    FUN_00ecd314(&local_e0,plVar20);
    plVar16 = local_e0;
    FUN_00cfe35c(local_e0,param_1 + 0x18,1);
    if ((param_2 & 1) == 0) {
      auVar24 = FUN_00d1f59c(plVar16);
      if ((auVar24._0_8_ >> 0x20 & 0xff) == 0) {
        bVar9 = false;
      }
      else {
        bVar9 = auVar24._8_4_ == 0;
      }
    }
    else {
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      uVar12 = *puVar23;
      *puVar14 = uVar12;
      FUN_00cfc3c0(&local_98,uVar12,local_e0);
      local_110 = local_98;
      local_98 = (long *)0x0;
      FUN_00cfbe68(param_1 + 0x20,&local_110);
      if (local_110 != (long *)0x0) {
        lVar19 = local_110[6];
        psVar1 = (short *)(lVar19 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar19 + 0x10) = 0;
          (**(code **)(*local_110 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_00ecede8;
      }
      local_118 = local_90;
      local_90 = (long *)0x0;
      FUN_00cfc114(param_1 + 0x30,&local_118);
      if (local_118 != (long *)0x0) {
        lVar19 = local_118[6];
        psVar1 = (short *)(lVar19 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar19 + 0x10) = 0;
          (**(code **)(*local_118 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_00ecede8;
      }
      if (local_90 != (long *)0x0) {
        lVar19 = local_90[6];
        psVar1 = (short *)(lVar19 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar19 + 0x10) = 0;
          (**(code **)(*local_90 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_00ecede8;
      }
      if (local_98 != (long *)0x0) {
        lVar19 = local_98[6];
        psVar1 = (short *)(lVar19 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar19 + 0x10) = 0;
          (**(code **)(*local_98 + 0x50))();
        }
        else if (sVar18 == 0) goto LAB_00ecede8;
      }
      bVar9 = true;
      plVar16 = local_e0;
    }
    if (plVar16 != (long *)0x0) {
      lVar19 = plVar16[6];
      psVar1 = (short *)(lVar19 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*plVar16 + 0x50))(plVar16);
      }
      else if (sVar18 == 0) {
LAB_00ecede8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return bVar9;
}


