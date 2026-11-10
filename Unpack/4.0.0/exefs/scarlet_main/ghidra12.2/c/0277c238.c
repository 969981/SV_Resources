/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277c238; name: FUN_0277c238
 */


void FUN_0277c238(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *local_48;
  undefined8 local_28;
  
  lVar10 = (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                     (**(long **)(param_1 + 0x70) + 0x400,0x80,0x10);
  if (lVar10 == 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x20);
    *(long **)(param_1 + 0x70) = plVar1;
    if (plVar1 == *(long **)(param_1 + 0x40)) {
      FUN_012d0398(param_1);
    }
    else {
      lVar10 = *plVar1;
      *(undefined8 *)(lVar10 + 0x410) = 0;
      puVar7 = PTR_DAT_047d96b0;
      *(undefined2 *)(lVar10 + 0x418) = 0;
      *(long *)(lVar10 + 0x420) = lVar10;
      *(long *)(lVar10 + 0x428) = lVar10;
      *(undefined **)(lVar10 + 0x408) = puVar7 + 0x128;
      *(undefined **)(lVar10 + 0x400) = puVar7 + 0x10;
      *(undefined8 *)(lVar10 + 0x430) = 0x400;
    }
    lVar10 = (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                       (**(long **)(param_1 + 0x70) + 0x400,0x80,0x10);
    puVar7 = PTR_DAT_047d96b0;
    while (lVar10 == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x20);
      *(long **)(param_1 + 0x70) = plVar1;
      if (plVar1 == *(long **)(param_1 + 0x40)) {
        FUN_012d0398(param_1);
      }
      else {
        lVar10 = *plVar1;
        *(undefined8 *)(lVar10 + 0x410) = 0;
        *(undefined2 *)(lVar10 + 0x418) = 0;
        *(undefined **)(lVar10 + 0x400) = puVar7 + 0x10;
        *(undefined **)(lVar10 + 0x408) = puVar7 + 0x128;
        *(long *)(lVar10 + 0x420) = lVar10;
        *(long *)(lVar10 + 0x428) = lVar10;
        *(undefined8 *)(lVar10 + 0x430) = 0x400;
      }
      lVar10 = (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                         (**(long **)(param_1 + 0x70) + 0x400,0x80,0x10);
    }
  }
  FUN_0277c4f0(lVar10,param_3);
  local_48 = (undefined8 *)0x0;
  FUN_00d0a71c(&local_48,param_2);
  FUN_0277c570(param_1,(long)register0x00000008 + -0x30,&local_48);
  puVar8 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_48 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_48 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


