/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f01bb8; name: FUN_00f01bb8
 */


void FUN_00f01bb8(undefined8 *param_1,char *param_2)

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
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  cVar5 = *param_2;
  if (cVar5 == '\x02') {
LAB_00f01bd8:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto LAB_00f01be0;
  }
  else {
    if ((cVar5 != '\0') && (cVar5 != '\x01')) {
      if (cVar5 != '\x03') goto LAB_00f01be0;
      goto LAB_00f01bd8;
    }
    if (*(long *)(param_2 + 8) == 0) goto LAB_00f01be0;
  }
  cVar5 = *param_2;
  if (cVar5 == '\x02') {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00ca1a48(param_1,param_2 + 8);
    return;
  }
  if (cVar5 == '\x01') {
    plVar9 = *(long **)(param_2 + 8);
    (**(code **)(*plVar9 + 0x18))(local_40,plVar9);
    *param_1 = 0;
    param_1[1] = 0;
    plVar3 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 5;
    }
    puVar10 = local_40[0];
    if ((long *)local_40[0][2] == plVar3) {
      FUN_00cbc6dc(param_1,local_40);
      puVar10 = local_40[0];
    }
    if (puVar10 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00f01d98:
      if (iVar7 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_18 = *puVar10;
      FUN_00c44438(lVar8 + 0x8040,&local_18);
      return;
    }
  }
  else {
    if (cVar5 != '\0') {
LAB_00f01be0:
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    plVar9 = *(long **)(param_2 + 8);
    (**(code **)(*plVar9 + 0x18))(local_40,plVar9);
    *param_1 = 0;
    param_1[1] = 0;
    plVar3 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar3 = plVar9 + 5;
    }
    if ((long *)local_40[0][2] == plVar3) {
      FUN_00cbc6dc(param_1,local_40);
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
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_40[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        puVar10 = local_40[0];
      } while (cVar5 != '\0');
      goto LAB_00f01d98;
    }
  }
  if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


