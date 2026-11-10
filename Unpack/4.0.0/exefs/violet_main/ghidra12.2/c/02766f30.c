/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02766f30; name: FUN_02766f30
 */


undefined * FUN_02766f30(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  
  puVar10 = (undefined *)(param_2 & 0xffffffff);
  puVar8 = (undefined8 *)FUN_00cb7028(param_1,param_3);
  plVar9 = (long *)*puVar8;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) {
LAB_027670c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    if ((plVar9[0x22] == 0) || (plVar11 = *(long **)(plVar9[0x22] + 0x70), plVar11 == (long *)0x0))
    {
      bVar4 = true;
    }
    else {
      plVar2 = plVar11 + 5;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 == -1) goto LAB_027670c8;
      puVar10 = (undefined *)FUN_00c472c8(plVar11,puVar10);
      do {
        iVar7 = (int)*plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      else if (iVar7 == 0) goto LAB_02767080;
      bVar4 = false;
    }
    do {
      lVar6 = *plVar1;
      iVar7 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar6 == 0) {
LAB_02767080:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    if (!bVar4) {
      return puVar10;
    }
  }
  if (((DAT_0485dbf0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0485dbf0), iVar7 != 0)) {
    FUN_01667884(&DAT_0485dbc0);
    __cxa_guard_release(&DAT_0485dbf0);
  }
  return &DAT_0485dbc0;
}


