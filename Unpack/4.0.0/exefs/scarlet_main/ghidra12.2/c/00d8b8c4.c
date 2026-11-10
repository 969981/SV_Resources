/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d8b8c4; name: FUN_00d8b8c4
 */


void FUN_00d8b8c4(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  
  plVar5 = DAT_0485a0e0;
  if (DAT_0485a0e0 != (long *)0x0) {
    plVar11 = DAT_0485a0e0 + 5;
    do {
      lVar7 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *(int *)plVar11 = (int)lVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar12 = plVar5[0x2f];
  plVar11 = (long *)plVar5[0x32];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  uVar6 = plVar5[0xf];
  if (uVar6 != 0) {
    uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & uVar12;
    }
    else if (uVar12 < uVar6) {
      uVar9 = uVar12;
    }
    else {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar12 / uVar6;
      }
      uVar9 = uVar12 - uVar9 * uVar6;
    }
    plVar10 = *(long **)(plVar5[0xe] + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar12) {
            if (plVar10[2] == uVar12) goto LAB_00d8ba04;
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar12) {
            if (plVar10[2] == uVar12) goto LAB_00d8ba04;
          }
          else {
            if (uVar6 <= uVar8) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar4 * uVar6;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_00d8ba50:
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  plVar11 = plVar5 + 5;
  do {
    lVar7 = *plVar11;
    iVar3 = (int)lVar7 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *(int *)plVar11 = iVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d8baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    return;
  }
  if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
LAB_00d8ba04:
  lVar7 = *(long *)(plVar5[7] + (long)(int)plVar10[6] * 0x20);
  if (lVar7 != 0 && *(char *)(lVar7 + 0xd0) != '\0') {
    plVar10 = *(long **)(*(long *)(param_1 + 0xe8) + 0x48);
    lVar13 = *(long *)(lVar7 + 0x40);
    plVar10[0x1d] = *(long *)(lVar7 + 0x48);
    plVar10[0x1c] = lVar13;
    if (*(char *)((long)plVar10 + 0xf4) == '\0') {
      *(undefined1 *)((long)plVar10 + 0xf4) = 1;
      (**(code **)(*plVar10 + 0x78))();
    }
  }
  goto LAB_00d8ba50;
}


