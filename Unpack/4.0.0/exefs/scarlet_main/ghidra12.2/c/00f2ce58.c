/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f2ce58; name: FUN_00f2ce58
 */


void FUN_00f2ce58(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
  long **pplVar14;
  short sVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  undefined8 *local_100;
  undefined8 uStack_f8;
  long *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  long local_c8;
  long local_c0;
  long *local_b8;
  undefined4 local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  long *local_90;
  ulong uStack_88;
  ulong local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined8 uStack_60;
  
  if ((param_6 == (long *)0x0) ||
     ((uVar16 = (**(code **)(*param_6 + 0xb8))(param_6), (uVar16 & 1) != 0 &&
      (uVar16 = (**(code **)(**(long **)(param_2 + 0x3a0) + 0xb8))(), (uVar16 & 1) != 0)))) {
    param_6 = *(long **)(param_2 + 0x3a0);
  }
  local_78 = (long *)0x0;
  plVar12 = (long *)(param_2 + 0x2f0);
  lVar24 = *plVar12;
  local_70 = param_6;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar24) {
    lVar11 = nn::os::GetCurrentThread();
    bVar27 = false;
LAB_00f2de4c:
    if (*plVar12 == 0) goto code_r0x00f2de54;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    bVar27 = false;
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar12 == 0) {
            cVar6 = '\x01';
            bVar27 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar27) {
              *plVar12 = lVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
            bVar27 = false;
            if (cVar6 == '\0') goto LAB_00f2cea8;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    goto LAB_00f2cea8;
  }
  bVar27 = true;
