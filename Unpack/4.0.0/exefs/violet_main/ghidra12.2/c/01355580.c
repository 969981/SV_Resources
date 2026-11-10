/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01355580; name: FUN_01355580
 */


undefined8 FUN_01355580(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long **pplVar15;
  short sVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  long *plVar25;
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
  
  pbVar23 = PTR_DAT_047d8c40;
  if (((*PTR_DAT_047d8c40 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  puVar14 = (undefined8 *)PTR_DAT_047d8c50;
  puVar24 = (undefined8 *)PTR_DAT_047d8c48;
  lVar19 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar19;
  local_78 = *(long **)(lVar19 + 0x3a0);
  local_80 = (long *)0x0;
  plVar17 = (long *)(lVar19 + 0x2f0);
  lVar21 = *plVar17;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar21) {
    lVar11 = nn::os::GetCurrentThread();
LAB_013555f4:
    if (*plVar17 == 0) goto code_r0x013555fc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x2f8));
    do {
      if (*plVar17 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x2f8));
          while (*plVar17 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar7) {
              *plVar17 = lVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_01355604;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_01355604:
    bVar7 = false;
    goto LAB_01355608;
  }
  bVar7 = true;
LAB_01355608:
  plVar17 = *(long **)(lVar19 + 0x290);
  plVar22 = (long *)param_2[1];
  if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
    plVar22 = (long *)((long)plVar17 - 1U & (ulong)plVar22);
  }
  else if (plVar17 <= plVar22) {
    uVar8 = 0;
    if (plVar17 != (long *)0x0) {
      uVar8 = (ulong)plVar22 / (ulong)plVar17;
    }
    plVar22 = (long *)((long)plVar22 - uVar8 * (long)plVar17);
  }
  FUN_00d00258(&local_98,lVar19,plVar22,param_2,local_78);
  puVar9 = PTR_DAT_047d8c50;
  plVar25 = (long *)PTR_DAT_047d3918;
  plVar17 = (long *)PTR_DAT_047d3910;
  if (local_98 != (long *)0x0) {
    lVar11 = local_98[9];
    if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar11 + 0x1a);
      sVar16 = *(short *)(lVar11 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_0135654c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0135654c:
          bVar5 = false;
        }
        if (bVar5) {
          puVar18 = *(undefined8 **)(lVar11 + 0x10);
          puVar14 = (undefined8 *)PTR_DAT_047d8c50;
          plVar17 = (long *)PTR_DAT_047d3910;
          plVar25 = (long *)PTR_DAT_047d3918;
          if (puVar18 != (undefined8 *)0x0) {
            plVar17 = puVar18 + -5;
            puVar14 = (undefined8 *)(**(code **)*puVar18)();
            if (((*PTR_DAT_047e30a8 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047e30a8), iVar10 != 0)) {
              uVar13 = FUN_00cf27f8();
              *(undefined8 *)PTR_DAT_047e30b0 = uVar13;
              __cxa_guard_release(PTR_DAT_047e30a8);
            }
            if (puVar14 != (undefined8 *)0x0) goto LAB_013565d0;
            plVar22 = (long *)0x0;
            goto LAB_013565dc;
          }
          break;
        }
        puVar14 = (undefined8 *)puVar9;
        sVar16 = sVar4;
      } while (sVar4 != 0);
    }
    goto LAB_01355658;
  }
  plVar12 = (long *)FUN_01356c58(*(undefined8 *)(lVar19 + 0x3a0),param_2,&local_78);
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[6];
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_01356a50;
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar13;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      plVar17 = (long *)PTR_DAT_047d3910;
    }
    else {
      plVar17 = (long *)PTR_DAT_047d3910;
      if (sVar16 == -1) goto LAB_01355e20;
    }
  }
  plVar20 = local_80;
  local_80 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    lVar11 = plVar20[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))();
    }
    else if (sVar16 == 0) goto LAB_01355af8;
  }
  puVar18 = *(undefined8 **)(*(long *)(lVar19 + 0x288) + (long)plVar22 * 8);
  local_88 = *(long **)(lVar19 + 0x290);
  local_98 = (long *)0x0;
  if (puVar18 != (undefined8 *)0x0) {
    local_98 = (long *)*puVar18;
  }
  local_90 = plVar22;
  local_80 = plVar12;
  if (local_98 != (long *)0x0) {
    if (((ulong)local_88 & (long)local_88 - 1U) == 0) {
      do {
        plVar20 = (long *)PTR_DAT_047d8b70;
        if (local_98[2] != 0) {
          plVar20 = (long *)(local_98[2] + 0x30);
        }
        plVar3 = (long *)PTR_DAT_047d8b70;
        if (*param_2 != 0) {
          plVar3 = (long *)(*param_2 + 0x30);
        }
        if ((*plVar20 == *plVar3) && ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0))))
        goto LAB_01356294;
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
        if (*param_2 != 0) {
          plVar3 = (long *)(*param_2 + 0x30);
        }
        if ((*plVar20 == *plVar3) && ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0))))
        goto LAB_01356294;
        local_98 = (long *)*local_98;
        if (local_98 == (long *)0x0) break;
        plVar20 = (long *)local_98[1];
        if (local_88 <= plVar20) {
          uVar8 = 0;
          if (local_88 != (long *)0x0) {
            uVar8 = (ulong)plVar20 / (ulong)local_88;
          }
          plVar20 = (long *)((long)plVar20 - uVar8 * (long)local_88);
        }
      } while (plVar20 == plVar22);
    }
  }
  local_98 = (long *)0x0;
  (**(code **)(*plVar12 + 0x18))(&local_e0,plVar12);
  local_108 = (undefined8 *)0x0;
  uStack_100 = 0;
  plVar22 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar22 = plVar12 + 5;
  }
  if ((long *)local_e0[2] == plVar22) {
    FUN_00d1f904(&local_108,&local_e0);
  }
  puVar14 = (undefined8 *)PTR_DAT_047d8c50;
  if (local_e0 != (long *)0x0) {
    plVar22 = local_e0 + 3;
    do {
      sVar16 = (short)*plVar22;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(short *)plVar22 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
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
        lVar11 = *plVar17;
        *plVar25 = lVar11;
        local_f8 = (long *)*local_e0;
        FUN_00c44438(lVar11 + 0x8040,&local_f8);
      }
    }
    else if (sVar16 == 0) goto LAB_01355c74;
  }
  local_e8 = 0;
  local_f8 = local_78;
  local_f0 = (undefined8 *)0x0;
  FUN_00dc7a68(&local_f0,&local_108);
  local_e0 = (long *)*param_2;
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x18))();
  }
  local_d8 = (long *)param_2[1];
  local_d0 = param_2[2];
  local_c8 = param_2[3];
  local_c0 = (long *)param_2[4];
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x18))();
  }
  local_b8 = (undefined4)param_2[5];
  local_b0 = local_f8;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_00dc7a68(&local_a8,&local_f0);
  FUN_01354124(lVar19 + 0x288,&local_e0);
  puVar18 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a8 + 3);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
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
        lVar11 = *plVar17;
        *plVar25 = lVar11;
        local_70[0] = (long *)*puVar18;
        FUN_00c44438(lVar11 + 0x8040,local_70);
      }
    }
    else if (sVar16 == 0) goto LAB_01355c74;
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  puVar18 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f0 + 3);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
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
        lVar11 = *plVar17;
        *plVar25 = lVar11;
        local_70[0] = (long *)*puVar18;
        FUN_00c44438(lVar11 + 0x8040,local_70);
      }
    }
    else if (sVar16 == 0) goto LAB_01355c74;
  }
  puVar18 = local_108;
  if (local_108 == (undefined8 *)0x0) goto LAB_013556e0;
  psVar1 = (short *)(local_108 + 3);
  do {
    sVar16 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar16 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar16 != 1) goto LAB_01355c70;
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
  if (iVar10 == -1) goto LAB_013556e0;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  lVar11 = *plVar17;
  *plVar25 = lVar11;
  local_70[0] = (long *)*puVar18;
  pplVar15 = local_70;
