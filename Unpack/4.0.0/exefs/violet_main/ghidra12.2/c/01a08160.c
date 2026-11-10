/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a08160; name: FUN_01a08160
 */


void FUN_01a08160(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined1 local_38;
  undefined2 local_30 [4];
  undefined8 local_28;
  undefined8 local_8;
  
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar9 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar9;
  if (lVar9 != 0) {
    FUN_01793e80(lVar9,param_1 + 0x30);
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar9 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar9;
  if (lVar9 != 0) {
    local_30[0] = 0x2a;
    local_40 = 0;
    if (param_1 != 0) {
      local_40 = param_1 + 0x28;
    }
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    local_38 = 1;
    FUN_0178e4dc(&local_28,lVar9,local_30,&local_50);
    plVar10 = *(long **)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x218) = 0;
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar7 = local_28;
    puVar6 = local_50;
    local_28 = 0;
    *(undefined8 *)(param_1 + 0x218) = uVar7;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
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
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if ((*PTR_DAT_047d3908 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908);
            if (iVar8 != 0) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_8 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_8);
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
  }
  FUN_01a08408(param_1);
  return;
}


