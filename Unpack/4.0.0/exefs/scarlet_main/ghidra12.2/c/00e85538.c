/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e85538; name: FUN_00e85538
 */


void FUN_00e85538(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined4 param_5,long *param_6)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long **pplVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  short sVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  bool bVar28;
  float fVar29;
  undefined8 *local_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  long *local_e8;
  long *local_e0;
  long local_d8;
  long local_d0;
  long *local_c8;
  undefined4 local_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  long *local_a0;
  ulong uStack_98;
  ulong local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  
  if ((param_6 == (long *)0x0) ||
     ((uVar16 = (**(code **)(*param_6 + 0xb8))(param_6), (uVar16 & 1) != 0 &&
      (uVar16 = (**(code **)(**(long **)(param_2 + 0x3a0) + 0xb8))(), (uVar16 & 1) != 0)))) {
    param_6 = *(long **)(param_2 + 0x3a0);
  }
  local_88 = (long *)0x0;
  plVar12 = (long *)(param_2 + 0x2f0);
  lVar25 = *plVar12;
  local_80 = param_6;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar25) {
    lVar11 = nn::os::GetCurrentThread();
LAB_00e85590:
    if (*plVar12 == 0) goto code_r0x00e85598;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar12 == 0) {
            cVar6 = '\x01';
            bVar28 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar28) {
              *plVar12 = lVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00e855a0;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar28) {
        *plVar12 = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00e855a0:
    bVar28 = false;
    goto LAB_00e855a4;
  }
  bVar28 = true;