LAB_0135607c:
  FUN_00c44438(lVar11 + 0x8040,pplVar15);
  goto LAB_013556e0;
code_r0x013555fc:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar7) {
    *plVar17 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01355604;
  goto LAB_013555f4;
LAB_01356294:
  (**(code **)(*plVar12 + 0x18))(&local_e0,plVar12);
  local_f8 = (long *)0x0;
  local_f0 = (undefined8 *)0x0;
  plVar22 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar22 = plVar12 + 5;
  }
  if ((long *)local_e0[2] == plVar22) {
    FUN_00d1f904(&local_f8,&local_e0);
  }
  if (local_e0 != (long *)0x0) {
    plVar22 = local_e0 + 3;
    do {
      sVar16 = (short)*plVar22;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(short *)plVar22 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
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
      pbVar23 = PTR_DAT_047d8c40;
      puVar24 = (undefined8 *)PTR_DAT_047d8c48;
      puVar14 = (undefined8 *)PTR_DAT_047d8c50;
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *plVar17;
        *plVar25 = lVar11;
        local_108 = (undefined8 *)*local_e0;
        FUN_00c44438(lVar11 + 0x8040,&local_108);
        pbVar23 = PTR_DAT_047d8c40;
        puVar24 = (undefined8 *)PTR_DAT_047d8c48;
        puVar14 = (undefined8 *)PTR_DAT_047d8c50;
      }
    }
    else {
      pbVar23 = PTR_DAT_047d8c40;
      puVar24 = (undefined8 *)PTR_DAT_047d8c48;
      puVar14 = (undefined8 *)PTR_DAT_047d8c50;
      if (sVar16 == 0) goto LAB_01355c74;
    }
  }
  local_d0 = 0;
  local_e0 = local_78;
  local_d8 = (long *)0x0;
  FUN_00dc7a68(&local_d8,&local_f8);
  local_98[8] = (long)local_e0;
  FUN_00dc7a68(local_98 + 9,&local_d8);
  plVar22 = local_d8;
  if (local_d8 != (long *)0x0) {
    plVar12 = local_d8 + 3;
    do {
      sVar16 = (short)*plVar12;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(short *)plVar12 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
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
      pbVar23 = PTR_DAT_047d8c40;
      puVar24 = (undefined8 *)PTR_DAT_047d8c48;
      puVar14 = (undefined8 *)PTR_DAT_047d8c50;
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *plVar17;
        *plVar25 = lVar11;
        local_108 = (undefined8 *)*plVar22;
        FUN_00c44438(lVar11 + 0x8040,&local_108);
        pbVar23 = PTR_DAT_047d8c40;
        puVar24 = (undefined8 *)PTR_DAT_047d8c48;
        puVar14 = (undefined8 *)PTR_DAT_047d8c50;
      }
    }
    else {
      pbVar23 = PTR_DAT_047d8c40;
      puVar24 = (undefined8 *)PTR_DAT_047d8c48;
      puVar14 = (undefined8 *)PTR_DAT_047d8c50;
      if (sVar16 == 0) goto LAB_01355c74;
    }
  }
  plVar22 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar12 = local_f8 + 3;
    do {
      sVar16 = (short)*plVar12;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(short *)plVar12 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
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
      pbVar23 = PTR_DAT_047d8c40;
      puVar24 = (undefined8 *)PTR_DAT_047d8c48;
      puVar14 = (undefined8 *)PTR_DAT_047d8c50;
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *plVar17;
        *plVar25 = lVar11;
        local_108 = (undefined8 *)*plVar22;
        FUN_00c44438(lVar11 + 0x8040,&local_108);
        pbVar23 = PTR_DAT_047d8c40;
        puVar24 = (undefined8 *)PTR_DAT_047d8c48;
        puVar14 = (undefined8 *)PTR_DAT_047d8c50;
      }
    }
    else {
      pbVar23 = PTR_DAT_047d8c40;
      puVar24 = (undefined8 *)PTR_DAT_047d8c48;
      puVar14 = (undefined8 *)PTR_DAT_047d8c50;
LAB_01355c70:
      if (sVar16 == 0) goto LAB_01355c74;
    }
  }
  goto LAB_013556e0;
  while( true ) {
    puVar14 = (undefined8 *)*puVar14;
    plVar22 = (long *)0x0;
    if (puVar14 == (undefined8 *)0x0) break;
LAB_013565d0:
    if (puVar14 == (undefined8 *)PTR_DAT_047e30b0) {
      plVar22 = plVar17;
      break;
    }
  }