LAB_00f2cea8:
  uVar16 = *(ulong *)(param_2 + 0x290);
  uVar25 = param_4[1];
  if ((uVar16 & uVar16 - 1) == 0) {
    uVar25 = uVar16 - 1 & uVar25;
  }
  else if (uVar16 <= uVar25) {
    uVar18 = 0;
    if (uVar16 != 0) {
      uVar18 = uVar25 / uVar16;
    }
    uVar25 = uVar25 - uVar18 * uVar16;
  }
  FUN_00d00258(&local_90,param_2,uVar25,param_4,local_70);
  if (local_90 == (long *)0x0) {
    plVar12 = (long *)FUN_00f2dfd0(&local_d8,*(undefined8 *)(param_2 + 0x3a0),param_4,&local_70);
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[6];
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00f2deac;
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar13;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar15 == -1) goto LAB_00f2d548;
    }
    plVar17 = local_78;
    local_78 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      lVar11 = plVar17[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar17 + 0x50))();
      }
      else if (sVar15 == 0) goto LAB_00f2d38c;
    }
    plVar17 = *(long **)(*(long *)(param_2 + 0x288) + uVar25 * 8);
    local_80 = *(ulong *)(param_2 + 0x290);
    local_90 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      local_90 = (long *)*plVar17;
    }
    uStack_88 = uVar25;
    local_78 = plVar12;
    if (local_90 != (long *)0x0) {
      if ((local_80 & local_80 - 1) == 0) {
        do {
          plVar17 = (long *)PTR_DAT_047d8b70;
          if (local_90[2] != 0) {
            plVar17 = (long *)(local_90[2] + 0x30);
          }
          plVar21 = (long *)PTR_DAT_047d8b70;
          if (*param_4 != 0) {
            plVar21 = (long *)(*param_4 + 0x30);
          }
          if ((*plVar17 == *plVar21) &&
             ((local_90[9] == 0 || (*(short *)(local_90[9] + 0x1a) == 0)))) goto LAB_00f2d8f0;
          local_90 = (long *)*local_90;
        } while ((local_90 != (long *)0x0) && ((local_90[1] & local_80 - 1) == uVar25));
      }
      else {
        do {
          plVar17 = (long *)PTR_DAT_047d8b70;
          if (local_90[2] != 0) {
            plVar17 = (long *)(local_90[2] + 0x30);
          }
          plVar21 = (long *)PTR_DAT_047d8b70;
          if (*param_4 != 0) {
            plVar21 = (long *)(*param_4 + 0x30);
          }
          if ((*plVar17 == *plVar21) &&
             ((local_90[9] == 0 || (*(short *)(local_90[9] + 0x1a) == 0)))) goto LAB_00f2d8f0;
          local_90 = (long *)*local_90;
          if (local_90 == (long *)0x0) break;
          uVar16 = local_90[1];
          if (local_80 <= uVar16) {
            uVar18 = 0;
            if (local_80 != 0) {
              uVar18 = uVar16 / local_80;
            }
            uVar16 = uVar16 - uVar18 * local_80;
          }
        } while (uVar16 == uVar25);
      }
    }
    local_90 = (long *)0x0;
    (**(code **)(*plVar12 + 0x18))(&local_d8,plVar12);
    local_100 = (undefined8 *)0x0;
    uStack_f8 = 0;
    plVar17 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      plVar17 = plVar12 + 5;
    }
    if ((long *)local_d8[2] == plVar17) {
      FUN_00d1f904(&local_100,&local_d8);
    }
    if (local_d8 != (long *)0x0) {
      plVar12 = local_d8 + 3;
      do {
        sVar15 = (short)*plVar12;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar9) {
          *(short *)plVar12 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_d8 + 0x1c);
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
          local_68 = (long *)*local_d8;
          FUN_00c44438(lVar11 + 0x8040,&local_68);
        }
      }
      else if (sVar15 == 0) goto LAB_00f2d4f0;
    }
    local_e0 = 0;
    local_f0 = local_70;
    local_e8 = (undefined8 *)0x0;
    FUN_00dc7a68(&local_e8,&local_100);
    local_d8 = (long *)*param_4;
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x18))();
    }
    local_d0 = (long *)param_4[1];
    plVar12 = (long *)(param_2 + 0x288);
    local_c8 = param_4[2];
    local_c0 = param_4[3];
    local_b8 = (long *)param_4[4];
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x18))();
    }
    local_b0 = (undefined4)param_4[5];
    local_a8 = local_f0;
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_00dc7a68(&local_a0,&local_e8);
    FUN_00e86754(&local_68,plVar12,&local_d8);
    plVar17 = local_68;
    uVar25 = local_68[3];
    local_68[1] = uVar25;
    fVar28 = (float)(*(long *)(param_2 + 0x2e0) + 1);
    uVar16 = *(ulong *)(param_2 + 0x290);
    if ((uVar16 == 0) || (*(float *)(param_2 + 0x2e8) * (float)uVar16 < fVar28)) {
      uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
      uVar18 = (ulong)(fVar28 / *(float *)(param_2 + 0x2e8));
      if (uVar18 <= uVar16) {
        uVar18 = uVar16;
      }
      FUN_00f9aa78(plVar12,uVar18);
      uVar16 = *(ulong *)(param_2 + 0x290);
    }
    puVar26 = local_a0;
    uVar18 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar20 = uVar16 - 1 & uVar25;
    }
    else if (uVar25 < uVar16) {
      uVar20 = uVar25;
    }
    else {
      uVar20 = 0;
      if (uVar16 != 0) {
        uVar20 = uVar25 / uVar16;
      }
      uVar20 = uVar25 - uVar20 * uVar16;
    }
    plVar21 = *(long **)(*plVar12 + uVar20 * 8);
    if (plVar21 == (long *)0x0) {
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
          plVar19 = plVar21;
          plVar21 = (long *)*plVar19;
          if ((plVar21 == (long *)0x0) || ((plVar21[1] & uVar16 - 1) != uVar20)) break;
          if (plVar21[1] == uVar25) {
            plVar4 = (long *)PTR_DAT_047d8b70;
            if (plVar21[2] != 0) {
              plVar4 = (long *)(plVar21[2] + 0x30);
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
          plVar19 = plVar21;
          plVar21 = (long *)*plVar19;
          if (plVar21 == (long *)0x0) break;
          uVar22 = plVar21[1];
          if (uVar22 < uVar16) {
            uVar23 = uVar22;
          }
          else {
            uVar23 = 0;
            if (uVar16 != 0) {
              uVar23 = uVar22 / uVar16;
            }
            uVar23 = uVar22 - uVar23 * uVar16;
          }
          if (uVar23 != uVar20) break;
          if (uVar22 == uVar25) {
            plVar4 = (long *)PTR_DAT_047d8b70;
            if (plVar21[2] != 0) {
              plVar4 = (long *)(plVar21[2] + 0x30);
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
    uVar25 = plVar17[1];
    if (uVar18 < 2) {
      uVar25 = uVar25 & uVar16 - 1;
    }
    else if (uVar16 <= uVar25) {
      uVar20 = 0;
      if (uVar16 != 0) {
        uVar20 = uVar25 / uVar16;
      }
      uVar25 = uVar25 - uVar20 * uVar16;
    }
    if (plVar19 == (long *)0x0) {
      *plVar17 = *(long *)(param_2 + 0x2b8);
      *(long **)(param_2 + 0x2b8) = plVar17;
      *(long *)(*(long *)(param_2 + 0x288) + uVar25 * 8) = param_2 + 0x2b8;
      if (*plVar17 != 0) {
        uVar20 = *(ulong *)(*plVar17 + 8);
        if (uVar18 < 2) {
          uVar20 = uVar20 & uVar16 - 1;
        }
        else if (uVar16 <= uVar20) {
          uVar25 = 0;
          if (uVar16 != 0) {
            uVar25 = uVar20 / uVar16;
          }
          uVar20 = uVar20 - uVar25 * uVar16;
        }
LAB_00f2d2a8:
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
        if (uVar20 != uVar25) goto LAB_00f2d2a8;
      }
    }
    *(long *)(param_2 + 0x2e0) = *(long *)(param_2 + 0x2e0) + 1;
    if (local_a0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a0 + 3);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_a0 + 0x1c);
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
          local_68 = (long *)*puVar26;
          FUN_00c44438(lVar11 + 0x8040,&local_68);
        }
      }
      else if (sVar15 == 0) goto LAB_00f2d4f0;
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    puVar26 = local_e8;
    if (local_e8 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_e8 + 3);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
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
          local_68 = (long *)*puVar26;
          FUN_00c44438(lVar11 + 0x8040,&local_68);
        }
      }
      else if (sVar15 == 0) goto LAB_00f2d4f0;
    }
    puVar26 = local_100;
    if (local_100 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_100 + 3);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 != 1) goto LAB_00f2d4ec;
      piVar2 = (int *)((long)local_100 + 0x1c);
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
        pplVar14 = &local_68;
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_68 = (long *)*puVar26;
        goto LAB_00f2d7cc;
      }
    }
  }
  else {
    lVar11 = local_90[9];
    if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar11 + 0x1a);
      sVar15 = *(short *)(lVar11 + 0x1a);
