/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e774e4; name: FUN_00e774e4
 */


void FUN_00e774e4(long param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  ulong *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  plVar1 = (long *)(param_1 + 0x280);
  lVar12 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x288) == 0) {
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar12;
      *(undefined8 *)(param_1 + 0x288) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00e7752c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x288) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x288) == 0) {
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = lVar12;
            *(undefined8 *)(param_1 + 0x288) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00e7752c;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar12;
      *(undefined8 *)(param_1 + 0x288) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00e7752c:
  plVar13 = *(long **)(param_1 + 0x120);
  if (plVar13 == *(long **)(param_1 + 0x128)) {
LAB_00e77538:
    do {
      lVar12 = *plVar1;
      lVar26 = *(long *)(param_1 + 0x288);
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar12;
        *(long *)(param_1 + 0x288) = lVar26;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar16 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x288);
      if (lVar16 != lVar12 || lVar4 != lVar26) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_00e775c0;
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x284) = lVar26;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar14 = true;
LAB_00e775c0:
    if (!bVar14) {
      do {
        lVar12 = *plVar1;
        lVar26 = *(long *)(param_1 + 0x288);
        if (lVar12 != lVar16 || lVar26 != lVar4) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto joined_r0x00e77c80;
        }
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x284) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar14 = true;
joined_r0x00e77c80:
      if (!bVar14) {
        do {
          lVar16 = *plVar1;
          lVar4 = *(long *)(param_1 + 0x288);
          if (lVar16 != lVar12 || lVar4 != lVar26) {
            bVar14 = false;
            ClearExclusiveLocal();
            lVar12 = lVar16;
            lVar26 = lVar4;
            goto joined_r0x00e77c80;
          }
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = 0;
            *(long *)(param_1 + 0x284) = lVar26;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar14 = true;
        lVar12 = lVar16;
        lVar26 = lVar4;
        goto joined_r0x00e77c80;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
    return;
  }
LAB_00e775f0:
  plVar23 = (long *)*plVar13;
  if (plVar23[8] != *param_2) goto LAB_00e77aa8;
  (**(code **)(*plVar23 + 0x18))(local_78,plVar23);
  local_88 = (ulong *)0x0;
  uStack_80 = 0;
  plVar24 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    plVar24 = plVar23 + 5;
  }
  if ((long *)local_78[0][2] == plVar24) {
    FUN_00d53104(&local_88,local_78);
  }
  puVar21 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_78[0] + 3);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_78[0] + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar14) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_68 = *puVar21;
        FUN_00c44438(lVar12 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_00e779c4;
  }
  puVar10 = local_88;
  if (local_88 == (ulong *)0x0) {
    uVar25 = 0;
  }
  else {
    puVar17 = local_88 + 3;
    uVar25 = *local_88;
    do {
      sVar5 = (short)*puVar17;
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar17,0x10);
      if (bVar14) {
        *(short *)puVar17 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar14) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_78[0] = (undefined8 *)*puVar10;
        FUN_00c44438(lVar12 + 0x8040,local_78);
      }
    }
    else if (sVar5 == 0) {
LAB_00e779c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  uVar15 = *(ulong *)(param_1 + 0x210);
  if (uVar15 != 0) {
    uVar18 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar15 - 1 & uVar25;
    }
    else {
      uVar19 = uVar25;
      if (uVar15 <= uVar25) {
        uVar19 = 0;
        if (uVar15 != 0) {
          uVar19 = uVar25 / uVar15;
        }
        uVar19 = uVar25 - uVar19 * uVar15;
      }
    }
    puVar21 = *(undefined8 **)(*(long *)(param_1 + 0x208) + uVar19 * 8);
    if ((puVar21 != (undefined8 *)0x0) && (plVar24 = (long *)*puVar21, plVar24 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar24[1] == uVar25) {
            if (plVar24[2] == uVar25) goto LAB_00e776fc;
          }
          else if ((plVar24[1] & uVar15 - 1) != uVar19) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar24[1];
          if (uVar18 != uVar25) {
            if (uVar15 <= uVar18) {
              uVar7 = 0;
              if (uVar15 != 0) {
                uVar7 = uVar18 / uVar15;
              }
              uVar18 = uVar18 - uVar7 * uVar15;
            }
            if (uVar18 == uVar19) goto LAB_00e77a34;
            break;
          }
          if (plVar24[2] == uVar25) goto LAB_00e776fc;
LAB_00e77a34:
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
LAB_00e77894:
  if (*(uint *)((long)plVar23 + 0x74) < 3) {
    *(undefined4 *)((long)plVar23 + 0x74) =
         *(undefined4 *)(&DAT_03d6348c + (long)(int)*(uint *)((long)plVar23 + 0x74) * 4);
  }
  plVar20 = *(long **)(param_1 + 0x128);
  plVar23 = plVar13 + 1;
  plVar24 = plVar13;
  if (plVar20 + -1 == plVar13) goto LAB_00e77d70;
  do {
    plVar13 = (long *)*plVar24;
    *plVar24 = 0;
    if (plVar13 != (long *)0x0) {
      lVar12 = plVar13[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_00e77d38;
    }
    lVar12 = *plVar23;
    plVar22 = plVar23 + 1;
    *plVar23 = 0;
    plVar13 = plVar24 + 1;
    *plVar24 = lVar12;
    plVar23 = plVar22;
    plVar24 = plVar13;
  } while (plVar22 != plVar20);
  plVar23 = *(long **)(param_1 + 0x128);
  while (plVar23 != plVar13) {
LAB_00e77d70:
    plVar23 = plVar23 + -1;
    plVar24 = (long *)*plVar23;
    if (plVar24 != (long *)0x0) {
      lVar12 = plVar24[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar24 + 0x50))();
      }
      else if (sVar5 == 0) {
LAB_00e77d38:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  *(long **)(param_1 + 0x128) = plVar13;
  goto LAB_00e77538;
LAB_00e77aa8:
  plVar13 = plVar13 + 1;
  if (*(long **)(param_1 + 0x128) == plVar13) goto LAB_00e77538;
  goto LAB_00e775f0;
LAB_00e776fc:
  lVar12 = plVar24[0x216];
  lVar26 = plVar24[0x217];
  if (lVar12 != lVar26) {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    puVar9 = PTR_DAT_047d8c10;
    puVar8 = PTR_DAT_047d8c08;
    lVar16 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar16;
    FUN_010c564c(*(undefined8 *)(lVar16 + 0x70),lVar12);
    if (lVar12 + 0x10 != lVar26) {
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar11 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      lVar16 = *(long *)puVar8;
      *(long *)puVar9 = lVar16;
      FUN_010c564c(*(undefined8 *)(lVar16 + 0x70),lVar12 + 0x10);
      for (lVar12 = lVar12 + 0x20; lVar12 != lVar26; lVar12 = lVar12 + 0x10) {
        if (((*PTR_DAT_047d8c00 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d8d08,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c00);
        }
        lVar16 = *(long *)puVar8;
        *(long *)puVar9 = lVar16;
        FUN_010c564c(*(undefined8 *)(lVar16 + 0x70),lVar12);
      }
    }
    uVar25 = plVar24[1];
  }
  *(int *)(plVar24 + 4) = (int)plVar24[3];
  *(undefined4 *)((long)plVar24 + 0x24) = 0;
  memset(plVar24 + 0x205,0,0x88);
  uVar18 = *(ulong *)(param_1 + 0x210);
  uVar15 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
  uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
  uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar15 < 2) {
    uVar25 = uVar18 - 1 & uVar25;
  }
  else if (uVar18 <= uVar25) {
    uVar19 = 0;
    if (uVar18 != 0) {
      uVar19 = uVar25 / uVar18;
    }
    uVar25 = uVar25 - uVar19 * uVar18;
  }
  plVar20 = *(long **)(*(long *)(param_1 + 0x208) + uVar25 * 8);
  for (plVar22 = (long *)*plVar20; plVar22 != plVar24; plVar22 = (long *)*plVar22) {
    plVar20 = plVar22;
  }
  if (plVar20 == (long *)(param_1 + 0x238)) {
LAB_00e77834:
    if (*plVar24 != 0) {
      uVar19 = *(ulong *)(*plVar24 + 8);
      if (uVar15 < 2) {
        uVar19 = uVar19 & uVar18 - 1;
      }
      else if (uVar18 <= uVar19) {
        uVar7 = 0;
        if (uVar18 != 0) {
          uVar7 = uVar19 / uVar18;
        }
        uVar19 = uVar19 - uVar7 * uVar18;
      }
      if (uVar19 == uVar25) goto LAB_00e77840;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x208) + uVar25 * 8) = 0;
  }
  else {
    uVar19 = plVar20[1];
    if (uVar15 < 2) {
      uVar19 = uVar19 & uVar18 - 1;
    }
    else if (uVar18 <= uVar19) {
      uVar7 = 0;
      if (uVar18 != 0) {
        uVar7 = uVar19 / uVar18;
      }
      uVar19 = uVar19 - uVar7 * uVar18;
    }
    if (uVar19 != uVar25) goto LAB_00e77834;
  }
LAB_00e77840:
  lVar12 = *plVar24;
  if (lVar12 != 0) {
    uVar19 = *(ulong *)(lVar12 + 8);
    if (uVar15 < 2) {
      uVar19 = uVar19 & uVar18 - 1;
    }
    else if (uVar18 <= uVar19) {
      uVar15 = 0;
      if (uVar18 != 0) {
        uVar15 = uVar19 / uVar18;
      }
      uVar19 = uVar19 - uVar15 * uVar18;
    }
    if (uVar19 != uVar25) {
      *(long **)(*(long *)(param_1 + 0x208) + uVar19 * 8) = plVar20;
      lVar12 = *plVar24;
    }
  }
  *plVar20 = lVar12;
  *plVar24 = 0;
  *(long *)(param_1 + 0x260) = *(long *)(param_1 + 0x260) + -1;
  FUN_0108a8e4(plVar24 + 0x216);
  plVar20 = *(long **)(param_1 + 0x240);
  uVar25 = (**(code **)(*plVar20 + 0xf8))(plVar20);
  if (((uVar25 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
    (**(code **)(*plVar20 + 0x18))(plVar20,plVar24,0x10e8,8);
  }
  else {
    FUN_00c48fe8(plVar20,plVar24,0x10e8,8);
  }
  goto LAB_00e77894;
}


