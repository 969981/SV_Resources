/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019508d8; name: FUN_019508d8
 */


void FUN_019508d8(undefined1 param_1 [16],long param_2,int param_3)

{
  uint uVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  if ((param_3 == 0) && (FUN_00e95abc(local_48,param_2), local_48[0] != (undefined8 *)0x0)) {
    if (*(short *)((long)local_48[0] + 0x1a) != 0) {
      if (local_48[0] == (undefined8 *)0x0) goto LAB_019508f8;
      if (*(short *)((long)local_48[0] + 0x1a) != 0) {
        psVar2 = (short *)((long)local_48[0] + 0x1a);
        sVar9 = *(short *)((long)local_48[0] + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar9) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_019509a4;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_019509a4:
            bVar6 = false;
          }
          if (bVar6) {
            lVar8 = local_48[0][2];
            if (lVar8 != 0) {
              plVar10 = (long *)(lVar8 + -0x28);
              auVar11 = FUN_019587b4(plVar10);
              *(undefined1 (*) [16])(param_2 + 0x3c0) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x3d0) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x400) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x410) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x420) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x430) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x440) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x450) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x460) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x470) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x480) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x490) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x4a0) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x4b0) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x4c0) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x4d0) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x4e0) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x4f0) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x500) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x510) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x520) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x530) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x540) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x550) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x560) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x570) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x580) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x590) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x5a0) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x5b0) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x3e0) = auVar11;
              *(undefined1 (*) [16])(param_2 + 0x3f0) = auVar11;
              lVar8 = *(long *)(lVar8 + 0x70);
              psVar2 = (short *)(lVar8 + 0x1a);
              do {
                sVar9 = *psVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar6) {
                  *psVar2 = sVar9 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar9 == 1) {
                *(undefined8 *)(lVar8 + 0x10) = 0;
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
            break;
          }
          sVar9 = sVar4;
        } while (sVar4 != 0);
      }
    }
    if (local_48[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_48[0] + 3);
      do {
        sVar9 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar9 == 1) {
        piVar3 = (int *)((long)local_48[0] + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_38 = *local_48[0];
          FUN_00c44438(lVar8 + 0x8040,&local_38);
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
LAB_019508f8:
  uVar1 = param_3 + 4;
  if ((param_3 + 2U | uVar1) < 0x20) {
    lVar8 = param_2 + (ulong)(param_3 + 2U) * 0x10;
    *(long *)(lVar8 + 0x3c8) = param_1._8_8_;
    *(long *)(lVar8 + 0x3c0) = param_1._0_8_;
    if (*(int *)(param_2 + 0x3b8) < (int)uVar1) {
      *(uint *)(param_2 + 0x3b8) = uVar1;
    }
  }
  return;
}


