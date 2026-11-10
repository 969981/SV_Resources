/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dc6608; name: FUN_00dc6608
 */


void FUN_00dc6608(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
  long *plVar26;
  undefined8 *puVar27;
  bool bVar28;
  float fVar29;
  long *local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  long *local_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  undefined4 local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  long *local_80;
  ulong uStack_78;
  ulong local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  pplVar14 = &local_f0;
  if ((param_6 == (long *)0x0) ||
     ((uVar16 = (**(code **)(*param_6 + 0xb8))(param_6), (uVar16 & 1) != 0 &&
      (uVar16 = (**(code **)(**(long **)(param_2 + 0x3a0) + 0xb8))(), (uVar16 & 1) != 0)))) {
    param_6 = *(long **)(param_2 + 0x3a0);
  }
  local_68 = (long *)0x0;
  plVar12 = (long *)(param_2 + 0x2f0);
  lVar24 = *plVar12;
  local_60 = param_6;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar24) {
    lVar11 = nn::os::GetCurrentThread();
    bVar28 = false;
LAB_00dc7694:
    if (*plVar12 == 0) goto code_r0x00dc769c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    bVar28 = false;
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
            bVar28 = false;
            if (cVar6 == '\0') goto LAB_00dc6658;
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
    goto LAB_00dc6658;
  }
  bVar28 = true;
