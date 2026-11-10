/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151a54c; name: FUN_0151a54c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0151a54c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *local_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  undefined1 local_60 [24];
  long *local_48;
  long local_38;
  
  uVar8 = *param_2;
  local_80 = 0x6723799257d05608;
  puStack_78 = PTR_DAT_047dcf20;
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  FUN_01464dd0(local_60,&local_80,*(undefined8 *)(param_1 + 0x380));
  FUN_012710b8(&local_38,uVar8,local_60);
  plVar6 = *(long **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = 0;
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
    else if ((int)lVar7 == 0) goto LAB_0151a814;
  }
  lVar7 = local_38;
  plVar6 = (long *)(param_1 + 0x388);
  local_38 = 0;
  *plVar6 = lVar7;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x388);
  uVar5 = FUN_01464df0(0xc,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar8,uVar5);
  FUN_0151b9b4(0x3f350481,0x3fe38e39,0x3c23d70a,0x477fff00,*(undefined8 *)(param_1 + 0x388));
  FUN_0151aee4(_DAT_03d68530,0,_DAT_03d68540,*(undefined8 *)(param_1 + 0x388));
  FUN_0151a864(&local_88,plVar6,3);
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 5;
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
      (**(code **)(*local_88 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_0151a814;
  }
  uVar8 = DAT_0485a0e0;
  lVar7 = *(long *)(param_1 + 0x388);
  (**(code **)(*DAT_0485a020 + 0x100))(local_60,DAT_0485a020,*(undefined8 *)(param_1 + 0x380));
  FUN_0151b210(uVar8,lVar7 + 0x38,local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  plVar6 = *(long **)(*plVar6 + 0x58);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
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
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_60[0] = 0;
  FUN_00d8219c(plVar6,0,param_1 + 0x480,0xffffffff,local_60);
  local_60[0] = 0;
  FUN_00d829fc(plVar6,param_1 + 0x488,local_60);
  FUN_00d81b84(0,0,0,0,plVar6,0);
  FUN_00d819c8(0,plVar6,1);
  FUN_0151a898(plVar6,0,0xff);
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    else if ((int)lVar7 == 0) {
LAB_0151a814:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


