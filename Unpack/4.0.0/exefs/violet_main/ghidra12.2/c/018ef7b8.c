/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ef7b8; name: FUN_018ef7b8
 */


void FUN_018ef7b8(undefined4 param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined8 *param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  long *local_110;
  char *pcStack_108;
  undefined8 local_100;
  long *local_f8;
  long *local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  long *local_a8;
  char *pcStack_a0;
  ulong local_98;
  long *local_90;
  long local_88;
  long lStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  FUN_00d1a22c(param_2,0);
  *param_2 = &PTR_FUN_045ae7c8;
  auVar11 = NEON_fmov(0x3f800000,4);
  param_2[4] = &PTR_LAB_045ae910;
  param_2[5] = &DAT_045aea38;
  param_2[6] = &PTR_LAB_045aea90;
  param_2[7] = &PTR_LAB_045aeab8;
  *(undefined8 *)((long)param_2 + 0x11e) = 0;
  *(undefined8 *)((long)param_2 + 0x126) = 0;
  *(undefined2 *)((long)param_2 + 0x13e) = 0;
  *(undefined8 *)((long)param_2 + 0x12e) = 0;
  *(undefined8 *)((long)param_2 + 0x136) = 0;
  *(undefined4 *)(param_2 + 0x2e) = 0;
  *(undefined4 *)(param_2 + 0x34) = param_1;
  *(undefined4 *)((long)param_2 + 0x1a4) = param_5;
  *(undefined4 *)((long)param_2 + 0x114) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = param_2[1];
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2c] = 0x1fffffffffffffff;
  param_2[0x2d] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x33] = auVar11._8_8_;
  param_2[0x32] = auVar11._0_8_;
  FUN_00c6a514(param_2 + 7,0x82);
  local_a8 = (long *)&DAT_84ec145abd8cfa3e;
  pcStack_a0 = "Default";
  local_98 = 7;
  local_90 = (long *)0x0;
  local_88 = (long)param_3;
  lStack_80 = (long)param_4;
  local_78 = 0x38;
  local_70 = *param_7;
  uStack_68 = param_7[1];
  local_60 = param_7[2];
  local_58 = (long *)0x0;
  plVar10 = (long *)param_7[3];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_58 = plVar10;
  FUN_018efed0(&local_f0,&local_a8);
  plVar10 = (long *)param_2[0x25];
  param_2[0x25] = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))();
  }
  param_2[0x25] = local_f0;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  (**(code **)(*(long *)param_2[0x25] + 0x68))
            ((long *)param_2[0x25],*(undefined1 *)((long)param_2 + 0x11e));
  (**(code **)(*(long *)param_2[0x25] + 0xb0))(ZEXT816(0),0,0,0);
  (**(code **)(*(long *)param_2[0x25] + 0xb8))((long *)param_2[0x25],param_6);
  local_b8 = 0x3f800000;
  local_ac = 1;
  local_c0 = 0x3f80000000000004;
  local_b4 = 0x10100000006;
  puVar5 = (undefined8 *)FUN_0166cefc();
  uVar9 = *puVar5;
  local_f0 = (long *)0x20093f0fda907816;
  pcStack_e8 = "OffScreen";
  local_e0 = 9;
  local_d8 = (long *)0x0;
  pcVar6 = (char *)(**(code **)(*DAT_0485a020 + 0x50))(DAT_0485a020,&local_f0,0);
  local_d0 = (long *)0x0;
  if (*pcVar6 == '\0') {
    plVar10 = (long *)FUN_00d44228();
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    if (local_d0 != (long *)0x0) {
      lVar8 = *local_d0;
      local_d0 = plVar10;
      (**(code **)(lVar8 + 0x20))();
      plVar10 = local_d0;
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar7;
    FUN_00cf9884(&local_a8,uVar7,pcVar6);
    plVar10 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    local_d0 = local_a8;
    plVar10 = local_d0;
  }
  local_d0 = plVar10;
  FUN_0135d26c(&local_a8,&local_d0);
  local_110 = (long *)0x763ef1cc099151ef;
  pcStack_108 = "[Rect]";
  local_100 = 6;
  local_f8 = (long *)0x0;
  FUN_0151ede0(&local_c8,uVar9,&local_c0,&local_a8,&local_110,param_2[1]);
  plVar10 = (long *)param_2[0x26];
  param_2[0x26] = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_018efe80;
  }
  uVar9 = local_c8;
  local_c8 = 0;
  param_2[0x26] = uVar9;
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  local_f0 = (long *)FUN_00e31554();
  local_f0 = (long *)*local_f0;
  local_98 = local_98 & 0xffffffff00000000;
  local_a8 = (long *)&DAT_0000000c;
  pcStack_a0 = (char *)0x4;
  local_110 = (long *)FUN_00cf3764(&local_c0,local_f0[1],&local_f0);
  if (local_110 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = local_110 + 5;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar10 = local_110;
  }
  FUN_00d560a0(plVar10,&local_a8,1,0,0);
  FUN_018efee8(plVar10);
  FUN_00c97970(*(undefined8 *)(param_2[0x26] + 200),&local_110,0x10);
  if (local_110 != (long *)0x0) {
    plVar10 = local_110 + 5;
    do {
      lVar8 = *plVar10;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_018efe80;
  }
  puVar5 = param_2 + 0x28;
  uVar9 = FUN_00e31554();
  FUN_00c850cc(puVar5,0x1a,0x2e);
  FUN_00c850cc(puVar5,1,0x22);
  FUN_00c850cc(puVar5,0x1e,0x16);
  FUN_00ebd51c(puVar5,uVar9,4,1);
  FUN_015efc98(param_2);
  FUN_00eb3bec(*(undefined8 *)(param_2[0x26] + 200),1);
  FUN_00eb4900(*(undefined8 *)(param_2[0x26] + 200),0);
  FUN_00eb2d18(*(undefined8 *)(param_2[0x26] + 200),2,1);
  FUN_00eb6a8c(*(undefined8 *)(param_2[0x26] + 200),7);
  FUN_00eb2008(*(undefined8 *)(param_2[0x26] + 200),4);
  FUN_00eb1310(*(undefined8 *)(param_2[0x26] + 200),0,1);
  (**(code **)(*(long *)param_2[0x25] + 0x78))(&local_f0);
  FUN_018eff80(&local_a8,&local_f0);
  plVar10 = (long *)param_2[0x27];
  param_2[0x27] = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_018efe80;
  }
  plVar10 = local_a8;
  local_a8 = (long *)0x0;
  param_2[0x27] = plVar10;
  if (local_f0 != (long *)0x0) {
    plVar10 = local_f0 + 5;
    do {
      lVar8 = *plVar10;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_018efe80;
  }
  uVar9 = param_2[0x26];
  (**(code **)(*(long *)param_2[0x25] + 0x78))(&local_a8);
  FUN_01773b4c(uVar9,0,&local_a8,0,0,0);
  if (local_a8 != (long *)0x0) {
    plVar10 = local_a8 + 5;
    do {
      lVar8 = *plVar10;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_018efe80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00eacd1c(param_2[0x26],0,1,0);
  *(undefined4 *)(param_2[0x26] + 0xf0) = *(undefined4 *)((long)param_2 + 0x1a4);
  return;
}


