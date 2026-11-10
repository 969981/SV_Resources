/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c81310; name: FUN_00c81310
 */


void FUN_00c81310(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 *param_6,uint param_7)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_48;
  
  local_78 = *param_3;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_00c81640(&local_70,param_3 + 1);
  local_98 = *param_6;
  uStack_90 = param_6[1];
  local_88 = param_6[2];
  plVar4 = (long *)param_6[3];
  plStack_80 = plVar4;
  if (plVar4 == (long *)0x0) {
    uVar9 = FUN_00c818a4(param_2,&local_78,param_4,param_5,&local_98);
  }
  else {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar9 = FUN_00c818a4(param_2,&local_78,param_4,param_5,&local_98);
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  puVar7 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_00c814e0;
  }
  if ((uVar9 & 1) != 0) {
    local_b0 = *param_3;
    local_a0 = 0;
    local_a8 = (undefined8 *)0x0;
    FUN_00c81640(&local_a8,param_3 + 1);
    local_d0 = *param_6;
    uStack_c8 = param_6[1];
    local_c0 = param_6[2];
    plVar4 = (long *)param_6[3];
    plStack_b8 = plVar4;
    if (plVar4 == (long *)0x0) {
      FUN_00c82580(param_1,&local_b0,param_5,&local_d0,param_7 & 1);
    }
    else {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      FUN_00c82580(param_1,&local_b0,param_5,&local_d0,param_7 & 1);
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    puVar7 = local_a8;
    if (local_a8 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a8 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_48 = *puVar7;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) {
LAB_00c814e0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


