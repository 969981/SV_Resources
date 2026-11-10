/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029f87e4; name: FUN_029f87e4
 */


void FUN_029f87e4(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  short sVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    if ((*(long *)(param_1 + 0x120) != 0) &&
       (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x120) + 8), puVar11 != (undefined8 *)0x0)) {
      puVar8 = (undefined8 *)PTR_DAT_047d92d8;
      if ((*PTR_DAT_047d92d0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_047d92d0);
        puVar8 = (undefined8 *)PTR_DAT_047d92d8;
        if (iVar6 != 0) {
          uVar7 = FUN_01e2b0d8();
          *(undefined8 *)PTR_DAT_047d92d8 = uVar7;
          __cxa_guard_release(PTR_DAT_047d92d0);
          puVar8 = (undefined8 *)PTR_DAT_047d92d8;
        }
      }
      do {
        if (puVar11 == puVar8) {
          FUN_01193608(&local_40,param_1 + 0x120);
          break;
        }
        puVar11 = (undefined8 *)*puVar11;
      } while (puVar11 != (undefined8 *)0x0);
    }
    puVar11 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      if (*(short *)((long)local_40 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_40 + 0x1a);
        sVar10 = *(short *)((long)local_40 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_029f889c;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_029f889c:
            bVar5 = false;
          }
          if (bVar5) {
            plVar12 = (long *)0x0;
            if (local_40[2] != 0) {
              plVar12 = (long *)(local_40[2] + -0x28);
            }
            goto LAB_029f88d0;
          }
          sVar10 = sVar3;
        } while (sVar3 != 0);
      }
      plVar12 = (long *)0x0;
LAB_029f88d0:
      psVar1 = (short *)(local_40 + 3);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        piVar2 = (int *)((long)local_40 + 0x1c);
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_18 = *puVar11;
          FUN_00c44438(lVar9 + 0x8040,&local_18);
        }
      }
      else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar12 != (long *)0x0) {
        if (*(char *)((long)plVar12 + 0x57c) != '\x01') {
          *(undefined2 *)((long)plVar12 + 0x57c) = 0x101;
        }
        *(undefined1 *)(param_1 + 0x130) = 0;
        lVar9 = plVar12[6];
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


