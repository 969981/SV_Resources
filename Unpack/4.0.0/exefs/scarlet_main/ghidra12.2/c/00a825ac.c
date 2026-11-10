/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a825ac; name: FUN_00a825ac
 */


void FUN_00a825ac(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 local_8;
  
  *param_1 = (long)&PTR_FUN_04542a98;
  param_1[4] = (long)&PTR_LAB_04542ae8;
  puVar10 = (undefined8 *)param_1[8];
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar8 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_8 = *puVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_8);
      }
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  plVar9 = (long *)param_1[7];
  puVar2 = PTR_DAT_047d90d8 + 0x60;
  *param_1 = (long)(PTR_DAT_047d90d8 + 0x10);
  param_1[4] = (long)puVar2;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 5;
    do {
      lVar11 = *plVar3;
      iVar8 = (int)lVar11 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_00a8273c;
  }
  plVar9 = (long *)param_1[6];
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 5;
    do {
      lVar11 = *plVar3;
      iVar8 = (int)lVar11 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(int *)plVar3 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a82680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))();
      return;
    }
    if ((int)lVar11 == 0) {
LAB_00a8273c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


