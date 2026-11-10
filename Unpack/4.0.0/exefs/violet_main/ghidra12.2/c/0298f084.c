/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298f084; name: FUN_0298f084
 */


void FUN_0298f084(long param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  long *plVar10;
  long local_78;
  long *local_70;
  long *local_68;
  long local_48;
  
  if (*(char *)(param_2 + 0x840) == '\0') {
    cVar8 = '\0';
    bVar5 = 0;
  }
  else {
    uVar9 = 0;
    cVar8 = '\0';
    do {
      plVar6 = (long *)(param_2 + uVar9 * 0x160);
      local_70 = plVar6 + 1;
      lVar7 = *plVar6;
      if (lVar7 == -0x55b9ee5fee87d0a6) {
        FUN_0299a8d0(&local_48,*(undefined8 *)(param_1 + 8),&local_70);
        plVar10 = (long *)(param_1 + uVar9 * 8 + 0x30);
        plVar6 = (long *)*plVar10;
        *plVar10 = 0;
        if (plVar6 != (long *)0x0) {
          lVar7 = plVar6[6];
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
            (**(code **)(*plVar6 + 0x50))();
          }
          else if (sVar2 == 0) {
LAB_0298f1bc:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        lVar7 = local_48;
LAB_0298f114:
        *plVar10 = lVar7;
      }
      else {
        if ((code *)*param_3 != (code *)0x0) {
          local_68 = local_70;
          local_48 = lVar7;
          (*(code *)*param_3)(&local_78,param_3 + 4,&local_48,&local_68);
          plVar10 = (long *)(param_1 + uVar9 * 8 + 0x30);
          plVar6 = (long *)*plVar10;
          *plVar10 = 0;
          if (plVar6 != (long *)0x0) {
            lVar7 = plVar6[6];
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
              (**(code **)(*plVar6 + 0x50))();
            }
            else if (sVar2 == 0) goto LAB_0298f1bc;
          }
          lVar7 = local_78;
          goto LAB_0298f114;
        }
        cVar8 = cVar8 + '\x01';
      }
      bVar5 = *(byte *)(param_2 + 0x840);
      uVar9 = uVar9 + 1;
    } while (uVar9 < bVar5);
  }
  *(byte *)(param_1 + 0x60) = bVar5 - cVar8;
  return;
}


