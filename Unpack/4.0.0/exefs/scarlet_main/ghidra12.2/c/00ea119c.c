/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ea119c; name: FUN_00ea119c
 */


void FUN_00ea119c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long *local_48;
  long *local_40;
  long *local_38;
  long *local_28;
  
  if (*(long **)(param_1 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0xb8))(0x3f800000);
    (**(code **)(**(long **)(param_1 + 0x70) + 0xd8))(&local_28);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x88))(0x3f800000);
    }
    iVar5 = (**(code **)(**(long **)(param_1 + 0x70) + 0x98))();
    if (iVar5 != 0) {
      uVar8 = 0;
      do {
        (**(code **)(**(long **)(param_1 + 0x70) + 0xa0))
                  (&local_38,*(long **)(param_1 + 0x70),uVar8);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0xf8))(0x3f800000);
          (**(code **)(*local_38 + 0x80))(&local_40);
          if (local_40 != (long *)0x0) {
            (**(code **)(*local_40 + 0x88))(0x3f800000);
          }
          (**(code **)(*local_38 + 0x90))(&local_48);
          if (local_48 != (long *)0x0) {
            (**(code **)(*local_48 + 0x88))(0x3f800000);
            if (local_48 != (long *)0x0) {
              lVar7 = local_48[6];
              psVar1 = (short *)(lVar7 + 0x1a);
              do {
                sVar2 = *psVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar4) {
                  *psVar1 = sVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar2 == 1) {
                *(undefined8 *)(lVar7 + 0x10) = 0;
                (**(code **)(*local_48 + 0x50))();
              }
              else if (sVar2 == 0) goto LAB_00ea13cc;
            }
          }
          if (local_40 != (long *)0x0) {
            lVar7 = local_40[6];
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*local_40 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_00ea13cc;
          }
          if (local_38 != (long *)0x0) {
            lVar7 = local_38[6];
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*local_38 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_00ea13cc;
          }
        }
        uVar8 = uVar8 + 1;
        uVar6 = (**(code **)(**(long **)(param_1 + 0x70) + 0x98))();
      } while (uVar8 < uVar6);
    }
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_00ea13cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


