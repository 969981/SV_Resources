/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cff3a8; name: FUN_00cff3a8
 */


void FUN_00cff3a8(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined4 param_5,long *param_6)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long **pplVar12;
  short sVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  bool bVar18;
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
  
  pplVar12 = &local_f0;
  if ((param_6 == (long *)0x0) ||
     ((local_60 = param_6, uVar14 = (**(code **)(*param_6 + 0xb8))(param_6), (uVar14 & 1) != 0 &&
      (uVar14 = (**(code **)(**(long **)(param_2 + 0x3a0) + 0xb8))(), (uVar14 & 1) != 0)))) {
    param_6 = *(long **)(param_2 + 0x3a0);
  }
  local_68 = (long *)0x0;
  plVar10 = (long *)(param_2 + 0x2f0);
  lVar15 = *plVar10;
  local_60 = param_6;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar15) {
    lVar9 = nn::os::GetCurrentThread();
    bVar18 = false;
LAB_00cfffc0:
    if (*plVar10 == 0) goto code_r0x00cfffc8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    bVar18 = false;
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar10 == 0) {
            cVar5 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar18) {
              *plVar10 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            bVar18 = false;
            if (cVar5 == '\0') goto LAB_00cff3fc;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_00cff3fc;
  }
  bVar18 = true;