LAB_00f2db68:
      sVar5 = *psVar1;
      if (sVar5 == sVar15) {
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00f2db8c;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f2db8c:
        bVar9 = false;
      }
      if (!bVar9) goto code_r0x00f2db94;
      puVar26 = *(undefined8 **)(lVar11 + 0x10);
      if (puVar26 != (undefined8 *)0x0) {
        plVar17 = puVar26 + -5;
        (**(code **)*puVar26)(puVar26);
        uVar16 = FUN_00f2c36c();
        plVar12 = plVar17;
        if ((uVar16 & 1) == 0) {
          plVar12 = (long *)0x0;
        }
        FUN_01db74ec(&local_78,plVar12);
        plVar12 = local_78;
        lVar11 = puVar26[1];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar15 = *psVar1;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar15 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar17 + 0x50))(plVar17);
        }
        else if (sVar15 == 0) goto LAB_00f2d38c;
        if (plVar12 == (long *)0x0) goto LAB_00f2d0e4;
        goto LAB_00f2d2e4;
      }
    }
LAB_00f2d0e4:
    plVar12 = (long *)FUN_00f2dfd0(&local_d8,*(undefined8 *)(param_2 + 0x3a0),param_4,&local_70);
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[6];
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00f2deac;
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar13;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar15 == -1) goto LAB_00f2d548;
    }
    plVar17 = local_78;
    local_78 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      lVar11 = plVar17[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar17 + 0x50))();
      }
      else if (sVar15 == 0) goto LAB_00f2d38c;
    }
    local_78 = plVar12;
    (**(code **)(*plVar12 + 0x18))(&local_d8,plVar12);
    local_68 = (long *)0x0;
    uStack_60 = 0;
    plVar17 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      plVar17 = plVar12 + 5;
    }
    if ((long *)local_d8[2] == plVar17) {
      FUN_00d1f904(&local_68,&local_d8);
    }
    plVar12 = local_d8;
    if (local_d8 != (long *)0x0) {
      plVar17 = local_d8 + 3;
      do {
        sVar15 = (short)*plVar17;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *(short *)plVar17 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_d8 + 0x1c);
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
          local_f0 = (long *)*plVar12;
          FUN_00c44438(lVar11 + 0x8040,&local_f0);
        }
      }
      else if (sVar15 == 0) goto LAB_00f2d4f0;
    }
    FUN_00dc7a68(local_90 + 9,&local_68);
    plVar12 = local_68;
    if (local_68 != (long *)0x0) {
      plVar17 = local_68 + 3;
      do {
        sVar15 = (short)*plVar17;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *(short *)plVar17 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 != 1) goto LAB_00f2d4ec;
      piVar2 = (int *)((long)local_68 + 0x1c);
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
        pplVar14 = &local_d8;
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_d8 = (long *)*plVar12;
        goto LAB_00f2d7cc;
      }
    }
  }
