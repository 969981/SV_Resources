/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9ceb8; name: FUN_01e9ceb8
 */


undefined8 FUN_01e9ceb8(long param_1)

{
  char *pcVar1;
  long *plVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_88 [2];
  long local_78;
  undefined8 *local_70 [2];
  undefined1 auStack_60 [8];
  long *local_58;
  undefined **local_50;
  undefined4 local_48;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    local_50 = &PTR_LAB_04553a68;
    local_48 = 0;
    uVar9 = FUN_01cf7e20();
    FUN_01e9fa84(&local_78,uVar9);
    pcVar1 = (char *)(param_1 + 0xd8);
    FUN_01e9faf8(pcVar1,&local_78);
    FUN_01e9eb34(&local_78);
    local_78 = param_1;
    FUN_01e9a80c(local_70,param_1);
    FUN_01e9fb38(local_88,param_1 + 0xe0);
    FUN_01e9fbc8(auStack_60,param_1 + 0x50,&local_50,&local_78,local_88);
    FUN_01e9f230(param_1 + 0xc0,auStack_60);
    if (local_58 != (long *)0x0) {
      plVar2 = local_58 + 1;
      do {
        lVar10 = *plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_01e9eb34(local_88);
    if (local_70[0] != (undefined8 *)0x0) {
      psVar3 = (short *)(local_70[0] + 3);
      do {
        sVar5 = *psVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_70[0] + 0x1c);
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
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_88[0] = *local_70[0];
          FUN_00c44438(lVar10 + 0x8040,local_88);
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
    if (*(long *)(param_1 + 200) != 0) {
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x40) = 4;
      return 1;
    }
    FUN_01e9eb8c(param_1 + 0xc0);
    if (*pcVar1 != '\0') {
      FUN_01e9eb34(param_1 + 0xe0);
      *pcVar1 = '\0';
      return 0;
    }
  }
  return 0;
}


