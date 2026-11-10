/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010bbe68; name: FUN_010bbe68
 */


void FUN_010bbe68(long param_1)

{
  int *piVar1;
  short *psVar2;
  undefined8 uVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  long lVar20;
  undefined8 *puVar21;
  code *pcVar22;
  undefined *puVar23;
  long *plVar24;
  long *plVar25;
  short sVar26;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 local_68;
  
  plVar24 = (long *)(param_1 + 400);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar24 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar7) {
      *plVar24 = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_010bbea8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x198));
  do {
    if (*plVar24 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x198));
        while (*plVar24 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar7) {
            *plVar24 = lVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_010bbea8;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar7) {
      *plVar24 = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_010bbea8:
  local_70 = 0;
  lVar12 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != lVar12) {
    pbVar18 = PTR_DAT_047d3908;
    plVar24 = (long *)PTR_DAT_047d3918;
    pbVar19 = PTR_DAT_047d39b0;
    puVar23 = PTR_LAB_047d3de8;
    plVar25 = (long *)PTR_DAT_047d3910;
    do {
      lVar12 = lVar12 + local_70 * 0x40;
      plVar13 = (long *)(lVar12 + 8);
      lVar20 = *plVar13;
      uVar3 = *(undefined8 *)(lVar12 + 0x20);
      plVar4 = *(long **)(lVar12 + 0x28);
      if ((lVar20 != 0) && (sVar26 = *(short *)(lVar20 + 0x1a), sVar26 != 0)) {
        local_88 = *(undefined8 **)(lVar20 + 8);
        if (((*pbVar19 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d39b0), iVar11 != 0))
        {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar11 != 0)) {
            *(undefined8 *)PTR_DAT_047d39c8 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)PTR_DAT_047d39b8 = PTR_DAT_047d39c8;
          __cxa_guard_release(PTR_DAT_047d39b0);
        }
        pbVar18 = PTR_DAT_047d3908;
        plVar24 = (long *)PTR_DAT_047d3918;
        pbVar19 = PTR_DAT_047d39b0;
        puVar23 = PTR_LAB_047d3de8;
        plVar25 = (long *)PTR_DAT_047d3910;
        if (local_88 != (undefined8 *)0x0) {
          psVar2 = (short *)(lVar20 + 0x1a);
          do {
            if (local_88 == (undefined8 *)PTR_DAT_047d39b8) goto LAB_010bc3ec;
            local_88 = (undefined8 *)*local_88;
          } while (local_88 != (undefined8 *)0x0);
        }
      }
