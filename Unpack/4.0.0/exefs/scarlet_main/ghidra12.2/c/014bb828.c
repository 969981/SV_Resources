/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014bb828; name: FUN_014bb828
 */


void FUN_014bb828(long *param_1,byte param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  undefined8 *puVar4;
  float fVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  void *pvVar16;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  float *pfVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  ulong uVar29;
  float fVar30;
  long local_e0;
  long *local_d8;
  undefined8 local_d0;
  byte local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  (**(code **)(*param_1 + 0x18))(&local_90);
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  plVar26 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar26 = param_1 + 5;
  }
  if ((long *)local_90[2] == plVar26) {
    FUN_00c9ea00(&local_c0,&local_90);
  }
  if (local_90 != (long *)0x0) {
    plVar26 = local_90 + 3;
    do {
      sVar6 = (short)*plVar26;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar8) {
        *(short *)plVar26 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_e0 = *local_90;
        FUN_00c44438(lVar22 + 0x8040,&local_e0);
      }
    }
    else if (sVar6 == 0) goto LAB_014bbdb0;
  }
  if (((*PTR_DAT_047d88d0 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  lVar22 = *(long *)PTR_DAT_047d88d8;
  *(long *)PTR_DAT_047d88e0 = lVar22;
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  FUN_00ec54f0(&local_90,&local_c0);
  uVar14 = FUN_014bc570(lVar22,&local_90,param_2 & 1);
  plVar26 = local_90;
  if (local_90 != (long *)0x0) {
    plVar28 = local_90 + 3;
    do {
      sVar6 = (short)*plVar28;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar8) {
        *(short *)plVar28 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_e0 = *plVar26;
        FUN_00c44438(lVar15 + 0x8040,&local_e0);
      }
    }
    else if (sVar6 == 0) goto LAB_014bbdb0;
  }
  if ((uVar14 & 1) == 0) {
    if (param_1[0xa7] == 0) {
      FUN_00ea8824(&local_90,lVar22,&local_c0);
      plVar26 = (long *)param_1[0xa7];
      param_1[0xa7] = 0;
      if (plVar26 != (long *)0x0) {
        lVar15 = plVar26[6];
        psVar2 = (short *)(lVar15 + 0x1a);
        do {
          sVar6 = *psVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar8) {
            *psVar2 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*plVar26 + 0x50))();
        }
        else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      param_1[0xa7] = (long)local_90;
      local_90 = (long *)0x0;
      local_88 = (long *)0x0;
      FUN_00ec54f0(&local_90,&local_c0);
      uVar14 = FUN_014bc570(lVar22,&local_90,param_2 & 1);
      plVar26 = local_90;
      if (local_90 != (long *)0x0) {
        plVar28 = local_90 + 3;
        do {
          sVar6 = (short)*plVar28;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar8) {
            *(short *)plVar28 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          piVar3 = (int *)((long)local_90 + 0x1c);
          do {
            iVar13 = *piVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar8) {
              *piVar3 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_e0 = *plVar26;
            FUN_00c44438(lVar15 + 0x8040,&local_e0);
          }
        }
        else if (sVar6 == 0) goto LAB_014bbdb0;
      }
      if ((uVar14 & 1) != 0) goto LAB_014bbc78;
    }
    local_d8 = (long *)0x0;
    local_d0 = 0;
    local_e0 = lVar22;
    FUN_00d0a71c(&local_d8,&local_c0);
    local_c8 = param_2 & 1;
    FUN_00f338dc(&local_b0,lVar22);
    plVar26 = local_b0 + 0x33;
    fVar5 = *(float *)(lVar22 + 0x520);
    lVar23 = *plVar26;
    lVar15 = nn::os::GetCurrentThread();
    if (lVar15 != lVar23) {
      lVar15 = nn::os::GetCurrentThread();
LAB_014bb950:
      if (*plVar26 == 0) goto code_r0x014bb958;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(local_b0 + 0x34));
      do {
        if (*plVar26 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(local_b0 + 0x34));
            while (*plVar26 == 0) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar8) {
                *plVar26 = lVar15;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_014bb960;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar8) {
          *plVar26 = lVar15;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_014bb960:
      bVar8 = false;
      goto LAB_014bb964;
    }
    plVar26 = (long *)0x0;
    bVar8 = true;
LAB_014bb964:
    lVar23 = *local_b0;
    plVar28 = (long *)(lVar23 + 0x30);
    lVar24 = *plVar28;
    lVar15 = nn::os::GetCurrentThread();
    if (lVar15 != lVar24) {
      lVar15 = nn::os::GetCurrentThread();
LAB_014bb988:
      if (*plVar28 == 0) goto code_r0x014bb990;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x38));
      do {
        if (*plVar28 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x38));
            while (*plVar28 == 0) {
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar9) {
                *plVar28 = lVar15;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_014bb998;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar9) {
          *plVar28 = lVar15;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_014bb998:
      lVar15 = *(long *)(lVar23 + 0x1f8);
      if (lVar15 == 0) {
        local_98 = *(undefined8 *)(lVar23 + 8);
        FUN_0103caf0(&local_90,local_98,&local_98);
        plVar28 = local_90;
        local_90 = (long *)0x0;
        lVar15 = *(long *)(lVar23 + 0x1f8);
        *(long **)(lVar23 + 0x1f8) = plVar28;
        if (lVar15 == 0) {
          *(undefined8 *)(lVar23 + 0x210) = local_78;
          *(undefined8 *)(lVar23 + 0x208) = local_80;
          *(long **)(lVar23 + 0x200) = local_88;
          local_90 = (long *)0x0;
        }
        else {
          FUN_0103e9d8(lVar23 + 0x200);
          plVar28 = local_90;
          *(undefined8 *)(lVar23 + 0x210) = local_78;
          *(undefined8 *)(lVar23 + 0x208) = local_80;
          *(long **)(lVar23 + 0x200) = local_88;
          local_90 = (long *)0x0;
          if (plVar28 != (long *)0x0) {
            FUN_0103e9d8(&local_88);
          }
        }
        lVar15 = *(long *)(lVar23 + 0x1f8);
      }
      local_98 = CONCAT44(local_98._4_4_,fVar5);
LAB_014bb9b4:
      lVar24 = *(long *)(lVar15 + 0x80) - *(long *)(lVar15 + 0x78);
      if (lVar24 != 0) goto code_r0x014bb9c0;
      plVar28 = (long *)(*(long *)(lVar15 + 0x10) - *(long *)(lVar15 + 8) >> 7);
      FUN_014bce4c(lVar15 + 8,&local_e0);
LAB_014bba7c:
      *(ulong *)(lVar15 + 0xb0) = (long)plVar28 + 1;
      goto LAB_014bba84;
    }
    plVar21 = (long *)FUN_014bdc7c(fVar5,lVar23,&local_e0);
LAB_014bbbbc:
    plVar28 = (long *)local_b0[0x37];
    local_90 = plVar21;
    if (plVar28 == (long *)local_b0[0x38]) {
      FUN_014bd0b0(local_b0 + 0x36,&local_90);
    }
    else {
      lVar15 = local_b0[0x39];
      if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar23 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar23 == 0) {
        *plVar28 = (long)plVar21;
      }
      else {
        if (0xf < *(ulong *)(lVar23 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = lVar15;
        *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
        *plVar28 = (long)local_90;
        *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
      }
      local_b0[0x37] = (long)(plVar28 + 1);
    }
    if (!bVar8) {
      *plVar26 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar26 + 1));
    }
    *(float *)(lVar22 + 0x520) = fVar5 + 0.01;
    if (local_a0 != '\0') {
      *local_a8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(local_a8 + 1));
    }
    plVar26 = local_d8;
    if (local_d8 != (long *)0x0) {
      plVar28 = local_d8 + 3;
      do {
        sVar6 = (short)*plVar28;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar8) {
          *(short *)plVar28 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar3 = (int *)((long)local_d8 + 0x1c);
        do {
          iVar13 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_90 = (long *)*plVar26;
          FUN_00c44438(lVar22 + 0x8040,&local_90);
        }
      }
      else if (sVar6 == 0) goto LAB_014bbdb0;
    }
  }
