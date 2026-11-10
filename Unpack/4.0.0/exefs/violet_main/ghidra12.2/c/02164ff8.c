/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02164ff8; name: FUN_02164ff8
 */


void FUN_02164ff8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_48;
  
  puVar8 = (undefined4 *)
           (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                     (**(long **)(param_1 + 0x70) + 0x400,0x28,8);
  if (puVar8 == (undefined4 *)0x0) {
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
    puVar8 = (undefined4 *)
             (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                       (**(long **)(param_1 + 0x70) + 0x400,0x28,8);
    puVar6 = PTR_DAT_047d96b0;
    while (puVar8 == (undefined4 *)0x0) {
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
      puVar8 = (undefined4 *)
               (**(code **)(*(long *)(**(long **)(param_1 + 0x70) + 0x400) + 0x10))
                         (**(long **)(param_1 + 0x70) + 0x400,0x28,8);
    }
  }
  puVar6 = PTR_DAT_047d3e30;
  *puVar8 = *param_3;
  *(undefined8 *)(puVar8 + 2) = *(undefined8 *)puVar6;
  *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar6 + 0x10);
  plVar9 = *(long **)(puVar6 + 0x18);
  *(long **)(puVar8 + 8) = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  local_48 = 0;
  FUN_00d0a71c(&local_48,param_2);
  FUN_021652e0(param_1,(long)register0x00000008 + -0x30,&local_48);
  if (local_48 != 0) {
    psVar1 = (short *)(local_48 + 0x18);
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
      piVar2 = (int *)(local_48 + 0x1c);
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
        FUN_00c44438(lVar10 + 0x8040,(long)register0x00000008 + -0x28);
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
  return;
}


