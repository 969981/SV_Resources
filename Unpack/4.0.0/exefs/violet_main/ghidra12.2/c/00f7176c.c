/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7176c; name: FUN_00f7176c
 */


void FUN_00f7176c(long *param_1,long param_2,ulong *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  short sVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  bool bVar18;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  plVar17 = (long *)(param_2 + 46000);
  lVar16 = *plVar17;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar16) {
    lVar9 = nn::os::GetCurrentThread();
LAB_00f717b0:
    if (*plVar17 == 0) goto code_r0x00f717b8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xb3b8));
    do {
      if (*plVar17 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xb3b8));
          while (*plVar17 == 0) {
            cVar4 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar18) {
              *plVar17 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00f717c0;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar18) {
        *plVar17 = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00f717c0:
    bVar18 = false;
    goto LAB_00f717c8;
  }
  plVar17 = (long *)0x0;
  bVar18 = true;
LAB_00f717c8:
  uVar11 = *(ulong *)(param_2 + 0xb3d0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar10 = *param_3;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar14 = uVar10;
    }
    else {
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = uVar10 / uVar11;
      }
      uVar14 = uVar10 - uVar14 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(param_2 + 0xb3c8) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_00f718fc;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_00f718fc;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar6 = 0;
              if (uVar11 != 0) {
                uVar6 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar6 * uVar11;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_00f71948:
  *param_1 = 0;
LAB_00f7194c:
  if (!bVar18) {
    *plVar17 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
  }
  return;
code_r0x00f717b8:
  cVar4 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar18) {
    *plVar17 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00f717c0;
  goto LAB_00f717b0;
LAB_00f718fc:
  lVar9 = plVar15[3];
  if (lVar9 != 0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00c43ef0(&local_50,lVar9 + 0x30);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    if (local_50[2] == lVar9 + 0x28) {
      FUN_00e29918(&local_60,&local_50);
    }
    puVar7 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_28 = *puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_28);
        }
      }
      else if (sVar12 == 0) goto LAB_00f71994;
    }
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      if (*(short *)((long)local_60 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_60 + 0x1a);
        sVar12 = *(short *)((long)local_60 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar12) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_00f71a5c;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f71a5c:
            bVar5 = false;
          }
          if (bVar5) {
            lVar9 = 0;
            if (local_60[2] != 0) {
              lVar9 = local_60[2] + -0x28;
            }
            *param_1 = lVar9;
            goto LAB_00f71a88;
          }
          sVar12 = sVar3;
        } while (sVar3 != 0);
      }
      *param_1 = 0;
LAB_00f71a88:
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar12 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_50 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_50);
        }
      }
      else if (sVar12 == 0) {
LAB_00f71994:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      goto LAB_00f7194c;
    }
  }
  goto LAB_00f71948;
}


