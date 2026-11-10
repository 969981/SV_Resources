/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01828730; name: FUN_01828730
 */


void FUN_01828730(undefined8 param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  undefined4 uVar11;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  plVar8 = *(long **)(param_2 + 0xd90);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(local_40);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    if ((long *)local_40[0][2] == plVar8 + 5) {
      FUN_01ab09f0(&local_50,local_40);
    }
    puVar6 = local_40[0];
    if (local_40[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40[0] + 3);
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
        piVar2 = (int *)((long)local_40[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_28 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_28);
        }
      }
      else if (sVar10 == 0) goto LAB_018288dc;
    }
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      if (*(short *)((long)local_50 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_50 + 0x1a);
        sVar10 = *(short *)((long)local_50 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_018287e8;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_018287e8:
            bVar5 = false;
          }
          if (bVar5) {
            plVar8 = (long *)0x0;
            if (local_50[2] != 0) {
              plVar8 = (long *)(local_50[2] + -0x28);
            }
            goto LAB_01828810;
          }
          sVar10 = sVar3;
        } while (sVar3 != 0);
      }
      plVar8 = (long *)0x0;
LAB_01828810:
      psVar1 = (short *)(local_50 + 3);
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
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_40[0] = (undefined8 *)*puVar6;
          FUN_00c44438(lVar9 + 0x8040,local_40);
        }
      }
      else if (sVar10 == 0) {
LAB_018288dc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar8 != (long *)0x0) {
        lVar9 = FUN_01f8d91c(plVar8);
        uVar11 = FUN_015ecb28(param_1,plVar8,*(undefined4 *)(lVar9 + 8));
        *(undefined4 *)(param_2 + 0x2d4) = uVar11;
        lVar9 = FUN_01f8d91c(plVar8);
        uVar11 = FUN_015ecb28(param_1,plVar8,*(undefined4 *)(lVar9 + 8));
        *(undefined4 *)(param_2 + 0x864) = uVar11;
        lVar9 = plVar8[6];
        psVar1 = (short *)(lVar9 + 0x1a);
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
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
        }
        else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


