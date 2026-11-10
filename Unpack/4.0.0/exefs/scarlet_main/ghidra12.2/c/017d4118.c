/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d4118; name: FUN_017d4118
 */


void FUN_017d4118(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long lVar11;
  undefined1 auStack_38 [8];
  
  lVar5 = param_1[1];
  *(undefined1 *)(*param_1 + 0x40) = 0;
  lVar9 = param_1[2];
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_017d4188;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_017d4188:
        bVar4 = false;
      }
      if (bVar4) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        if ((*(long *)(*param_1 + 0x58) != 0) &&
           ((*(byte *)(*(long *)(*param_1 + 0x58) + 0x1e8) & 1) != 0)) {
          lVar5 = FUN_0118766c(auStack_38,*(undefined8 *)(lVar5 + 8),*param_1 + 0x50);
          if (lVar5 != 0) {
            lVar11 = *(long *)(lVar5 + 0x30);
            if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar11 + 0x1a);
            do {
              sVar10 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar10 == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
              *(undefined8 *)(lVar11 + 8) = uVar7;
              *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
            }
            else if (sVar10 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
          }
          lVar11 = *param_1;
          plVar6 = *(long **)(lVar11 + 0x48);
          *(undefined8 *)(lVar11 + 0x48) = 0;
          if (plVar6 != (long *)0x0) {
            lVar8 = plVar6[6];
            psVar1 = (short *)(lVar8 + 0x1a);
            do {
              sVar10 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar10 == 1) {
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*plVar6 + 0x50))();
            }
            else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          *(long *)(lVar11 + 0x48) = lVar5;
          FUN_00efa2a4(*(undefined8 *)(*param_1 + 0x48));
        }
        (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))();
        return;
      }
      sVar10 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


