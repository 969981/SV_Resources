/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01447044; name: FUN_01447044
 */


void FUN_01447044(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60 [16];
  undefined8 local_50;
  long *local_48;
  
  FUN_01447398();
  uVar8 = *param_2;
  local_60._0_8_ = 0x6723799257d05608;
  local_60._8_8_ = PTR_DAT_047dcf20;
  local_50 = 0x1f;
  local_48 = (long *)0x0;
  FUN_01464dd0(&local_a8,local_60,*(undefined8 *)(param_1 + 0x380));
  puVar6 = (undefined8 *)FUN_015c1da4(uVar8,&local_a8);
  plVar9 = (long *)*puVar6;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 5;
    do {
      lVar5 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_014472e0;
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  memset(&local_a8,0,0x48);
  local_a8 = 0x100000001;
  uStack_a0 = 0;
  local_98 = 0x3f800000;
  local_90 = (long *)0x447a0000;
  local_68 = 8;
  local_84 = 0x500000005;
  local_88 = 0;
  local_64 = 0;
  local_7c = 5;
  local_78 = 0;
  uStack_70 = 0;
  local_60 = FUN_00d07744(*param_2,&local_a8);
  uVar7 = (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,0xb);
  plVar10 = (long *)plVar9[0xb];
  uVar7 = uVar7 >> 0x20;
  if (plVar10 == (long *)0x0) {
    FUN_01690980(0,1,uVar7,param_1 + 0x390);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) goto LAB_014472e0;
    FUN_01690980(plVar10,1,uVar7,param_1 + 0x390);
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar5 == 0) goto LAB_01447308;
  }
  plVar10 = (long *)plVar9[0xb];
  if (plVar10 == (long *)0x0) {
    FUN_01447330(0,1,uVar7,local_60);
  }
  else {
    plVar1 = plVar10 + 5;
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
LAB_014472e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_01447330(plVar10,1,uVar7,local_60);
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar5 == 0) goto LAB_01447308;
  }
  plVar10 = plVar9 + 5;
  do {
    lVar5 = *plVar10;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *(int *)plVar10 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  else if ((int)lVar5 == 0) {
LAB_01447308:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


