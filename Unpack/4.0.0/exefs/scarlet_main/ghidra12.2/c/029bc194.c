/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029bc194; name: FUN_029bc194
 */


long * FUN_029bc194(long *param_1,long param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 *local_38 [2];
  long *local_28;
  
  lVar8 = *(long *)(param_2 + 8);
  FUN_00ca2b84(local_38,lVar8);
  if (local_38[0] == (undefined8 *)0x0) {
    local_28 = (long *)0x0;
LAB_029bc1c8:
    plVar7 = (long *)*param_1;
    lVar8 = 0;
    *param_1 = 0;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[6];
      psVar2 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_029bc38c;
      lVar8 = 0;
    }
  }
  else {
    FUN_00ca3a00(&local_28);
    if (local_28 == (long *)0x0) goto LAB_029bc1c8;
    FUN_00ca3980(param_1);
    plVar7 = local_28;
    local_28 = (long *)0x0;
    *param_1 = (long)plVar7;
  }
  param_1[1] = lVar8;
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[6];
    psVar2 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_029bc38c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_38[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_38[0] + 3);
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
      piVar1 = (int *)((long)local_38[0] + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = (long *)*local_38[0];
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return param_1;
}


