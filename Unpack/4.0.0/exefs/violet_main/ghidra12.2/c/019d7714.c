/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d7714; name: FUN_019d7714
 */


void FUN_019d7714(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  short sVar8;
  long *plVar9;
  long local_30 [2];
  
  lVar5 = FUN_019d78b8(param_2,*param_4);
  if ((((*(long *)(lVar5 + 0x88) != 0) && (*(short *)(*(long *)(lVar5 + 0x88) + 0x1a) != 0)) ||
      (uVar7 = FUN_013f7d04(lVar5 + 0x70), (uVar7 & 1) != 0)) &&
     ((*(long *)(lVar5 + 0x80) != 0 && (FUN_00d3919c(local_30), local_30[0] != 0)))) {
    if (*(short *)(local_30[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_30[0] + 0x1a);
      sVar8 = *(short *)(local_30[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_019d77c4;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019d77c4:
          bVar4 = false;
        }
        if (bVar4) {
          plVar9 = (long *)0x0;
          if (*(long *)(local_30[0] + 0x10) != 0) {
            plVar9 = (long *)(*(long *)(local_30[0] + 0x10) + -0x28);
          }
          goto LAB_019d77ec;
        }
        sVar8 = sVar2;
      } while (sVar2 != 0);
    }
    plVar9 = (long *)0x0;
LAB_019d77ec:
    psVar1 = (short *)(local_30[0] + 0x18);
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
      FUN_0116e168();
    }
    else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar9 != (long *)0x0) {
      FUN_01e1bc7c(plVar9);
      puVar6 = (undefined1 *)FUN_015c0588();
      *param_1 = *puVar6;
      lVar5 = plVar9[6];
      psVar1 = (short *)(lVar5 + 0x1a);
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
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
        return;
      }
      if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return;
    }
  }
  puVar6 = (undefined1 *)FUN_00f6866c();
  *param_1 = *puVar6;
  return;
}


