/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f5d6dc; name: FUN_01f5d6dc
 */


void FUN_01f5d6dc(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long lVar12;
  long *local_78;
  undefined8 *local_70;
  char local_68;
  
  if ((((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) && (lVar8 = *param_1, lVar8 != 0)) &&
     (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar10 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01f5d780;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f5d780:
        bVar4 = false;
      }
      if (bVar4) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        plVar11 = (long *)(lVar8 + -0x28);
        FUN_01cd5d50(&local_70,plVar11);
        lVar9 = *(long *)(lVar8 + 0x20) + param_1[2] * 0x10;
        local_78 = (long *)*param_3;
        if (local_78 == (long *)0x0) {
          uVar6 = FUN_01f5da30(param_1 + 3,lVar8 + -8,param_2,lVar9,&local_78,param_4);
          *(undefined1 *)(lVar8 + 0x140) = 1;
        }
        else {
          lVar12 = local_78[6];
          if (*(long *)(lVar12 + 0x10) == 0) goto LAB_01f5d9e8;
          psVar1 = (short *)(lVar12 + 0x1a);
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
            uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
            *(undefined8 *)(lVar12 + 8) = uVar7;
            *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
          }
          else if (sVar10 == -1) goto LAB_01f5da08;
          plVar5 = local_78;
          uVar6 = FUN_01f5da30(param_1 + 3,lVar8 + -8,param_2,lVar9,&local_78,param_4);
          if (plVar5 != (long *)0x0) {
            lVar9 = plVar5[6];
            psVar1 = (short *)(lVar9 + 0x1a);
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
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*plVar5 + 0x50))(plVar5);
            }
            else if (sVar10 == 0) goto LAB_01f5d8f8;
          }
          *(undefined1 *)(lVar8 + 0x140) = 1;
        }
        if ((uVar6 & 1) != 0) {
          param_3 = (long *)*param_3;
          if (param_3 == (long *)0x0) {
            FUN_01f5dbc4(param_1 + 5);
          }
          else {
            lVar9 = param_3[6];
            if (*(long *)(lVar9 + 0x10) == 0) {
LAB_01f5d9e8:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar9 + 0x1a);
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
              uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
              *(undefined8 *)(lVar9 + 8) = uVar7;
              *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
            }
            else if (sVar10 == -1) {
LAB_01f5da08:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            FUN_01f5dbc4(param_1 + 5);
            lVar9 = param_3[6];
            psVar1 = (short *)(lVar9 + 0x1a);
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
              *(undefined8 *)(lVar9 + 0x10) = 0;
              (**(code **)(*param_3 + 0x50))(param_3);
            }
            else if (sVar10 == 0) goto LAB_01f5d8f8;
          }
        }
        if (local_68 != '\0') {
          *local_70 = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_70 + 1));
        }
        lVar8 = *(long *)(lVar8 + 8);
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
          (**(code **)(*plVar11 + 0x50))(plVar11);
          return;
        }
        if (sVar10 != 0) {
          return;
        }
LAB_01f5d8f8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar10 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


