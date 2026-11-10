/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159c680; name: FUN_0159c680
 */


void FUN_0159c680(long *param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  
  uVar9 = *(ulong *)(param_2 + 0xf0);
  plVar1 = (long *)(param_2 + 0xe8);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar7 = *param_3;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar7;
    }
    else if (uVar7 < uVar9) {
      uVar11 = uVar7;
    }
    else {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar7 / uVar9;
      }
      uVar11 = uVar7 - uVar11 * uVar9;
    }
    plVar12 = *(long **)(*plVar1 + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_0159c784;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_0159c784;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar5 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  lVar6 = FUN_0159c8c4(*(undefined8 *)(param_2 + 0x480),param_3);
  *param_1 = lVar6;
  if (lVar6 == 0) goto LAB_0159c718;
  piVar2 = (int *)(lVar6 + 0x28);
  do {
    iVar8 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0159c7f4:
  if (iVar8 == -1) {
LAB_0159c7fc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_0159c718:
  FUN_0159cc70(plVar1,param_3,param_1);
  return;
LAB_0159c784:
  lVar6 = plVar12[3];
  if ((((*(char *)(lVar6 + 0x58) == '\0') && (*(char *)(lVar6 + 0x59) == '\0')) &&
      (*(char *)(lVar6 + 0x61) == '\0')) && (*(char *)(lVar6 + 0x60) == '\0')) {
    *param_1 = lVar6;
    piVar2 = (int *)(lVar6 + 0x28);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 != -1) {
      return;
    }
    goto LAB_0159c7fc;
  }
  if (*(ulong *)(param_2 + 0x158) < *(ulong *)(param_2 + 0x160)) {
    FUN_00d9d954();
  }
  else {
    FUN_00d9de78(param_2 + 0x150);
  }
  FUN_00d9da84(plVar1,plVar12);
  lVar6 = FUN_0159c8c4(*(undefined8 *)(param_2 + 0x480),param_3);
  *param_1 = lVar6;
  if (lVar6 == 0) goto LAB_0159c718;
  piVar2 = (int *)(lVar6 + 0x28);
  do {
    iVar8 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  goto LAB_0159c7f4;
}


