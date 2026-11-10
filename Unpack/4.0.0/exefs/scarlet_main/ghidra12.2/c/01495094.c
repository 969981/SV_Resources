/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01495094; name: FUN_01495094
 */


void FUN_01495094(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  short sVar9;
  long *plVar10;
  undefined8 local_28;
  
  lVar7 = *(long *)(param_1 + 0x90);
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    if (*(short *)(lVar7 + 0x1a) != 0) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01495100;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01495100:
          bVar5 = false;
        }
        if (bVar5) {
          if (*(long *)(lVar7 + 0x10) != 0) {
            plVar10 = (long *)(*(long *)(lVar7 + 0x10) + -8);
            (**(code **)(*plVar10 + 0x48))(plVar10,param_1);
            goto LAB_01495114;
          }
          break;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar10 = (long *)0x0;
LAB_01495114:
    puVar8 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (puVar8 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar8 + 3);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        piVar2 = (int *)((long)puVar8 + 0x1c);
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
          lVar7 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar7;
          local_28 = *puVar8;
          FUN_00c44438(lVar7 + 0x8040,&local_28);
        }
      }
      else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01495164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10);
      return;
    }
  }
  return;
}