LAB_00e855a4:
  uVar16 = *(ulong *)(param_2 + 0x290);
  uVar26 = param_4[1];
  if ((uVar16 & uVar16 - 1) == 0) {
    uVar26 = uVar16 - 1 & uVar26;
  }
  else if (uVar16 <= uVar26) {
    uVar18 = 0;
    if (uVar16 != 0) {
      uVar18 = uVar26 / uVar16;
    }
    uVar26 = uVar26 - uVar18 * uVar16;
  }
  FUN_00d00258(&local_a0,param_2,uVar26,param_4,local_80);
  if (local_a0 != (long *)0x0) {
    lVar11 = local_a0[9];
    if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar11 + 0x1a);
      sVar21 = *(short *)(lVar11 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar21) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar21 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00e8623c;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00e8623c:
          bVar9 = false;
        }
        if (bVar9) {
          puVar27 = *(undefined8 **)(lVar11 + 0x10);
          if (puVar27 != (undefined8 *)0x0) {
            plVar12 = puVar27 + -5;
            puVar14 = (undefined8 *)(**(code **)*puVar27)(puVar27);
            if (((*PTR_DAT_047d9250 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d9250), iVar10 != 0)) {
              uVar13 = FUN_00cf27f8();
              *(undefined8 *)PTR_DAT_047d9258 = uVar13;
              __cxa_guard_release(PTR_DAT_047d9250);
            }
            if (puVar14 != (undefined8 *)0x0) goto LAB_00e86294;
            plVar17 = (long *)0x0;
            goto LAB_00e862a0;
          }
          break;
        }
        sVar21 = sVar5;
      } while (sVar5 != 0);
    }
    goto LAB_00e85bb8;
  }
  plVar12 = (long *)FUN_00e868ec(&local_e8,*(undefined8 *)(param_2 + 0x3a0),param_4,&local_80);
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[6];
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00e864ec;
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar21 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar13;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar21 == -1) goto LAB_00e85b88;
  }
  plVar17 = local_88;
  local_88 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    lVar11 = plVar17[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))();
    }
    else if (sVar21 == 0) goto LAB_00e859f4;
  }
  plVar17 = *(long **)(*(long *)(param_2 + 0x288) + uVar26 * 8);
  local_90 = *(ulong *)(param_2 + 0x290);
  local_a0 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    local_a0 = (long *)*plVar17;
  }
  uStack_98 = uVar26;
  local_88 = plVar12;
  if (local_a0 != (long *)0x0) {
    if ((local_90 & local_90 - 1) == 0) {
      do {
        plVar17 = (long *)PTR_DAT_047d8b70;
        if (local_a0[2] != 0) {
          plVar17 = (long *)(local_a0[2] + 0x30);
        }
        plVar22 = (long *)PTR_DAT_047d8b70;
        if (*param_4 != 0) {
          plVar22 = (long *)(*param_4 + 0x30);
        }
        if ((*plVar17 == *plVar22) && ((local_a0[9] == 0 || (*(short *)(local_a0[9] + 0x1a) == 0))))
        goto LAB_00e86040;
        local_a0 = (long *)*local_a0;
      } while ((local_a0 != (long *)0x0) && ((local_a0[1] & local_90 - 1) == uVar26));
    }
    else {
      do {
        plVar17 = (long *)PTR_DAT_047d8b70;
        if (local_a0[2] != 0) {
          plVar17 = (long *)(local_a0[2] + 0x30);
        }
        plVar22 = (long *)PTR_DAT_047d8b70;
        if (*param_4 != 0) {
          plVar22 = (long *)(*param_4 + 0x30);
        }
        if ((*plVar17 == *plVar22) && ((local_a0[9] == 0 || (*(short *)(local_a0[9] + 0x1a) == 0))))
        goto LAB_00e86040;
        local_a0 = (long *)*local_a0;
        if (local_a0 == (long *)0x0) break;
        uVar16 = local_a0[1];
        if (local_90 <= uVar16) {
          uVar18 = 0;
          if (local_90 != 0) {
            uVar18 = uVar16 / local_90;
          }
          uVar16 = uVar16 - uVar18 * local_90;
        }
      } while (uVar16 == uVar26);
    }
  }
  local_a0 = (long *)0x0;
  (**(code **)(*plVar12 + 0x18))(&local_e8,plVar12);
  local_110 = (undefined8 *)0x0;
  uStack_108 = 0;
  plVar17 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
  }
  if ((long *)local_e8[2] == plVar17) {
    FUN_00d1f904(&local_110,&local_e8);
  }
  if (local_e8 != (long *)0x0) {
    plVar12 = local_e8 + 3;
    do {
      sVar21 = (short)*plVar12;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *(short *)plVar12 = sVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_e8 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_78 = (long *)*local_e8;
        FUN_00c44438(lVar11 + 0x8040,&local_78);
      }
    }
    else if (sVar21 == 0) goto LAB_00e85aa8;
  }
  local_f0 = 0;
  local_100 = local_80;
  local_f8 = (undefined8 *)0x0;
  FUN_00dc7a68(&local_f8,&local_110);
  local_e8 = (long *)*param_4;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x18))();
  }
  local_e0 = (long *)param_4[1];
  plVar12 = (long *)(param_2 + 0x288);
  local_d8 = param_4[2];
  local_d0 = param_4[3];
  local_c8 = (long *)param_4[4];
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x18))();
  }
  local_c0 = (undefined4)param_4[5];
  local_b8 = local_100;
  local_b0 = (undefined8 *)0x0;
  local_a8 = 0;
  FUN_00dc7a68(&local_b0,&local_f8);
  FUN_00e86754(&local_78,plVar12,&local_e8);
  plVar17 = local_78;
  uVar26 = local_78[3];
  local_78[1] = uVar26;
  fVar29 = (float)(*(long *)(param_2 + 0x2e0) + 1);
  uVar16 = *(ulong *)(param_2 + 0x290);
  if ((uVar16 == 0) || (*(float *)(param_2 + 0x2e8) * (float)uVar16 < fVar29)) {
    uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
    uVar18 = (ulong)(fVar29 / *(float *)(param_2 + 0x2e8));
    if (uVar18 <= uVar16) {
      uVar18 = uVar16;
    }
    FUN_00f9aa78(plVar12,uVar18);
    uVar16 = *(ulong *)(param_2 + 0x290);
  }
  puVar27 = local_b0;
  uVar18 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
  uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar18 < 2) {
    uVar20 = uVar16 - 1 & uVar26;
  }
  else if (uVar26 < uVar16) {
    uVar20 = uVar26;
  }
  else {
    uVar20 = 0;
    if (uVar16 != 0) {
      uVar20 = uVar26 / uVar16;
    }
    uVar20 = uVar26 - uVar20 * uVar16;
  }
  plVar22 = *(long **)(*plVar12 + uVar20 * 8);
  if (plVar22 == (long *)0x0) {
    plVar19 = (long *)0x0;
  }
  else {
    plVar3 = (long *)PTR_DAT_047d8b70;
    if (plVar17[2] != 0) {
      plVar3 = (long *)(plVar17[2] + 0x30);
    }
    if (uVar18 < 2) {
      bVar7 = 0;
      do {
        bVar8 = bVar7;
        plVar19 = plVar22;
        plVar22 = (long *)*plVar19;
        if ((plVar22 == (long *)0x0) || ((plVar22[1] & uVar16 - 1) != uVar20)) break;
        if (plVar22[1] == uVar26) {
          plVar4 = (long *)PTR_DAT_047d8b70;
          if (plVar22[2] != 0) {
            plVar4 = (long *)(plVar22[2] + 0x30);
          }
          bVar9 = *plVar4 == *plVar3;
        }
        else {
          bVar9 = false;
        }
        bVar7 = bVar8 | bVar9;
      } while ((bVar9) || ((bool)(bVar8 ^ 1)));
    }
    else {
      bVar7 = 0;
      do {
        bVar8 = bVar7;
        plVar19 = plVar22;
        plVar22 = (long *)*plVar19;
        if (plVar22 == (long *)0x0) break;
        uVar23 = plVar22[1];
        if (uVar23 < uVar16) {
          uVar24 = uVar23;
        }
        else {
          uVar24 = 0;
          if (uVar16 != 0) {
            uVar24 = uVar23 / uVar16;
          }
          uVar24 = uVar23 - uVar24 * uVar16;
        }
        if (uVar24 != uVar20) break;
        if (uVar23 == uVar26) {
          plVar4 = (long *)PTR_DAT_047d8b70;
          if (plVar22[2] != 0) {
            plVar4 = (long *)(plVar22[2] + 0x30);
          }
          bVar9 = *plVar4 == *plVar3;
        }
        else {
          bVar9 = false;
        }
        bVar7 = bVar8 | bVar9;
      } while ((bVar9) || ((bool)(bVar8 ^ 1)));
    }
  }
  uVar26 = plVar17[1];
  if (uVar18 < 2) {
    uVar26 = uVar26 & uVar16 - 1;
  }
  else if (uVar16 <= uVar26) {
    uVar20 = 0;
    if (uVar16 != 0) {
      uVar20 = uVar26 / uVar16;
    }
    uVar26 = uVar26 - uVar20 * uVar16;
  }
  if (plVar19 == (long *)0x0) {
    *plVar17 = *(long *)(param_2 + 0x2b8);
    *(long **)(param_2 + 0x2b8) = plVar17;
    *(long *)(*(long *)(param_2 + 0x288) + uVar26 * 8) = param_2 + 0x2b8;
    if (*plVar17 != 0) {
      uVar20 = *(ulong *)(*plVar17 + 8);
      if (uVar18 < 2) {
        uVar20 = uVar20 & uVar16 - 1;
      }
      else if (uVar16 <= uVar20) {
        uVar26 = 0;
        if (uVar16 != 0) {
          uVar26 = uVar20 / uVar16;
        }
        uVar20 = uVar20 - uVar26 * uVar16;
      }
LAB_00e857d4:
      *(long **)(*plVar12 + uVar20 * 8) = plVar17;
    }
  }
  else {
    *plVar17 = *plVar19;
    *plVar19 = (long)plVar17;
    if (*plVar17 != 0) {
      uVar20 = *(ulong *)(*plVar17 + 8);
      if (uVar18 < 2) {
        uVar20 = uVar20 & uVar16 - 1;
      }
      else if (uVar16 <= uVar20) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = uVar20 / uVar16;
        }
        uVar20 = uVar20 - uVar18 * uVar16;
      }
      if (uVar20 != uVar26) goto LAB_00e857d4;
    }
  }
  *(long *)(param_2 + 0x2e0) = *(long *)(param_2 + 0x2e0) + 1;
  if (local_b0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar21 = *psVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_78 = (long *)*puVar27;
        FUN_00c44438(lVar11 + 0x8040,&local_78);
      }
    }
    else if (sVar21 == 0) goto LAB_00e85aa8;
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  puVar27 = local_f8;
  if (local_f8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f8 + 3);
    do {
      sVar21 = *psVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f8 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_78 = (long *)*puVar27;
        FUN_00c44438(lVar11 + 0x8040,&local_78);
      }
    }
    else if (sVar21 == 0) goto LAB_00e85aa8;
  }
  puVar27 = local_110;
  if (local_110 == (undefined8 *)0x0) goto LAB_00e85810;
  psVar1 = (short *)(local_110 + 3);
  do {
    sVar21 = *psVar1;
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar9) {
      *psVar1 = sVar21 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar21 != 1) goto joined_r0x00e86148;
  piVar2 = (int *)((long)local_110 + 0x1c);
  do {
    iVar10 = *piVar2;
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar9) {
      *piVar2 = -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar10 == -1) goto LAB_00e85810;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  pplVar15 = &local_78;
  lVar11 = *(long *)PTR_DAT_047d3910;
  *(long *)PTR_DAT_047d3918 = lVar11;
  local_78 = (long *)*puVar27;
