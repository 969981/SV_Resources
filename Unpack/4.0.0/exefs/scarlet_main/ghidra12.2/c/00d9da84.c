/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d9da84; name: FUN_00d9da84
 */


long FUN_00d9da84(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  
  uVar8 = param_1[1];
  lVar1 = *param_2;
  uVar7 = param_2[1];
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar9 < 2) {
    uVar7 = uVar8 - 1 & uVar7;
  }
  else if (uVar8 <= uVar7) {
    uVar12 = 0;
    if (uVar8 != 0) {
      uVar12 = uVar7 / uVar8;
    }
    uVar7 = uVar7 - uVar12 * uVar8;
  }
  plVar10 = *(long **)(*param_1 + uVar7 * 8);
  for (plVar11 = (long *)*plVar10; plVar11 != param_2; plVar11 = (long *)*plVar11) {
    plVar10 = plVar11;
  }
  if (plVar10 != param_1 + 6) {
    uVar12 = plVar10[1];
    if (uVar9 < 2) {
      uVar12 = uVar12 & uVar8 - 1;
    }
    else if (uVar8 <= uVar12) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar12 / uVar8;
      }
      uVar12 = uVar12 - uVar5 * uVar8;
    }
    if (uVar12 == uVar7) goto LAB_00d9db3c;
  }
  if (*param_2 != 0) {
    uVar12 = *(ulong *)(*param_2 + 8);
    if (uVar9 < 2) {
      uVar12 = uVar12 & uVar8 - 1;
    }
    else if (uVar8 <= uVar12) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar12 / uVar8;
      }
      uVar12 = uVar12 - uVar5 * uVar8;
    }
    if (uVar12 == uVar7) goto LAB_00d9db3c;
  }
  *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
LAB_00d9db3c:
  if (*param_2 != 0) {
    uVar12 = *(ulong *)(*param_2 + 8);
    if (uVar9 < 2) {
      uVar12 = uVar12 & uVar8 - 1;
    }
    else if (uVar8 <= uVar12) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar12 / uVar8;
      }
      uVar12 = uVar12 - uVar9 * uVar8;
    }
    if (uVar12 != uVar7) {
      *(long **)(*param_1 + uVar12 * 8) = plVar10;
    }
  }
  *plVar10 = *param_2;
  *param_2 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  if (param_2 != (long *)0x0) {
    plVar10 = (long *)param_2[3];
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 5;
      do {
        lVar6 = *plVar11;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    plVar10 = (long *)param_1[7];
    uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,param_2,0x20,8);
    }
    else {
      FUN_00c48fe8(plVar10,param_2,0x20,8);
    }
  }
  return lVar1;
}


