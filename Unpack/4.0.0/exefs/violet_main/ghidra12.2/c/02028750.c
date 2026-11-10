/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02028750; name: FUN_02028750
 */


void FUN_02028750(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  short sVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  lVar12 = *param_2;
  lVar11 = *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0xe4));
  if ((lVar11 == 0) && (lVar11 = *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 8)), lVar11 != 0)) {
    plVar10 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
    if (((*PTR_DAT_047db160 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047db160), iVar6 != 0)) {
      uVar8 = FUN_01fb90e4();
      *(undefined8 *)PTR_DAT_047db168 = uVar8;
      __cxa_guard_release(PTR_DAT_047db160);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)PTR_DAT_047db168) goto LAB_02028800;
    }
    lVar11 = 0;
LAB_02028800:
    *(long *)(lVar12 + (ulong)*(uint *)(param_1 + 0xe4)) = lVar11;
  }
  if ((((*(long *)(lVar11 + 0x88) != 0) && (*(short *)(*(long *)(lVar11 + 0x88) + 0x1a) != 0)) ||
      (uVar7 = FUN_013f7d04(lVar11 + 0x70), (uVar7 & 1) != 0)) &&
     ((*(long *)(lVar11 + 0x80) != 0 && (FUN_00e3353c(local_40), local_40[0] != (undefined8 *)0x0)))
     ) {
    if (*(short *)((long)local_40[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40[0] + 0x1a);
      sVar9 = *(short *)((long)local_40[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02028860;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02028860:
          bVar5 = false;
        }
        if (bVar5) {
          plVar10 = (long *)0x0;
          if (local_40[0][2] != 0) {
            plVar10 = (long *)(local_40[0][2] + -0x28);
          }
          goto LAB_02028888;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar10 = (long *)0x0;
LAB_02028888:
    psVar1 = (short *)(local_40[0] + 3);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_18 = *local_40[0];
        FUN_00c44438(lVar11 + 0x8040,&local_18);
      }
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar10 != (long *)0x0) {
      FUN_01e139b8(plVar10);
      lVar11 = plVar10[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


