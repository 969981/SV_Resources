/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027098ec; name: FUN_027098ec
 */


void FUN_027098ec(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_1[0xc6b];
  *param_1 = &DAT_045daf50;
  if (lVar9 != 0) {
    lVar8 = param_1[0xc6d];
    param_1[0xc6c] = lVar9;
    plVar5 = (long *)param_1[0xc6e];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8 - lVar9,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar9,lVar8 - lVar9,8);
    }
  }
  lVar9 = param_1[0xc64];
  if (lVar9 != 0) {
    lVar8 = param_1[0xc66];
    param_1[0xc65] = lVar9;
    plVar5 = (long *)param_1[0xc67];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8 - lVar9,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar9,lVar8 - lVar9,8);
    }
  }
  lVar9 = param_1[0xc5d];
  if (lVar9 != 0) {
    lVar8 = param_1[0xc5f];
    param_1[0xc5e] = lVar9;
    plVar5 = (long *)param_1[0xc60];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar9,lVar8 - lVar9,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar9,lVar8 - lVar9,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xc5b));
  plVar5 = (long *)param_1[0xc57];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5,param_1 + 0xc56);
    plVar5 = (long *)param_1[0xc57];
    param_1[0xc56] = 0;
    param_1[0xc57] = 0;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 5;
      do {
        lVar9 = *plVar1;
        iVar4 = (int)lVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_02709a80;
    }
    plVar5 = (long *)param_1[0xc57];
    param_1[0xc58] = 0xffffffffffffffff;
    param_1[0xc59] = 0;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 5;
      do {
        lVar9 = *plVar1;
        iVar4 = (int)lVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
LAB_02709a80:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  lVar9 = param_1[0xc50];
  param_1[0xc50] = 0;
  if (lVar9 != 0) {
    FUN_0274cd40(param_1 + 0xc51);
  }
  lVar9 = param_1[0xc4c];
  param_1[0xc4c] = 0;
  if (lVar9 != 0) {
    FUN_0274d104(param_1 + 0xc4d);
  }
  lVar9 = param_1[0xc48];
  param_1[0xc48] = 0;
  if (lVar9 != 0) {
    FUN_0274d4c8(param_1 + 0xc49);
  }
  lVar9 = param_1[0xc44];
  param_1[0xc44] = 0;
  if (lVar9 != 0) {
    FUN_0274d88c(param_1 + 0xc45);
  }
  lVar9 = param_1[0xc40];
  param_1[0xc40] = 0;
  if (lVar9 != 0) {
    FUN_0274dc50(param_1 + 0xc41);
  }
  lVar9 = param_1[0xc3c];
  param_1[0xc3c] = 0;
  if (lVar9 != 0) {
    FUN_0274e014(param_1 + 0xc3d);
  }
  lVar9 = param_1[0xc38];
  param_1[0xc38] = 0;
  if (lVar9 != 0) {
    FUN_0274e3d8(param_1 + 0xc39);
  }
  lVar9 = param_1[0xc34];
  param_1[0xc34] = 0;
  if (lVar9 != 0) {
    FUN_0274e79c(param_1 + 0xc35);
  }
  lVar9 = param_1[0xc30];
  param_1[0xc30] = 0;
  if (lVar9 != 0) {
    FUN_0274eb60(param_1 + 0xc31);
  }
  lVar9 = param_1[0xc2c];
  param_1[0xc2c] = 0;
  if (lVar9 != 0) {
    FUN_0274ef24(param_1 + 0xc2d);
  }
  lVar9 = param_1[0xc28];
  param_1[0xc28] = 0;
  if (lVar9 != 0) {
    FUN_0274f2e0(param_1 + 0xc29);
  }
  lVar9 = param_1[0xc24];
  param_1[0xc24] = 0;
  if (lVar9 != 0) {
    FUN_0274f69c(param_1 + 0xc25);
  }
  lVar9 = param_1[0xc20];
  param_1[0xc20] = 0;
  if (lVar9 != 0) {
    FUN_0274fa58(param_1 + 0xc21);
  }
  lVar9 = param_1[0xc1c];
  param_1[0xc1c] = 0;
  if (lVar9 != 0) {
    FUN_0274fe14(param_1 + 0xc1d);
  }
  lVar9 = param_1[0xc18];
  param_1[0xc18] = 0;
  if (lVar9 != 0) {
    FUN_027501d0(param_1 + 0xc19);
  }
  lVar9 = param_1[0xc14];
  param_1[0xc14] = 0;
  if (lVar9 != 0) {
    FUN_0275058c(param_1 + 0xc15);
  }
  FUN_0274bf90(param_1);
  return;
}


