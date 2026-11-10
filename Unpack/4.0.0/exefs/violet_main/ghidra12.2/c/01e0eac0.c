/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0eac0; name: FUN_01e0eac0
 */


void FUN_01e0eac0(long param_1)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_28;
  
  FUN_00d64f48(&local_28);
  if (local_28 != (long *)0x0) {
    lVar2 = local_28[10];
    for (lVar8 = local_28[9]; lVar8 != lVar2; lVar8 = lVar8 + 0x30) {
      lVar7 = *(long *)(lVar8 + 0x20);
      if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar7 + 0x1a);
        sVar9 = *(short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar9) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01e0ebd8;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01e0ebd8:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar7 + 0x10) != 0) {
              plVar10 = (long *)(*(long *)(lVar7 + 0x10) + -8);
              (**(code **)(*plVar10 + 0x150))(plVar10);
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
            break;
          }
          sVar9 = sVar3;
        } while (sVar3 != 0);
      }
    }
    *(undefined1 *)(param_1 + 0x378) = 0;
    local_60 = 0xbc071098b7443d50;
    pcStack_58 = "poke_state_int";
    local_50 = 0xe;
    uStack_48 = 0;
    uVar6 = FUN_00d93250(param_1,&local_60);
    *(undefined4 *)(param_1 + 0x294) = uVar6;
    FUN_0170835c(param_1);
    lVar8 = local_28[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))(local_28);
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


