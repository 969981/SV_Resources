/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a0334; name: FUN_010a0334
 */


void FUN_010a0334(long param_1,byte param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  byte *local_80;
  int local_64;
  
  lVar13 = *(long *)(*(long *)(param_1 + 0x170) + 0x290);
  lVar14 = *(long *)(lVar13 + 8);
  uVar10 = FUN_00f7e2a0(*(undefined4 *)(lVar14 + 0x36c),*(undefined1 *)(lVar14 + 0x370));
  if ((uVar10 & 1) != 0) {
    plVar17 = *(long **)(*(long *)(param_1 + 0x38) + (ulong)param_2 * 8 + 0xa0);
    if (plVar17 == (long *)0x0) {
      local_80 = &DAT_00000060;
      if (DAT_00000060 != '\0') goto LAB_010a03e0;
    }
    else {
      plVar18 = plVar17 + 5;
      do {
        lVar14 = *plVar18;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar2) {
          *(int *)plVar18 = (int)lVar14 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      local_80 = (byte *)(plVar17 + 0xc);
      if (*local_80 != 0) {
LAB_010a03e0:
        uVar10 = 0;
        uVar19 = (ulong)param_2;
LAB_010a03f0:
        if ((uVar10 < 6) && (plVar18 = (long *)plVar17[uVar10 + 6], plVar18 != (long *)0x0)) {
          puVar11 = (undefined8 *)(**(code **)plVar18[5])(plVar18 + 5);
          if (((*PTR_DAT_047dcd50 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar9 != 0)) {
            uVar12 = FUN_01af5520();
            *(undefined8 *)PTR_DAT_047dcd58 = uVar12;
            __cxa_guard_release(PTR_DAT_047dcd50);
          }
          for (; puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
            if (puVar11 == (undefined8 *)PTR_DAT_047dcd58) {
              plVar15 = *(long **)(*(long *)(*(long *)(lVar13 + 8) + 0x50) + 0x38);
              goto joined_r0x010a0450;
            }
          }
        }
        goto LAB_010a059c;
      }
LAB_010a05b0:
      plVar18 = plVar17 + 5;
      do {
        lVar13 = *plVar18;
        iVar9 = (int)lVar13 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar2) {
          *(int *)plVar18 = iVar9;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x010a0634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar17 + 0x10))(plVar17);
        return;
      }
      if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
joined_r0x010a0450:
  if (plVar15 == (long *)0x0) goto LAB_010a0638;
  if ((*(uint *)((long)plVar15 + 0x14) == (uint)param_2) &&
     ((uint)*(byte *)(plVar15 + 3) == ((uint)uVar10 & 0xff))) {
    local_64 = *(int *)(plVar15 + 2);
    goto LAB_010a0484;
  }
  plVar15 = (long *)*plVar15;
  goto joined_r0x010a0450;
LAB_010a0638:
  local_64 = 0;
LAB_010a0484:
  uVar6 = FUN_00cf44f4(*(undefined8 *)(plVar18[9] + 0x70));
  uVar7 = FUN_00cf41a8(*(undefined8 *)(plVar18[9] + 0x70));
  uVar3 = (**(code **)(*plVar18 + 0x130))(plVar18);
  uVar4 = (**(code **)(*plVar18 + 0xb0))(plVar18);
  sVar8 = (**(code **)(*plVar18 + 0x160))(plVar18);
  bVar5 = (**(code **)(*plVar18 + 0x158))(plVar18,2);
  if ((param_2 < 5) && (((uint)uVar10 & 0xff) < 6)) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x170) + 0x250);
    piVar16 = (int *)(lVar14 + uVar19 * 0x60 + uVar10 * 0x10 + 0x10);
    if (*piVar16 == 0) {
      *piVar16 = local_64;
      lVar14 = lVar14 + uVar19 * 0x60 + uVar10 * 0x10;
      *(undefined2 *)(lVar14 + 0x14) = uVar6;
      *(undefined2 *)(lVar14 + 0x16) = uVar7;
      *(undefined1 *)(lVar14 + 0x18) = uVar3;
      *(undefined1 *)(lVar14 + 0x19) = uVar4;
      *(bool *)(lVar14 + 0x1a) = sVar8 != 0;
      *(byte *)(lVar14 + 0x1d) = bVar5 & 1;
    }
    lVar14 = *(long *)(*(long *)(param_1 + 0x150) + 0x250);
    piVar16 = (int *)(lVar14 + uVar19 * 0x60 + uVar10 * 0x10 + 0x10);
    if (*piVar16 == 0) {
      *piVar16 = local_64;
      lVar14 = lVar14 + uVar19 * 0x60 + uVar10 * 0x10;
      *(undefined2 *)(lVar14 + 0x14) = uVar6;
      *(undefined2 *)(lVar14 + 0x16) = uVar7;
      *(undefined1 *)(lVar14 + 0x18) = uVar3;
      *(undefined1 *)(lVar14 + 0x19) = uVar4;
      *(bool *)(lVar14 + 0x1a) = sVar8 != 0;
      *(byte *)(lVar14 + 0x1d) = bVar5 & 1;
    }
  }
LAB_010a059c:
  uVar10 = uVar10 + 1;
  if (*local_80 <= uVar10) goto LAB_010a05b0;
  goto LAB_010a03f0;
}


