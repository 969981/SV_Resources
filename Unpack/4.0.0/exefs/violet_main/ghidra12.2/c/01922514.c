/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01922514; name: FUN_01922514
 */


void FUN_01922514(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 local_38;
  
  *param_1 = &DAT_04569ca8;
  param_1[4] = &PTR_LAB_04569d28;
  param_1[5] = &DAT_04569d78;
  pcVar9 = (code *)param_1[0x2c5];
  if (pcVar9 != (code *)0x0) {
    param_1[0x2c7] = 0;
    param_1[0x2c6] = 0;
    param_1[0x2c5] = 0;
    param_1[0x2c4] = 0;
    (*pcVar9)(param_1 + 0x2c8);
  }
  lVar11 = param_1[700];
  if (lVar11 != 0) {
    lVar10 = param_1[0x2be];
    param_1[0x2bd] = lVar11;
    plVar13 = (long *)param_1[0x2bf];
    uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar11,lVar10 - lVar11,4);
    }
    else {
      FUN_00c48fe8(plVar13,lVar11,lVar10 - lVar11,4);
    }
  }
  FUN_00db239c(param_1 + 0x2a3);
  FUN_00db239c(param_1 + 0x29b);
  FUN_00db239c(param_1 + 0x290);
  FUN_00db239c(param_1 + 0x288);
  FUN_01922808(param_1 + 0x162);
  FUN_00db239c(param_1 + 0x157);
  FUN_00db239c(param_1 + 0x14f);
  FUN_00db239c(param_1 + 0x144);
  FUN_00db239c(param_1 + 0x13c);
  FUN_01922808(param_1 + 0x16);
  puVar12 = (undefined8 *)param_1[0x12];
  if (puVar12 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar12 + 3);
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
      piVar2 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_01922660;
  }
  puVar12 = (undefined8 *)param_1[0x10];
  if (puVar12 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar12 + 3);
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
      piVar2 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
LAB_01922660:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_01922a20(param_1);
  return;
}


