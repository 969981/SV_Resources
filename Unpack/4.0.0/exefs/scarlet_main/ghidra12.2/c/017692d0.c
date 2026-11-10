/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017692d0; name: FUN_017692d0
 */


void FUN_017692d0(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *local_80;
  undefined1 *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  long *local_60;
  long local_58 [3];
  long *local_40;
  long local_38;
  
  uVar10 = *(undefined8 *)(param_1 + 0x388);
  local_78 = &DAT_69bd0c30cda452a3;
  puStack_70 = PTR_s_SkyBox_047e14c8;
  local_68 = 0x1f;
  local_60 = (long *)0x0;
  FUN_01464dd0(local_58,&local_78,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_38,uVar10,local_58);
  plVar8 = *(long **)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  if (plVar8 != (long *)0x0) {
    plVar11 = plVar8 + 5;
    do {
      lVar6 = *plVar11;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_017696c8;
  }
  lVar6 = local_38;
  plVar8 = (long *)(param_1 + 0x3d0);
  local_38 = 0;
  *plVar8 = lVar6;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x3d0);
  uVar7 = FUN_01464df0(0x66,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar10,uVar7);
  plVar11 = *(long **)(*(long *)(param_1 + 0x3d0) + 0x58);
  if (plVar11 == (long *)0x0) {
    local_58[0] = (ulong)local_58[0]._1_7_ << 8;
    FUN_00d8219c(0,0,param_1 + 0x480,0xffffffff,local_58);
  }
  else {
    plVar1 = plVar11 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_017696f0;
    local_58[0] = (ulong)local_58[0]._1_7_ << 8;
    FUN_00d8219c(plVar11,0,param_1 + 0x480,0xffffffff,local_58);
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar6 == 0) goto LAB_017696c8;
  }
  plVar11 = *(long **)(*plVar8 + 0x58);
  if (plVar11 == (long *)0x0) {
    local_58[0] = (ulong)local_58[0]._1_7_ << 8;
    FUN_00d829fc(0,param_1 + 0x488,local_58);
  }
  else {
    plVar1 = plVar11 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_017696f0;
    local_58[0] = (ulong)local_58[0]._1_7_ << 8;
    FUN_00d829fc(plVar11,param_1 + 0x488,local_58);
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar6 == 0) goto LAB_017696c8;
  }
  plVar11 = *(long **)(*plVar8 + 0x58);
  if (plVar11 == (long *)0x0) {
    FUN_00d819c8(0,0,0);
  }
  else {
    plVar1 = plVar11 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_017696f0;
    FUN_00d819c8(0,plVar11,0);
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar6 == 0) goto LAB_017696c8;
  }
  plVar11 = *(long **)(*plVar8 + 0x58);
  if (plVar11 == (long *)0x0) {
    FUN_00d80894(0,0,0x44f00000,0x44870000,0,0);
  }
  else {
    plVar1 = plVar11 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_017696f0;
    FUN_00d80894(0,0,0x44f00000,0x44870000,plVar11,0);
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar6 == 0) goto LAB_017696c8;
  }
  FUN_00d8037c(*plVar8,0,0,0,0x780,0x438);
  FUN_0151a864(&local_80,plVar8,0x1f);
  if (local_80 != (long *)0x0) {
    plVar8 = local_80 + 5;
    do {
      lVar6 = *plVar8;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
LAB_017696c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (*(long *)(param_1 + 0x380) == 0) {
    puVar9 = (undefined1 *)FUN_01769784(*(undefined8 *)(param_1 + 8));
    local_78 = puVar9;
    if (puVar9 != (undefined1 *)0x0) {
      piVar2 = (int *)(puVar9 + 0x28);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == -1) {
LAB_017696f0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    local_58[0] = *(long *)(param_1 + 0x580);
    *(undefined8 *)(param_1 + 0x580) = 0;
    FUN_01769718(local_58);
    local_78 = (undefined1 *)0x0;
    *(undefined1 **)(param_1 + 0x580) = puVar9;
    FUN_01769718(&local_78);
    FUN_0176992c(*(undefined8 *)(param_1 + 0x580));
  }
  return;
}


