/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cd5a18; name: FUN_01cd5a18
 */


void FUN_01cd5a18(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *local_78;
  undefined8 *local_70;
  char local_68;
  long *local_48;
  
  if ((((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) && (lVar8 = *param_1, lVar8 != 0)) &&
     (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01cd5abc;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01cd5abc:
        bVar4 = false;
      }
      if (bVar4) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        plVar10 = (long *)(lVar8 + -0x28);
        FUN_01cd5d50(&local_70,plVar10);
        lVar11 = param_1[2];
        lVar12 = *(long *)(lVar8 + 0x20);
        local_48 = (long *)*param_3;
        if (local_48 == (long *)0x0) goto LAB_01cd5b2c;
        lVar13 = local_48[6];
        if (*(long *)(lVar13 + 0x10) == 0) goto LAB_01cd5d08;
        psVar1 = (short *)(lVar13 + 0x1a);
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
          uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
          *(undefined8 *)(lVar13 + 8) = uVar7;
          *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
        }
        else if (sVar9 == -1) goto LAB_01cd5d28;
LAB_01cd5b2c:
        uVar6 = FUN_01cd5de0(param_1 + 3,lVar8 + -8,param_2,lVar12 + lVar11 * 0x10,&local_48,param_4
                            );
        if (local_48 != (long *)0x0) {
          lVar11 = local_48[6];
          psVar1 = (short *)(lVar11 + 0x1a);
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
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*local_48 + 0x50))();
          }
          else if (sVar9 == 0) goto LAB_01cd5c2c;
        }
        *(undefined1 *)(lVar8 + 0x140) = 1;
        if ((uVar6 & 1) != 0) {
          local_78 = (long *)*param_3;
          if (local_78 == (long *)0x0) {
            FUN_01cd5f78(param_1 + 5,&local_78,param_4);
          }
          else {
            lVar11 = local_78[6];
            if (*(long *)(lVar11 + 0x10) == 0) {
LAB_01cd5d08:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar11 + 0x1a);
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
              uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
              *(undefined8 *)(lVar11 + 8) = uVar7;
              *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
            }
            else if (sVar9 == -1) {
LAB_01cd5d28:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
            plVar5 = local_78;
            FUN_01cd5f78(param_1 + 5,&local_78,param_4);
            if (plVar5 != (long *)0x0) {
              lVar11 = plVar5[6];
              psVar1 = (short *)(lVar11 + 0x1a);
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
                *(undefined8 *)(lVar11 + 0x10) = 0;
                (**(code **)(*plVar5 + 0x50))(plVar5);
              }
              else if (sVar9 == 0) goto LAB_01cd5c2c;
            }
          }
        }
        if (local_68 != '\0') {
          *local_70 = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_70 + 1));
        }
        lVar8 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar8 + 0x1a);
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
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))(plVar10);
          return;
        }
        if (sVar9 != 0) {
          return;
        }
LAB_01cd5c2c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


