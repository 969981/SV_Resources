/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cba9c4; name: FUN_00cba9c4
 */


/* WARNING: Removing unreachable block (ram,0x00cbac0c) */
/* WARNING: Removing unreachable block (ram,0x00cbac10) */
/* WARNING: Removing unreachable block (ram,0x00cbac18) */
/* WARNING: Removing unreachable block (ram,0x00cbac20) */
/* WARNING: Removing unreachable block (ram,0x00cbad98) */
/* WARNING: Removing unreachable block (ram,0x00cbada0) */
/* WARNING: Removing unreachable block (ram,0x00cbada4) */
/* WARNING: Removing unreachable block (ram,0x00cbadac) */
/* WARNING: Removing unreachable block (ram,0x00cbadb4) */
/* WARNING: Removing unreachable block (ram,0x00cbb2d8) */
/* WARNING: Removing unreachable block (ram,0x00cbb2e8) */
/* WARNING: Removing unreachable block (ram,0x00cbadbc) */
/* WARNING: Removing unreachable block (ram,0x00cbac28) */
/* WARNING: Removing unreachable block (ram,0x00cbac2c) */

void FUN_00cba9c4(long *param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  void *pvVar14;
  long lVar15;
  ulong uVar16;
  short sVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  float fVar25;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  FUN_00cbb48c(&local_90);
  plVar13 = local_90;
  if (local_90 == (long *)0x0) {
    return;
  }
  if (*(short *)((long)local_90 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_90 + 0x1a);
    sVar17 = *(short *)((long)local_90 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar17) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar17 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00cbaa54;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00cbaa54:
        bVar7 = false;
      }
      if (bVar7) {
        plVar19 = (long *)0x0;
        if (local_90[2] != 0) {
          plVar19 = (long *)(local_90[2] + -0x28);
        }
        goto LAB_00cbaa7c;
      }
      sVar17 = sVar5;
    } while (sVar5 != 0);
  }
  plVar19 = (long *)0x0;
