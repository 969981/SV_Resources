/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01954218; name: FUN_01954218
 */


void FUN_01954218(long param_1,undefined8 *param_2)

{
  long **pplVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *local_88;
  undefined8 uStack_80;
  long **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  long *local_38;
  
  uVar8 = FUN_0154af4c();
  local_70 = *param_2;
  local_68 = param_2[1];
  uStack_60 = param_2[2];
  plVar11 = (long *)param_2[3];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  local_78 = &local_88;
  local_88 = (long *)0x0;
  local_58 = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  FUN_015169d8(uVar8,&local_78,0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  plVar9 = local_88;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (plVar9 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x208) = *param_2;
    *(undefined8 *)(param_1 + 0x210) = param_2[1];
    *(undefined8 *)(param_1 + 0x218) = param_2[2];
    plVar11 = (long *)param_2[3];
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    plVar9 = *(long **)(param_1 + 0x220);
    *(long **)(param_1 + 0x220) = plVar11;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  else {
    (**(code **)(*plVar9 + 0x18))(&local_78,plVar9);
    local_88 = (long *)0x0;
    uStack_80 = 0;
    if (local_78[2] == plVar9 + 5) {
      FUN_01516dec(&local_88,&local_78);
    }
    pplVar6 = local_78;
    if (local_78 != (long **)0x0) {
      pplVar1 = local_78 + 3;
      do {
        sVar3 = *(short *)pplVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
        if (bVar5) {
          *(short *)pplVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_78 + 0x1c);
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
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_38 = *pplVar6;
          FUN_00c44438(lVar10 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_019543d4;
    }
    FUN_01954534(param_1 + 0x1f8,&local_88);
    plVar11 = local_88;
    if (local_88 != (long *)0x0) {
      plVar9 = local_88 + 3;
      do {
        sVar3 = (short)*plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(short *)plVar9 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
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
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_78 = (long **)*plVar11;
          FUN_00c44438(lVar10 + 0x8040,&local_78);
        }
      }
      else if (sVar3 == 0) {
LAB_019543d4:
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


