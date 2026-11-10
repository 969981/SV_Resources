/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd4de4; name: FUN_01dd4de4
 */


void FUN_01dd4de4(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  long *local_60;
  undefined1 *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  lVar7 = (long)param_3 * 0x18;
  local_58 = &DAT_e6b50e272d8cd992;
  puStack_50 = &DAT_03c3b7e8;
  local_48 = 3;
  uStack_40 = 0;
  local_78 = *(undefined8 *)(&DAT_04541530 + lVar7);
  puStack_70 = (&PTR_s_msg_ui_box_item_bag_02_04541538)[(long)param_3 * 3];
  local_68 = *(undefined8 *)(&DAT_04541540 + lVar7);
  local_60 = (long *)0x0;
  FUN_00f11e84(&local_38,&local_58,&local_78);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  plVar3 = local_38;
  lVar7 = *(long *)(param_2 + 0x1c0);
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar8 == -1) goto LAB_01dd4fec;
  }
  lVar8 = *(long *)(lVar7 + 0x118);
  *(undefined4 *)(lVar7 + 0xcc) = 0;
  *(undefined2 *)(lVar7 + 0xd0) = 0;
  *(undefined4 *)(lVar7 + 0xd4) = 0;
  *(undefined4 *)(lVar7 + 0xdc) = 0;
  FUN_0109c76c(lVar7,local_38);
  if (*(char *)(lVar8 + 0x54) != '\0') {
    **(undefined2 **)(lVar8 + 0x30) = 0;
    *(undefined2 *)(lVar8 + 0x52) = 0;
  }
  FUN_0109c334(lVar7,lVar8,plVar3,0,0);
  lVar7 = *(long *)(lVar7 + 0x118);
  *param_1 = lVar7;
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x28);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == -1) {
LAB_01dd4fec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar1 = plVar3 + 5;
  do {
    lVar7 = *plVar1;
    iVar4 = (int)lVar7 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = iVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  else if ((int)lVar7 == 0) goto LAB_01dd4f4c;
  if (local_38 != (long *)0x0) {
    plVar3 = local_38 + 5;
    do {
      lVar7 = *plVar3;
      iVar4 = (int)lVar7 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_01dd4f4c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


