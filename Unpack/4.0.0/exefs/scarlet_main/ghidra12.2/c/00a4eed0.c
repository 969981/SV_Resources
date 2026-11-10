/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4eed0; name: FUN_00a4eed0
 */


void FUN_00a4eed0(long param_1,undefined4 param_2,long *param_3,uint param_4,uint param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if ((*param_3 != 0) && (uVar5 = FUN_00cf44f4(*(undefined8 *)(*param_3 + 0x70)), uVar5 < 0x402)) {
    local_68 = (long *)*param_3;
    if (local_68 != (long *)0x0) {
      plVar13 = local_68 + 5;
      do {
        lVar12 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = (int)lVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar12 == -1) goto LAB_00a4f294;
    }
    FUN_00a638c0(param_1 + (ulong)uVar5 * 0x18 + 0x2c,param_2,&local_68,param_4);
    if (local_68 != (long *)0x0) {
      plVar13 = local_68 + 5;
      do {
        lVar12 = *plVar13;
        iVar4 = (int)lVar12 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      else if ((int)lVar12 == 0) goto LAB_00a4f2bc;
    }
    if (param_4 < 2) {
      plVar13 = (long *)*param_3;
      local_70 = plVar13;
      if (plVar13 == (long *)0x0) {
        FUN_00a4f2e4(param_1,0,&local_70,param_5 & 1);
      }
      else {
        plVar1 = plVar13 + 5;
        do {
          lVar12 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar12 == -1) goto LAB_00a4f294;
        FUN_00a4f2e4(param_1,0,&local_70,param_5 & 1);
        if (plVar13 != (long *)0x0) {
          plVar1 = plVar13 + 5;
          do {
            lVar12 = *plVar1;
            iVar4 = (int)lVar12 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
          else if ((int)lVar12 == 0) goto LAB_00a4f2bc;
        }
      }
      plVar13 = (long *)*param_3;
      local_78 = plVar13;
      if (plVar13 == (long *)0x0) {
        FUN_00a4f2e4(param_1,1,&local_78,param_5 & 1);
      }
      else {
        plVar1 = plVar13 + 5;
        do {
          lVar12 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar12 == -1) goto LAB_00a4f294;
        FUN_00a4f2e4(param_1,1,&local_78,param_5 & 1);
        if (plVar13 != (long *)0x0) {
          plVar1 = plVar13 + 5;
          do {
            lVar12 = *plVar1;
            iVar4 = (int)lVar12 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
          else if ((int)lVar12 == 0) goto LAB_00a4f2bc;
        }
      }
      plVar13 = (long *)*param_3;
      local_80 = plVar13;
      if (plVar13 == (long *)0x0) {
        FUN_00a4f2e4(param_1,2,&local_80,param_5 & 1);
      }
      else {
        plVar1 = plVar13 + 5;
        do {
          lVar12 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar12 == -1) goto LAB_00a4f294;
        FUN_00a4f2e4(param_1,2,&local_80,param_5 & 1);
        if (plVar13 != (long *)0x0) {
          plVar1 = plVar13 + 5;
          do {
            lVar12 = *plVar1;
            iVar4 = (int)lVar12 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
          else if ((int)lVar12 == 0) goto LAB_00a4f2bc;
        }
      }
    }
    if (((param_5 & 1) != 0) && (param_3 = (long *)*param_3, param_3 != (long *)0x0)) {
      plVar13 = param_3 + 5;
      do {
        lVar12 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = (int)lVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar12 == -1) {
LAB_00a4f294:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      uVar6 = FUN_00cf44f4(param_3[0xe]);
      uVar7 = FUN_00cf41a8(param_3[0xe]);
      uVar8 = FUN_00cec030(param_3[0xe]);
      lVar14 = param_3[0xe];
      plVar1 = (long *)(lVar14 + 0x20);
      lVar12 = nn::os::GetCurrentThread();
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar14 + 0x28));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar12;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_00a4f120;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00a4f120:
      uVar9 = FUN_0100bd94(lVar14);
      *(undefined8 *)(lVar14 + 0x20) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar14 + 0x28));
      uVar10 = FUN_00dbf838(param_3[0xe]);
      uVar11 = FUN_00dbfb7c(param_3[0xe]);
      FUN_00a4f47c(param_1,param_2,uVar6,uVar7,uVar8,uVar9,
                   (uVar10 & 0xfff0 ^ uVar10 >> 0x10 ^ uVar11 >> 0x10 ^ uVar11 & 0xfff0) < 0x10,
                   param_4);
      do {
        lVar12 = *plVar13;
        iVar4 = (int)lVar12 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*param_3 + 0x10))(param_3);
      }
      else if ((int)lVar12 == 0) {
LAB_00a4f2bc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


