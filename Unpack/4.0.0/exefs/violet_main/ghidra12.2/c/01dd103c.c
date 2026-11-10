/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd103c; name: FUN_01dd103c
 */


void FUN_01dd103c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  lVar5 = *(long *)(param_1 + 0x120);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01dd109c;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dd109c:
        bVar7 = false;
      }
      if (bVar7) {
        lVar5 = *(long *)(lVar5 + 0x10);
        plVar6 = (long *)(lVar5 + -0x28);
        if (lVar5 == 0) {
          return;
        }
        FUN_00cebc38(&local_28,plVar6);
        if (local_28 != (long *)0x0) {
          local_40 = 0x11;
          local_38 = (long *)0x0;
          local_50 = 0xd319af951538745b;
          pcStack_48 = "pokebox_search_00";
          FUN_00cb7f10(&local_30,local_28 + 8,&local_50);
          if (local_38 != (long *)0x0) {
            (**(code **)(*local_38 + 0x20))();
          }
          if (local_30 != (long *)0x0) {
            lVar4 = FUN_0104cf4c(local_30 + 0x21,&local_50);
            if (lVar4 != 0) {
              local_50 = 0xd0abee268fd3cd32;
              pcStack_48 = "Box";
              local_40 = 3;
              local_38 = (long *)0x0;
              FUN_01513174(lVar4,&local_50);
              if (local_38 != (long *)0x0) {
                (**(code **)(*local_38 + 0x20))();
              }
            }
            if (local_30 != (long *)0x0) {
              lVar4 = local_30[6];
              psVar1 = (short *)(lVar4 + 0x1a);
              do {
                sVar8 = *psVar1;
                cVar3 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar7) {
                  *psVar1 = sVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (sVar8 == 1) {
                *(undefined8 *)(lVar4 + 0x10) = 0;
                (**(code **)(*local_30 + 0x50))();
              }
              else if (sVar8 == 0) goto LAB_01dd11ac;
            }
          }
          if (*(long *)(param_1 + 0x1b8) != 0) {
            *(undefined4 *)(param_1 + 0x170) = 0x14;
            *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = 0x14;
          }
          if (local_28 != (long *)0x0) {
            (**(code **)(*local_28 + 0x60))();
          }
        }
        lVar5 = *(long *)(lVar5 + 8);
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))(plVar6);
          return;
        }
        if (sVar8 != 0) {
          return;
        }
LAB_01dd11ac:
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


