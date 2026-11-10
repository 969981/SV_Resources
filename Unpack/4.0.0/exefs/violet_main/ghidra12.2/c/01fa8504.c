/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa8504; name: FUN_01fa8504
 */


void FUN_01fa8504(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 ulong param_5,ulong param_6)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar6 = *(long *)(param_2 + 0x1668);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01fa8598;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01fa8598:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          plVar8 = (long *)(lVar6 + -0x28);
          lVar5 = FUN_01289558(lVar6 + 0xe0,&local_68,param_4,param_5,param_6);
          if (lVar5 != 0) {
            if (*(char *)(lVar5 + 0x11a) == '\0') {
              local_60 = 0;
              uStack_58 = 0;
              local_68 = 0;
            }
            else {
              local_68 = *(undefined8 *)(lVar5 + 0x120);
              local_60 = *(undefined8 *)(lVar5 + 0x128);
              uStack_58 = *(undefined8 *)(lVar5 + 0x130);
            }
            FUN_01fa86d4(param_1,*(undefined8 *)(param_2 + 0x7e0),&local_68,param_4,param_3,
                         param_5 & 0xffffffff,param_6 & 0xffffffff);
            lVar6 = *(long *)(lVar6 + 8);
            psVar1 = (short *)(lVar6 + 0x1a);
            do {
              sVar7 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar7 == 1) {
              *(undefined8 *)(lVar6 + 0x10) = 0;
              (**(code **)(*plVar8 + 0x50))(plVar8);
              return;
            }
            if (sVar7 != 0) {
              return;
            }
LAB_01fa8640:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          lVar6 = *(long *)(lVar6 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar7 == 1) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
          }
          else if (sVar7 == 0) goto LAB_01fa8640;
        }
        break;
      }
      param_5 = param_5 & 0xffffffff;
      param_6 = param_6 & 0xffffffff;
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


