/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8a95c; name: FUN_01f8a95c
 */


void FUN_01f8a95c(long param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  
  lVar6 = *(long *)(param_1 + 0x10);
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
        if (cVar3 != '\0') goto LAB_01f8a9b0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f8a9b0:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        cVar3 = *(char *)(param_1 + 0x20);
        plVar8 = (long *)(lVar6 + -0x28);
        if (cVar3 == '\x01') {
          if ((param_2 & 1) == 0) {
LAB_01f8a9e0:
            uVar5 = *(undefined4 *)(param_1 + 0x24);
          }
          else {
            uVar5 = *(undefined4 *)(param_1 + 4);
          }
        }
        else {
          if (cVar3 != '\x02') {
            if (cVar3 == '\0') {
              if ((param_2 & 1) == 0) {
                *(undefined1 *)(lVar6 + 0x49) = 1;
              }
              else {
                *(undefined1 *)(lVar6 + 0x49) = 0;
              }
            }
            goto LAB_01f8a9f4;
          }
          if ((param_2 & 1) == 0) goto LAB_01f8a9e0;
          uVar5 = *(undefined4 *)(param_1 + 8);
        }
        (**(code **)(*plVar8 + 0x68))(plVar8,uVar5);
LAB_01f8a9f4:
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
                    /* WARNING: Could not recover jumptable at 0x01f8aa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0x50))(plVar8);
          return;
        }
        if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


