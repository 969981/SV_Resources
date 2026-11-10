/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cbbf98; name: FUN_00cbbf98
 */


void FUN_00cbbf98(undefined8 param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  ulong uVar9;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar6 = *(long **)(param_2 + 0x488);
  if (plVar6 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar6 + 0x30))
                      (param_1,*(undefined4 *)(param_2 + 0x510),plVar6,param_2 + 0x30,
                       param_2 + 0x170,param_2 + 0x2e0,param_2 + 0x370);
    *(undefined4 *)(param_2 + 0x4a8) = uVar5;
  }
  if (*(char *)(param_2 + 0x14d) == '\0') {
    uVar9 = (ulong)*(uint *)(param_2 + 0x400);
    uVar5 = *(undefined4 *)(&DAT_03d30720 + (long)*(int *)(param_2 + 0x2a0) * 0x1c);
  }
  else {
    lVar7 = *(long *)(param_2 + 0x50);
    *(undefined1 *)(param_2 + 0x14e) = 0;
    if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
      plVar6 = (long *)0x0;
    }
    else {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_00cbc160;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00cbc160:
          bVar4 = false;
        }
        if (bVar4) {
          plVar6 = (long *)0x0;
          if (*(long *)(lVar7 + 0x10) != 0) {
            plVar6 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
          }
          break;
        }
        plVar6 = (long *)0x0;
        sVar8 = sVar2;
      } while (sVar2 != 0);
    }
    local_60 = 0xd5eb2f99669eefd4;
    puStack_58 = &DAT_03c00bcf;
    local_50 = 4;
    local_48 = (long *)0x0;
    uVar9 = FUN_00a94368(plVar6,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (plVar6 != (long *)0x0) {
      lVar7 = plVar6[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))(plVar6);
      }
      else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar5 = *(undefined4 *)(&DAT_03d30720 + (long)*(int *)(param_2 + 0x2a0) * 0x1c);
  }
  FUN_00a9789c(param_1,uVar9,param_2 + 0x54c,param_2 + 0x30,uVar5);
  if ((*(char *)(param_2 + 0x4ac) == '\0') && (*(int *)(param_2 + 0x4a8) - 1U < 2)) {
    *(undefined1 *)(param_2 + 0x366) = 0;
  }
  FUN_00d663e4(param_2);
  *(undefined1 *)(param_2 + 0x544) = 0;
  return;
}


