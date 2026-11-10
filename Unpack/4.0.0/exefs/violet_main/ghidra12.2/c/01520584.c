/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01520584; name: FUN_01520584
 */


bool FUN_01520584(char *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *local_48 [2];
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  cVar4 = *param_1;
  if (cVar4 == *param_2) {
    if ((((cVar4 == '\0') || (cVar4 == '\x01')) || (cVar4 == '\x02')) || (cVar4 == '\x03')) {
      return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
    }
    return false;
  }
  if ((cVar4 != '\x03') && (*param_2 != '\x03')) {
    lVar9 = FUN_026b80d0();
    lVar8 = FUN_026b80d0(param_2);
    return lVar9 == lVar8;
  }
  FUN_015207fc(local_38);
  FUN_015207fc(local_48,param_2);
  bVar6 = local_38[0] == local_48[0];
  puVar10 = local_38[0];
  if (local_48[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_28 = *local_48[0];
        FUN_00c44438(lVar9 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_01520640;
    puVar10 = local_38[0];
  }
  if (puVar10 == (undefined8 *)0x0) {
    return bVar6;
  }
  psVar1 = (short *)(puVar10 + 3);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 1) {
    piVar2 = (int *)((long)puVar10 + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) {
      return bVar6;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar9 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar9;
    local_48[0] = (undefined8 *)*puVar10;
    FUN_00c44438(lVar9 + 0x8040,local_48);
    return bVar6;
  }
  if (sVar3 != 0) {
    return bVar6;
  }
LAB_01520640:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
}


