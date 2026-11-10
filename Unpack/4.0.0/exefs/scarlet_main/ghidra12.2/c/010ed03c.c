/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ed03c; name: FUN_010ed03c
 */


long FUN_010ed03c(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  
  uVar9 = param_1[1];
  lVar3 = *param_2;
  uVar8 = param_2[1];
  uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar10 < 2) {
    uVar8 = uVar9 - 1 & uVar8;
  }
  else if (uVar9 <= uVar8) {
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar8 / uVar9;
    }
    uVar8 = uVar8 - uVar13 * uVar9;
  }
  plVar11 = *(long **)(*param_1 + uVar8 * 8);
  for (plVar12 = (long *)*plVar11; plVar12 != param_2; plVar12 = (long *)*plVar12) {
    plVar11 = plVar12;
  }
  if (plVar11 != param_1 + 6) {
    uVar13 = plVar11[1];
    if (uVar10 < 2) {
      uVar13 = uVar13 & uVar9 - 1;
    }
    else if (uVar9 <= uVar13) {
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar6 * uVar9;
    }
    if (uVar13 == uVar8) goto LAB_010ed118;
  }
  if (*param_2 != 0) {
    uVar13 = *(ulong *)(*param_2 + 8);
    if (uVar10 < 2) {
      uVar13 = uVar13 & uVar9 - 1;
    }
    else if (uVar9 <= uVar13) {
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar6 * uVar9;
    }
    if (uVar13 == uVar8) goto LAB_010ed118;
  }
  *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
LAB_010ed118:
  if (*param_2 != 0) {
    uVar13 = *(ulong *)(*param_2 + 8);
    if (uVar10 < 2) {
      uVar13 = uVar13 & uVar9 - 1;
    }
    else if (uVar9 <= uVar13) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar10 * uVar9;
    }
    if (uVar13 != uVar8) {
      *(long **)(*param_1 + uVar13 * 8) = plVar11;
    }
  }
  *plVar11 = *param_2;
  *param_2 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  if (param_2 != (long *)0x0) {
    plVar11 = (long *)param_2[3];
    if (plVar11 != (long *)0x0) {
      lVar7 = plVar11[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar11 = (long *)param_1[7];
    uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar10 & 1) != 0) && (lVar7 = FUN_00c4e600(), 0 < *(int *)(lVar7 + 0x12c8))) {
      FUN_00c48fe8(plVar11,param_2,0x20,8);
      return lVar3;
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,param_2,0x20,8);
  }
  return lVar3;
}


