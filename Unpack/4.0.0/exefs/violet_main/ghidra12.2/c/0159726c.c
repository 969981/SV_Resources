/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159726c; name: FUN_0159726c
 */


bool FUN_0159726c(long param_1,ulong param_2,long *param_3,long *param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long **pplVar18;
  short sVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  undefined1 auVar26 [12];
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
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  puVar11 = PTR_DAT_047d8c50;
  puVar10 = PTR_DAT_047d8c48;
  lVar22 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar22;
  if ((param_4 == (long *)0x0) ||
     ((uVar16 = (**(code **)(*param_4 + 0xb8))(param_4), (uVar16 & 1) != 0 &&
      (uVar16 = (**(code **)(**(long **)(lVar22 + 0x3a0) + 0xb8))(), (uVar16 & 1) != 0)))) {
    param_4 = *(long **)(lVar22 + 0x3a0);
  }
  local_80 = (long *)0x0;
  plVar20 = (long *)(lVar22 + 0x2f0);
  lVar24 = *plVar20;
  local_78 = param_4;
  lVar14 = nn::os::GetCurrentThread();
  if (lVar14 != lVar24) {
    lVar14 = nn::os::GetCurrentThread();
LAB_015972ec:
    if (*plVar20 == 0) goto code_r0x015972f4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0x2f8));
    do {
      if (*plVar20 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0x2f8));
          while (*plVar20 == 0) {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar12) {
              *plVar20 = lVar14;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_015972fc;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar12) {
        *plVar20 = lVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_015972fc:
    bVar12 = false;
    goto LAB_01597300;
  }
  bVar12 = true;
