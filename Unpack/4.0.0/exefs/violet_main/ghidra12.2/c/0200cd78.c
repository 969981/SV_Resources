/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0200cd78; name: FUN_0200cd78
 */


void FUN_0200cd78(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  short sVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long local_40 [2];
  
  lVar12 = *param_4;
  lVar11 = *(long *)(lVar12 + (ulong)*(uint *)(param_2 + 0xe4));
  if ((lVar11 == 0) && (lVar11 = *(long *)(lVar12 + (ulong)*(uint *)(param_2 + 8)), lVar11 != 0)) {
    plVar10 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
    if (((*PTR_DAT_047db160 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047db160), iVar5 != 0)) {
      uVar8 = FUN_01fb90e4();
      *(undefined8 *)PTR_DAT_047db168 = uVar8;
      __cxa_guard_release(PTR_DAT_047db160);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)PTR_DAT_047db168) goto LAB_0200ce4c;
    }
    lVar11 = 0;
LAB_0200ce4c:
    *(long *)(lVar12 + (ulong)*(uint *)(param_2 + 0xe4)) = lVar11;
  }
  if ((((*(long *)(lVar11 + 0x88) != 0) && (*(short *)(*(long *)(lVar11 + 0x88) + 0x1a) != 0)) ||
      (uVar6 = FUN_013f7d04(lVar11 + 0x70), (uVar6 & 1) != 0)) &&
     ((*(long *)(lVar11 + 0x80) != 0 && (FUN_00e92dbc(local_40), local_40[0] != 0)))) {
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
          if (cVar3 != '\0') goto LAB_0200ce8c;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0200ce8c:
          bVar4 = false;
        }
        if (bVar4) {
          plVar10 = (long *)0x0;
          if (*(long *)(local_40[0] + 0x10) != 0) {
            plVar10 = (long *)(*(long *)(local_40[0] + 0x10) + -0x28);
          }
          goto LAB_0200cea0;
        }
        sVar9 = sVar2;
      } while (sVar2 != 0);
    }
    plVar10 = (long *)0x0;
LAB_0200cea0:
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
    if (plVar10 != (long *)0x0) {
      FUN_0200b034(plVar10);
      puVar7 = (undefined1 *)FUN_013e253c();
      *param_1 = *puVar7;
      lVar11 = plVar10[6];
      psVar1 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
        return;
      }
      if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return;
    }
  }
  *param_1 = *PTR_DAT_047db188;
  return;
}


