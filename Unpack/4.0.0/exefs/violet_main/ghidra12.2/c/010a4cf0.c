/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a4cf0; name: FUN_010a4cf0
 */


void FUN_010a4cf0(long param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_38;
  
  uVar8 = 0;
  do {
    if ((param_2[uVar8 + 1] == 0) &&
       (uVar5 = FUN_00f7e2a0(*(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x1d),
                             uVar8 & 0xffffffff), (uVar5 & 1) != 0)) {
      if (*(char *)(param_1 + 0x2c) == '\0') {
        local_60 = (long *)0x0;
        local_58 = (long *)0x0;
        FUN_010a5ff8(*param_2,uVar8 & 0xffffffff,&local_60);
        if (local_58 != (long *)0x0) {
          lVar9 = local_58[6];
          psVar1 = (short *)(lVar9 + 0x1a);
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
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*local_58 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_010a50ec;
        }
        if (local_60 != (long *)0x0) {
          lVar9 = local_60[6];
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_010a4fa4;
        }
      }
      else {
        FUN_010a7308(&local_60,*(undefined8 *)(param_1 + 8),uVar8 & 0xffffffff,1);
        FUN_010a5ff8(*param_2,uVar8 & 0xffffffff,&local_60);
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        local_38 = local_60;
        if (local_60 != (long *)0x0) {
          lVar9 = local_60[6];
          if (*(long *)(lVar9 + 0x10) == 0) goto LAB_010a5268;
          psVar1 = (short *)(lVar9 + 0x1a);
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
            uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
            *(undefined8 *)(lVar9 + 8) = uVar6;
            *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) goto LAB_010a5288;
        }
        FUN_010a5930(uVar7,&local_38);
        if (local_38 != (long *)0x0) {
          lVar9 = local_38[6];
          psVar1 = (short *)(lVar9 + 0x1a);
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
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*local_38 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_010a50ec;
        }
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        local_68 = local_58;
        if (local_58 != (long *)0x0) {
          lVar9 = local_58[6];
          if (*(long *)(lVar9 + 0x10) == 0) goto LAB_010a5268;
          psVar1 = (short *)(lVar9 + 0x1a);
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
            uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
            *(undefined8 *)(lVar9 + 8) = uVar6;
            *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) goto LAB_010a5288;
        }
        FUN_010a5930(uVar7,&local_68);
        if (local_68 != (long *)0x0) {
          lVar9 = local_68[6];
          psVar1 = (short *)(lVar9 + 0x1a);
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
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*local_68 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_010a50ec;
        }
        if (local_58 != (long *)0x0) {
          lVar9 = local_58[6];
          psVar1 = (short *)(lVar9 + 0x1a);
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
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*local_58 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_010a50ec;
        }
        if (local_60 != (long *)0x0) {
          lVar9 = local_60[6];
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_010a4fa4:
          if (sVar2 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*local_60 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_010a50ec;
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 5);
  if (*(char *)(param_1 + 0x2f) != '\0') {
    FUN_010a7308(&local_60,*(undefined8 *)(param_1 + 8),0xff,1);
    FUN_010a5ff8(*param_2,0xff,&local_60);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    local_70 = local_60;
    if (local_60 != (long *)0x0) {
      lVar9 = local_60[6];
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_010a5268;
      psVar1 = (short *)(lVar9 + 0x1a);
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
        uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar6;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_010a5288;
    }
    FUN_010a5930(uVar7,&local_70);
    if (local_70 != (long *)0x0) {
      lVar9 = local_70[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_010a50ec;
    }
    if (*(char *)(param_1 + 0x2e) != '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      local_78 = local_58;
      if (local_58 != (long *)0x0) {
        lVar9 = local_58[6];
        if (*(long *)(lVar9 + 0x10) == 0) {
LAB_010a5268:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar9 + 0x1a);
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
          uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          *(undefined8 *)(lVar9 + 8) = uVar6;
          *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
LAB_010a5288:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      FUN_010a5930(uVar7,&local_78);
      if (local_78 != (long *)0x0) {
        lVar9 = local_78[6];
        psVar1 = (short *)(lVar9 + 0x1a);
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
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_78 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_010a50ec;
      }
    }
    if (local_58 != (long *)0x0) {
      lVar9 = local_58[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_010a50ec;
    }
    if (local_60 != (long *)0x0) {
      lVar9 = local_60[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_60 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_010a50ec:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


