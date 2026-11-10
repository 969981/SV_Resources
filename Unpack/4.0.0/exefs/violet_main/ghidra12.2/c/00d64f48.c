/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d64f48; name: FUN_00d64f48
 */


void FUN_00d64f48(long *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  
  plVar5 = (long *)FUN_00c73d48();
  if ((*plVar5 != 0) && (*(short *)(*plVar5 + 0x1a) != 0)) {
    plVar5 = (long *)FUN_00c73d48(param_2);
    lVar7 = *plVar5;
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar9 = *(short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_00d64fd4;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d64fd4:
          bVar4 = false;
        }
        if (bVar4) {
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 != 0) {
            plVar10 = (long *)(lVar7 + -0x28);
            plVar5 = (long *)FUN_01a6a8cc(plVar10);
            lVar8 = *plVar5;
            *param_1 = lVar8;
            if (lVar8 != 0) {
              lVar8 = *(long *)(lVar8 + 0x30);
              if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar1 = (short *)(lVar8 + 0x1a);
              do {
                sVar9 = *psVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar4) {
                  *psVar1 = sVar9 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar9 == 0) {
                uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
                *(undefined8 *)(lVar8 + 8) = uVar6;
                *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
              }
              else if (sVar9 == -1) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
            }
            lVar7 = *(long *)(lVar7 + 0x70);
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar9 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar9 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00d650c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar10 + 0x50))(plVar10);
              return;
            }
            if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            return;
          }
          break;
        }
        sVar9 = sVar2;
      } while (sVar2 != 0);
    }
  }
  *param_1 = 0;
  return;
}


