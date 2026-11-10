/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02028d30; name: FUN_02028d30
 */


void FUN_02028d30(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  short sVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  lVar13 = *param_4;
  lVar12 = *(long *)(lVar13 + (ulong)*(uint *)(param_2 + 0xe4));
  if ((lVar12 == 0) && (lVar12 = *(long *)(lVar13 + (ulong)*(uint *)(param_2 + 8)), lVar12 != 0)) {
    plVar11 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x28))((undefined8 *)(lVar12 + 0x28));
    if (((*PTR_DAT_047db160 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047db160), iVar6 != 0)) {
      uVar9 = FUN_01fb90e4();
      *(undefined8 *)PTR_DAT_047db168 = uVar9;
      __cxa_guard_release(PTR_DAT_047db160);
    }
    for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11 == (long *)PTR_DAT_047db168) goto LAB_02028df4;
    }
    lVar12 = 0;
LAB_02028df4:
    *(long *)(lVar13 + (ulong)*(uint *)(param_2 + 0xe4)) = lVar12;
  }
  if ((((*(long *)(lVar12 + 0x88) != 0) && (*(short *)(*(long *)(lVar12 + 0x88) + 0x1a) != 0)) ||
      (uVar7 = FUN_013f7d04(lVar12 + 0x70), (uVar7 & 1) != 0)) &&
     ((*(long *)(lVar12 + 0x80) != 0 && (FUN_00e3353c(local_48), local_48[0] != (undefined8 *)0x0)))
     ) {
    if (*(short *)((long)local_48[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48[0] + 0x1a);
      sVar10 = *(short *)((long)local_48[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02028e54;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02028e54:
          bVar5 = false;
        }
        if (bVar5) {
          plVar11 = (long *)0x0;
          if (local_48[0][2] != 0) {
            plVar11 = (long *)(local_48[0][2] + -0x28);
          }
          goto LAB_02028e7c;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
    plVar11 = (long *)0x0;
LAB_02028e7c:
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_48[0] + 0x1c);
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
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_38 = *local_48[0];
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar11 != (long *)0x0) {
      FUN_01a2e3d4(plVar11);
      puVar8 = (undefined1 *)FUN_013e253c();
      *param_1 = *puVar8;
      lVar12 = plVar11[6];
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
        return;
      }
      if (sVar10 == 0) {
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


