/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0110a914; name: FUN_0110a914
 */


void FUN_0110a914(undefined8 *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  cVar5 = *param_2;
  if (cVar5 == '\0') {
LAB_0110a92c:
    if (*(long *)(param_2 + 8) == 0) goto LAB_0110a98c;
  }
  else {
    if ((cVar5 != '\x02') && (cVar5 != '\x03')) {
      if (cVar5 != '\x01') goto LAB_0110a98c;
      goto LAB_0110a92c;
    }
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto LAB_0110a98c;
  }
  cVar5 = *param_2;
  if (cVar5 == '\x02') {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00d0a71c(param_1,param_2 + 8);
    return;
  }
  if (cVar5 == '\x01') {
    plVar9 = *(long **)(param_2 + 8);
    (**(code **)(*plVar9 + 0x18))(local_38,plVar9);
    *param_1 = 0;
    param_1[1] = 0;
    plVar3 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 5;
    }
    if ((long *)local_38[0][2] == plVar3) {
      FUN_00c9ea00(param_1,local_38);
    }
    if (local_38[0] == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_38[0] + 3);
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
LAB_0110aa98:
      if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      return;
    }
    piVar2 = (int *)((long)local_38[0] + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      puVar10 = local_38[0];
    } while (cVar5 != '\0');
  }
  else {
    if (cVar5 != '\0') {
LAB_0110a98c:
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    plVar9 = *(long **)(param_2 + 8);
    (**(code **)(*plVar9 + 0x18))(local_38,plVar9);
    *param_1 = 0;
    param_1[1] = 0;
    plVar3 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 5;
    }
    if ((long *)local_38[0][2] == plVar3) {
      FUN_00c9ea00(param_1,local_38);
    }
    if (local_38[0] == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_38[0] + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 != 1) goto LAB_0110aa98;
    piVar2 = (int *)((long)local_38[0] + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      puVar10 = local_38[0];
    } while (cVar5 != '\0');
  }
  if (iVar7 == -1) {
    return;
  }
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  lVar8 = *(long *)PTR_DAT_047d3910;
  *(long *)PTR_DAT_047d3918 = lVar8;
  local_28 = *puVar10;
  FUN_00c44438(lVar8 + 0x8040,&local_28);
  return;
}


