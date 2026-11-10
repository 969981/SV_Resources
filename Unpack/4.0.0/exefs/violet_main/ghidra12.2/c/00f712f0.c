/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f712f0; name: FUN_00f712f0
 */


void FUN_00f712f0(long param_1,undefined8 param_2,long *param_3)

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
  ulong *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  short sVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  lVar13 = *param_3;
  if (lVar13 == 0) {
    return;
  }
  if (*(short *)(lVar13 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar13 + 0x1a);
  sVar17 = *(short *)(lVar13 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar17) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00f71364;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f71364:
      bVar5 = false;
    }
    if (bVar5) {
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 == 0) {
        return;
      }
      lVar9 = FUN_010e1344(lVar13 + 0xe0,&local_28);
      if (lVar9 == 0) goto LAB_00f713d8;
      uVar10 = FUN_02163ea0();
      if ((uVar10 & 1) == 0) {
        plVar19 = (long *)(param_1 + 0x40);
        puVar11 = (ulong *)FUN_017806f0(lVar9);
        uVar10 = *(ulong *)(param_1 + 0x48);
        if (uVar10 == 0) goto LAB_00f713bc;
        uVar15 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        uVar14 = *puVar11;
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar15 < 2) {
          uVar16 = uVar10 - 1 & uVar14;
        }
        else if (uVar14 < uVar10) {
          uVar16 = uVar14;
        }
        else {
          uVar16 = 0;
          if (uVar10 != 0) {
            uVar16 = uVar14 / uVar10;
          }
          uVar16 = uVar14 - uVar16 * uVar10;
        }
        plVar18 = *(long **)(*plVar19 + uVar16 * 8);
        if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
        goto LAB_00f713bc;
        if (1 < uVar15) goto LAB_00f71534;
        goto LAB_00f714d0;
      }
      plVar19 = (long *)(param_1 + 0xa8);
      puVar11 = (ulong *)FUN_017806f0(lVar9);
      uVar10 = *(ulong *)(param_1 + 0xb0);
      if (uVar10 == 0) goto LAB_00f713bc;
      uVar15 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar14 = *puVar11;
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar10 - 1 & uVar14;
      }
      else if (uVar14 < uVar10) {
        uVar16 = uVar14;
      }
      else {
        uVar16 = 0;
        if (uVar10 != 0) {
          uVar16 = uVar14 / uVar10;
        }
        uVar16 = uVar14 - uVar16 * uVar10;
      }
      plVar18 = *(long **)(*plVar19 + uVar16 * 8);
      if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
      goto LAB_00f713bc;
      if (1 < uVar15) break;
      goto LAB_00f71634;
    }
    sVar17 = sVar3;
    if (sVar3 == 0) {
      return;
    }
  } while( true );
  do {
    uVar15 = plVar18[1];
    if (uVar15 == uVar14) {
      if (plVar18[2] == uVar14) goto LAB_00f713d8;
    }
    else {
      if (uVar10 <= uVar15) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar15 / uVar10;
        }
        uVar15 = uVar15 - uVar6 * uVar10;
      }
      if (uVar15 != uVar16) break;
    }
    plVar18 = (long *)*plVar18;
  } while (plVar18 != (long *)0x0);
  goto LAB_00f713bc;
LAB_00f71634:
  do {
    if (plVar18[1] == uVar14) {
      if (plVar18[2] == uVar14) goto LAB_00f713d8;
    }
    else if ((plVar18[1] & uVar10 - 1) != uVar16) break;
    plVar18 = (long *)*plVar18;
  } while (plVar18 != (long *)0x0);
  goto LAB_00f713bc;
LAB_00f71534:
  do {
    uVar15 = plVar18[1];
    if (uVar15 == uVar14) {
      if (plVar18[2] == uVar14) goto LAB_00f713d8;
    }
    else {
      if (uVar10 <= uVar15) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar15 / uVar10;
        }
        uVar15 = uVar15 - uVar6 * uVar10;
      }
      if (uVar15 != uVar16) break;
    }
    plVar18 = (long *)*plVar18;
  } while (plVar18 != (long *)0x0);
  goto LAB_00f713bc;
LAB_00f714d0:
  do {
    if (plVar18[1] == uVar14) {
      if (plVar18[2] == uVar14) goto LAB_00f713d8;
    }
    else if ((plVar18[1] & uVar10 - 1) != uVar16) break;
    plVar18 = (long *)*plVar18;
  } while (plVar18 != (long *)0x0);
LAB_00f713bc:
  uVar12 = FUN_017806f0(lVar9);
  uVar12 = FUN_00dca6d8(plVar19,uVar12);
  FUN_00d0a71c(uVar12,param_3);
LAB_00f713d8:
  lVar9 = FUN_0104cf4c(lVar13 + 0xe0,&local_28);
  if (lVar9 != 0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00d0a71c(&local_50,param_2);
    FUN_021410a8(lVar9,&local_50);
    puVar7 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar17 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar17 == 1) {
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
      else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))();
  return;
}


