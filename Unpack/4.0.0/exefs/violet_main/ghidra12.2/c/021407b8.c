/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021407b8; name: FUN_021407b8
 */


void FUN_021407b8(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  lVar13 = *param_1;
  plVar11 = *(long **)(*(long *)(DAT_0485a0d8 + 0x38) + 0x40);
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 5;
    do {
      lVar5 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = (int)lVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar5 == -1) goto LAB_02140a40;
  }
  uVar7 = plVar11[0x22];
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x5fa488b600d25e24;
    }
    else if (uVar7 < 0x5fa488b600d25e25) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x5fa488b600d25e24 / uVar7;
      }
      uVar9 = 0x5fa488b600d25e24 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x5fa488b600d25e24;
    }
    plVar10 = *(long **)(plVar11[0x21] + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == 0x5fa488b600d25e24) {
            if (plVar10[2] == 0x5fa488b600d25e24) goto LAB_02140904;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) goto LAB_021409b8;
          plVar10 = (long *)*plVar10;
          plVar12 = (long *)0x0;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == 0x5fa488b600d25e24) {
            if (plVar10[2] == 0x5fa488b600d25e24) goto LAB_02140904;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) goto LAB_021409b8;
          }
          plVar10 = (long *)*plVar10;
          plVar12 = (long *)0x0;
        } while (plVar10 != (long *)0x0);
      }
      goto LAB_02140928;
    }
  }
LAB_021409b8:
  plVar12 = (long *)0x0;
  goto LAB_02140928;
LAB_02140904:
  plVar12 = (long *)plVar10[6];
  if (plVar12 != (long *)0x0) {
    plVar10 = plVar12 + 5;
    do {
      lVar5 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = (int)lVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar5 == -1) {
LAB_02140a40:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
LAB_02140928:
  pcVar6 = (char *)FUN_00ccbbb0(*(undefined8 *)(plVar12[0xe] + 0x110),plVar12 + 6);
  if (*pcVar6 != '\0' && *(long *)(pcVar6 + 8) != 0) {
    FUN_00f1d9f4(*(long *)(*(long *)(*(long *)(lVar13 + 0x30) + 0x30) + 0x6140) + 0x110,
                 lVar13 + 0x78,*(undefined4 *)(*(long *)(pcVar6 + 8) + 0x88));
  }
  if (plVar12 != (long *)0x0) {
    plVar10 = plVar12 + 5;
    do {
      lVar13 = *plVar10;
      iVar3 = (int)lVar13 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar13 == 0) goto LAB_021409f8;
  }
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 5;
    do {
      lVar13 = *plVar10;
      iVar3 = (int)lVar13 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x021409d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x10))(plVar11);
      return;
    }
    if ((int)lVar13 == 0) {
LAB_021409f8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


