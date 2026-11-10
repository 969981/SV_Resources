/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0108aae8; name: FUN_0108aae8
 */


void FUN_0108aae8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = &DAT_045d11e8;
  param_1[4] = &PTR_LAB_045d1220;
  FUN_0108aea4(param_1 + 0x21,param_1[0x27]);
  lVar8 = param_1[0x21];
  param_1[0x21] = 0;
  if (lVar8 != 0) {
    lVar2 = param_1[0x22];
    plVar10 = (long *)param_1[0x23];
    uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar2 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar2 << 3,8);
    }
  }
  plVar10 = (long *)param_1[0x1a];
  while (plVar10 != (long *)0x0) {
    plVar11 = (long *)*plVar10;
    plVar9 = (long *)plVar10[6];
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar8 = *plVar1;
        iVar5 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_0108ae7c;
    }
    if ((long *)plVar10[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar10[5] + 0x20))();
    }
    plVar9 = (long *)param_1[0x1b];
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar10,0x38,8);
      plVar10 = plVar11;
    }
    else {
      FUN_00c48fe8(plVar9,plVar10,0x38,8);
      plVar10 = plVar11;
    }
  }
  lVar8 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar8 != 0) {
    lVar2 = param_1[0x15];
    plVar10 = (long *)param_1[0x16];
    uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar2 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar8,lVar2 << 3,8);
    }
  }
  plVar10 = (long *)param_1[0xd];
  if (plVar10 != (long *)0x0) {
    plVar9 = (long *)*plVar10;
    if ((char)plVar10[6] != '\0') {
      if ((long *)plVar10[10] != (long *)0x0) {
        (**(code **)(*(long *)plVar10[10] + 0x20))();
      }
      *(undefined1 *)(plVar10 + 6) = 0;
    }
    if ((long *)plVar10[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar10[5] + 0x20))();
    }
    plVar11 = (long *)param_1[0xe];
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar10,0x58,8);
    }
    else {
      FUN_00c48fe8(plVar11,plVar10,0x58,8);
    }
    while (plVar9 != (long *)0x0) {
      plVar10 = (long *)*plVar9;
      if (*(char *)(plVar9 + 6) != '\0') {
        if ((long *)plVar9[10] != (long *)0x0) {
          (**(code **)(*(long *)plVar9[10] + 0x20))();
        }
        *(undefined1 *)(plVar9 + 6) = 0;
      }
      if ((long *)plVar9[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar9[5] + 0x20))();
      }
      plVar11 = (long *)param_1[0xe];
      uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar9,0x58,8);
        plVar9 = plVar10;
      }
      else {
        FUN_00c48fe8(plVar11,plVar9,0x58,8);
        plVar9 = plVar10;
      }
    }
  }
  lVar8 = param_1[7];
  param_1[7] = 0;
  if (lVar8 != 0) {
    FUN_00fa1d54(param_1 + 8);
  }
  plVar10 = (long *)param_1[6];
  if (plVar10 != (long *)0x0) {
    plVar9 = plVar10 + 5;
    do {
      lVar8 = *plVar9;
      iVar5 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0108abdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x10))();
      return;
    }
    if ((int)lVar8 == 0) {
LAB_0108ae7c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


