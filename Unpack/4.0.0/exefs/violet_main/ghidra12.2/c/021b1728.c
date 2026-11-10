/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b1728; name: FUN_021b1728
 */


void FUN_021b1728(long *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  FUN_00db2234(param_1 + 0x4a);
  if ((long *)param_1[0x49] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x49] + 0x20))();
  }
  plVar5 = (long *)param_1[0x47];
  param_1[0x3e] = (long)&PTR_FUN_045a20f8;
  if (plVar5 != (long *)0x0) {
    plVar10 = plVar5 + 5;
    do {
      lVar8 = *plVar10;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00db239c(param_1 + 0x3f);
  if ((long *)param_1[0x3d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3d] + 0x20))();
  }
  if ((long *)param_1[0x3c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3c] + 0x20))();
  }
  FUN_021b1a24(param_1 + 0x2e);
  plVar5 = (long *)param_1[0x27];
  while (plVar5 != (long *)0x0) {
    plVar10 = (long *)*plVar5;
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 0x20))();
    }
    plVar9 = (long *)param_1[0x28];
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar5,0x40,0x10);
      plVar5 = plVar10;
    }
    else {
      FUN_00c48fe8(plVar9,plVar5,0x40,0x10);
      plVar5 = plVar10;
    }
  }
  FUN_021b1aec(param_1 + 0x21);
  plVar5 = (long *)param_1[0x1a];
  while (plVar5 != (long *)0x0) {
    plVar10 = (long *)*plVar5;
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 0x20))();
    }
    plVar9 = (long *)param_1[0x1b];
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar5,0x38,8);
      plVar5 = plVar10;
    }
    else {
      FUN_00c48fe8(plVar9,plVar5,0x38,8);
      plVar5 = plVar10;
    }
  }
  lVar8 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar8 != 0) {
    lVar1 = param_1[0x15];
    plVar5 = (long *)param_1[0x16];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar1 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar5,lVar8,lVar1 << 3,8);
    }
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 0x20))();
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x20))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  if ((long *)*param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x021b1900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}


