/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011fa0bc; name: FUN_011fa0bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011fa0bc(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  byte *pbVar13;
  long *plVar14;
  long *local_a8;
  long *local_a0;
  char *pcStack_98;
  ulong local_90;
  long *local_88;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  long local_48;
  undefined1 auStack_28 [8];
  
  FUN_00d1a22c(param_1,9);
  param_1[0x2a] = 0;
  *param_1 = &PTR_FUN_045dcc98;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[6] = &PTR_LAB_045dcf58;
  param_1[7] = &PTR_LAB_045dcf80;
  param_1[4] = &PTR_LAB_045dcdd8;
  param_1[5] = &DAT_045dcf00;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x28] = param_1[1];
  param_1[0x29] = 0x1fffffffffffffff;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x30,0,1);
  uVar8 = _UNK_03cabe58;
  uVar7 = _DAT_03cabe50;
  uVar6 = _UNK_03caa988;
  uVar12 = _DAT_03caa980;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x33] = uVar6;
  param_1[0x32] = uVar12;
  param_1[0x35] = uVar8;
  param_1[0x34] = uVar7;
  puVar10 = (undefined8 *)FUN_00e31554();
  plVar14 = (long *)*puVar10;
  if (plVar14 != (long *)0x0) {
    plVar11 = plVar14 + 5;
    do {
      lVar5 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == -1) goto LAB_011fa560;
  }
  local_4c = 1;
  local_58 = 0x3f800000;
  local_60 = 0x3f80000000000004;
  local_54 = 0x101000100000024;
  plVar11 = (long *)FUN_0145966c();
  local_a0 = (long *)&DAT_467e2758d1d5ce6e;
  pcStack_98 = "HideModelStencil";
  local_90 = 0x10;
  local_88 = (long *)0x0;
  pbStack_78 = (byte *)(**(code **)(*plVar11 + 0x50))(plVar11,&local_a0,0);
  if (pbStack_78 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_78 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)pbStack_78);
    bVar2 = *pbStack_78;
    local_80 = &DAT_cbf29ce484222645;
    pbVar13 = pbStack_78;
    while (bVar2 != 0) {
      pbVar13 = pbVar13 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar13;
    }
    local_68 = (long *)0x0;
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  puVar10 = (undefined8 *)FUN_0166cefc();
  FUN_0151ede0(&local_a0,*puVar10,&local_60,&local_80,param_2,0);
  plVar11 = (long *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 5;
    do {
      lVar5 = *plVar1;
      iVar9 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_011fa538;
  }
  plVar11 = local_a0;
  param_1[0x24] = local_a0;
  FUN_011fa588(&local_a0);
  FUN_0151ec90(plVar11,&local_a0,1);
  if (local_a0 != (long *)0x0) {
    plVar11 = local_a0 + 5;
    do {
      lVar5 = *plVar11;
      iVar9 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_011fa538;
  }
  plVar11 = (long *)FUN_00e31554();
  local_48 = *plVar11;
  local_90 = local_90 & 0xffffffff00000000;
  local_a0 = (long *)&DAT_00000048;
  pcStack_98 = (char *)0x4;
  local_a8 = (long *)FUN_00cf3764(auStack_28,*(undefined8 *)(local_48 + 8),&local_48);
  if (local_a8 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = local_a8 + 5;
    do {
      lVar5 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == -1) {
LAB_011fa560:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar11 = local_a8;
  }
  FUN_00d560a0(plVar11,&local_a0,1,0,0);
  FUN_011fa59c(plVar11);
  FUN_00c97970(*(undefined8 *)(param_1[0x24] + 200),&local_a8,0x10);
  if (local_a8 != (long *)0x0) {
    plVar11 = local_a8 + 5;
    do {
      lVar5 = *plVar11;
      iVar9 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_011fa538;
  }
  uVar12 = FUN_00e31554();
  FUN_00c850cc(param_1 + 0x25,1,0x22);
  FUN_00ebd51c(param_1 + 0x25,uVar12,8,1);
  FUN_011fa5cc(param_1);
  FUN_00eb2d18(*(undefined8 *)(param_1[0x24] + 200),2,1);
  FUN_00eb3bec(*(undefined8 *)(param_1[0x24] + 200),1);
  FUN_00eb6a8c(*(undefined8 *)(param_1[0x24] + 200),7);
  FUN_00ead254(*(undefined8 *)(param_1[0x24] + 200),1);
  FUN_00eb4900(*(undefined8 *)(param_1[0x24] + 200),1);
  FUN_011fa748(param_1);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    plVar11 = plVar14 + 5;
    do {
      lVar5 = *plVar11;
      iVar9 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar5 == 0) {
LAB_011fa538:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


