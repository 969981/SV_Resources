/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011a2d48; name: FUN_011a2d48
 */


undefined1  [16] FUN_011a2d48(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0xb4) == 2) {
    if (((*PTR_DAT_047d7d30 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar7 != 0)) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
    lVar8 = *(long *)PTR_DAT_047d7d38;
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    *(long *)PTR_DAT_047d7d40 = lVar8;
    FUN_00d0a71c(&local_38,lVar8 + 0x378);
    if (local_38 != (undefined8 *)0x0) {
      if (*(short *)((long)local_38 + 0x1a) != 0) {
        if (local_38 == (undefined8 *)0x0) goto LAB_011a2d70;
        if (*(short *)((long)local_38 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_38 + 0x1a);
          sVar9 = *(short *)((long)local_38 + 0x1a);
          do {
            sVar3 = *psVar1;
            if (sVar3 == sVar9) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_011a2e10;
              bVar5 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_011a2e10:
              bVar5 = false;
            }
            if (bVar5) {
              if (local_38[2] != 0) {
                plVar10 = (long *)(local_38[2] + -0x28);
                lVar8 = (**(code **)(*plVar10 + 0x68))(plVar10);
                uVar11 = *(undefined8 *)(lVar8 + 0x30);
                *(ulong *)(param_1 + 0x78) = *(ulong *)(lVar8 + 0x38) & 0xffffffff;
                *(undefined8 *)(param_1 + 0x70) = uVar11;
                (**(code **)(*plVar10 + 0x60))(plVar10);
              }
              break;
            }
            sVar9 = sVar3;
          } while (sVar3 != 0);
        }
      }
      puVar6 = local_38;
      if (local_38 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_38 + 3);
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
          piVar2 = (int *)((long)local_38 + 0x1c);
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_28 = *puVar6;
            FUN_00c44438(lVar8 + 0x8040,&local_28);
          }
        }
        else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
  }
  else if ((((*(int *)(param_1 + 0xb4) == 1) && (*(long *)(param_1 + 0x60) != 0)) &&
           (*(short *)(*(long *)(param_1 + 0x60) + 0x1a) != 0)) &&
          ((lVar8 = *(long *)(param_1 + 0x60), lVar8 != 0 && (*(short *)(lVar8 + 0x1a) != 0)))) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_011a2e78;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_011a2e78:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar8 + 0x10) != 0) {
          plVar10 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
          lVar8 = (**(code **)(*plVar10 + 0x68))(plVar10);
          uVar11 = *(undefined8 *)(lVar8 + 0x30);
          *(ulong *)(param_1 + 0x78) = *(ulong *)(lVar8 + 0x38) & 0xffffffff;
          *(undefined8 *)(param_1 + 0x70) = uVar11;
          (**(code **)(*plVar10 + 0x60))(plVar10);
        }
        break;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
LAB_011a2d70:
  return *(undefined1 (*) [16])(param_1 + 0x70);
}