LAB_00cff3fc:
  uVar14 = *(ulong *)(param_2 + 0x290);
  uVar16 = param_4[1];
  if ((uVar14 & uVar14 - 1) == 0) {
    uVar16 = uVar14 - 1 & uVar16;
  }
  else if (uVar14 <= uVar16) {
    uVar7 = 0;
    if (uVar14 != 0) {
      uVar7 = uVar16 / uVar14;
    }
    uVar16 = uVar16 - uVar7 * uVar14;
  }
  FUN_00d00258(&local_80,param_2,uVar16,param_4,local_60);
  if (local_80 == (long *)0x0) {
    plVar10 = (long *)FUN_00d00480(&local_c8,*(undefined8 *)(param_2 + 0x3a0),param_4,&local_60);
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[6];
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00d00110;
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar11;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar13 == -1) goto LAB_00cff68c;
    }
    plVar17 = local_68;
    local_68 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      lVar9 = plVar17[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar17 + 0x50))();
      }
      else if (sVar13 == 0) goto LAB_00cff568;
    }
    plVar17 = *(long **)(*(long *)(param_2 + 0x288) + uVar16 * 8);
    local_70 = *(ulong *)(param_2 + 0x290);
    local_80 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      local_80 = (long *)*plVar17;
    }
    uStack_78 = uVar16;
    local_68 = plVar10;
    if (local_80 != (long *)0x0) {
      if ((local_70 & local_70 - 1) == 0) {
        do {
          plVar17 = (long *)PTR_DAT_047d8b70;
          if (local_80[2] != 0) {
            plVar17 = (long *)(local_80[2] + 0x30);
          }
          plVar3 = (long *)PTR_DAT_047d8b70;
          if (*param_4 != 0) {
            plVar3 = (long *)(*param_4 + 0x30);
          }
          if ((*plVar17 == *plVar3) && ((local_80[9] == 0 || (*(short *)(local_80[9] + 0x1a) == 0)))
             ) goto LAB_00cffc60;
          local_80 = (long *)*local_80;
        } while ((local_80 != (long *)0x0) && ((local_80[1] & local_70 - 1) == uVar16));
      }
      else {
        do {
          plVar17 = (long *)PTR_DAT_047d8b70;
          if (local_80[2] != 0) {
            plVar17 = (long *)(local_80[2] + 0x30);
          }
          plVar3 = (long *)PTR_DAT_047d8b70;
          if (*param_4 != 0) {
            plVar3 = (long *)(*param_4 + 0x30);
          }
          if ((*plVar17 == *plVar3) && ((local_80[9] == 0 || (*(short *)(local_80[9] + 0x1a) == 0)))
             ) goto LAB_00cffc60;
          local_80 = (long *)*local_80;
          if (local_80 == (long *)0x0) break;
          uVar14 = local_80[1];
          if (local_70 <= uVar14) {
            uVar7 = 0;
            if (local_70 != 0) {
              uVar7 = uVar14 / local_70;
            }
            uVar14 = uVar14 - uVar7 * local_70;
          }
        } while (uVar14 == uVar16);
      }
    }
    local_80 = (long *)0x0;
    (**(code **)(*plVar10 + 0x18))(&local_c8,plVar10);
    local_f0 = (long *)0x0;
    uStack_e8 = 0;
    plVar17 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar17 = plVar10 + 5;
    }
    if ((long *)local_c8[2] == plVar17) {
      FUN_00d1f904(&local_f0,&local_c8);
    }
    if (local_c8 != (long *)0x0) {
      plVar10 = local_c8 + 3;
      do {
        sVar13 = (short)*plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *(short *)plVar10 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        piVar2 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
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
          local_e0 = (long *)*local_c8;
          FUN_00c44438(lVar9 + 0x8040,&local_e0);
        }
      }
      else if (sVar13 == 0) goto LAB_00cff5d4;
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
    FUN_00d02114(param_2 + 0x288,&local_c8);
    plVar10 = local_90;
    if (local_90 != (long *)0x0) {
      plVar17 = local_90 + 3;
      do {
        sVar13 = (short)*plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(short *)plVar17 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        piVar2 = (int *)((long)local_90 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
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
          local_58 = (long *)*plVar10;
          FUN_00c44438(lVar9 + 0x8040,&local_58);
        }
      }
      else if (sVar13 == 0) goto LAB_00cff5d4;
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    plVar10 = local_d8;
    if (local_d8 != (long *)0x0) {
      plVar17 = local_d8 + 3;
      do {
        sVar13 = (short)*plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(short *)plVar17 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        piVar2 = (int *)((long)local_d8 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
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
          local_58 = (long *)*plVar10;
          FUN_00c44438(lVar9 + 0x8040,&local_58);
        }
      }
      else if (sVar13 == 0) goto LAB_00cff5d4;
    }
    plVar10 = local_f0;
    if (local_f0 != (long *)0x0) {
      plVar17 = local_f0 + 3;
      do {
        sVar13 = (short)*plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(short *)plVar17 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 != 1) goto LAB_00cff5d0;
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        pplVar12 = &local_58;
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58 = (long *)*plVar10;
        goto LAB_00cffab8;
      }
    }
  }
  else {
    lVar9 = local_80[9];
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar9 + 0x1a);
      sVar13 = *(short *)(lVar9 + 0x1a);
LAB_00cffdc4:
      sVar4 = *psVar1;
      if (sVar4 == sVar13) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_00cffde8;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00cffde8:
        bVar6 = false;
      }
      if (!bVar6) goto code_r0x00cffdf0;
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 != 0) {
        plVar17 = (long *)(lVar9 + -0x28);
        uVar14 = FUN_00cfa62c(lVar9);
        plVar10 = plVar17;
        if ((uVar14 & 1) == 0) {
          plVar10 = (long *)0x0;
        }
        FUN_01db74ec(&local_68,plVar10);
        plVar10 = local_68;
        lVar9 = *(long *)(lVar9 + 8);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar17 + 0x50))(plVar17);
        }
        else if (sVar13 == 0) goto LAB_00cff568;
        if (plVar10 == (long *)0x0) goto LAB_00cff43c;
        goto LAB_00cff4c8;
      }
    }
