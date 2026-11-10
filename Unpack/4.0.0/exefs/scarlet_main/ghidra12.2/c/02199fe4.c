/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02199fe4; name: FUN_02199fe4
 */


void FUN_02199fe4(undefined8 *param_1,ulong *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48 [3];
  
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar10 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar10;
  plVar3 = (long *)(lVar10 + 0xb200);
  lVar11 = nn::os::GetCurrentThread();
  do {
    lVar21 = *plVar3;
    lVar14 = *(long *)(lVar10 + 0xb208);
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar21;
      *(long *)(lVar10 + 0xb208) = lVar14;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_0219a0c0:
  while ((lVar21 != 0 && (lVar11 != lVar21))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xb210));
    do {
      lVar21 = *plVar3;
      lVar14 = *(long *)(lVar10 + 0xb208);
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = lVar21;
        *(long *)(lVar10 + 0xb208) = lVar14;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar4 = *plVar3;
    if (lVar4 != lVar21 || *(long *)(lVar10 + 0xb208) != lVar14) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_0219a0f0;
    }
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar21;
      *(long *)(lVar10 + 0xb204) = lVar14 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar12 = true;
LAB_0219a0f0:
  if (!bVar12) {
    lVar21 = lVar4;
    lVar14 = *(long *)(lVar10 + 0xb208);
    goto LAB_0219a0c0;
  }
  uVar15 = *(ulong *)(lVar10 + 0xb228);
  if (uVar15 != 0) {
    uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar13 = *param_2;
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar15 - 1 & uVar13;
    }
    else if (uVar13 < uVar15) {
      uVar17 = uVar13;
    }
    else {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = uVar13 / uVar15;
      }
      uVar17 = uVar13 - uVar17 * uVar15;
    }
    plVar18 = *(long **)(*(long *)(lVar10 + 0xb220) + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (1 < uVar16) {
        do {
          uVar16 = plVar18[1];
          if (uVar16 == uVar13) {
            if (plVar18[2] == uVar13) goto LAB_0219a218;
          }
          else {
            if (uVar15 <= uVar16) {
              uVar7 = 0;
              if (uVar15 != 0) {
                uVar7 = uVar16 / uVar15;
              }
              uVar16 = uVar16 - uVar7 * uVar15;
            }
            if (uVar16 != uVar17) goto LAB_0219a1a0;
          }
          plVar18 = (long *)*plVar18;
          plVar19 = (long *)0x0;
          plVar20 = (long *)0x0;
        } while (plVar18 != (long *)0x0);
        goto LAB_0219a234;
      }
      do {
        if (plVar18[1] == uVar13) {
          if (plVar18[2] == uVar13) goto LAB_0219a218;
        }
        else if ((plVar18[1] & uVar15 - 1) != uVar17) break;
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
LAB_0219a1a0:
  plVar20 = (long *)0x0;
  plVar19 = (long *)0x0;
  goto LAB_0219a234;
LAB_0219a218:
  plVar20 = plVar18;
  do {
    plVar20 = (long *)*plVar20;
    plVar19 = plVar18;
    if (plVar20 == (long *)0x0) break;
  } while (plVar20[2] == uVar13);
LAB_0219a234:
  if (plVar19 == plVar20) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar21 = plVar19[3];
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_00c43ef0(&local_58,lVar21 + 0x30);
    *param_1 = 0;
    param_1[1] = 0;
    lVar11 = 0;
    if (lVar21 != 0) {
      lVar11 = lVar21 + 0x28;
    }
    if (local_58[2] == lVar11) {
      FUN_00f5d3e8(param_1,&local_58);
    }
    puVar8 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar5 = *psVar1;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar6 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar12) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_48[0] = *puVar8;
          FUN_00c44438(lVar11 + 0x8040,local_48);
        }
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  do {
    lVar11 = *plVar3;
    lVar21 = *(long *)(lVar10 + 0xb208);
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar11;
      *(long *)(lVar10 + 0xb208) = lVar21;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar14 = *plVar3;
    lVar4 = *(long *)(lVar10 + 0xb208);
    if (lVar14 != lVar11 || lVar4 != lVar21) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_0219a2c0;
    }
    cVar6 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar11;
      *(long *)(lVar10 + 0xb204) = lVar21 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar12 = true;
LAB_0219a2c0:
  if (!bVar12) {
    do {
      lVar11 = *plVar3;
      lVar21 = *(long *)(lVar10 + 0xb208);
      if (lVar11 != lVar14 || lVar21 != lVar4) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x0219a3c4;
      }
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = lVar14;
        *(long *)(lVar10 + 0xb204) = lVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar12 = true;
joined_r0x0219a3c4:
    if (!bVar12) {
      do {
        lVar14 = *plVar3;
        lVar4 = *(long *)(lVar10 + 0xb208);
        if (lVar14 != lVar11 || lVar4 != lVar21) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar11 = lVar14;
          lVar21 = lVar4;
          goto joined_r0x0219a3c4;
        }
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar12) {
          *plVar3 = lVar11;
          *(long *)(lVar10 + 0xb204) = lVar21 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar12 = true;
      lVar11 = lVar14;
      lVar21 = lVar4;
      goto joined_r0x0219a3c4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xb210));
  return;
}


