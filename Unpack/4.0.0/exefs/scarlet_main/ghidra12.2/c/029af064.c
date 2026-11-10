/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029af064; name: FUN_029af064
 */


void FUN_029af064(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 auStack_70 [2];
  long *local_68;
  long *local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long *local_28;
  
  local_60 = (long *)FUN_00e31554();
  local_60 = (long *)*local_60;
  if (local_60 != (long *)0x0) {
    plVar5 = local_60 + 5;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = (int)lVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar8 == -1) goto LAB_029af3c8;
  }
  plVar5 = (long *)FUN_029af880(*param_1,0);
  FUN_00ca7394(plVar5,1);
  lVar8 = *plVar5;
  FUN_00c850cc(lVar8,1,0x22);
  FUN_00c850cc(lVar8,0x1e,0x16);
  FUN_00ebd51c(lVar8,&local_60,0x100,1);
  plVar5 = *(long **)(*plVar5 + 0x38);
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 5;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar8 == -1) goto LAB_029af3c8;
  }
  FUN_029af898(plVar5);
  local_48 = 0;
  local_58 = (long *)&DAT_00000400;
  uStack_50 = 4;
  local_28 = local_60;
  local_68 = (long *)FUN_00cf3764(auStack_70,local_60[1],&local_28);
  if (local_68 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = local_68 + 5;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar8 == -1) goto LAB_029af3c8;
    plVar7 = local_68;
  }
  FUN_00d560a0(plVar7,&local_58,1,0,0);
  local_58 = (long *)((ulong)local_58 & 0xffffffff00000000);
  local_28 = (long *)CONCAT44(local_28._4_4_,1);
  local_74 = 3;
  auStack_70[0] = 2;
  local_7c = 1;
  uStack_78 = 2;
  FUN_0271761c(plVar7,&local_58,&local_28,auStack_70,&local_74,&uStack_78,&local_7c);
  FUN_029af904(*param_1,&local_68,0x10);
  puVar6 = (undefined8 *)FUN_00ebd9ec(*param_1);
  local_58 = (long *)*puVar6;
  if (local_58 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = local_58 + 5;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = (int)lVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar8 == -1) {
LAB_029af3c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar7 = local_58;
  }
  FUN_029af9f4(plVar7,6);
  plVar7 = (long *)FUN_00f351bc();
  lVar8 = *plVar7;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x10))();
  }
  FUN_00c5ecb4(&local_28,lVar8,param_2);
  FUN_00eb0b40(local_28,&local_58);
  FUN_00eaabc4(local_28);
  if (local_28 != (long *)0x0) {
    plVar7 = local_28 + 5;
    do {
      lVar4 = *plVar7;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_029af3a0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x18))((long *)(lVar8 + 0x20));
  }
  if (local_58 != (long *)0x0) {
    plVar7 = local_58 + 5;
    do {
      lVar8 = *plVar7;
      iVar3 = (int)lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_029af3a0;
  }
  if (local_68 != (long *)0x0) {
    plVar7 = local_68 + 5;
    do {
      lVar8 = *plVar7;
      iVar3 = (int)lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_029af3a0;
  }
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 5;
    do {
      lVar8 = *plVar7;
      iVar3 = (int)lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    else if ((int)lVar8 == 0) goto LAB_029af3a0;
  }
  if (local_60 != (long *)0x0) {
    plVar5 = local_60 + 5;
    do {
      lVar8 = *plVar5;
      iVar3 = (int)lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *(int *)plVar5 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_029af3a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


