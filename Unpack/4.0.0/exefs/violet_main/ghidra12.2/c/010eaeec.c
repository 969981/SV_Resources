/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010eaeec; name: FUN_010eaeec
 */


void FUN_010eaeec(undefined8 *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 **ppuVar7;
  short sVar8;
  long lVar9;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30 [2];
  undefined8 *local_8;
  
  switch(*param_2) {
  case '\0':
  case '\x01':
    if (*(long *)(param_2 + 8) == 0) goto switchD_010eaf20_default;
    break;
  case '\x02':
  case '\x03':
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_010eaf20_default;
    break;
  default:
    goto switchD_010eaf20_default;
  }
  cVar3 = *param_2;
  if (cVar3 == '\x03') {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_010eb1d0(param_1,param_2 + 8);
    return;
  }
  if (cVar3 == '\x02') {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_010eb1d0(&local_40,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01275eb8(param_1,&local_40);
    puVar5 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 != 1) {
LAB_010eb0d8:
      if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      return;
    }
    piVar2 = (int *)((long)local_40 + 0x1c);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    ppuVar7 = local_30;
    lVar9 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar9;
    local_30[0] = (undefined8 *)*puVar5;
  }
  else {
    if (cVar3 == '\x01') {
      (**(code **)(**(long **)(param_2 + 8) + 0x20))(local_30);
      FUN_010eb434(param_1,local_30);
      if (local_30[0] == (undefined8 *)0x0) {
        return;
      }
      psVar1 = (short *)(local_30[0] + 3);
      do {
        sVar8 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar8 != 1) goto LAB_010eb0d8;
      piVar2 = (int *)((long)local_30[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      if (cVar3 != '\0') {
switchD_010eaf20_default:
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      (**(code **)(**(long **)(param_2 + 8) + 0x20))(local_30);
      FUN_010eb434(param_1,local_30);
      if (local_30[0] == (undefined8 *)0x0) {
        return;
      }
      psVar1 = (short *)(local_30[0] + 3);
      do {
        sVar8 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar8 != 1) goto LAB_010eb0d8;
      piVar2 = (int *)((long)local_30[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar5 = local_30[0];
    if (iVar6 == -1) {
      return;
    }
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    ppuVar7 = &local_8;
    lVar9 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar9;
    local_8 = (undefined8 *)*puVar5;
  }
  FUN_00c44438(lVar9 + 0x8040,ppuVar7);
  return;
}


