/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f83de0; name: FUN_01f83de0
 */


void FUN_01f83de0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  short *psVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_28;
  
  *param_1 = (long)&PTR_FUN_04560b70;
  param_1[4] = (long)&PTR_LAB_04560be8;
  param_1[5] = (long)&DAT_04560c38;
  FUN_01f8403c(param_1 + 0x19,param_1[0x1a]);
  FUN_01f8403c(param_1 + 0x12,param_1[0x13]);
  FUN_01f8403c(param_1 + 0xb,param_1[0xc]);
  plVar9 = (long *)param_1[10];
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[6];
    psVar4 = (short *)(lVar10 + 0x1a);
    do {
      sVar5 = *psVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar7) {
        *psVar4 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_01f83f9c;
  }
  plVar9 = (long *)param_1[9];
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[6];
    psVar4 = (short *)(lVar10 + 0x1a);
    do {
      sVar5 = *psVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar7) {
        *psVar4 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_01f83f9c;
  }
  plVar9 = (long *)param_1[8];
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[6];
    psVar4 = (short *)(lVar10 + 0x1a);
    do {
      sVar5 = *psVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar7) {
        *psVar4 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_01f83f9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar11 = (undefined8 *)param_1[6];
  if (puVar11 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar11 + 3);
    do {
      sVar5 = *psVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar7) {
        *psVar4 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
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
  return;
}