LAB_014bbc78:
  puVar4 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_c0 + 3);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar13 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar22 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar22;
        local_90 = (long *)*puVar4;
        FUN_00c44438(lVar22 + 0x8040,&local_90);
      }
    }
    else if (sVar6 == 0) {
LAB_014bbdb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x014bb958:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
  if (bVar8) {
    *plVar26 = lVar15;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_014bb960;
  goto LAB_014bb950;
code_r0x014bb990:
  cVar7 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar9) {
    *plVar28 = lVar15;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_014bb998;
  goto LAB_014bb988;
code_r0x014bb9c0:
  plVar28 = *(long **)(*(long *)(lVar15 + 0x80) + -8);
  *(long *)(lVar15 + 0x80) = lVar24 + *(long *)(lVar15 + 0x78) + -8;
  uVar14 = (ulong)plVar28 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(*(long *)(lVar15 + 0x40) + uVar14) =
       *(ulong *)(*(long *)(lVar15 + 0x40) + uVar14) &
       (1L << ((ulong)plVar28 & 0x3f) ^ 0xffffffffffffffffU);
  if (plVar28 < (long *)(*(long *)(lVar15 + 0x10) - *(long *)(lVar15 + 8) >> 7))
  goto code_r0x014bb9fc;
  goto LAB_014bb9b4;
code_r0x014bb9fc:
  puVar4 = (undefined8 *)(*(long *)(lVar15 + 8) + (long)plVar28 * 0x80);
  pcVar17 = (code *)puVar4[1];
  if (pcVar17 != (code *)0x0) {
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    (*pcVar17)(puVar4 + 4);
  }
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[4] = local_e0;
  FUN_00d0a71c(puVar4 + 5,&local_d8);
  *(byte *)(puVar4 + 7) = local_c8;
  *puVar4 = &LAB_028ef8dc;
  puVar4[1] = &LAB_028efa10;
  puVar4[2] = &LAB_028efb20;
  puVar4[3] = &LAB_028efb64;
  if (*(long **)(lVar15 + 0xb0) <= plVar28) goto LAB_014bba7c;
LAB_014bba84:
  plVar25 = (long *)(lVar15 + 0xc0);
  lVar24 = *plVar25;
  lVar18 = *(long *)(lVar15 + 200) - lVar24 >> 3;
  plVar21 = (long *)(lVar18 * -0x5555555555555555);
  local_90 = plVar28;
  if (plVar21 <= plVar28) {
    plVar1 = (long *)((long)plVar28 + 1);
    lVar18 = (long)plVar1 + lVar18 * 0x5555555555555555;
    if (plVar1 < plVar21 || lVar18 == 0) {
      if (plVar1 < plVar21) {
        *(long *)(lVar15 + 200) = lVar24 + (long)plVar1 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar25,lVar18);
      lVar24 = *plVar25;
    }
  }
  plVar21 = (long *)(lVar15 + 0xf8);
  *(undefined1 *)(lVar24 + (long)plVar28 * 0x18) = 0;
  *(undefined8 *)(*(long *)(lVar15 + 0xc0) + (long)plVar28 * 0x18 + 8) = 1;
  fVar11 = (float)local_98;
  *(float *)(*(long *)(lVar15 + 0xc0) + (long)plVar28 * 0x18 + 0x10) = (float)local_98;
  uVar29 = *(ulong *)(lVar15 + 0x130);
  uVar14 = uVar29 + 1;
  *(ulong *)(lVar15 + 0x130) = uVar14;
  if (uVar29 == 0) {
    if (*(long *)(lVar15 + 0x100) - (long)*(ulong **)(lVar15 + 0xf8) >> 4 != 0) {
      **(ulong **)(lVar15 + 0xf8) = (ulong)plVar28;
LAB_014bbd40:
      lVar15 = *plVar21;
      goto LAB_014bbb2c;
    }
LAB_014bbe94:
    FUN_014bce24(plVar21,&local_90,&local_98);
  }
  else {
    pvVar16 = *(void **)(lVar15 + 0xf8);
    uVar27 = uVar29 - 1;
    uVar19 = *(long *)(lVar15 + 0x100) - (long)pvVar16 >> 4;
    if ((float)local_98 < *(float *)((long)pvVar16 + uVar27 * 0x10 + 8)) {
      if (uVar19 <= uVar14 && uVar14 - uVar19 != 0) {
        FUN_0103e51c(plVar21,uVar14 - uVar19);
        pvVar16 = (void *)*plVar21;
      }
      if (fVar11 < *(float *)((long)pvVar16 + 8)) {
        memmove((void *)((long)pvVar16 + 0x10),pvVar16,uVar29 << 4);
        *(long **)*plVar21 = plVar28;
        goto LAB_014bbd40;
      }
      if (uVar29 - 2 < 3) {
        uVar14 = 1;
      }
      else {
        uVar19 = (ulong)((float)(uVar29 - 2) * 0.5);
        fVar30 = *(float *)((long)pvVar16 + (uVar19 + 1) * 0x10 + 8);
        if (fVar30 <= fVar11) {
          uVar10 = uVar27 - (uVar19 + 1);
        }
        else {
          uVar27 = uVar19 + 1;
          uVar10 = uVar19;
        }
        uVar14 = 1;
        if (fVar30 <= fVar11) {
          uVar14 = uVar19 + 1;
        }
        if (2 < uVar10) {
          uVar19 = uVar14 + (long)((float)uVar10 * 0.5);
          uVar12 = uVar19;
          uVar10 = (long)((float)uVar10 * 0.5);
          if (*(float *)((long)pvVar16 + uVar19 * 0x10 + 8) <= fVar11) {
            uVar14 = uVar19;
            uVar12 = uVar27;
            uVar10 = uVar27 - uVar19;
          }
          uVar27 = uVar12;
          if (2 < uVar10) {
            uVar19 = uVar14 + (long)((float)uVar10 * 0.5);
            uVar12 = uVar19;
            uVar10 = (long)((float)uVar10 * 0.5);
            if (*(float *)((long)pvVar16 + uVar19 * 0x10 + 8) <= fVar11) {
              uVar14 = uVar19;
              uVar12 = uVar27;
              uVar10 = uVar27 - uVar19;
            }
            while (uVar27 = uVar12, 2 < uVar10) {
              uVar19 = uVar14 + (long)((float)uVar10 * 0.5);
              uVar12 = uVar19;
              uVar10 = (long)((float)uVar10 * 0.5);
              if (*(float *)((long)pvVar16 + uVar19 * 0x10 + 8) <= fVar11) {
                uVar14 = uVar19;
                uVar12 = uVar27;
                uVar10 = uVar27 - uVar19;
              }
            }
          }
        }
      }
      if (uVar27 <= uVar29 && uVar14 <= uVar27) {
        pfVar20 = (float *)((long)pvVar16 + uVar27 * 0x10 + 8);
        while (fVar11 < *pfVar20) {
          uVar27 = uVar27 - 1;
          if ((uVar27 < uVar14) || (pfVar20 = pfVar20 + -4, uVar29 < uVar27)) goto LAB_014bc314;
        }
        uVar27 = uVar27 + 1;
      }
LAB_014bc314:
      if (uVar27 <= uVar29 && uVar14 <= uVar27) {
        uVar14 = uVar27;
      }
      pvVar16 = (void *)((long)pvVar16 + uVar14 * 0x10);
      memmove((void *)((long)pvVar16 + 0x10),pvVar16,(uVar29 - uVar14) * 0x10);
      *(long **)(*plVar21 + uVar14 * 0x10) = plVar28;
      lVar15 = *plVar21 + uVar14 * 0x10;
    }
    else {
      if (uVar19 < uVar14) goto LAB_014bbe94;
      *(long **)((long)pvVar16 + uVar29 * 0x10) = plVar28;
      lVar15 = *plVar21 + uVar29 * 0x10;
    }
LAB_014bbb2c:
    *(float *)(lVar15 + 8) = fVar11;
  }
  local_90 = (long *)0x3;
  do {
    lVar15 = *(long *)(lVar23 + 0x160) - *(long *)(lVar23 + 0x158);
    local_88 = plVar28;
    if (lVar15 == 0) {
      plVar21 = (long *)(*(long *)(lVar23 + 0xf0) - *(long *)(lVar23 + 0xe8) >> 4);
      FUN_014bc548(lVar23 + 0xe8,&local_90);
LAB_014bbba4:
      *(long *)(lVar23 + 400) = (long)plVar21 + 1;
      goto LAB_014bbbac;
    }
    plVar21 = *(long **)(*(long *)(lVar23 + 0x160) + -8);
    *(long *)(lVar23 + 0x160) = lVar15 + *(long *)(lVar23 + 0x158) + -8;
    uVar14 = (ulong)plVar21 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(lVar23 + 0x120) + uVar14) =
         *(ulong *)(*(long *)(lVar23 + 0x120) + uVar14) &
         (1L << ((ulong)plVar21 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((long *)(*(long *)(lVar23 + 0xf0) - *(long *)(lVar23 + 0xe8) >> 4) <= plVar21);
  puVar4 = (undefined8 *)(*(long *)(lVar23 + 0xe8) + (long)plVar21 * 0x10);
  *puVar4 = 3;
  puVar4[1] = plVar28;
  if (*(long **)(lVar23 + 400) <= plVar21) goto LAB_014bbba4;
LAB_014bbbac:
  *(undefined8 *)(lVar23 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar23 + 0x38));
  goto LAB_014bbbbc;
}


