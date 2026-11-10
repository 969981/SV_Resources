/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01195974; name: FUN_01195974
 */


ulong FUN_01195974(long param_1)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  short sVar10;
  uint uVar11;
  long *plVar12;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  FUN_01195bb4(local_48,param_1,*(undefined4 *)(param_1 + 0x108));
  if (local_48[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_48[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48[0] + 0x1a);
      sVar10 = *(short *)((long)local_48[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar10) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01195a18;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01195a18:
          bVar6 = false;
        }
        if (bVar6) {
          plVar12 = (long *)0x0;
          if (local_48[0][2] != 0) {
            plVar12 = (long *)(local_48[0][2] + -0x28);
          }
          goto LAB_01195a44;
        }
        sVar10 = sVar4;
      } while (sVar4 != 0);
    }
    plVar12 = (long *)0x0;
LAB_01195a44:
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar10 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = *local_48[0];
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar12 != (long *)0x0) {
      uVar8 = FUN_01dcd22c(plVar12);
      lVar9 = plVar12[6];
      uVar11 = (uint)(uVar8 >> 0x20);
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_011959a8;
    }
  }
  uVar11 = 0;
  uVar8 = 0;
LAB_011959a8:
  uVar3 = uVar11 - 1;
  if (*(int *)(param_1 + 0x108) != 2) {
    uVar3 = uVar11;
  }
  uVar11 = uVar11 - 1;
  if (*(int *)(param_1 + 0x108) != 0) {
    uVar11 = uVar3;
  }
  return uVar8 & 0xffffffff | (ulong)(uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU)) << 0x20;
}