LAB_01597300:
  plVar20 = *(long **)(lVar22 + 0x290);
  plVar25 = (long *)param_3[1];
  if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
    plVar25 = (long *)((long)plVar20 - 1U & (ulong)plVar25);
  }
  else if (plVar20 <= plVar25) {
    uVar16 = 0;
    if (plVar20 != (long *)0x0) {
      uVar16 = (ulong)plVar25 / (ulong)plVar20;
    }
    plVar25 = (long *)((long)plVar25 - uVar16 * (long)plVar20);
  }
  FUN_00d00258(&local_98,lVar22,plVar25,param_3,local_78);
  if (local_98 != (long *)0x0) {
    lVar14 = local_98[9];
    if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar14 + 0x1a);
      sVar19 = *(short *)(lVar14 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar19) {
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar19 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_01598370;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01598370:
          bVar5 = false;
        }
        if (bVar5) {
          puVar21 = *(undefined8 **)(lVar14 + 0x10);
          if (puVar21 != (undefined8 *)0x0) {
            plVar20 = puVar21 + -5;
            puVar17 = (undefined8 *)(**(code **)*puVar21)(puVar21);
            if (((*PTR_DAT_047dd3a8 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047dd3a8), iVar13 != 0)) {
              uVar15 = FUN_02173f9c();
              *(undefined8 *)PTR_DAT_047dd3b0 = uVar15;
              __cxa_guard_release(PTR_DAT_047dd3a8);
            }
            if (puVar17 != (undefined8 *)0x0) goto LAB_015983c0;
            plVar25 = (long *)0x0;
            goto LAB_015983cc;
          }
          break;
        }
        sVar19 = sVar4;
      } while (sVar4 != 0);
    }
    goto LAB_01597aa8;
  }
  plVar20 = (long *)FUN_0159878c(*(undefined8 *)(lVar22 + 0x3a0),param_3,&local_78);
  if (plVar20 != (long *)0x0) {
    lVar14 = plVar20[6];
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0159856c;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar19 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar19 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar19 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar15;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar19 == -1) goto LAB_01597a10;
  }
  plVar23 = local_80;
  local_80 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    lVar14 = plVar23[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar19 = *psVar1;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar19 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar23 + 0x50))();
    }
    else if (sVar19 == 0) goto LAB_01597794;
  }
  puVar21 = *(undefined8 **)(*(long *)(lVar22 + 0x288) + (long)plVar25 * 8);
  local_88 = *(long **)(lVar22 + 0x290);
  local_98 = (long *)0x0;
  if (puVar21 != (undefined8 *)0x0) {
    local_98 = (long *)*puVar21;
  }
  local_90 = plVar25;
  local_80 = plVar20;
  if (local_98 != (long *)0x0) {
    if (((ulong)local_88 & (long)local_88 - 1U) == 0) {
      do {
        plVar23 = (long *)PTR_DAT_047d8b70;
        if (local_98[2] != 0) {
          plVar23 = (long *)(local_98[2] + 0x30);
        }
        plVar3 = (long *)PTR_DAT_047d8b70;
        if (*param_3 != 0) {
          plVar3 = (long *)(*param_3 + 0x30);
        }
        if ((*plVar23 == *plVar3) && ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0))))
        goto LAB_01597bf0;
        local_98 = (long *)*local_98;
      } while ((local_98 != (long *)0x0) && ((long *)(local_98[1] & (long)local_88 - 1U) == plVar25)
              );
    }
    else {
      do {
        plVar23 = (long *)PTR_DAT_047d8b70;
        if (local_98[2] != 0) {
          plVar23 = (long *)(local_98[2] + 0x30);
        }
        plVar3 = (long *)PTR_DAT_047d8b70;
        if (*param_3 != 0) {
          plVar3 = (long *)(*param_3 + 0x30);
        }
        if ((*plVar23 == *plVar3) && ((local_98[9] == 0 || (*(short *)(local_98[9] + 0x1a) == 0))))
        goto LAB_01597bf0;
        local_98 = (long *)*local_98;
        if (local_98 == (long *)0x0) break;
        plVar23 = (long *)local_98[1];
        if (local_88 <= plVar23) {
          uVar16 = 0;
          if (local_88 != (long *)0x0) {
            uVar16 = (ulong)plVar23 / (ulong)local_88;
          }
          plVar23 = (long *)((long)plVar23 - uVar16 * (long)local_88);
        }
      } while (plVar23 == plVar25);
    }
  }
  local_98 = (long *)0x0;
  (**(code **)(*plVar20 + 0x18))(&local_e0,plVar20);
  local_108 = (long *)0x0;
  uStack_100 = 0;
  plVar25 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar25 = plVar20 + 5;
  }
  if ((long *)local_e0[2] == plVar25) {
    FUN_00d1f904(&local_108,&local_e0);
  }
  if (local_e0 != (long *)0x0) {
    plVar20 = local_e0 + 3;
    do {
      sVar19 = (short)*plVar20;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *(short *)plVar20 = sVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_f8 = (long *)*local_e0;
        FUN_00c44438(lVar14 + 0x8040,&local_f8);
      }
    }
    else if (sVar19 == 0) goto LAB_01597890;
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
  FUN_01214138(lVar22 + 0x288,&local_e0);
  plVar20 = local_a8;
  if (local_a8 != (long *)0x0) {
    plVar25 = local_a8 + 3;
    do {
      sVar19 = (short)*plVar25;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *(short *)plVar25 = sVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_70[0] = (long *)*plVar20;
        FUN_00c44438(lVar14 + 0x8040,local_70);
      }
    }
    else if (sVar19 == 0) goto LAB_01597890;
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  plVar20 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar25 = local_f0 + 3;
    do {
      sVar19 = (short)*plVar25;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *(short *)plVar25 = sVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_70[0] = (long *)*plVar20;
        FUN_00c44438(lVar14 + 0x8040,local_70);
      }
    }
    else if (sVar19 == 0) goto LAB_01597890;
  }
  plVar20 = local_108;
  if (local_108 != (long *)0x0) {
    plVar25 = local_108 + 3;
    do {
      sVar19 = (short)*plVar25;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *(short *)plVar25 = sVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar19 != 1) goto LAB_01597868;
    piVar2 = (int *)((long)local_108 + 0x1c);
    do {
      iVar13 = *piVar2;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      pplVar18 = local_70;
      lVar14 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar14;
      local_70[0] = (long *)*plVar20;
      goto LAB_01597ecc;
    }
  }
  goto LAB_01597480;
code_r0x015972f4:
  cVar6 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar12) {
    *plVar20 = lVar14;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_015972fc;
  goto LAB_015972ec;
LAB_01597bf0:
  (**(code **)(*plVar20 + 0x18))(&local_e0,plVar20);
  local_f8 = (long *)0x0;
  local_f0 = (long *)0x0;
  plVar25 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar25 = plVar20 + 5;
  }
  if ((long *)local_e0[2] == plVar25) {
    FUN_00d1f904(&local_f8,&local_e0);
  }
  if (local_e0 != (long *)0x0) {
    plVar20 = local_e0 + 3;
    do {
      sVar19 = (short)*plVar20;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *(short *)plVar20 = sVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_108 = (long *)*local_e0;
        FUN_00c44438(lVar14 + 0x8040,&local_108);
      }
    }
    else if (sVar19 == 0) goto LAB_01597890;
  }
  local_d0 = 0;
  local_e0 = local_78;
  local_d8 = (long *)0x0;
  FUN_00dc7a68(&local_d8,&local_f8);
  local_98[8] = (long)local_e0;
  FUN_00dc7a68(local_98 + 9,&local_d8);
  plVar20 = local_d8;
  if (local_d8 != (long *)0x0) {
    plVar25 = local_d8 + 3;
    do {
      sVar19 = (short)*plVar25;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *(short *)plVar25 = sVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_d8 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_108 = (long *)*plVar20;
        FUN_00c44438(lVar14 + 0x8040,&local_108);
      }
    }
    else if (sVar19 == 0) goto LAB_01597890;
  }
  plVar20 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar25 = local_f8 + 3;
    do {
      sVar19 = (short)*plVar25;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *(short *)plVar25 = sVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar19 == 1) {
      piVar2 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == -1) goto LAB_01597480;
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      pplVar18 = &local_108;
      lVar14 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar14;
      local_108 = (long *)*plVar20;
