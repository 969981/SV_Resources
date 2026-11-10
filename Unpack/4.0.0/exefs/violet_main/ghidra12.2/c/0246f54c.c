/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0246f54c; name: FUN_0246f54c
 */


void FUN_0246f54c(undefined8 *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  uVar8 = FUN_02364988();
  if ((uVar8 & 1) == 0) {
    cVar5 = *param_2;
    if (cVar5 == '\x02') {
      *param_1 = 0;
      param_1[1] = 0;
      FUN_01465440(param_1,param_2 + 8);
      return;
    }
    if (cVar5 == '\x01') {
      plVar11 = *(long **)(param_2 + 8);
      (**(code **)(*plVar11 + 0x18))(local_40,plVar11);
      *param_1 = 0;
      param_1[1] = 0;
      plVar3 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        plVar3 = plVar11 + 5;
      }
      if ((long *)local_40[0][2] == plVar3) {
        FUN_00e1d520(param_1,local_40);
      }
      if (local_40[0] == (undefined8 *)0x0) {
        return;
      }
      psVar1 = (short *)(local_40[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 != 1) {
LAB_0246f688:
        if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        return;
      }
      piVar2 = (int *)((long)local_40[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        puVar9 = local_40[0];
      } while (cVar5 != '\0');
    }
    else {
      if (cVar5 != '\0') goto LAB_0246f570;
      plVar11 = *(long **)(param_2 + 8);
      (**(code **)(*plVar11 + 0x18))(local_40,plVar11);
      *param_1 = 0;
      param_1[1] = 0;
      plVar3 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        plVar3 = plVar11 + 5;
      }
      if ((long *)local_40[0][2] == plVar3) {
        FUN_00e1d520(param_1,local_40);
      }
      if (local_40[0] == (undefined8 *)0x0) {
        return;
      }
      psVar1 = (short *)(local_40[0] + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 != 1) goto LAB_0246f688;
      piVar2 = (int *)((long)local_40[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        puVar9 = local_40[0];
      } while (cVar5 != '\0');
    }
    if (iVar7 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar10 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar10;
      local_18 = *puVar9;
      FUN_00c44438(lVar10 + 0x8040,&local_18);
    }
  }
  else {
LAB_0246f570:
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


