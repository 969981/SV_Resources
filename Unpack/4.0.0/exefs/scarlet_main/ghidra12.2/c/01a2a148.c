/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a2a148; name: FUN_01a2a148
 */


void FUN_01a2a148(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long *local_58;
  
  lVar12 = *(long *)(param_4 + 0x38);
  if (*(int *)(lVar12 + 0x88) != 0) {
    uVar13 = 0;
    do {
      FUN_019a630c(&local_58,lVar12,uVar13);
      uVar7 = FUN_01a2a350(lVar12,uVar13);
      uVar8 = FUN_011e2da8(*(undefined8 *)(param_2 + 0x290),uVar7);
      if (uVar8 != 5) {
        if ((uVar8 & 0xff) < 5) {
          plVar14 = *(long **)(param_3 + (ulong)(uVar8 & 0xff) * 8 + 0xa0);
          if (plVar14 != (long *)0x0) {
            plVar1 = plVar14 + 5;
            do {
              lVar10 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = (int)lVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            do {
              lVar10 = *plVar1;
              iVar6 = (int)lVar10 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *(int *)plVar1 = iVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
            else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        else {
          plVar14 = (long *)0x0;
        }
        uVar9 = FUN_014bb634(param_2);
        lVar10 = FUN_011e2dd4(uVar9,uVar7);
        if (lVar10 == 0) {
          uVar11 = 6;
        }
        else {
          uVar11 = *(undefined1 *)(lVar10 + 4);
        }
        lVar10 = FUN_014bb644(plVar14,uVar11);
        if (lVar10 != 0) {
          FUN_014bb660(local_58,lVar10,uVar7,param_1,param_2,uVar8);
        }
      }
      if (local_58 != (long *)0x0) {
        lVar10 = local_58[6];
        psVar2 = (short *)(lVar10 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*local_58 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(lVar12 + 0x88));
  }
  return;
}