LAB_00cbaa7c:
  plVar18 = local_90 + 3;
  do {
    sVar17 = (short)*plVar18;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar7) {
      *(short *)plVar18 = sVar17 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    puVar10 = PTR_DAT_047d3918;
    puVar9 = PTR_DAT_047d3910;
    puVar8 = PTR_DAT_047d3908;
  } while (cVar6 != '\0');
  if (sVar17 == 1) {
    piVar3 = (int *)((long)local_90 + 0x1c);
    do {
      iVar11 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 != -1) {
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar24 = *(long *)puVar9;
      *(long *)puVar10 = lVar24;
      local_a0 = (long *)*plVar13;
      FUN_00c44438(lVar24 + 0x8040,&local_a0);
    }
  }
  else if (sVar17 == 0) goto LAB_00cbac50;
  if (plVar19 == (long *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0x18))(&local_90,param_1);
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  plVar13 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar13 = param_1 + 5;
  }
  if ((long *)local_90[2] == plVar13) {
    do {
      plVar13 = local_88;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(&local_88,0x10);
      if (bVar7) {
        local_88 = (long *)0x0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    uVar12 = *(undefined8 *)puVar9;
    *(undefined8 *)puVar10 = uVar12;
    FUN_00c44204(&local_70,uVar12,plVar13);
    plVar18 = local_90;
    local_90 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      plVar23 = plVar18 + 3;
      do {
        sVar17 = (short)*plVar23;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar7) {
          *(short *)plVar23 = sVar17 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar17 == 1) {
        piVar3 = (int *)((long)plVar18 + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar24 = *(long *)puVar9;
          *(long *)puVar10 = lVar24;
          local_68 = *plVar18;
          FUN_00c44438(lVar24 + 0x8040,&local_68);
        }
      }
      else if (sVar17 == 0) goto LAB_00cbac50;
    }
    plVar18 = local_a0;
    if (local_70 == (long *)0x0) {
      FUN_01f973fc(&local_a0);
    }
    else {
      local_a0 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        plVar23 = plVar18 + 3;
        do {
          sVar17 = (short)*plVar23;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar7) {
            *(short *)plVar23 = sVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)plVar18 + 0x1c);
          do {
            iVar11 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar11 != -1) {
            if (((*puVar8 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar24 = *(long *)puVar9;
            *(long *)puVar10 = lVar24;
            local_68 = *plVar18;
            FUN_00c44438(lVar24 + 0x8040,&local_68);
          }
        }
        else if (sVar17 == 0) goto LAB_00cbac50;
      }
      local_a0 = local_70;
      local_70 = (long *)0x0;
      local_98 = plVar13;
    }
  }
  plVar13 = local_90;
  if (local_90 != (long *)0x0) {
    plVar18 = local_90 + 3;
    do {
      sVar17 = (short)*plVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(short *)plVar18 = sVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar17 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar24 = *(long *)puVar9;
        *(long *)puVar10 = lVar24;
        local_68 = *plVar13;
        FUN_00c44438(lVar24 + 0x8040,&local_68);
      }
    }
    else if (sVar17 == 0) goto LAB_00cbac50;
  }
  plVar13 = local_a0;
  if (local_a0 == (long *)0x0) {
    lVar24 = 0;
  }
  else {
    plVar18 = local_a0 + 3;
    lVar24 = *local_a0;
    do {
      sVar17 = (short)*plVar18;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(short *)plVar18 = sVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar17 == 1) {
      piVar3 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar20 = *(long *)puVar9;
        *(long *)puVar10 = lVar20;
        local_90 = (long *)*plVar13;
        FUN_00c44438(lVar20 + 0x8040,&local_90);
      }
    }
    else if (sVar17 == 0) goto LAB_00cbac50;
  }
  if (((char)param_1[0x29] == '\0') || (param_1[0x28] == lVar24)) goto LAB_00cbaba4;
  FUN_01f8c918(&local_90);
  if (local_90 == (long *)0x0) {
LAB_00cbb0f4:
    param_1[0x27] = -1;
  }
  else {
    if (*(short *)((long)local_90 + 0x1a) != 0) {
      if (local_90 == (long *)0x0) goto LAB_00cbb0f4;
      if (*(short *)((long)local_90 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_90 + 0x1a);
        sVar17 = *(short *)((long)local_90 + 0x1a);
        do {
          sVar5 = *psVar1;
          if (sVar5 == sVar17) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar17 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_00cbb398;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00cbb398:
            bVar7 = false;
          }
          if (bVar7) {
            lVar20 = local_90[2];
            if (lVar20 != 0) {
              FUN_0198491c(*(undefined8 *)(lVar20 + 0x2e8),param_1[0x27]);
              (**(code **)(*(long *)(lVar20 + -0x28) + 0x60))(lVar20 + -0x28);
            }
            break;
          }
          sVar17 = sVar5;
        } while (sVar5 != 0);
      }
    }
    plVar13 = local_90;
    param_1[0x27] = -1;
    if (local_90 != (long *)0x0) {
      plVar18 = local_90 + 3;
      do {
        sVar17 = (short)*plVar18;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar7) {
          *(short *)plVar18 = sVar17 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar17 == 1) {
        piVar3 = (int *)((long)local_90 + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar20 = *(long *)puVar9;
          *(long *)puVar10 = lVar20;
          local_a0 = (long *)*plVar13;
          FUN_00c44438(lVar20 + 0x8040,&local_a0);
        }
      }
      else if (sVar17 == 0) {
LAB_00cbac50:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_00cbaba4:
  if (param_1[0x27] == -1) {
    param_1[0x28] = lVar24;
    *(undefined1 *)(param_1 + 0x29) = 1;
    lVar20 = plVar19[0x62];
    plVar13 = (long *)(lVar20 + 0x30);
    lVar21 = *plVar13;
    fVar25 = (float)NEON_ucvtf((int)param_1[0x22]);
    local_68 = lVar24;
    lVar24 = nn::os::GetCurrentThread();
    if (lVar24 != lVar21) {
      lVar24 = nn::os::GetCurrentThread();
LAB_00cbae60:
      if (*plVar13 == 0) goto code_r0x00cbae68;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x38));
      do {
        if (*plVar13 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x38));
            while (*plVar13 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar7) {
                *plVar13 = lVar24;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_00cbae70;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = lVar24;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_00cbae70:
      lVar24 = *(long *)(lVar20 + 0x1d8);
      if (lVar24 == 0) {
        local_a0 = *(long **)(lVar20 + 8);
        FUN_016772b0(&local_90,local_a0,&local_a0);
        plVar13 = local_90;
        local_90 = (long *)0x0;
        lVar24 = *(long *)(lVar20 + 0x1d8);
        *(long **)(lVar20 + 0x1d8) = plVar13;
        if (lVar24 == 0) {
          *(undefined8 *)(lVar20 + 0x1e8) = local_80;
          *(undefined8 *)(lVar20 + 0x1f0) = local_78;
          *(long **)(lVar20 + 0x1e0) = local_88;
          local_90 = (long *)0x0;
        }
        else {
          FUN_018f3f44(lVar20 + 0x1e0);
          plVar13 = local_90;
          *(long **)(lVar20 + 0x1e0) = local_88;
          *(undefined8 *)(lVar20 + 0x1e8) = local_80;
          *(undefined8 *)(lVar20 + 0x1f0) = local_78;
          local_90 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            FUN_018f3f44(&local_88);
          }
        }
        lVar24 = *(long *)(lVar20 + 0x1d8);
      }
      local_a0 = (long *)CONCAT44(local_a0._4_4_,fVar25);
      plVar13 = (long *)FUN_0181cc78(lVar24 + 8,&local_68);
      plVar23 = (long *)(lVar24 + 0xc0);
      lVar21 = *plVar23;
      lVar15 = *(long *)(lVar24 + 200) - lVar21 >> 3;
      plVar18 = (long *)(lVar15 * -0x5555555555555555);
      local_90 = plVar13;
      if (plVar18 <= plVar13) {
        plVar2 = (long *)((long)plVar13 + 1);
        lVar15 = (long)plVar2 + lVar15 * 0x5555555555555555;
        if (plVar2 < plVar18 || lVar15 == 0) {
          if (plVar2 < plVar18) {
            *(long *)(lVar24 + 200) = lVar21 + (long)plVar2 * 0x18;
          }
        }
        else {
          FUN_00e93f30(plVar23,lVar15);
          lVar21 = *plVar23;
        }
      }
      *(float *)(lVar21 + (long)plVar13 * 0x18 + 0x10) = fVar25;
      lVar21 = *(long *)(lVar24 + 0x130);
      plVar18 = (long *)(lVar24 + 0xf8);
      uVar22 = lVar21 + 1;
      *(ulong *)(lVar24 + 0x130) = uVar22;
      if (lVar21 == 0) {
        if (*(long *)(lVar24 + 0x100) - (long)*(ulong **)(lVar24 + 0xf8) >> 4 != 0) {
          **(ulong **)(lVar24 + 0xf8) = (ulong)plVar13;
LAB_00cbb1c8:
          lVar24 = *plVar18;
          goto LAB_00cbb088;
        }
LAB_00cbaf1c:
        FUN_017c1d28(plVar18,&local_90,&local_a0);
      }
      else {
        pvVar14 = *(void **)(lVar24 + 0xf8);
        uVar16 = *(long *)(lVar24 + 0x100) - (long)pvVar14 >> 4;
        if (fVar25 < *(float *)((long)pvVar14 + (lVar21 + -1) * 0x10 + 8)) {
          if (uVar16 <= uVar22 && uVar22 - uVar16 != 0) {
            FUN_0103e51c(plVar18,uVar22 - uVar16);
            pvVar14 = (void *)*plVar18;
          }
          if (fVar25 < *(float *)((long)pvVar14 + 8)) {
            memmove((void *)((long)pvVar14 + 0x10),pvVar14,lVar21 << 4);
            *(long **)*plVar18 = plVar13;
            goto LAB_00cbb1c8;
          }
          lVar15 = FUN_01984d1c(fVar25,lVar24,lVar21 + -1,1);
          pvVar14 = (void *)(*(long *)(lVar24 + 0xf8) + lVar15 * 0x10);
          memmove((void *)((long)pvVar14 + 0x10),pvVar14,(lVar21 - lVar15) * 0x10);
          *(long **)(*(long *)(lVar24 + 0xf8) + lVar15 * 0x10) = plVar13;
          lVar24 = *(long *)(lVar24 + 0xf8) + lVar15 * 0x10;
        }
        else {
          if (uVar16 < uVar22) goto LAB_00cbaf1c;
          *(long **)((long)pvVar14 + lVar21 * 0x10) = plVar13;
          lVar24 = *plVar18 + lVar21 * 0x10;
        }
LAB_00cbb088:
        *(float *)(lVar24 + 8) = fVar25;
      }
      local_90 = (long *)0x2;
      do {
        lVar24 = *(long *)(lVar20 + 0x160) - *(long *)(lVar20 + 0x158);
        local_88 = plVar13;
        if (lVar24 == 0) {
          uVar22 = *(long *)(lVar20 + 0xf0) - *(long *)(lVar20 + 0xe8) >> 4;
          FUN_01f976ac(lVar20 + 0xe8,&local_90);
LAB_00cbafa0:
          *(ulong *)(lVar20 + 400) = uVar22 + 1;
          goto LAB_00cbafa8;
        }
        uVar22 = *(ulong *)(*(long *)(lVar20 + 0x160) + -8);
        *(long *)(lVar20 + 0x160) = lVar24 + *(long *)(lVar20 + 0x158) + -8;
        uVar16 = uVar22 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*(long *)(lVar20 + 0x120) + uVar16) =
             *(ulong *)(*(long *)(lVar20 + 0x120) + uVar16) &
             (1L << (uVar22 & 0x3f) ^ 0xffffffffffffffffU);
      } while ((ulong)(*(long *)(lVar20 + 0xf0) - *(long *)(lVar20 + 0xe8) >> 4) <= uVar22);
      puVar4 = (undefined8 *)(*(long *)(lVar20 + 0xe8) + uVar22 * 0x10);
      *puVar4 = 2;
      puVar4[1] = plVar13;
      if (*(ulong *)(lVar20 + 400) <= uVar22) goto LAB_00cbafa0;
LAB_00cbafa8:
      *(undefined8 *)(lVar20 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x38));
      goto LAB_00cbafb8;
    }
    uVar22 = FUN_01f97524(fVar25,lVar20,&local_68);
LAB_00cbafb8:
    param_1[0x27] = uVar22;
  }
  (**(code **)(*plVar19 + 0x60))(plVar19);
  return;
code_r0x00cbae68:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar7) {
    *plVar13 = lVar24;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00cbae70;
  goto LAB_00cbae60;
}


