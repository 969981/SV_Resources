/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0195d428; name: FUN_0195d428
 */


void FUN_0195d428(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_70;
  char local_68;
  long *local_48;
  
  if ((((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) && (lVar7 = *param_1, lVar7 != 0)) &&
     (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0195d4cc;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0195d4cc:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        plVar9 = (long *)(lVar7 + -0x28);
        FUN_01cd5d50(&local_70,plVar9);
        lVar10 = param_1[2];
        lVar11 = *(long *)(lVar7 + 0x20);
        local_48 = (long *)*param_3;
        if (local_48 != (long *)0x0) {
          lVar12 = local_48[6];
          if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 0) {
            uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
            *(undefined8 *)(lVar12 + 8) = uVar6;
            *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
          }
          else if (sVar8 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
        }
        uVar5 = FUN_01cd5de0(param_1 + 3,lVar7 + -8,param_2,lVar11 + lVar10 * 0x10,&local_48,param_4
                            );
        if (local_48 != (long *)0x0) {
          lVar10 = local_48[6];
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*local_48 + 0x50))();
          }
          else if (sVar8 == 0) goto LAB_0195d5e0;
        }
        *(undefined1 *)(lVar7 + 0x140) = 1;
        if ((uVar5 & 1) != 0) {
          FUN_01981ef4(param_1 + 5,param_3,param_4);
        }
        if (local_68 != '\0') {
          *local_70 = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_70 + 1));
        }
        lVar7 = *(long *)(lVar7 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
          return;
        }
        if (sVar8 != 0) {
          return;
        }
LAB_0195d5e0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


