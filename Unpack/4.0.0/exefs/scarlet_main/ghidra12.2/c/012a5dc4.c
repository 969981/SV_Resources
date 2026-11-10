/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a5dc4; name: FUN_012a5dc4
 */


void FUN_012a5dc4(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  long *local_c8;
  char *local_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long local_40;
  undefined1 auStack_38 [8];
  
  local_48 = DAT_0485a0a0;
  if (DAT_0485a0a0 != (long *)0x0) {
    plVar12 = DAT_0485a0a0 + 5;
    do {
      lVar9 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 == -1) goto LAB_012a6300;
  }
  plVar12 = *(long **)(*(long *)(DAT_0485a0d8 + 0x38) + 0x40);
  if (plVar12 != (long *)0x0) {
    plVar8 = plVar12 + 5;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 == -1) goto LAB_012a6300;
  }
  local_a0 = &DAT_af078523c7023ee7;
  local_98 = PTR_s_GrassCollision_047dd378;
  local_90 = 0x1f;
  plStack_88 = (long *)0x0;
  FUN_012a632c(&local_50,plVar12,&local_a0);
  FUN_00d100a8(local_50);
  local_58 = 1;
  plStack_88 = *(long **)(param_1 + 8);
  local_70 = 0;
  local_a0 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x0;
  local_80 = 0x1fffffffffffffff;
  uStack_78 = 0;
  local_90 = 0;
  local_68 = (long *)0x0;
  uStack_60 = 0;
  FUN_012a6760(&local_48,&local_a0,&local_58,10,10);
  FUN_012a6430(&local_a8,&local_48,10,10);
  (**(code **)(*(long *)(DAT_0485a0c8 + 0x30) + 0x18))(&local_c8);
  plVar8 = *(long **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar9 = *plVar1;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_012a62b8;
  }
  *(long **)(param_1 + 0x120) = local_c8;
  local_c8 = (long *)&DAT_af078523c7023ee7;
  local_c0 = PTR_s_GrassCollision_047dd380;
  local_b8 = 0x1f;
  local_b0 = (long *)0x0;
  local_e8 = 0x5346cd89735a1627;
  pcStack_e0 = "[Grass Collision Component Sphere]";
  local_d8 = 0x22;
  local_d0 = (long *)0x0;
  local_40 = DAT_0485a0d0;
  lVar9 = FUN_00dfee60(auStack_38,*(undefined8 *)(DAT_0485a0d0 + 8),&local_40,&local_e8);
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x28);
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
LAB_012a6300:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (*local_c0 != '\0') {
    FUN_00eac828(lVar9,&local_c8);
  }
  plVar8 = *(long **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar11 = *plVar1;
      iVar5 = (int)lVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_012a62b8;
  }
  *(long *)(param_1 + 0x128) = lVar9;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  lVar9 = *(long *)(param_1 + 0x128);
  FUN_00c75684(*(undefined8 *)(lVar9 + 200),0,&local_68);
  FUN_00c752dc(lVar9,&local_a0,1);
  FUN_00c97970(*(undefined8 *)(*(long *)(param_1 + 0x128) + 200),&local_a8,0x10);
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x128) + 200);
  uVar7 = (**(code **)(*(long *)(*(long *)(param_1 + 0x120) + 0x30) + 0x28))();
  (**(code **)(*(long *)(*(long *)(param_1 + 0x120) + 0x30) + 0x20))(&local_c8);
  FUN_00c4b998(uVar13,3,uVar7,&local_c8);
  if (local_c8 != (long *)0x0) {
    plVar8 = local_c8 + 5;
    do {
      lVar9 = *plVar8;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_012a62b8;
  }
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x128) + 200),0,local_50 + 0x1e);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0x128) + 200),2,1);
  FUN_00eb2008(*(undefined8 *)(*(long *)(param_1 + 0x128) + 200),4);
  FUN_00c4db90(*(undefined8 *)(*(long *)(param_1 + 0x128) + 200),0x21c,0,0,0,0);
  if (local_a8 != (long *)0x0) {
    plVar8 = local_a8 + 5;
    do {
      lVar9 = *plVar8;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_012a62b8;
  }
  if (local_68 != (long *)0x0) {
    plVar8 = local_68 + 5;
    do {
      lVar9 = *plVar8;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_012a62b8;
  }
  plVar8 = plStack_88;
  puVar6 = local_a0;
  if (local_a0 != (undefined1 *)0x0) {
    local_98 = local_a0;
    lVar9 = local_90 - (long)local_a0;
    uVar10 = (**(code **)(*plStack_88 + 0xf8))(plStack_88);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar6,lVar9,4);
    }
    else {
      FUN_00c48fe8(plVar8,puVar6,lVar9,4);
    }
  }
  if (local_50 != (long *)0x0) {
    plVar8 = local_50 + 5;
    do {
      lVar9 = *plVar8;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_012a62b8;
  }
  if (plVar12 != (long *)0x0) {
    plVar8 = plVar12 + 5;
    do {
      lVar9 = *plVar8;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar9 == 0) goto LAB_012a62b8;
  }
  if (local_48 != (long *)0x0) {
    plVar12 = local_48 + 5;
    do {
      lVar9 = *plVar12;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
LAB_012a62b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


