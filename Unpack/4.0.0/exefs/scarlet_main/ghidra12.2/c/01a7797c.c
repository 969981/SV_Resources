/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a7797c; name: FUN_01a7797c
 */


void FUN_01a7797c(char *param_1,char *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 local_28;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      FUN_01a77b64(param_1,param_2 + 0x10);
    }
  }
  else if (*param_2 == '\0') {
    FUN_01bb6044(param_1 + 0x70);
    *(undefined **)(param_1 + 0x40) = PTR_DAT_047d53f0 + 0x10;
    puVar10 = *(undefined8 **)(param_1 + 0x48);
    if (puVar10 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar10 + 3);
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
        piVar2 = (int *)((long)puVar10 + 0x1c);
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
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *puVar10;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *param_1 = '\0';
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    FUN_00d0a71c(param_1 + 0x48,param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    FUN_00d0a71c(param_1 + 0x78,param_2 + 0x78);
    FUN_00c6c994(param_1 + 0x88,param_2 + 0x88);
    plVar9 = *(long **)(param_2 + 0x98);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    plVar7 = *(long **)(param_1 + 0x98);
    *(long **)(param_1 + 0x98) = plVar9;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  return;
}


