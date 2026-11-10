/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e41d98; name: FUN_01e41d98
 */


void FUN_01e41d98(long *param_1)

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
  undefined8 *puVar10;
  long lVar11;
  undefined8 local_18;
  
  *param_1 = (long)&DAT_04547058;
  param_1[4] = (long)&PTR_LAB_045470d0;
  param_1[5] = (long)&PTR_FUN_04547120;
  plVar9 = (long *)param_1[0x16];
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[6];
    psVar4 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))();
    }
    else if (sVar5 == 0) {
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
  puVar10 = (undefined8 *)param_1[6];
  if (puVar10 != (undefined8 *)0x0) {
    psVar4 = (short *)(puVar10 + 3);
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
      piVar3 = (int *)((long)puVar10 + 0x1c);
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
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar8 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_18 = *puVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_18);
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


