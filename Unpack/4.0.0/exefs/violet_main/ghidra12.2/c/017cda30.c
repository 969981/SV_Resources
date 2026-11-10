/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017cda30; name: FUN_017cda30
 */


void FUN_017cda30(undefined8 param_1,undefined8 param_2,byte *param_3,uint param_4,uint param_5)

{
  ulong *puVar1;
  int *piVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  long lVar9;
  byte *pbVar10;
  long *plVar11;
  undefined1 *puVar12;
  ulong *local_90 [2];
  ulong *local_80 [2];
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  
  FUN_00f01bb8(local_90);
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar12 = *(undefined1 **)PTR_DAT_047d3e30;
    param_3 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar8 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar11 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  else {
    puVar12 = &DAT_cbf29ce484222645;
    sVar8 = strlen((char *)param_3);
    bVar4 = *param_3;
    pbVar10 = param_3;
    while (bVar4 != 0) {
      pbVar10 = pbVar10 + 1;
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar10;
    }
    plVar11 = (long *)0x0;
  }
  local_70 = puVar12;
  pbStack_68 = param_3;
  local_60 = sVar8;
  local_58 = plVar11;
  FUN_01751920(local_80,local_90,&local_70,param_4 & 1,param_5 & 1);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_017cdd40(param_1,local_80);
  if (local_80[0] != (ulong *)0x0) {
    puVar1 = local_80[0] + 3;
    do {
      sVar3 = (short)*puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *(short *)puVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_80[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_70 = (undefined1 *)*local_80[0];
        FUN_00c44438(lVar9 + 0x8040,&local_70);
      }
    }
    else if (sVar3 == 0) goto LAB_017cdb40;
  }
  if (local_90[0] != (ulong *)0x0) {
    puVar1 = local_90[0] + 3;
    do {
      sVar3 = (short)*puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *(short *)puVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_90[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_70 = (undefined1 *)*local_90[0];
        FUN_00c44438(lVar9 + 0x8040,&local_70);
      }
    }
    else if (sVar3 == 0) {
LAB_017cdb40:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