LAB_00dc6658:
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
  FUN_00d00258(&local_80,param_2,uVar25,param_4,local_60);
  if (local_80 != (long *)0x0) {
    lVar11 = local_80[9];
    if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar11 + 0x1a);
      sVar15 = *(short *)(lVar11 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar15) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_00dc7378;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00dc7378:
          bVar9 = false;
        }
        if (bVar9) {
          puVar27 = *(undefined8 **)(lVar11 + 0x10);
          if (puVar27 != (undefined8 *)0x0) {
            plVar26 = puVar27 + -5;
            plVar12 = (long *)(**(code **)*puVar27)(puVar27);
            plVar17 = (long *)FUN_00db2d24();
            if (plVar12 != (long *)0x0) goto LAB_00dc73b4;
            plVar21 = (long *)0x0;
            goto LAB_00dc73c0;
          }
          break;
        }
        sVar15 = sVar5;
      } while (sVar5 != 0);
    }
    goto LAB_00dc68b8;
  }
  plVar12 = (long *)FUN_00dc77e0(&local_c8,*(undefined8 *)(param_2 + 0x3a0),param_4,&local_60);
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[6];
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00dc76f4;
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
    else if (sVar15 == -1) goto LAB_00dc6d6c;
  }
  plVar17 = local_68;
  local_68 = (long *)0x0;
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
    else if (sVar15 == 0) goto LAB_00dc6b78;
  }
  plVar17 = *(long **)(*(long *)(param_2 + 0x288) + uVar25 * 8);
  local_70 = *(ulong *)(param_2 + 0x290);
  local_80 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    local_80 = (long *)*plVar17;
  }
  uStack_78 = uVar25;
  local_68 = plVar12;
  if (local_80 != (long *)0x0) {
    if ((local_70 & local_70 - 1) == 0) {
      do {
        plVar17 = (long *)PTR_DAT_047d8b70;
        if (local_80[2] != 0) {
          plVar17 = (long *)(local_80[2] + 0x30);
        }
        plVar26 = (long *)PTR_DAT_047d8b70;
        if (*param_4 != 0) {
          plVar26 = (long *)(*param_4 + 0x30);
        }
        if ((*plVar17 == *plVar26) && ((local_80[9] == 0 || (*(short *)(local_80[9] + 0x1a) == 0))))
        goto LAB_00dc71dc;
        local_80 = (long *)*local_80;
      } while ((local_80 != (long *)0x0) && ((local_80[1] & local_70 - 1) == uVar25));
    }
    else {
      do {
        plVar17 = (long *)PTR_DAT_047d8b70;
        if (local_80[2] != 0) {
          plVar17 = (long *)(local_80[2] + 0x30);
        }
        plVar26 = (long *)PTR_DAT_047d8b70;
        if (*param_4 != 0) {
          plVar26 = (long *)(*param_4 + 0x30);
        }
        if ((*plVar17 == *plVar26) && ((local_80[9] == 0 || (*(short *)(local_80[9] + 0x1a) == 0))))
        goto LAB_00dc71dc;
        local_80 = (long *)*local_80;
        if (local_80 == (long *)0x0) break;
        uVar16 = local_80[1];
        if (local_70 <= uVar16) {
          uVar18 = 0;
          if (local_70 != 0) {
            uVar18 = uVar16 / local_70;
          }
          uVar16 = uVar16 - uVar18 * local_70;
        }
      } while (uVar16 == uVar25);
    }
  }
  local_80 = (long *)0x0;
  (**(code **)(*plVar12 + 0x18))(&local_c8,plVar12);
  local_f0 = (long *)0x0;
  uStack_e8 = 0;
  plVar17 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
  }
  if ((long *)local_c8[2] == plVar17) {
    FUN_00d1f904(&local_f0,&local_c8);
  }
  if (local_c8 != (long *)0x0) {
    plVar12 = local_c8 + 3;
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
      piVar2 = (int *)((long)local_c8 + 0x1c);
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
        local_e0 = (long *)*local_c8;
        FUN_00c44438(lVar11 + 0x8040,&local_e0);
      }
    }
    else if (sVar15 == 0) goto LAB_00dc6c54;
  }
  local_d0 = 0;
  local_e0 = local_60;
  local_d8 = (long *)0x0;
  FUN_00dc7a68(&local_d8,&local_f0);
  local_c8 = (long *)*param_4;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x18))();
  }
  local_c0 = (long *)param_4[1];
  local_b8 = param_4[2];
  local_b0 = param_4[3];
  local_a8 = (long *)param_4[4];
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x18))();
  }
  local_a0 = (undefined4)param_4[5];
  local_98 = local_e0;
  local_90 = (long *)0x0;
  local_88 = 0;
  FUN_00dc7a68(&local_90,&local_d8);
  plVar12 = (long *)(**(code **)(**(long **)(param_2 + 0x2c0) + 0x10))
                              (*(long **)(param_2 + 0x2c0),0x58,8);
  if (plVar12 == (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x2c0) + 0xe8))();
  }
  plVar17 = (long *)(param_2 + 0x288);
  FUN_00dc7944((undefined8 *)(param_2 + 0x2c0),plVar12 + 2,&local_c8);
  uVar25 = plVar12[3];
  *plVar12 = 0;
  plVar12[1] = uVar25;
  fVar29 = (float)(*(long *)(param_2 + 0x2e0) + 1);
  uVar16 = *(ulong *)(param_2 + 0x290);
  if ((uVar16 == 0) || (*(float *)(param_2 + 0x2e8) * (float)uVar16 < fVar29)) {
    uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
    uVar18 = (ulong)(fVar29 / *(float *)(param_2 + 0x2e8));
    if (uVar18 <= uVar16) {
      uVar18 = uVar16;
    }
    FUN_00f9aa78(plVar17,uVar18);
    uVar16 = *(ulong *)(param_2 + 0x290);
  }
  plVar26 = local_90;
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
  plVar21 = *(long **)(*plVar17 + uVar20 * 8);
  if (plVar21 == (long *)0x0) {
    plVar19 = (long *)0x0;
  }
  else {
    lVar11 = plVar12[2];
    plVar3 = (long *)PTR_DAT_047d8b70;
    if (lVar11 != 0) {
      plVar3 = (long *)(lVar11 + 0x30);
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
  uVar25 = plVar12[1];
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
    *plVar12 = *(long *)(param_2 + 0x2b8);
    *(long **)(param_2 + 0x2b8) = plVar12;
    *(long *)(*(long *)(param_2 + 0x288) + uVar25 * 8) = param_2 + 0x2b8;
    if (*plVar12 != 0) {
      uVar20 = *(ulong *)(*plVar12 + 8);
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
LAB_00dc6a7c:
      *(long **)(*plVar17 + uVar20 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar19;
    *plVar19 = (long)plVar12;
    if (*plVar12 != 0) {
      uVar20 = *(ulong *)(*plVar12 + 8);
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
      if (uVar20 != uVar25) goto LAB_00dc6a7c;
    }
  }
  *(long *)(param_2 + 0x2e0) = *(long *)(param_2 + 0x2e0) + 1;
  if (local_90 != (long *)0x0) {
    plVar12 = local_90 + 3;
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
      piVar2 = (int *)((long)local_90 + 0x1c);
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
        local_58 = (long *)*plVar26;
        FUN_00c44438(lVar11 + 0x8040,&local_58);
      }
    }
    else if (sVar15 == 0) goto LAB_00dc6c54;
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
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
        local_58 = (long *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_58);
      }
    }
    else if (sVar15 == 0) goto LAB_00dc6c54;
  }
  plVar12 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar17 = local_f0 + 3;
    do {
      sVar15 = (short)*plVar17;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar9) {
        *(short *)plVar17 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 != 1) goto LAB_00dc6c50;
    piVar2 = (int *)((long)local_f0 + 0x1c);
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
      pplVar14 = &local_58;
      lVar11 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar11;
      local_58 = (long *)*plVar12;
      goto LAB_00dc7070;
    }
  }
  goto LAB_00dc6ab8;
