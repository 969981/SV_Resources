/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021896a4; name: FUN_021896a4
 */


void FUN_021896a4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = &PTR_FUN_0459e1d8;
  param_1[4] = &PTR_LAB_0459e358;
  param_1[5] = &DAT_0459e480;
  param_1[6] = &PTR_LAB_0459e4d8;
  param_1[7] = &PTR_LAB_0459e500;
  pcVar7 = (code *)param_1[0x5d];
  param_1[0x24] = &PTR_LAB_0459e538;
  if (pcVar7 != (code *)0x0) {
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    (*pcVar7)(param_1 + 0x60);
  }
  pcVar7 = (code *)param_1[0x4d];
  if (pcVar7 != (code *)0x0) {
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    (*pcVar7)(param_1 + 0x50);
  }
  lVar9 = param_1[0x40];
  if (lVar9 != 0) {
    lVar8 = param_1[0x42];
    param_1[0x41] = lVar9;
    plVar11 = (long *)param_1[0x43];
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar9,lVar8 - lVar9,4);
        goto LAB_0218973c;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,4);
  }
LAB_0218973c:
  if ((long *)param_1[0x3f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3f] + 0x20))();
  }
  lVar9 = param_1[0x35];
  if (lVar9 != 0) {
    lVar8 = param_1[0x37];
    plVar11 = (long *)param_1[0x38];
    param_1[0x36] = lVar9;
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar9,lVar8 - lVar9,8);
        goto LAB_02189788;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,8);
  }
LAB_02189788:
  lVar9 = param_1[0x2e];
  if (lVar9 != 0) {
    lVar8 = param_1[0x30];
    plVar11 = (long *)param_1[0x31];
    param_1[0x2f] = lVar9;
    uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_00c4e600();
      if (0 < *(int *)(lVar6 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar9,lVar8 - lVar9,8);
        goto LAB_021897cc;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar9,lVar8 - lVar9,8);
  }
LAB_021897cc:
  plVar11 = (long *)param_1[0x27];
  if (plVar11 != (long *)0x0) {
    plVar10 = (long *)param_1[0x28];
    if (plVar10 == plVar11) {
      plVar10 = plVar11;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x60))();
        }
      } while (plVar11 != plVar10);
      plVar10 = (long *)param_1[0x27];
    }
    lVar9 = param_1[0x29];
    plVar1 = (long *)param_1[0x2a];
    param_1[0x28] = plVar11;
    uVar5 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar5 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar1,plVar10,lVar9 - (long)plVar10,8);
        goto LAB_0218983c;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar10,lVar9 - (long)plVar10,8);
  }
LAB_0218983c:
  plVar11 = (long *)param_1[0x26];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 5;
    do {
      lVar9 = *plVar10;
      iVar4 = (int)lVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


