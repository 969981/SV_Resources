/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019832f8; name: FUN_019832f8
 */


void FUN_019832f8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *local_b0;
  int *piStack_a8;
  long *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_48;
  undefined1 auStack_28 [4];
  int local_24;
  
  local_24 = DAT_04835be8 * DAT_04835bec * 4;
  local_48 = (**(code **)(*DAT_04835ba8 + 0x10))(DAT_04835ba8,(long)local_24,8);
  FUN_01983560(&local_50);
  local_a0 = &local_48;
  FUN_019835c4(local_50,&local_a0);
  local_a0 = (long *)(ulong)DAT_04835be8;
  local_80 = 1;
  uStack_78 = 2;
  uStack_98 = (ulong)DAT_04835bec;
  local_70 = 0x200000025;
  uStack_68 = 0x400000003;
  uStack_88 = (ulong)(DAT_04835be8 << 2);
  local_60 = 5;
  uStack_58 = 0x10;
  local_90 = 1;
  puVar6 = (undefined8 *)FUN_00e31554();
  local_b0 = (long *)*puVar6;
  plVar7 = (long *)FUN_00cf3764(auStack_28,local_b0[1],&local_b0);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_0117e220(plVar7,&local_a0,1,1,0);
  if (local_48 == 0) {
    *param_1 = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else if ((int)lVar5 == 0) goto LAB_019834c4;
    }
  }
  else {
    local_b0 = &local_48;
    piStack_a8 = &local_24;
    FUN_019836fc(plVar7,&local_b0);
    lVar5 = local_48;
    plVar1 = DAT_04835ba8;
    lVar10 = (long)local_24;
    uVar8 = (**(code **)(*DAT_04835ba8 + 0xf8))(DAT_04835ba8);
    if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar1,lVar5,lVar10,8);
    }
    *param_1 = (long)plVar7;
  }
  if (local_50 != (long *)0x0) {
    plVar7 = local_50 + 5;
    do {
      lVar5 = *plVar7;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
LAB_019834c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


