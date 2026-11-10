/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02187f00; name: FUN_02187f00
 */


void FUN_02187f00(undefined8 *param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  *param_1 = &PTR_FUN_0459dd50;
  param_1[4] = &PTR_LAB_0459dd88;
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
  plVar7 = (long *)param_1[7];
  if (plVar7 != (long *)0x0) {
    plVar12 = (long *)param_1[8];
    plVar8 = plVar7;
    if (plVar12 != plVar7) {
      do {
        plVar12 = plVar12 + -1;
        plVar8 = (long *)*plVar12;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 5;
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
            (**(code **)(*plVar8 + 0x10))();
          }
          else if ((int)lVar11 == 0) goto LAB_021880a0;
        }
      } while (plVar12 != plVar7);
      plVar8 = (long *)param_1[7];
    }
    lVar11 = param_1[9];
    plVar12 = (long *)param_1[10];
    param_1[8] = plVar7;
    uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar8,lVar11 - (long)plVar8,8);
    }
    else {
      FUN_00c48fe8(plVar12,plVar8,lVar11 - (long)plVar8,8);
    }
  }
  plVar7 = (long *)param_1[6];
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 5;
    do {
      lVar11 = *plVar8;
      iVar6 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02188078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
    if ((int)lVar11 == 0) {
LAB_021880a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


