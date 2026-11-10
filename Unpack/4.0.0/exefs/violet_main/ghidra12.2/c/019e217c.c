/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e217c; name: FUN_019e217c
 */


void FUN_019e217c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *local_40 [2];
  undefined1 auStack_30 [16];
  undefined8 local_8;
  
  uVar7 = FUN_01a62708();
  if ((*(char *)(param_1 + 0xd0) == '\0') || ((uVar7 & 1) == 0)) {
    FUN_019e23b4(local_40);
    if (local_40[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40[0] + 3);
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
        piVar2 = (int *)((long)local_40[0] + 0x1c);
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
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_8 = *local_40[0];
          FUN_00c44438(lVar10 + 0x8040,&local_8);
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
  else {
    FUN_01e98950(auStack_30,param_1 + 0xd8);
    FUN_019ccdb4(auStack_30);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x90);
  if (puVar8 != (undefined8 *)0x0) {
    lVar10 = *(long *)(param_1 + 0xf0);
    *(undefined4 *)(puVar8 + 4) = 2;
    if (puVar8[5] == lVar10) {
      *(undefined1 *)(puVar8 + 3) = 1;
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((long)puVar8 + 0x1c);
    }
    else {
      *(undefined1 *)(puVar8 + 3) = 0;
    }
    puVar8 = (undefined8 *)*puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      lVar10 = *(long *)(param_1 + 0xf0);
      *(undefined4 *)(puVar8 + 4) = 2;
      if (puVar8[5] == lVar10) {
        *(undefined1 *)(puVar8 + 3) = 1;
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((long)puVar8 + 0x1c);
      }
      else {
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      plVar9 = (long *)*puVar8;
      if (plVar9 != (long *)0x0) {
        lVar10 = *(long *)(param_1 + 0xf0);
        *(undefined4 *)(plVar9 + 4) = 2;
        if (plVar9[5] == lVar10) {
          *(undefined1 *)(plVar9 + 3) = 1;
          *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((long)plVar9 + 0x1c);
        }
        else {
          *(undefined1 *)(plVar9 + 3) = 0;
        }
        for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          lVar10 = *(long *)(param_1 + 0xf0);
          *(undefined4 *)(plVar9 + 4) = 2;
          if (plVar9[5] == lVar10) {
            *(undefined1 *)(plVar9 + 3) = 1;
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((long)plVar9 + 0x1c);
          }
          else {
            *(undefined1 *)(plVar9 + 3) = 0;
          }
        }
      }
    }
  }
  return;
}


