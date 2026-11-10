/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01172ab0; name: FUN_01172ab0
 */


void FUN_01172ab0(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_18;
  
  plVar4 = *(long **)(param_1 + 0x138);
  plVar6 = *(long **)(param_1 + 0x140);
  if (plVar4 != plVar6) {
    plVar9 = (long *)PTR_DAT_047d3918;
    if ((*plVar4 != 0) && (lVar11 = *(long *)(*plVar4 + 0x10), lVar11 != 0)) {
      local_50 = *(undefined8 *)(lVar11 + 0x340);
      uStack_48 = *(undefined8 *)(lVar11 + 0x348);
      local_40 = *(undefined8 *)(lVar11 + 0x350);
      local_38 = *(long **)(lVar11 + 0x358);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x18))();
      }
      FUN_0147af14(&local_50);
      plVar9 = (long *)PTR_DAT_047d3918;
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
        plVar9 = (long *)PTR_DAT_047d3918;
      }
    }
    while (plVar4 = plVar4 + 2, PTR_DAT_047d3918 = (undefined *)plVar9, plVar4 != plVar6) {
      if ((*plVar4 != 0) && (lVar11 = *(long *)(*plVar4 + 0x10), lVar11 != 0)) {
        local_50 = *(undefined8 *)(lVar11 + 0x340);
        uStack_48 = *(undefined8 *)(lVar11 + 0x348);
        local_40 = *(undefined8 *)(lVar11 + 0x350);
        local_38 = *(long **)(lVar11 + 0x358);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x18))();
        }
        FUN_0147af14(&local_50);
        plVar9 = (long *)PTR_DAT_047d3918;
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
          plVar9 = (long *)PTR_DAT_047d3918;
        }
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0x138);
    puVar12 = *(undefined8 **)(param_1 + 0x140);
    if (puVar5 != puVar12) {
      do {
        puVar12 = puVar12 + -2;
        puVar13 = (undefined8 *)*puVar12;
        if (puVar13 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar13 + 3);
          do {
            sVar3 = *psVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar8) {
              *psVar1 = sVar3 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)puVar13 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar8) {
                *piVar2 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *plVar9 = lVar11;
              local_18 = *puVar13;
              FUN_00c44438(lVar11 + 0x8040,&local_18);
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
      } while (puVar12 != puVar5);
      *(undefined8 **)(param_1 + 0x140) = puVar5;
    }
  }
  return;
}