LAB_00cff43c:
    plVar10 = (long *)FUN_00d00480(&local_c8,*(undefined8 *)(param_2 + 0x3a0),param_4,&local_60);
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[6];
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00d00110;
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar11;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar13 == -1) goto LAB_00cff68c;
    }
    plVar17 = local_68;
    local_68 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      lVar9 = plVar17[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar17 + 0x50))();
      }
      else if (sVar13 == 0) goto LAB_00cff568;
    }
    local_68 = plVar10;
    (**(code **)(*plVar10 + 0x18))(&local_c8,plVar10);
    local_e0 = (long *)0x0;
    local_d8 = (long *)0x0;
    plVar17 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar17 = plVar10 + 5;
    }
    if ((long *)local_c8[2] == plVar17) {
      FUN_00d1f904(&local_e0,&local_c8);
    }
    plVar10 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar17 = local_c8 + 3;
      do {
        sVar13 = (short)*plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(short *)plVar17 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        piVar2 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
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
          local_f0 = (long *)*plVar10;
          FUN_00c44438(lVar9 + 0x8040,&local_f0);
        }
      }
      else if (sVar13 == 0) goto LAB_00cff5d4;
    }
    FUN_00dc7a68(local_80 + 9,&local_e0);
    plVar10 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar17 = local_e0 + 3;
      do {
        sVar13 = (short)*plVar17;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(short *)plVar17 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          pplVar12 = &local_c8;
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_c8 = (long *)*plVar10;
LAB_00cffab8:
          FUN_00c44438(lVar9 + 0x8040,pplVar12);
        }
      }
      else {
LAB_00cff5d0:
        if (sVar13 == 0) {
LAB_00cff5d4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
  }
LAB_00cff4c8:
  if (!bVar18) {
    *(undefined8 *)(param_2 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(param_2 + 0x308),local_68,param_5);
  *param_1 = local_68;
  if (local_68 != (long *)0x0) {
    lVar9 = local_68[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_00d00110:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) {
LAB_00cff68c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (local_68 != (long *)0x0) {
      lVar9 = local_68[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar13 == 0) {
LAB_00cff568:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x00cfffc8:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar6) {
    *plVar10 = lVar9;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00cff3fc;
  goto LAB_00cfffc0;
LAB_00cffc60:
  (**(code **)(*plVar10 + 0x18))(&local_c8,plVar10);
  local_e0 = (long *)0x0;
  local_d8 = (long *)0x0;
  plVar17 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar17 = plVar10 + 5;
  }
  if ((long *)local_c8[2] == plVar17) {
    FUN_00d1f904(&local_e0,&local_c8);
  }
  if (local_c8 != (long *)0x0) {
    plVar10 = local_c8 + 3;
    do {
      sVar13 = (short)*plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(short *)plVar10 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
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
        local_f0 = (long *)*local_c8;
        FUN_00c44438(lVar9 + 0x8040,&local_f0);
      }
    }
    else if (sVar13 == 0) goto LAB_00cff5d4;
  }
  local_b8 = 0;
  local_c8 = local_60;
  local_c0 = (long *)0x0;
  FUN_00dc7a68(&local_c0,&local_e0);
  local_80[8] = (long)local_c8;
  FUN_00dc7a68(local_80 + 9,&local_c0);
  plVar10 = local_c0;
  if (local_c0 != (long *)0x0) {
    plVar17 = local_c0 + 3;
    do {
      sVar13 = (short)*plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(short *)plVar17 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
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
        local_f0 = (long *)*plVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_f0);
      }
    }
    else if (sVar13 == 0) goto LAB_00cff5d4;
  }
  plVar10 = local_e0;
  if (local_e0 != (long *)0x0) {
    plVar17 = local_e0 + 3;
    do {
      sVar13 = (short)*plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(short *)plVar17 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 != 1) goto LAB_00cff5d0;
    piVar2 = (int *)((long)local_e0 + 0x1c);
    do {
      iVar8 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = -1;
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
      local_f0 = (long *)*plVar10;
      goto LAB_00cffab8;
    }
  }
  goto LAB_00cff4c8;
code_r0x00cffdf0:
  sVar13 = sVar4;
  if (sVar4 == 0) goto LAB_00cff43c;
  goto LAB_00cffdc4;
}