LAB_013565dc:
  FUN_01db74ec(&local_80,plVar22);
  plVar22 = local_80;
  lVar11 = puVar18[1];
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar16 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar16 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar16 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar17 + 0x50))(plVar17);
  }
  else if (sVar16 == 0) goto LAB_01355af8;
  puVar14 = (undefined8 *)PTR_DAT_047d8c50;
  plVar17 = (long *)PTR_DAT_047d3910;
  plVar25 = (long *)PTR_DAT_047d3918;
  if (plVar22 == (long *)0x0) {
LAB_01355658:
    plVar22 = (long *)FUN_01356c58(*(undefined8 *)(lVar19 + 0x3a0),param_2,&local_78);
    if (plVar22 != (long *)0x0) {
      lVar11 = plVar22[6];
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_01356a50;
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar13;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar16 == -1) goto LAB_01355e20;
    }
    plVar12 = local_80;
    local_80 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))();
      }
      else if (sVar16 == 0) goto LAB_01355af8;
    }
    local_80 = plVar22;
    (**(code **)(*plVar22 + 0x18))(&local_e0,plVar22);
    local_f8 = (long *)0x0;
    local_f0 = (undefined8 *)0x0;
    plVar12 = (long *)0x0;
    if (plVar22 != (long *)0x0) {
      plVar12 = plVar22 + 5;
    }
    if ((long *)local_e0[2] == plVar12) {
      FUN_00d1f904(&local_f8,&local_e0);
    }
    plVar22 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar12 = local_e0 + 3;
      do {
        sVar16 = (short)*plVar12;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(short *)plVar12 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
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
          lVar11 = *plVar17;
          *plVar25 = lVar11;
          local_108 = (undefined8 *)*plVar22;
          FUN_00c44438(lVar11 + 0x8040,&local_108);
        }
      }
      else if (sVar16 == 0) goto LAB_01355c74;
    }
    FUN_00dc7a68(local_98 + 9,&local_f8);
    plVar22 = local_f8;
    if (local_f8 != (long *)0x0) {
      plVar12 = local_f8 + 3;
      do {
        sVar16 = (short)*plVar12;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(short *)plVar12 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 != 1) goto LAB_01355c70;
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
        lVar11 = *plVar17;
        *plVar25 = lVar11;
        local_e0 = (long *)*plVar22;
        pplVar15 = &local_e0;
        goto LAB_0135607c;
      }
    }
  }