LAB_00f2d2e4:
  if (!bVar27) {
    *(undefined8 *)(param_2 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(param_2 + 0x308),local_78,param_5);
  *param_1 = local_78;
  if (local_78 != (long *)0x0) {
    lVar11 = local_78[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
LAB_00f2deac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar27) {
        *psVar1 = sVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar13;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar15 == -1) {
LAB_00f2d548:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (local_78 != (long *)0x0) {
      lVar11 = local_78[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar27) {
          *psVar1 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_78 + 0x50))();
      }
      else if (sVar15 == 0) {
LAB_00f2d38c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x00f2de54:
  cVar6 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar9) {
    *plVar12 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00f2cea8;
  goto LAB_00f2de4c;
code_r0x00f2db94:
  sVar15 = sVar5;
  if (sVar5 == 0) goto LAB_00f2d0e4;
  goto LAB_00f2db68;
LAB_00f2d8f0:
  (**(code **)(*plVar12 + 0x18))(&local_d8,plVar12);
  local_68 = (long *)0x0;
  uStack_60 = 0;
  plVar17 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
  }
  if ((long *)local_d8[2] == plVar17) {
    FUN_00d1f904(&local_68,&local_d8);
  }
  if (local_d8 != (long *)0x0) {
    plVar12 = local_d8 + 3;
    do {
      sVar15 = (short)*plVar12;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *(short *)plVar12 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_d8 + 0x1c);
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
        local_f0 = (long *)*local_d8;
        FUN_00c44438(lVar11 + 0x8040,&local_f0);
      }
    }
    else if (sVar15 == 0) goto LAB_00f2d4f0;
  }
  local_c8 = 0;
  local_d8 = local_70;
  local_d0 = (long *)0x0;
  FUN_00dc7a68(&local_d0,&local_68);
  local_90[8] = (long)local_d8;
  FUN_00dc7a68(local_90 + 9,&local_d0);
  plVar12 = local_d0;
  if (local_d0 != (long *)0x0) {
    plVar17 = local_d0 + 3;
    do {
      sVar15 = (short)*plVar17;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar9) {
        *(short *)plVar17 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_d0 + 0x1c);
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
        local_f0 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_f0);
      }
    }
    else if (sVar15 == 0) goto LAB_00f2d4f0;
  }
  plVar12 = local_68;
  if (local_68 != (long *)0x0) {
    plVar17 = local_68 + 3;
    do {
      sVar15 = (short)*plVar17;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar9) {
        *(short *)plVar17 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
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
        pplVar14 = &local_f0;
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_f0 = (long *)*plVar12;
LAB_00f2d7cc:
        FUN_00c44438(lVar11 + 0x8040,pplVar14);
      }
    }
    else {
LAB_00f2d4ec:
      if (sVar15 == 0) {
LAB_00f2d4f0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  goto LAB_00f2d2e4;
}


