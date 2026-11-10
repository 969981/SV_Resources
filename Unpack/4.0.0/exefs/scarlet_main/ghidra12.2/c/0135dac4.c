/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0135dac4; name: FUN_0135dac4
 */


void FUN_0135dac4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  *param_1 = &DAT_0459bc18;
  param_1[4] = &PTR_LAB_0459bc50;
  if (param_1[7] != 0) {
    lVar9 = param_1[0x1d];
    lVar6 = param_1[0x1e];
    if (lVar9 != lVar6) {
      FUN_0135df38(param_1[7],*(long *)(*(long *)(lVar9 + 8) + 0x1f8) + 0x58);
      if (((lVar9 + 0x40 != lVar6) &&
          (FUN_0135df38(param_1[7],*(long *)(*(long *)(lVar9 + 0x48) + 0x1f8) + 0x58),
          lVar9 + 0x80 != lVar6)) &&
         (FUN_0135df38(param_1[7],*(long *)(*(long *)(lVar9 + 0x88) + 0x1f8) + 0x58),
         lVar9 + 0xc0 != lVar6)) {
        FUN_0135df38(param_1[7],*(long *)(*(long *)(lVar9 + 200) + 0x1f8) + 0x58);
        for (lVar9 = lVar9 + 0x100; lVar9 != lVar6; lVar9 = lVar9 + 0x40) {
          FUN_0135df38(param_1[7],*(long *)(*(long *)(lVar9 + 8) + 0x1f8) + 0x58);
        }
      }
      lVar9 = param_1[0x1d];
      lVar6 = param_1[0x1e];
      if (((lVar6 != lVar9) && (FUN_00fa65c0(lVar6 + -0x40), lVar6 + -0x40 != lVar9)) &&
         (FUN_00fa65c0(lVar6 + -0x80), lVar6 + -0x80 != lVar9)) {
        do {
          FUN_00fa65c0(lVar6 + -0xc0);
          lVar6 = lVar6 + -0x40;
        } while (lVar9 + 0x80 != lVar6);
      }
    }
    param_1[0x1e] = lVar9;
    (**(code **)(*(long *)param_1[7] + 0x20))((long *)param_1[7],&LAB_0216afb4,param_1);
    FUN_0135df8c(param_1[7]);
    (**(code **)(*(long *)param_1[7] + 0x38))
              ((long *)param_1[7],&DAT_00003010 + *(long *)(param_1[6] + 0x30));
    (**(code **)(*(long *)param_1[7] + 8))();
    plVar5 = (long *)param_1[1];
    uVar8 = param_1[7];
    uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar4 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,uVar8,0x48,8);
    }
    else {
      FUN_00c48fe8(plVar5,uVar8,0x48,8);
    }
  }
  lVar9 = param_1[0x1d];
  if (lVar9 != 0) {
    lVar10 = param_1[0x1e];
    lVar6 = lVar9;
    if (lVar10 != lVar9) {
      FUN_00fa65c0(lVar10 + -0x40);
      if ((lVar10 + -0x40 != lVar9) && (FUN_00fa65c0(lVar10 + -0x80), lVar10 + -0x80 != lVar9)) {
        do {
          FUN_00fa65c0(lVar10 + -0xc0);
          lVar10 = lVar10 + -0x40;
        } while (lVar9 + 0x80 != lVar10);
      }
      lVar6 = param_1[0x1d];
    }
    lVar10 = param_1[0x1f];
    plVar5 = (long *)param_1[0x20];
    param_1[0x1e] = lVar9;
    uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar4 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar6,lVar10 - lVar6,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar6,lVar10 - lVar6,8);
    }
  }
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != (long *)0x0) {
    plVar11 = (long *)param_1[0x17];
    plVar7 = (long *)*plVar5;
    uVar4 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar4 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar5,0x28,8);
    }
    else {
      FUN_00c48fe8(plVar11,plVar5,0x28,8);
    }
    while (plVar7 != (long *)0x0) {
      plVar5 = (long *)param_1[0x17];
      plVar11 = (long *)*plVar7;
      uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar4 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,plVar7,0x28,8);
        plVar7 = plVar11;
      }
      else {
        FUN_00c48fe8(plVar5,plVar7,0x28,8);
        plVar7 = plVar11;
      }
    }
  }
  lVar9 = param_1[0x10];
  param_1[0x10] = 0;
  if (lVar9 != 0) {
    lVar6 = param_1[0x11];
    plVar5 = (long *)param_1[0x12];
    uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar4 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar6 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar9,lVar6 << 3,8);
    }
  }
  FUN_00fa65c0(param_1 + 8);
  plVar5 = (long *)param_1[6];
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 5;
    do {
      lVar9 = *plVar7;
      iVar3 = (int)lVar9 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0135dde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
    if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


