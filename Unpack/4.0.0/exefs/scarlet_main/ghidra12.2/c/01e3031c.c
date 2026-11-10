/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3031c; name: FUN_01e3031c
 */


void FUN_01e3031c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *local_48;
  undefined8 local_28;
  
  puVar8 = (undefined8 *)
           (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                     (**(long **)(param_1 + 0x70) + 0x400,0x20,8);
  if (puVar8 == (undefined8 *)0x0) {
    plVar9 = (long *)(*(long *)(param_1 + 0x70) + 0x20);
    *(long **)(param_1 + 0x70) = plVar9;
    if (plVar9 == *(long **)(param_1 + 0x40)) {
      FUN_012d0398(param_1);
    }
    else {
      lVar10 = *plVar9;
      *(undefined8 *)(lVar10 + 0x410) = 0;
      puVar6 = PTR_DAT_047d96b0;
      *(undefined2 *)(lVar10 + 0x418) = 0;
      *(long *)(lVar10 + 0x420) = lVar10;
      *(long *)(lVar10 + 0x428) = lVar10;
      *(undefined **)(lVar10 + 0x408) = puVar6 + 0x128;
      *(undefined **)(lVar10 + 0x400) = puVar6 + 0x10;
      *(undefined8 *)(lVar10 + 0x430) = 0x400;
    }
    puVar8 = (undefined8 *)
             (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                       (**(long **)(param_1 + 0x70) + 0x400,0x20,8);
    puVar6 = PTR_DAT_047d96b0;
    while (puVar8 == (undefined8 *)0x0) {
      plVar9 = (long *)(*(long *)(param_1 + 0x70) + 0x20);
      *(long **)(param_1 + 0x70) = plVar9;
      if (plVar9 == *(long **)(param_1 + 0x40)) {
        FUN_012d0398(param_1);
      }
      else {
        lVar10 = *plVar9;
        *(undefined8 *)(lVar10 + 0x410) = 0;
        *(undefined2 *)(lVar10 + 0x418) = 0;
        *(undefined **)(lVar10 + 0x400) = puVar6 + 0x10;
        *(undefined **)(lVar10 + 0x408) = puVar6 + 0x128;
        *(long *)(lVar10 + 0x420) = lVar10;
        *(long *)(lVar10 + 0x428) = lVar10;
        *(undefined8 *)(lVar10 + 0x430) = 0x400;
      }
      puVar8 = (undefined8 *)
               (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                         (**(long **)(param_1 + 0x70) + 0x400,0x20,8);
    }
  }
  *puVar8 = *param_3;
  puVar8[1] = param_3[1];
  puVar8[2] = param_3[2];
  plVar9 = (long *)param_3[3];
  puVar8[3] = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  local_48 = (undefined8 *)0x0;
  FUN_00d0a71c(&local_48,param_2);
  FUN_01e305f4(param_1,(long)register0x00000008 + -0x30,&local_48,&local_28);
  puVar8 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
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
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_28 = *puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_28);
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
  return;
}


