/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022418c0; name: FUN_022418c0
 */


void FUN_022418c0(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  short sVar10;
  long *plVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_58 = *(undefined8 *)(param_1 + 0x110);
  uStack_50 = *(undefined8 *)(param_1 + 0x118);
  local_48 = *(undefined8 *)(param_1 + 0x120);
  plVar11 = *(long **)(param_1 + 0x128);
  local_40 = plVar11;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_38,param_1 + 0x30,&local_58);
    plVar11 = local_40;
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if (local_38 != (undefined8 *)0x0) {
    if (*(short *)((long)local_38 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_38 + 0x1a);
      sVar10 = *(short *)((long)local_38 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02241984;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02241984:
          bVar9 = false;
        }
        if (bVar9) {
          lVar8 = local_38[2];
          if (lVar8 == 0) goto LAB_022419d8;
          lVar7 = FUN_00e641c0(lVar8 + 0xe0,&local_28);
          if (lVar7 != 0) {
            FUN_02241abc();
          }
          (**(code **)(*(long *)(lVar8 + -0x28) + 0x60))((long *)(lVar8 + -0x28));
          break;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
      if (local_38 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_022419d8:
    puVar5 = local_38;
    psVar1 = (short *)(local_38 + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_38 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = *puVar5;
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


