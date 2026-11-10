/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147382c; name: FUN_0147382c
 */


uint FUN_0147382c(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  short sVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long local_40 [2];
  
  lVar12 = *param_2;
  lVar10 = *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0x5c));
  if ((lVar10 == 0) && (lVar10 = *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0x4c)), lVar10 != 0))
  {
    plVar11 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
    if (((*PTR_DAT_047db160 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047db160), iVar6 != 0)) {
      uVar8 = FUN_01fb90e4();
      *(undefined8 *)PTR_DAT_047db168 = uVar8;
      __cxa_guard_release(PTR_DAT_047db160);
    }
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11 == (long *)PTR_DAT_047db168) goto LAB_014738ec;
    }
    lVar10 = 0;
LAB_014738ec:
    *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0x5c)) = lVar10;
  }
  if ((((*(long *)(lVar10 + 0xd8) != 0) && (*(short *)(*(long *)(lVar10 + 0xd8) + 0x1a) != 0)) ||
      (uVar7 = FUN_01473a8c(lVar10 + 0xc0), (uVar7 & 1) != 0)) &&
     ((*(long *)(lVar10 + 0xd0) != 0 &&
      (FUN_00e12508(local_40,*(undefined8 *)(*(long *)(lVar10 + 0xd0) + 0x3a8)), local_40[0] != 0)))
     ) {
    if (*(short *)(local_40[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_40[0] + 0x1a);
      sVar9 = *(short *)(local_40[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0147393c;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0147393c:
          bVar4 = false;
        }
        if (bVar4) {
          plVar11 = (long *)0x0;
          if (*(long *)(local_40[0] + 0x10) != 0) {
            plVar11 = (long *)(*(long *)(local_40[0] + 0x10) + -0x28);
          }
          goto LAB_01473950;
        }
        sVar9 = sVar2;
      } while (sVar2 != 0);
    }
    plVar11 = (long *)0x0;
LAB_01473950:
    psVar1 = (short *)(local_40[0] + 0x18);
    do {
      sVar9 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      FUN_0116e168();
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar11 != (long *)0x0) {
      uVar5 = FUN_01473e20(plVar11,*(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)),
                           *param_2 + (ulong)*(uint *)(param_1 + 100));
      lVar10 = plVar11[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_01473890;
    }
  }
  uVar5 = 0;
LAB_01473890:
  return uVar5 & 1;
}


