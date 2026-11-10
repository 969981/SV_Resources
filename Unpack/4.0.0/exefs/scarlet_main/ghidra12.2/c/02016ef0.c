/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02016ef0; name: FUN_02016ef0
 */


void FUN_02016ef0(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

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
  undefined1 uVar10;
  short sVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  lVar14 = *param_4;
  lVar13 = *(long *)(lVar14 + (ulong)*(uint *)(param_2 + 0xe4));
  if ((lVar13 == 0) && (lVar13 = *(long *)(lVar14 + (ulong)*(uint *)(param_2 + 8)), lVar13 != 0)) {
    plVar12 = (long *)(*(code *)**(undefined8 **)(lVar13 + 0x28))((undefined8 *)(lVar13 + 0x28));
    if (((*PTR_DAT_047db160 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047db160), iVar6 != 0)) {
      uVar9 = FUN_01fb90e4();
      *(undefined8 *)PTR_DAT_047db168 = uVar9;
      __cxa_guard_release(PTR_DAT_047db160);
    }
    for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (plVar12 == (long *)PTR_DAT_047db168) goto LAB_02016fc8;
    }
    lVar13 = 0;
LAB_02016fc8:
    *(long *)(lVar14 + (ulong)*(uint *)(param_2 + 0xe4)) = lVar13;
  }
  if ((((*(long *)(lVar13 + 0x88) != 0) && (*(short *)(*(long *)(lVar13 + 0x88) + 0x1a) != 0)) ||
      (uVar7 = FUN_013f7d04(lVar13 + 0x70), (uVar7 & 1) != 0)) && (*(long *)(lVar13 + 0x80) != 0)) {
    if ((*(char *)(*(long *)(lVar13 + 0x80) + 0x144) != '\0') &&
       (*(char *)(*param_4 + (ulong)*(uint *)(param_2 + 0xf0)) == '\0')) {
      puVar8 = (undefined1 *)FUN_015c0588();
      uVar10 = *puVar8;
      goto LAB_02016f68;
    }
    FUN_00e3353c(local_50);
    if (local_50[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_50[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_50[0] + 0x1a);
        sVar11 = *(short *)((long)local_50[0] + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar11) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_02017034;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_02017034:
            bVar5 = false;
          }
          if (bVar5) {
            plVar12 = (long *)0x0;
            if (local_50[0][2] != 0) {
              plVar12 = (long *)(local_50[0][2] + -0x28);
            }
            goto LAB_0201705c;
          }
          sVar11 = sVar3;
        } while (sVar3 != 0);
      }
      plVar12 = (long *)0x0;
LAB_0201705c:
      psVar1 = (short *)(local_50[0] + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_50[0] + 0x1c);
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
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_28 = *local_50[0];
          FUN_00c44438(lVar13 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar12 != (long *)0x0) {
        uVar7 = FUN_020095c0(plVar12);
        if ((uVar7 & 1) == 0) {
          puVar8 = (undefined1 *)FUN_015a7158();
        }
        else {
          puVar8 = (undefined1 *)FUN_015c0588();
        }
        *param_1 = *puVar8;
        lVar13 = plVar12[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
          return;
        }
        if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
    }
  }
  uVar10 = *PTR_DAT_047db188;
LAB_02016f68:
  *param_1 = uVar10;
  return;
}


