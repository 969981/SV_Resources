/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017cd834; name: FUN_017cd834
 */


void FUN_017cd834(char *param_1)

{
  short *psVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  short sVar7;
  long lVar8;
  undefined8 local_18;
  
  cVar3 = *param_1;
  if (cVar3 == '\x02') {
    puVar6 = *(undefined8 **)(param_1 + 8);
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(puVar6 + 3);
    do {
      sVar7 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar7 == 1) {
      piVar2 = (int *)((long)puVar6 + 0x1c);
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
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_18 = *puVar6;
LAB_017cd9a0:
      FUN_00c44438(lVar8 + 0x8040,&local_18);
      return;
    }
  }
  else {
    if (cVar3 != '\x03') {
      if (cVar3 == '\x01') {
        FUN_01751d6c(param_1 + 8);
        return;
      }
      return;
    }
    puVar6 = *(undefined8 **)(param_1 + 8);
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(puVar6 + 3);
    do {
      sVar7 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar7 == 1) {
      piVar2 = (int *)((long)puVar6 + 0x1c);
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
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_18 = *puVar6;
      goto LAB_017cd9a0;
    }
  }
  if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


