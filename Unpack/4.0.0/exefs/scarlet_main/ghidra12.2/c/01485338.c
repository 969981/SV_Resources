/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01485338; name: FUN_01485338
 */


void FUN_01485338(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_8;
  
  *param_1 = &DAT_04595f00;
  param_1[4] = &PTR_LAB_045960a0;
  param_1[5] = &DAT_045961c8;
  param_1[6] = &PTR_LAB_04596220;
  param_1[7] = &PTR_LAB_04596248;
  pcVar8 = (code *)param_1[0x8d];
  param_1[0x24] = &PTR_LAB_04596280;
  if (pcVar8 != (code *)0x0) {
    param_1[0x8f] = 0;
    param_1[0x8e] = 0;
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
    (*pcVar8)(param_1 + 0x90);
  }
  pcVar8 = (code *)param_1[0x7d];
  if (pcVar8 != (code *)0x0) {
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    (*pcVar8)(param_1 + 0x80);
  }
  pcVar8 = (code *)param_1[0x6d];
  if (pcVar8 != (code *)0x0) {
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    (*pcVar8)(param_1 + 0x70);
  }
  pcVar8 = (code *)param_1[0x5d];
  if (pcVar8 != (code *)0x0) {
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    (*pcVar8)(param_1 + 0x60);
  }
  pcVar8 = (code *)param_1[0x4d];
  if (pcVar8 != (code *)0x0) {
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    (*pcVar8)(param_1 + 0x50);
  }
  pcVar8 = (code *)param_1[0x3d];
  if (pcVar8 != (code *)0x0) {
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    (*pcVar8)(param_1 + 0x40);
  }
  puVar9 = (undefined8 *)param_1[0x3a];
  if (puVar9 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar9 + 3);
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
      piVar2 = (int *)((long)puVar9 + 0x1c);
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
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_8 = *puVar9;
        FUN_00c44438(lVar10 + 0x8040,&local_8);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_014855c8(param_1 + 0x2b);
  if ((long *)param_1[0x29] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x29] + 0x60))();
  }
  plVar7 = (long *)param_1[0x28];
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[0x13];
    psVar1 = (short *)(lVar10 + 0x1a);
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
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x26));
  FUN_00e6bfa4(param_1);
  return;
}


