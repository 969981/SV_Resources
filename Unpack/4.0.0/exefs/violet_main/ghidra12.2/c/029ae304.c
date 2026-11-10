/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ae304; name: FUN_029ae304
 */


void FUN_029ae304(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  char local_c0 [8];
  long local_b8;
  long lStack_b0;
  long local_a8;
  long *local_a0;
  long *local_98;
  char local_90 [8];
  long local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar5 = (undefined8 *)FUN_029af054();
  local_50 = 0xf;
  local_48 = (long *)0x0;
  local_60 = (long *)0x4d9ee0affd6bb745;
  pcStack_58 = "[AnonimousMesh]";
  FUN_00f3d6f8(&local_28,*puVar5,&local_60,0);
  FUN_02710f18(param_1,&local_28);
  plVar6 = (long *)CONCAT44(uStack_24,local_28);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
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
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_029ae648;
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  puVar5 = (undefined8 *)FUN_029af054();
  local_50 = 0xf;
  local_48 = (long *)0x0;
  local_60 = (long *)0x4d9ee0affd6bb745;
  pcStack_58 = "[AnonimousMesh]";
  FUN_00f3d6f8(&local_28,*puVar5,&local_60,0);
  FUN_02710f18(param_1 + 1,&local_28);
  plVar6 = (long *)CONCAT44(uStack_24,local_28);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
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
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_029ae648;
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_68 = (long *)*param_1;
  if (local_68 != (long *)0x0) {
    plVar6 = local_68 + 5;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar7 == -1) goto LAB_029ae670;
  }
  local_90[0] = '\0';
  if ((char)param_1[2] != '\0') {
    local_88 = param_1[3];
    lStack_80 = param_1[4];
    local_78 = param_1[5];
    local_70 = (long *)param_1[6];
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
    local_90[0] = '\x01';
  }
  FUN_029af064(&local_68,local_90);
  if (local_90[0] != '\0') {
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    local_90[0] = '\0';
  }
  if (local_68 != (long *)0x0) {
    plVar6 = local_68 + 5;
    do {
      lVar7 = *plVar6;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_029ae648;
  }
  local_98 = (long *)param_1[1];
  if (local_98 != (long *)0x0) {
    plVar6 = local_98 + 5;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar7 == -1) {
LAB_029ae670:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_c0[0] = '\0';
  if ((char)param_1[7] != '\0') {
    local_b8 = param_1[8];
    lStack_b0 = param_1[9];
    local_a8 = param_1[10];
    local_a0 = (long *)param_1[0xb];
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x18))();
    }
    local_c0[0] = '\x01';
  }
  FUN_029af064(&local_98,local_c0);
  if (local_c0[0] != '\0') {
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    local_c0[0] = '\0';
  }
  if (local_98 != (long *)0x0) {
    plVar6 = local_98 + 5;
    do {
      lVar7 = *plVar6;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_029ae648:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar6 = (long *)FUN_0145966c();
  local_28 = (**(code **)(*plVar6 + 0x88))();
  plVar6 = param_1;
  do {
    lVar7 = *plVar6;
    if ((int)((ulong)(*(long *)(lVar7 + 0x58) - *(long *)(lVar7 + 0x50)) >> 3) != 0) {
      uVar8 = 0;
      do {
        local_60 = param_1;
        pcStack_58 = (char *)&local_28;
        FUN_029af3f0(*(undefined8 *)(*(long *)(lVar7 + 0x50) + uVar8 * 8),&local_60);
        lVar7 = *plVar6;
        uVar8 = uVar8 + 1;
      } while (uVar8 < ((ulong)(*(long *)(lVar7 + 0x58) - *(long *)(lVar7 + 0x50)) >> 3 & 0xffffffff
                       ));
    }
    plVar6 = plVar6 + 1;
  } while (plVar6 != param_1 + 2);
  return;
}