LAB_013556e0:
  if (!bVar7) {
    *(undefined8 *)(lVar19 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar19 + 0x308),local_80,0);
  plVar22 = local_80;
  if (local_80 != (long *)0x0) {
    lVar11 = local_80[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
LAB_01356a50:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar13;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) {
LAB_01355e20:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (local_80 != (long *)0x0) {
      lVar11 = local_80[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar16 == 0) goto LAB_01355af8;
    }
  }
  plVar20 = (long *)(param_1 + 8);
  plVar12 = (long *)*plVar20;
  *plVar20 = 0;
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar16 == 0) goto LAB_01355af8;
  }
  *plVar20 = (long)plVar22;
  lVar11 = 0;
  if (plVar22 != (long *)0x0) {
    local_e0 = (long *)0x0;
    local_d8 = (long *)0x0;
    FUN_00c43ef0(&local_e0,plVar22 + 6);
    if ((long *)local_e0[2] == plVar22 + 5) {
      do {
        plVar22 = local_d8;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(&local_d8,0x10);
        if (bVar7) {
          local_d8 = (long *)0x0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar11 = *plVar17;
      *plVar25 = lVar11;
      FUN_00c44204(&local_f8,lVar11,plVar22);
      plVar22 = local_e0;
      local_e0 = (long *)0x0;
      if (plVar22 != (long *)0x0) {
        plVar12 = plVar22 + 3;
        do {
          sVar16 = (short)*plVar12;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *(short *)plVar12 = sVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar16 == 1) {
          piVar2 = (int *)((long)plVar22 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
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
            lVar11 = *plVar17;
            *plVar25 = lVar11;
            local_98 = (long *)*plVar22;
            FUN_00c44438(lVar11 + 0x8040,&local_98);
          }
        }
        else if (sVar16 == 0) goto LAB_01355c74;
      }
      plVar22 = local_f8;
      if (local_f8 != (long *)0x0) {
        local_f8 = (long *)0x0;
      }
    }
    else {
      plVar22 = (long *)0x0;
    }
    plVar12 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar3 = local_e0 + 3;
      do {
        sVar16 = (short)*plVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(short *)plVar3 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
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
          lVar11 = *plVar17;
          *plVar25 = lVar11;
          local_98 = (long *)*plVar12;
          FUN_00c44438(lVar11 + 0x8040,&local_98);
        }
      }
      else if (sVar16 == 0) goto LAB_01355c74;
    }
    if (plVar22 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      plVar12 = plVar22 + 3;
      *(long *)(param_1 + 0x10) = *plVar22;
      do {
        sVar16 = (short)*plVar12;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *(short *)plVar12 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        piVar2 = (int *)((long)plVar22 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
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
          lVar11 = *plVar17;
          *plVar25 = lVar11;
          local_e0 = (long *)*plVar22;
          FUN_00c44438(lVar11 + 0x8040,&local_e0);
        }
      }
      else if (sVar16 == 0) {
LAB_01355c74:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar11 = *plVar20;
  }
  if (lVar11 == 0) {
    uVar13 = 0;
  }
  else {
    FUN_011238c4(&local_e0,plVar20);
    FUN_00cfe35c(local_e0,param_1 + 0x18,1);
    if (((*pbVar23 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
    }
    uVar13 = *puVar24;
    *puVar14 = uVar13;
    FUN_00cfc3c0(&local_98,uVar13,local_e0);
    local_110 = local_98;
    local_98 = (long *)0x0;
    FUN_00cfbe68(param_1 + 0x20,&local_110);
    if (local_110 != (long *)0x0) {
      lVar11 = local_110[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_110 + 0x50))();
      }
      else if (sVar16 == 0) goto LAB_01355af8;
    }
    local_118 = local_90;
    local_90 = (long *)0x0;
    FUN_00cfc114(param_1 + 0x30,&local_118);
    if (local_118 != (long *)0x0) {
      lVar11 = local_118[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_118 + 0x50))();
      }
      else if (sVar16 == 0) goto LAB_01355af8;
    }
    if (local_90 != (long *)0x0) {
      lVar11 = local_90[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar16 == 0) goto LAB_01355af8;
    }
    if (local_98 != (long *)0x0) {
      lVar11 = local_98[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar16 == 0) goto LAB_01355af8;
    }
    if (local_e0 != (long *)0x0) {
      lVar11 = local_e0[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_e0 + 0x50))();
      }
      else if (sVar16 == 0) {
LAB_01355af8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar13 = 1;
  }
  return uVar13;
}


