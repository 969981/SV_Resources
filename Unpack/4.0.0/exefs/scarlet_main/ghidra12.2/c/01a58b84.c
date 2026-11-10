/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a58b84; name: FUN_01a58b84
 */


void FUN_01a58b84(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *local_a8;
  long *local_a0;
  ulong local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long *local_70;
  undefined8 uStack_68;
  long *local_60;
  long local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined1 auStack_38 [8];
  
  puVar5 = (undefined8 *)FUN_0166cefc();
  local_98 = 0x1f;
  local_90 = (long *)0x0;
  local_58 = -0x20bb0bd02cf6b443;
  pcStack_50 = "[Triangle]";
  local_a8 = (long *)&DAT_33989627c9ed4375;
  local_a0 = (long *)PTR_s_Main_Opaque_047e0b20;
  local_48 = 10;
  local_40 = (long *)0x0;
  FUN_00dfeda8(param_1,*puVar5,&local_a8,&local_58,param_2);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  FUN_00c973e4(*(undefined8 *)(*param_1 + 200),4);
  FUN_0151fb1c(0x3f800000,*(undefined8 *)(*param_1 + 200));
  FUN_0151f580(0x3f800000,*(undefined8 *)(*param_1 + 200));
  FUN_00c7504c(*(undefined8 *)(*param_1 + 200),3,0,0);
  lVar10 = *param_1;
  FUN_011fa588(&local_a8);
  FUN_0151ec90(lVar10,&local_a8,1);
  if (local_a8 != (long *)0x0) {
    plVar6 = local_a8 + 5;
    do {
      lVar10 = *plVar6;
      iVar3 = (int)lVar10 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01a58eec;
  }
  plVar6 = (long *)FUN_00e31554();
  local_58 = *plVar6;
  local_98 = local_98 & 0xffffffff00000000;
  local_a8 = (long *)0x6;
  local_a0 = (long *)0x4;
  local_60 = (long *)FUN_00cf3764(auStack_38,*(undefined8 *)(local_58 + 8),&local_58);
  if (local_60 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = local_60 + 5;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)lVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar6 = local_60;
  }
  FUN_00d560a0(plVar6,&local_a8,1,0,0);
  FUN_01a58f3c(plVar6);
  FUN_00c97970(*(undefined8 *)(*param_1 + 200),&local_60,0x10);
  if (local_60 != (long *)0x0) {
    plVar6 = local_60 + 5;
    do {
      lVar10 = *plVar6;
      iVar3 = (int)lVar10 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_01a58eec;
  }
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_78 = 0;
  local_98 = 0;
  local_88 = 0x1fffffffffffffff;
  uStack_80 = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_90 = param_2;
  uVar7 = FUN_00e31554();
  FUN_00c850cc(&local_a8,0x1a,0x2e);
  FUN_00c850cc(&local_a8,1,0x22);
  FUN_00c850cc(&local_a8,0x1e,0x16);
  FUN_00ebd51c(&local_a8,uVar7,3,1);
  FUN_00c751c8(*param_1,&local_a8,1,1);
  FUN_00eb3bec(*(undefined8 *)(*param_1 + 200),1);
  FUN_00eb4900(*(undefined8 *)(*param_1 + 200),1);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 5;
    do {
      lVar10 = *plVar6;
      iVar3 = (int)lVar10 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_01a58eec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar4 = local_90;
  plVar6 = local_a8;
  if (local_a8 != (long *)0x0) {
    local_a0 = local_a8;
    lVar10 = local_98 - (long)local_a8;
    uVar8 = (**(code **)(*local_90 + 0xf8))(local_90);
    if (((uVar8 & 1) != 0) && (lVar9 = FUN_00c4e600(), 0 < *(int *)(lVar9 + 0x12c8))) {
      FUN_00c48fe8(plVar4,plVar6,lVar10,4);
      return;
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,plVar6,lVar10,4);
  }
  return;
}


