/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02996fb0; name: FUN_02996fb0
 */


void FUN_02996fb0(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long *local_68;
  long *local_60;
  long *local_58;
  
  iVar8 = 0;
  do {
    lVar6 = FUN_011e1c08(*(undefined8 *)(param_1 + 0x40),iVar8);
    if (lVar6 != 0) {
      FUN_00f1116c(&local_58);
      iVar5 = FUN_019a8690(local_58);
      if (iVar5 != 0) {
        iVar9 = 0;
        do {
          FUN_019a8928(&local_60,local_58,iVar9);
          uVar10 = *(undefined8 *)(param_1 + 0x68);
          local_68 = local_60;
          if (local_60 != (long *)0x0) {
            lVar6 = local_60[6];
            if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar6 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
              *(undefined8 *)(lVar6 + 8) = uVar7;
              *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
            }
            else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
          }
          FUN_0123d4a0(uVar10,&local_68);
          if (local_68 != (long *)0x0) {
            lVar6 = local_68[6];
            psVar1 = (short *)(lVar6 + 0x1a);
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
              *(undefined8 *)(lVar6 + 0x10) = 0;
              (**(code **)(*local_68 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_0299717c;
          }
          if (local_60 != (long *)0x0) {
            lVar6 = local_60[6];
            psVar1 = (short *)(lVar6 + 0x1a);
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
              *(undefined8 *)(lVar6 + 0x10) = 0;
              (**(code **)(*local_60 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_0299717c;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar5);
      }
      if (local_58 != (long *)0x0) {
        lVar6 = local_58[6];
        psVar1 = (short *)(lVar6 + 0x1a);
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
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_58 + 0x50))();
        }
        else if (sVar2 == 0) {
LAB_0299717c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    iVar8 = iVar8 + 1;
    if (iVar8 == 5) {
      return;
    }
  } while( true );
}