LAB_010bbf08:
      if (local_70 < (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 6)) {
        uVar15 = plVar4[1];
        if (uVar15 != 0) {
          uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
          uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
          uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar16 < 2) {
            uVar17 = uVar15 - 1 & local_70;
          }
          else {
            uVar17 = local_70;
            if (uVar15 <= local_70) {
              uVar17 = 0;
              if (uVar15 != 0) {
                uVar17 = local_70 / uVar15;
              }
              uVar17 = local_70 - uVar17 * uVar15;
            }
          }
          plVar13 = *(long **)(*plVar4 + uVar17 * 8);
          if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
            if (uVar16 < 2) {
              do {
                if (plVar13[1] == local_70) {
                  if (plVar13[2] == local_70) goto LAB_010bbf98;
                }
                else if ((plVar13[1] & uVar15 - 1) != uVar17) break;
                plVar13 = (long *)*plVar13;
              } while (plVar13 != (long *)0x0);
            }
            else {
              do {
                uVar16 = plVar13[1];
                if (uVar16 == local_70) {
                  if (plVar13[2] == local_70) goto LAB_010bbf98;
                }
                else {
                  if (uVar15 <= uVar16) {
                    uVar8 = 0;
                    if (uVar15 != 0) {
                      uVar8 = uVar16 / uVar15;
                    }
                    uVar16 = uVar16 - uVar8 * uVar15;
                  }
                  if (uVar16 != uVar17) break;
                }
                plVar13 = (long *)*plVar13;
              } while (plVar13 != (long *)0x0);
            }
          }
        }
        lVar12 = *(long *)(param_1 + 0x28) + local_70 * 0x40;
        puVar21 = *(undefined8 **)(lVar12 + 8);
        *(undefined8 *)(lVar12 + 8) = 0;
        if (puVar21 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar21 + 3);
          do {
            sVar26 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar26 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar26 == 1) {
            piVar1 = (int *)((long)puVar21 + 0x1c);
            do {
              iVar11 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar11 != -1) {
              if (((*pbVar18 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                FUN_00100190(puVar23,plVar25,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar20 = *plVar25;
              *plVar24 = lVar20;
              local_68 = *puVar21;
              FUN_00c44438(lVar20 + 0x8040,&local_68);
              pbVar18 = PTR_DAT_047d3908;
            }
          }
          else if (sVar26 == 0) goto LAB_010bc20c;
        }
        *(undefined8 *)(lVar12 + 0x10) = 0;
        FUN_010bc8c4(uVar3,&local_70);
        FUN_010bca14(plVar4,&local_70);
        pbVar19 = PTR_DAT_047d39b0;
      }
LAB_010bbf98:
      local_70 = local_70 + 1;
      lVar12 = *(long *)(param_1 + 0x28);
    } while (local_70 < (ulong)(*(long *)(param_1 + 0x30) - lVar12 >> 6));
  }
  plVar24 = (long *)(param_1 + 0x178);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar24 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar7) {
      *plVar24 = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_010bc048;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
  do {
    if (*plVar24 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
        while (*plVar24 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar7) {
            *plVar24 = lVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_010bc048;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar7) {
      *plVar24 = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_010bc048:
  lVar12 = *(long *)(param_1 + 0x140);
  lVar20 = *(long *)(param_1 + 0x148);
  if (lVar20 != lVar12) {
    FUN_010bcd00(param_1,lVar12);
    lVar12 = *(long *)(param_1 + 0x140);
    lVar20 = *(long *)(param_1 + 0x148);
    if (1 < (ulong)(lVar20 - lVar12 >> 6)) {
      uVar15 = 1;
      lVar14 = 0x40;
      do {
        FUN_010bcd00(param_1,lVar12 + lVar14);
        lVar12 = *(long *)(param_1 + 0x140);
        lVar20 = *(long *)(param_1 + 0x148);
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 0x40;
      } while (uVar15 < (ulong)(lVar20 - lVar12 >> 6));
    }
  }
  puVar10 = PTR_LAB_047d3de8;
  puVar9 = PTR_DAT_047d3918;
  puVar23 = PTR_DAT_047d3910;
  if (lVar12 != lVar20) {
    pbVar18 = PTR_DAT_047d3908;
    do {
      puVar21 = *(undefined8 **)(lVar20 + -0x38);
      if (puVar21 != (undefined8 *)0x0) {
        psVar2 = (short *)(puVar21 + 3);
        do {
          sVar26 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar26 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar26 == 1) {
          piVar1 = (int *)((long)puVar21 + 0x1c);
          do {
            iVar11 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar11 != -1) {
            if (((*pbVar18 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(puVar10,puVar23,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)puVar23;
            *(long *)puVar9 = lVar14;
            local_68 = *puVar21;
            FUN_00c44438(lVar14 + 0x8040,&local_68);
            pbVar18 = PTR_DAT_047d3908;
          }
        }
        else if (sVar26 == 0) {
LAB_010bc20c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      lVar20 = lVar20 + -0x40;
    } while (lVar20 != lVar12);
  }
  *(long *)(param_1 + 0x148) = lVar12;
  *(undefined8 *)(param_1 + 0x178) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x180));
  *(undefined8 *)(param_1 + 400) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x198));
  return;
LAB_010bc3ec:
  sVar5 = *psVar2;
  if (sVar5 == sVar26) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar26 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_010bc410;
    bVar7 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_010bc410:
    bVar7 = false;
  }
  pbVar18 = PTR_DAT_047d3908;
  plVar24 = (long *)PTR_DAT_047d3918;
  pbVar19 = PTR_DAT_047d39b0;
  puVar23 = PTR_LAB_047d3de8;
  plVar25 = (long *)PTR_DAT_047d3910;
  if (!bVar7) goto code_r0x010bc418;
  lVar20 = *(long *)(lVar20 + 0x10);
  if (lVar20 != 0) {
    nn::os::GetSystemTick();
    lVar14 = nn::os::ConvertToTimeSpan();
    plVar24 = (long *)(lVar12 + 0x30);
    *(long *)(lVar12 + 0x38) = lVar14 - *plVar24;
    pcVar22 = *(code **)(lVar12 + 0x18);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00c43ef0(&local_80,plVar13);
    uVar15 = (*pcVar22)(&local_80,plVar24);
    puVar21 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_80 + 3);
      do {
        sVar26 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar26 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar26 == 1) {
        piVar1 = (int *)((long)local_80 + 0x1c);
        do {
          iVar11 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_68 = *puVar21;
          FUN_00c44438(lVar14 + 0x8040,&local_68);
        }
      }
      else if (sVar26 == 0) goto LAB_010bc20c;
    }
    *(long *)(lVar12 + 0x38) = 0;
    nn::os::GetSystemTick();
    lVar14 = nn::os::ConvertToTimeSpan();
    *plVar24 = lVar14;
    if ((uVar15 & 1) == 0) goto LAB_010bc4fc;
    puVar21 = (undefined8 *)*plVar13;
    *plVar13 = 0;
    if (puVar21 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar21 + 3);
      do {
        sVar26 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar26 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar26 == 1) {
        piVar1 = (int *)((long)puVar21 + 0x1c);
        do {
          iVar11 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_68 = *puVar21;
          FUN_00c44438(lVar14 + 0x8040,&local_68);
        }
      }
      else if (sVar26 == 0) goto LAB_010bc20c;
    }
    *(undefined8 *)(lVar12 + 0x10) = 0;
    uVar15 = plVar4[1];
    if (uVar15 == 0) {
LAB_010bc710:
      FUN_010bc8c4(uVar3,&local_70);
      FUN_010bca14(plVar4,&local_70);
    }
    else {
      uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar15 - 1 & local_70;
      }
      else {
        uVar17 = local_70;
        if (uVar15 <= local_70) {
          uVar17 = 0;
          if (uVar15 != 0) {
            uVar17 = local_70 / uVar15;
          }
          uVar17 = local_70 - uVar17 * uVar15;
        }
      }
      plVar24 = *(long **)(*plVar4 + uVar17 * 8);
      if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
      goto LAB_010bc710;
      if (uVar16 < 2) {
        do {
          if (plVar24[1] == local_70) {
            if (plVar24[2] == local_70) goto LAB_010bc4fc;
          }
          else if ((plVar24[1] & uVar15 - 1) != uVar17) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
        goto LAB_010bc710;
      }
      while( true ) {
        uVar16 = plVar24[1];
        if (uVar16 != local_70) {
          if (uVar15 <= uVar16) {
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar8 * uVar15;
          }
          if (uVar16 == uVar17) goto LAB_010bc708;
          goto LAB_010bc710;
        }
        if (plVar24[2] == local_70) break;
LAB_010bc708:
        plVar24 = (long *)*plVar24;
        if (plVar24 == (long *)0x0) goto LAB_010bc710;
      }
    }
LAB_010bc4fc:
    (**(code **)(*(long *)(lVar20 + -8) + 0x18))();
    pbVar18 = PTR_DAT_047d3908;
    plVar24 = (long *)PTR_DAT_047d3918;
    pbVar19 = PTR_DAT_047d39b0;
    puVar23 = PTR_LAB_047d3de8;
    plVar25 = (long *)PTR_DAT_047d3910;
    goto LAB_010bbf98;
  }
  goto LAB_010bbf08;
code_r0x010bc418:
  sVar26 = sVar5;
  if (sVar5 == 0) goto LAB_010bbf08;
  goto LAB_010bc3ec;
}