LAB_01597ecc:
      FUN_00c44438(lVar14 + 0x8040,pplVar18);
    }
    else {
LAB_01597868:
      if (sVar19 == 0) goto LAB_01597890;
    }
  }
  goto LAB_01597480;
  while( true ) {
    puVar17 = (undefined8 *)*puVar17;
    plVar25 = (long *)0x0;
    if (puVar17 == (undefined8 *)0x0) break;
LAB_015983c0:
    if (puVar17 == (undefined8 *)PTR_DAT_047dd3b0) {
      plVar25 = plVar20;
      break;
    }
  }
LAB_015983cc:
  FUN_01db74ec(&local_80,plVar25);
  plVar25 = local_80;
  lVar14 = puVar21[1];
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar19 = *psVar1;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar19 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar19 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar20 + 0x50))(plVar20);
  }
  else if (sVar19 == 0) goto LAB_01597794;
  if (plVar25 == (long *)0x0) {
LAB_01597aa8:
    plVar20 = (long *)FUN_0159878c(*(undefined8 *)(lVar22 + 0x3a0),param_3,&local_78);
    if (plVar20 != (long *)0x0) {
      lVar14 = plVar20[6];
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_0159856c;
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar19 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar19 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar19 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar15;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar19 == -1) goto LAB_01597a10;
    }
    plVar25 = local_80;
    local_80 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      lVar14 = plVar25[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar19 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar25 + 0x50))();
      }
      else if (sVar19 == 0) goto LAB_01597794;
    }
    local_80 = plVar20;
    (**(code **)(*plVar20 + 0x18))(&local_e0,plVar20);
    local_f8 = (long *)0x0;
    local_f0 = (long *)0x0;
    plVar25 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      plVar25 = plVar20 + 5;
    }
    if ((long *)local_e0[2] == plVar25) {
      FUN_00d1f904(&local_f8,&local_e0);
    }
    plVar20 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar25 = local_e0 + 3;
      do {
        sVar19 = (short)*plVar25;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *(short *)plVar25 = sVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar19 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar13 = *piVar2;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_108 = (long *)*plVar20;
          FUN_00c44438(lVar14 + 0x8040,&local_108);
        }
      }
      else if (sVar19 == 0) goto LAB_01597890;
    }
    FUN_00dc7a68(local_98 + 9,&local_f8);
    plVar20 = local_f8;
    if (local_f8 != (long *)0x0) {
      plVar25 = local_f8 + 3;
      do {
        sVar19 = (short)*plVar25;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar5) {
          *(short *)plVar25 = sVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar19 != 1) goto LAB_01597868;
      piVar2 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar13 = *piVar2;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        pplVar18 = &local_e0;
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_e0 = (long *)*plVar20;
        goto LAB_01597ecc;
      }
    }
  }
