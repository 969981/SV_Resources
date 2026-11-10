/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020f71e8; name: FUN_020f71e8
 */


void FUN_020f71e8(long param_1,byte param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_10a8 [2116];
  undefined1 local_864;
  undefined1 local_863;
  undefined1 local_862;
  long *local_858 [259];
  long *local_28;
  
  if (param_2 < 5) {
    plVar5 = (long *)FUN_0167513c(auStack_10a8,*(undefined8 *)(param_1 + 8));
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 5;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    memset(auStack_10a8,0,0x84e);
    if (plVar5 != (long *)0x0) {
      memset(local_858,0,0x814);
      FUN_01674c60(plVar5,local_858);
      memcpy(auStack_10a8,local_858,0x814);
    }
    FUN_020f6cc4(local_858,auStack_10a8);
    uVar8 = (ulong)param_2;
    FUN_01674c60(local_858[0],*(long *)(param_1 + 0x40) + uVar8 * 0x844 + 0x30);
    if (local_858[0] != (long *)0x0) {
      plVar1 = local_858[0] + 5;
      do {
        lVar7 = *plVar1;
        iVar4 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_858[0] + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_020f73d8;
    }
    FUN_01e71d08(local_858,auStack_10a8);
    uVar6 = FUN_0196c644(local_858[0]);
    FUN_011b8d00(*(long *)(param_1 + 0x40) + uVar8 * 0x844,uVar6,0xd);
    if (local_858[0] != (long *)0x0) {
      plVar1 = local_858[0] + 5;
      do {
        lVar7 = *plVar1;
        iVar4 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_858[0] + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_020f73d8;
    }
    FUN_01e71f74(local_858,auStack_10a8);
    uVar6 = FUN_0196c644(local_858[0]);
    FUN_011b8d00(*(long *)(param_1 + 0x40) + uVar8 * 0x844 + 0x18,uVar6,0xb);
    if (local_858[0] != (long *)0x0) {
      plVar1 = local_858[0] + 5;
      do {
        lVar7 = *plVar1;
        iVar4 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_858[0] + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_020f73d8;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x40) + uVar8 * 0x844 + 0x2c) = local_863;
    FUN_020f6ebc(&local_28,auStack_10a8);
    lVar7 = *(long *)(param_1 + 0x78);
    uVar6 = FUN_0196c644(local_28);
    FUN_011b8d00(lVar7 + uVar8 * 0x88,uVar6,7);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        lVar7 = *plVar1;
        iVar4 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_020f73d8;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x78) + uVar8 * 0x88 + 0xe) = local_862;
    *(undefined1 *)(*(long *)(param_1 + 0x78) + uVar8 * 0x88 + 0xf) = local_864;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 5;
      do {
        lVar7 = *plVar1;
        iVar4 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      else if ((int)lVar7 == 0) {
LAB_020f73d8:
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


