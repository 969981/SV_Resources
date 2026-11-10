/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c737e8; name: FUN_02c737e8
 */


undefined8 FUN_02c737e8(undefined8 *param_1,uint param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  long local_b0;
  long *local_a0;
  long *local_98;
  long local_90;
  long local_88;
  long *local_80;
  uint local_6c;
  long *local_68;
  
  plVar18 = param_1 + 0x25;
  local_6c = param_2;
  lVar11 = nn::os::GetCurrentThread();
  do {
    if (*plVar18 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x26));
        while (*plVar18 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02c7382c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar6) {
      *plVar18 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02c7382c:
  uVar9 = local_6c;
  uVar15 = param_1[2];
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar19 = (ulong)(int)local_6c;
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar15 - 1 & uVar19;
    }
    else {
      uVar17 = uVar19;
      if (uVar15 <= uVar19) {
        uVar17 = 0;
        if (uVar15 != 0) {
          uVar17 = uVar19 / uVar15;
        }
        uVar17 = uVar19 - uVar17 * uVar15;
      }
    }
    plVar18 = *(long **)(param_1[1] + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar18[1] == uVar19) {
            if (*(uint *)(plVar18 + 2) == local_6c) goto LAB_02c73984;
          }
          else if ((plVar18[1] & uVar15 - 1) != uVar17) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar18[1];
          if (uVar16 == uVar19) {
            if (*(uint *)(plVar18 + 2) == local_6c) goto LAB_02c73984;
          }
          else {
            if (uVar15 <= uVar16) {
              uVar7 = 0;
              if (uVar15 != 0) {
                uVar7 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar7 * uVar15;
            }
            if (uVar16 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
LAB_02c7394c:
  uVar20 = 0;
LAB_02c73950:
  param_1[0x25] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x26));
  return uVar20;
LAB_02c73984:
  if ((char)plVar18[5] != '\0') {
LAB_02c7398c:
    uVar20 = 1;
    goto LAB_02c73950;
  }
  snprintf((char *)(plVar18 + 3),0x10,"aoc%x",local_6c);
  iVar10 = nn::fs::QueryMountAddOnContentCacheSize((ulong *)(plVar18 + 10),uVar9);
  if (iVar10 == 0) {
    plVar22 = (long *)*param_1;
    lVar11 = plVar18[10];
    uVar20 = (**(code **)(*plVar22 + 0x10))(plVar22,lVar11,8);
    local_88 = 8;
    local_a0 = (long *)0x0;
    local_98 = plVar22;
    local_90 = lVar11;
    FUN_028a19b0(plVar18 + 0xb,uVar20);
    plVar18[0xc] = (long)local_98;
    plVar18[0xd] = local_90;
    plVar18[0xe] = local_88;
    FUN_028a19b0(&local_a0,0);
    iVar10 = nn::fs::MountAddOnContent((char *)(plVar18 + 3),uVar9,(void *)plVar18[0xb],plVar18[10])
    ;
    if (iVar10 == 0) {
      uVar20 = 1;
      *(undefined1 *)(plVar18 + 5) = 1;
      if (param_1[0x14] == 0) goto LAB_02c73950;
      plVar21 = (long *)*param_1;
      plVar22 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x40,8);
      if (plVar22 == (long *)0x0) {
        plVar21 = (long *)0x0;
        lVar26 = 0;
        lVar11 = 0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar21;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        plVar22[6] = 0;
        plVar22[7] = 0;
        lVar11 = 8;
        plVar22[4] = 0;
        plVar22[5] = 0;
        puVar8 = PTR_DAT_047d8e88;
        plVar22[2] = 0;
        plVar22[3] = 0;
        *plVar22 = (long)(puVar8 + 0x10);
        plVar22[1] = 0;
        lVar26 = 0x40;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      lVar12 = plVar18[6];
      plVar18[6] = (long)plVar22;
      if (lVar12 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar13 = FUN_00c4e600();
        iVar4 = *(int *)(lVar13 + 0x12c8);
        iVar10 = iVar4 + 1;
        *(int *)(lVar13 + 0x12c8) = iVar10;
        if (*(int *)(lVar13 + 0x12cc) <= iVar4) {
          *(int *)(lVar13 + 0x12cc) = iVar10;
        }
        FUN_00db239c(lVar12);
        plVar22 = (long *)plVar18[7];
        lVar13 = plVar18[8];
        lVar24 = plVar18[9];
        uVar15 = (**(code **)(*plVar22 + 0xf8))(plVar22);
        if (((uVar15 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
          (**(code **)(*plVar22 + 0x18))(plVar22,lVar12,lVar13,lVar24);
        }
        else {
          FUN_00c48fe8(plVar22,lVar12,lVar13,lVar24);
        }
        lVar12 = FUN_00c4e600();
        iVar10 = *(int *)(lVar12 + 0x12c8) + -1;
        *(int *)(lVar12 + 0x12c8) = iVar10;
        if (iVar10 == 0) {
          plVar22 = (long *)FUN_00c4e600();
          if (plVar22[600] != 0) {
            local_68 = plVar22 + plVar22[600] * 3;
            local_a0 = plVar22;
            FUN_00c4ea30(&local_a0,&local_68);
            plVar23 = (long *)*plVar22;
            plVar2 = plVar22;
            if (plVar22[600] != 0) {
              plVar2 = plVar22 + plVar22[600] * 3;
            }
            if (plVar2 == plVar22) {
              lVar13 = 0;
              local_b0 = 0;
            }
            else {
              lVar13 = 0;
              local_b0 = 0;
              plVar25 = plVar22;
              do {
                (**(code **)(*(long *)*plVar25 + 0xd0))();
                if ((long *)*plVar25 != plVar23) {
                  (**(code **)(*plVar23 + 0x100))(plVar23,plVar22 + local_b0 * 3,plVar25);
                  plVar23 = (long *)*plVar25;
                  local_b0 = lVar13;
                }
                plVar25 = plVar25 + 3;
                lVar13 = lVar13 + 1;
              } while (plVar2 != plVar25);
            }
            (**(code **)(*plVar23 + 0x100))(plVar23,plVar22 + local_b0 * 3,plVar22 + lVar13 * 3);
            plVar22[600] = 0;
          }
          *(undefined4 *)(lVar12 + 0x12cc) = 0;
        }
        plVar22 = (long *)plVar18[6];
      }
      plVar18[9] = lVar11;
      plVar18[7] = (long)plVar21;
      plVar18[8] = lVar26;
      FUN_02c73e34(&local_a0,&local_6c,param_1 + 0xf);
      uVar15 = FUN_00dc5c18(plVar22,1,&local_a0,0,0);
      if (((uVar15 & 1) != 0) && (plVar18 = (long *)plVar22[4], plVar18 != (long *)0x0)) {
        lVar11 = plVar18[6];
        if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 0) {
          uVar20 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          *(undefined8 *)(lVar11 + 8) = uVar20;
          *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
        }
        else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        lVar11 = plVar18[6];
        psVar1 = (short *)(lVar11 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar18 + 0x50))(plVar18);
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      goto LAB_02c7398c;
    }
  }
  goto LAB_02c7394c;
}


