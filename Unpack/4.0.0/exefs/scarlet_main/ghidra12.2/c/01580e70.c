/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01580e70; name: FUN_01580e70
 */


void FUN_01580e70(char *param_1)

{
  short *psVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  short sVar9;
  undefined8 local_18;
  
  cVar3 = *param_1;
  if (cVar3 == '\x01') {
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6 == (long *)0x0) {
      return;
    }
    lVar7 = plVar6[0x13];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01580fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x50))();
      return;
    }
    if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  if (cVar3 == '\x02') {
    puVar8 = *(undefined8 **)(param_1 + 8);
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(puVar8 + 3);
    do {
      sVar9 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)puVar8 + 0x1c);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
        FUN_00100190(&LAB_008f33f0,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar7 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar7;
      local_18 = *puVar8;
LAB_01581010:
      FUN_00c44438(lVar7 + 0x8040,&local_18);
      return;
    }
  }
  else {
    if (cVar3 != '\x03') {
      return;
    }
    puVar8 = *(undefined8 **)(param_1 + 8);
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(puVar8 + 3);
    do {
      sVar9 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)puVar8 + 0x1c);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
        FUN_00100190(&LAB_008f33f0,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar7 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar7;
      local_18 = *puVar8;
      goto LAB_01581010;
    }
  }
  if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


