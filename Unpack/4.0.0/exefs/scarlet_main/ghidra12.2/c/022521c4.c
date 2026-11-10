/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022521c4; name: FUN_022521c4
 */


void FUN_022521c4(undefined8 *param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = param_1[0x65];
  *param_1 = &PTR_FUN_045ac458;
  param_1[4] = &PTR_LAB_045ac488;
  if (lVar11 != 0) {
    lVar9 = param_1[0x66];
    if (lVar9 == lVar11) {
      lVar9 = lVar11;
    }
    else {
      do {
        plVar7 = (long *)(lVar9 + -8);
        lVar9 = lVar9 + -0x20;
        if ((long *)*plVar7 != (long *)0x0) {
          (**(code **)(*(long *)*plVar7 + 0x20))();
        }
      } while (lVar11 != lVar9);
      lVar9 = param_1[0x65];
    }
    lVar10 = param_1[0x67];
    param_1[0x66] = lVar11;
    plVar7 = (long *)param_1[0x68];
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar8 & 1) != 0) {
      lVar11 = FUN_00c4e600();
      if (0 < *(int *)(lVar11 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar9,lVar10 - lVar9,8);
        goto LAB_022521f4;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar10 - lVar9,8);
  }
LAB_022521f4:
  FUN_00db239c(param_1 + 0x5d);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x5b));
  FUN_022523bc(param_1 + 0x53);
  plVar7 = (long *)param_1[0x52];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar11 = *plVar1;
      iVar6 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_02252464(param_1 + 0x45);
  FUN_022524a4(param_1 + 0x38);
  FUN_022524e4(param_1 + 0x2b);
  FUN_02252524(param_1 + 0x1e);
  FUN_02252564(param_1 + 0x11);
  plVar7 = (long *)param_1[0xe];
  if (plVar7 != (long *)0x0) {
    lVar11 = plVar7[6];
    psVar2 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_022525a4(param_1 + 5);
  return;
}