code_r0x00dc769c:
  cVar6 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar9) {
    *plVar12 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00dc6658;
  goto LAB_00dc7694;
LAB_00dc71dc:
  (**(code **)(*plVar12 + 0x18))(&local_c8,plVar12);
  local_e0 = (long *)0x0;
  local_d8 = (long *)0x0;
  plVar17 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 5;
  }
  if ((long *)local_c8[2] == plVar17) {
    FUN_00d1f904(&local_e0,&local_c8);
  }
  if (local_c8 != (long *)0x0) {
    plVar12 = local_c8 + 3;
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
      piVar2 = (int *)((long)local_c8 + 0x1c);
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
        local_f0 = (long *)*local_c8;
        FUN_00c44438(lVar11 + 0x8040,&local_f0);
      }
    }
    else if (sVar15 == 0) goto LAB_00dc6c54;
  }
  local_b8 = 0;
  local_c8 = local_60;
  local_c0 = (long *)0x0;
  FUN_00dc7a68(&local_c0,&local_e0);
  local_80[8] = (long)local_c8;
  FUN_00dc7a68(local_80 + 9,&local_c0);
  plVar12 = local_c0;
  if (local_c0 != (long *)0x0) {
    plVar17 = local_c0 + 3;
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
      piVar2 = (int *)((long)local_c0 + 0x1c);
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
    else if (sVar15 == 0) goto LAB_00dc6c54;
  }
  plVar12 = local_e0;
  if (local_e0 != (long *)0x0) {
    plVar17 = local_e0 + 3;
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
      if (iVar10 == -1) goto LAB_00dc6ab8;
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar11 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar11;
      local_f0 = (long *)*plVar12;
LAB_00dc7070:
      FUN_00c44438(lVar11 + 0x8040,pplVar14);
    }
    else {
LAB_00dc6c50:
      if (sVar15 == 0) {
LAB_00dc6c54:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  goto LAB_00dc6ab8;
  while( true ) {
    plVar12 = (long *)*plVar12;
    plVar21 = (long *)0x0;
    if (plVar12 == (long *)0x0) break;
LAB_00dc73b4:
    if (plVar12 == plVar17) {
      plVar21 = plVar26;
      break;
    }
  }
LAB_00dc73c0:
  FUN_01db74ec(&local_68,plVar21);
  plVar12 = local_68;
  lVar11 = puVar27[1];
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
    (**(code **)(*plVar26 + 0x50))(plVar26);
  }
  else if (sVar15 == 0) goto LAB_00dc6b78;
  if (plVar12 == (long *)0x0) {
LAB_00dc68b8:
    plVar12 = (long *)FUN_00dc77e0(&local_c8,*(undefined8 *)(param_2 + 0x3a0),param_4,&local_60);
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[6];
      if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00dc76f4;
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
      else if (sVar15 == -1) goto LAB_00dc6d6c;
    }
    plVar17 = local_68;
    local_68 = (long *)0x0;
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
      else if (sVar15 == 0) goto LAB_00dc6b78;
    }
    local_68 = plVar12;
    (**(code **)(*plVar12 + 0x18))(&local_c8,plVar12);
    local_e0 = (long *)0x0;
    local_d8 = (long *)0x0;
    plVar17 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      plVar17 = plVar12 + 5;
    }
    if ((long *)local_c8[2] == plVar17) {
      FUN_00d1f904(&local_e0,&local_c8);
    }
    plVar12 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar17 = local_c8 + 3;
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
        piVar2 = (int *)((long)local_c8 + 0x1c);
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
      else if (sVar15 == 0) goto LAB_00dc6c54;
    }
    FUN_00dc7a68(local_80 + 9,&local_e0);
    plVar12 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar17 = local_e0 + 3;
      do {
        sVar15 = (short)*plVar17;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *(short *)plVar17 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 != 1) goto LAB_00dc6c50;
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
        pplVar14 = &local_c8;
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_c8 = (long *)*plVar12;
        goto LAB_00dc7070;
      }
    }
  }
LAB_00dc6ab8:
  if (!bVar28) {
    *(undefined8 *)(param_2 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(param_2 + 0x308),local_68,param_5);
  *param_1 = local_68;
  if (local_68 != (long *)0x0) {
    lVar11 = local_68[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
LAB_00dc76f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar28 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar28) {
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
LAB_00dc6d6c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (local_68 != (long *)0x0) {
      lVar11 = local_68[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar6 = '\x01';
        bVar28 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar28) {
          *psVar1 = sVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar15 == 0) {
LAB_00dc6b78:
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