LAB_01597480:
  if (!bVar12) {
    *(undefined8 *)(lVar22 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(lVar22 + 0x308),local_80,0);
  plVar20 = local_80;
  if (local_80 != (long *)0x0) {
    lVar22 = local_80[6];
    if (*(long *)(lVar22 + 0x10) == 0) {
LAB_0159856c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar22 + 0x1a);
    do {
      sVar19 = *psVar1;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar19 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar19 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      *(undefined8 *)(lVar22 + 8) = uVar15;
      *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
    }
    else if (sVar19 == -1) {
LAB_01597a10:
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
        sVar19 = *psVar1;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*local_80 + 0x50))();
      }
      else if (sVar19 == 0) goto LAB_01597794;
    }
  }
  plVar23 = (long *)(param_1 + 8);
  plVar25 = (long *)*plVar23;
  *plVar23 = 0;
  if (plVar25 != (long *)0x0) {
    lVar22 = plVar25[6];
    psVar1 = (short *)(lVar22 + 0x1a);
    do {
      sVar19 = *psVar1;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar19 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar19 == 1) {
      *(undefined8 *)(lVar22 + 0x10) = 0;
      (**(code **)(*plVar25 + 0x50))();
    }
    else if (sVar19 == 0) goto LAB_01597794;
  }
  *plVar23 = (long)plVar20;
  lVar22 = 0;
  if (plVar20 != (long *)0x0) {
    local_e0 = (long *)0x0;
    local_d8 = (long *)0x0;
    FUN_00c43ef0(&local_e0,plVar20 + 6);
    puVar7 = PTR_DAT_047d3908;
    if ((long *)local_e0[2] == plVar20 + 5) {
      do {
        plVar20 = local_d8;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(&local_d8,0x10);
        if (bVar12) {
          local_d8 = (long *)0x0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      puVar9 = PTR_DAT_047d3918;
      puVar8 = PTR_DAT_047d3910;
      uVar15 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar15;
      FUN_00c44204(&local_f8,uVar15,plVar20);
      plVar20 = local_e0;
      local_e0 = (long *)0x0;
      if (plVar20 != (long *)0x0) {
        plVar25 = plVar20 + 3;
        do {
          sVar19 = (short)*plVar25;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar12) {
            *(short *)plVar25 = sVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar19 == 1) {
          piVar2 = (int *)((long)plVar20 + 0x1c);
          do {
            iVar13 = *piVar2;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 != -1) {
            if (((*puVar7 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)puVar8;
            *(long *)puVar9 = lVar22;
            local_98 = (long *)*plVar20;
            FUN_00c44438(lVar22 + 0x8040,&local_98);
          }
        }
        else if (sVar19 == 0) goto LAB_01597890;
      }
      plVar20 = local_f8;
      if (local_f8 != (long *)0x0) {
        local_f8 = (long *)0x0;
      }
    }
    else {
      plVar20 = (long *)0x0;
    }
    plVar25 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar3 = local_e0 + 3;
      do {
        sVar19 = (short)*plVar3;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar12) {
          *(short *)plVar3 = sVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar19 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar13 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_98 = (long *)*plVar25;
          FUN_00c44438(lVar22 + 0x8040,&local_98);
        }
      }
      else if (sVar19 == 0) goto LAB_01597890;
    }
    if (plVar20 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      plVar25 = plVar20 + 3;
      *(long *)(param_1 + 0x10) = *plVar20;
      do {
        sVar19 = (short)*plVar25;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar12) {
          *(short *)plVar25 = sVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar19 == 1) {
        piVar2 = (int *)((long)plVar20 + 0x1c);
        do {
          iVar13 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_e0 = (long *)*plVar20;
          FUN_00c44438(lVar22 + 0x8040,&local_e0);
        }
      }
      else if (sVar19 == 0) {
LAB_01597890:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar22 = *plVar23;
  }
  if (lVar22 == 0) {
    bVar12 = false;
  }
  else {
    FUN_01169258(&local_e0,plVar23);
    plVar20 = local_e0;
    FUN_00cfe35c(local_e0,param_1 + 0x18,1);
    if ((param_2 & 1) == 0) {
      auVar26 = FUN_00d1f59c(plVar20);
      if ((auVar26._0_8_ >> 0x20 & 0xff) == 0) {
        bVar12 = false;
      }
      else {
        bVar12 = auVar26._8_4_ == 0;
      }
    }
    else {
      if (((*PTR_DAT_047d8c40 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c40);
      }
      uVar15 = *(undefined8 *)puVar10;
      *(undefined8 *)puVar11 = uVar15;
      FUN_00cfc3c0(&local_98,uVar15,local_e0);
      local_110 = local_98;
      local_98 = (long *)0x0;
      FUN_00cfbe68(param_1 + 0x20,&local_110);
      if (local_110 != (long *)0x0) {
        lVar22 = local_110[6];
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar19 = *psVar1;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar19 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_110 + 0x50))();
        }
        else if (sVar19 == 0) goto LAB_01597794;
      }
      local_118 = local_90;
      local_90 = (long *)0x0;
      FUN_00cfc114(param_1 + 0x30,&local_118);
      if (local_118 != (long *)0x0) {
        lVar22 = local_118[6];
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar19 = *psVar1;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar19 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_118 + 0x50))();
        }
        else if (sVar19 == 0) goto LAB_01597794;
      }
      if (local_90 != (long *)0x0) {
        lVar22 = local_90[6];
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar19 = *psVar1;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar19 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_90 + 0x50))();
        }
        else if (sVar19 == 0) goto LAB_01597794;
      }
      if (local_98 != (long *)0x0) {
        lVar22 = local_98[6];
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar19 = *psVar1;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar19 == 1) {
          *(undefined8 *)(lVar22 + 0x10) = 0;
          (**(code **)(*local_98 + 0x50))();
        }
        else if (sVar19 == 0) goto LAB_01597794;
      }
      bVar12 = true;
      plVar20 = local_e0;
    }
    if (plVar20 != (long *)0x0) {
      lVar22 = plVar20[6];
      psVar1 = (short *)(lVar22 + 0x1a);
      do {
        sVar19 = *psVar1;
        cVar6 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar19 == 1) {
        *(undefined8 *)(lVar22 + 0x10) = 0;
        (**(code **)(*plVar20 + 0x50))(plVar20);
      }
      else if (sVar19 == 0) {
LAB_01597794:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return bVar12;
}