LAB_00e85e70:
  FUN_00c44438(lVar11 + 0x8040,pplVar15);
  goto LAB_00e85810;
code_r0x00e85598:
  cVar6 = '\x01';
  bVar28 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar28) {
    *plVar12 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00e855a0;
  goto LAB_00e85590;
LAB_00e86040:
  (**(code **)(*plVar12 + 0x18))(&local_e8,plVar12);
  local_78 = (long *)0x0;
  uStack_70 = 0;
  plVar17 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
  }
  if ((long *)local_e8[2] == plVar17) {
    FUN_00d1f904(&local_78,&local_e8);
  }
  if (local_e8 != (long *)0x0) {
    plVar12 = local_e8 + 3;
    do {
      sVar21 = (short)*plVar12;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *(short *)plVar12 = sVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_e8 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_100 = (long *)*local_e8;
        FUN_00c44438(lVar11 + 0x8040,&local_100);
      }
    }
    else if (sVar21 == 0) goto LAB_00e85aa8;
  }
  local_d8 = 0;
  local_e8 = local_80;
  local_e0 = (long *)0x0;
  FUN_00dc7a68(&local_e0,&local_78);
  local_a0[8] = (long)local_e8;
  FUN_00dc7a68(local_a0 + 9,&local_e0);
  plVar12 = local_e0;
  if (local_e0 != (long *)0x0) {
    plVar17 = local_e0 + 3;
    do {
      sVar21 = (short)*plVar17;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar9) {
        *(short *)plVar17 = sVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 1) {
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_100 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_100);
      }
    }
    else if (sVar21 == 0) goto LAB_00e85aa8;
  }
  plVar12 = local_78;
  if (local_78 != (long *)0x0) {
    plVar17 = local_78 + 3;
    do {
      sVar21 = (short)*plVar17;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar9) {
        *(short *)plVar17 = sVar21 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_78 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_100 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_100);
      }
    }
    else {
joined_r0x00e86148:
      if (sVar21 == 0) {
LAB_00e85aa8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  goto LAB_00e85810;
  while( true ) {
    puVar14 = (undefined8 *)*puVar14;
    plVar17 = (long *)0x0;
    if (puVar14 == (undefined8 *)0x0) break;
LAB_00e86294:
    if (puVar14 == (undefined8 *)PTR_DAT_047d9258) {
      plVar17 = plVar12;
      break;
    }
  }
LAB_00e862a0:
  FUN_01db74ec(&local_88,plVar17);
  plVar17 = local_88;
  lVar11 = puVar27[1];
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar21 = *psVar1;
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar9) {
      *psVar1 = sVar21 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar21 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar12 + 0x50))(plVar12);
  }
  else if (sVar21 == 0) goto LAB_00e859f4;
  if (plVar17 == (long *)0x0) {
LAB_00e85bb8:
    plVar12 = (long *)FUN_00e868ec(&local_e8,*(undefined8 *)(param_2 + 0x3a0),param_4,&local_80);
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[6];
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00e864ec;
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar21 = *psVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar21 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar13;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar21 == -1) goto LAB_00e85b88;
    }
    plVar17 = local_88;
    local_88 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      lVar11 = plVar17[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar21 = *psVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar21 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar17 + 0x50))();
      }
      else if (sVar21 == 0) goto LAB_00e859f4;
    }
    local_88 = plVar12;
    (**(code **)(*plVar12 + 0x18))(&local_e8,plVar12);
    local_78 = (long *)0x0;
    uStack_70 = 0;
    plVar17 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      plVar17 = plVar12 + 5;
    }
    if ((long *)local_e8[2] == plVar17) {
      FUN_00d1f904(&local_78,&local_e8);
    }
    plVar12 = local_e8;
    if (local_e8 != (long *)0x0) {
      plVar17 = local_e8 + 3;
      do {
        sVar21 = (short)*plVar17;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *(short *)plVar17 = sVar21 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar21 == 1) {
        piVar2 = (int *)((long)local_e8 + 0x1c);
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
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_100 = (long *)*plVar12;
          FUN_00c44438(lVar11 + 0x8040,&local_100);
        }
      }
      else if (sVar21 == 0) goto LAB_00e85aa8;
    }
    FUN_00dc7a68(local_a0 + 9,&local_78);
    plVar12 = local_78;
    if (local_78 != (long *)0x0) {
      plVar17 = local_78 + 3;
      do {
        sVar21 = (short)*plVar17;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *(short *)plVar17 = sVar21 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar21 != 1) goto joined_r0x00e86148;
      piVar2 = (int *)((long)local_78 + 0x1c);
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
        pplVar15 = &local_e8;
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_e8 = (long *)*plVar12;
        goto LAB_00e85e70;
      }
    }
  }
LAB_00e85810:
  if (!bVar28) {
    *(undefined8 *)(param_2 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(param_2 + 0x308),local_88,param_5);
  *param_1 = local_88;
  if (local_88 != (long *)0x0) {
    lVar11 = local_88[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
LAB_00e864ec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar6 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar28) {
        *psVar1 = sVar21 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar13;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar21 == -1) {
LAB_00e85b88:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (local_88 != (long *)0x0) {
      lVar11 = local_88[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar21 = *psVar1;
        cVar6 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar28) {
          *psVar1 = sVar21 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_88 + 0x50))();
      }
      else if (sVar21 == 0) {
LAB_00e859f4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


