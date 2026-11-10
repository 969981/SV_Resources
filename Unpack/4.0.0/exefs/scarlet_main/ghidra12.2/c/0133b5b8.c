/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0133b5b8; name: FUN_0133b5b8
 */


void FUN_0133b5b8(long *param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  MutexType *pMVar8;
  char *pcVar9;
  void *__dest;
  long lVar10;
  undefined *puVar11;
  ulong local_c0;
  long *local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined4 local_a6;
  undefined2 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined2 local_8e;
  undefined2 local_86;
  undefined4 local_64;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047e4700 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = -0x8000000000000000;
  param_1[0xb] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
  puVar5 = PTR_DAT_047d1a08;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_c0 = 0x20;
  pMVar8 = (MutexType *)(**(code **)puVar5)(0,&local_c0,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(pMVar8,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar8,true,0);
  param_1[8] = (long)pMVar8;
  lVar10 = param_1[10];
  iVar7 = FUN_02f1c3ec(param_1 + 9,0,param_2,0x10);
  if (-1 < iVar7) {
    FUN_02f1c7c0(param_1 + 3,param_1,(int)lVar10);
  }
  memset(&local_c0,0,0x50);
  local_64 = 0;
  FUN_00cb06cc(&uStack_a7,&local_64);
  local_a6 = 0x3f003f00;
  local_a0 = 0x201;
  local_98 = 0x3f8000007f7fffee;
  local_9c = 0x3d4ccccd;
  local_90 = 0;
  local_8e = 0x3f80;
  local_86 = 0x40a0;
  local_b0 = 1;
  FUN_00cb1704(param_1,&local_c0);
  if ((local_b8 != (long *)0x0) && (local_b8[1] != 0)) {
    plVar1 = local_b8 + 2;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_b8 + 0x18))();
    }
  }
  if ((local_c0 & 1) != 0) {
    (**(code **)(puVar5 + 8))(0,local_c0 - 1,0);
  }
  memset(&local_c0,0,0x50);
  local_64 = 0;
  FUN_00cb06cc(&uStack_a7,&local_64);
  uVar6 = local_c0;
  puVar5 = PTR_PTR_047d1a50;
  local_a6 = 0x3f003f00;
  local_a0 = 0x201;
  local_98 = 0x3f8000007f7fffee;
  local_9c = 0x3d4ccccd;
  local_90 = 0;
  local_8e = 0x3f80;
  local_86 = 0x40a0;
  local_b0 = 1;
  if ((char *)(local_c0 & 0xfffffffffffffffe) != "[Preset] Trigger (broad phase)") {
    pcVar9 = (char *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,0x1f);
    uVar4 = CONCAT17(s__Preset__Trigger__broad_phase__03c44737[0x17],
                     s__Preset__Trigger__broad_phase__03c44737._16_7_);
    *(ulong *)(pcVar9 + 0x17) =
         CONCAT71(s__Preset__Trigger__broad_phase__03c44737._24_7_,
                  s__Preset__Trigger__broad_phase__03c44737[0x17]);
    *(undefined8 *)(pcVar9 + 0x10) = uVar4;
    uVar4 = s__Preset__Trigger__broad_phase__03c44737._8_8_;
    *(undefined8 *)pcVar9 = s__Preset__Trigger__broad_phase__03c44737._0_8_;
    *(undefined8 *)(pcVar9 + 8) = uVar4;
    local_c0 = (ulong)pcVar9 | 1;
    if ((uVar6 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar6 - 1,0);
    }
  }
  local_a8 = 1;
  local_64 = 0x7f7fffee;
  FUN_00cb06cc(&uStack_a7,&local_64);
  FUN_00cb1704(param_1,&local_c0);
  if ((local_b8 != (long *)0x0) && (local_b8[1] != 0)) {
    plVar1 = local_b8 + 2;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_b8 + 0x18))();
    }
  }
  puVar11 = PTR_DAT_047d1a08;
  if ((local_c0 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_c0 - 1,0);
  }
  memset(&local_c0,0,0x50);
  local_64 = 0;
  FUN_00cb06cc(&uStack_a7,&local_64);
  uVar6 = local_c0;
  local_a6 = 0x3f003f00;
  local_8e = 0x3f80;
  local_b0 = 1;
  local_a0 = 0x201;
  local_98 = 0x3f8000007f7fffee;
  local_9c = 0x3d4ccccd;
  local_90 = 0;
  local_86 = 0x40a0;
  if ((char *)(local_c0 & 0xfffffffffffffffe) != "[Preset] Trigger (narrow phase)") {
    pcVar9 = (char *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,0x20);
    uVar4 = s__Preset__Trigger__narrow_phase__03bf7aa2._24_8_;
    *(undefined8 *)(pcVar9 + 0x10) = s__Preset__Trigger__narrow_phase__03bf7aa2._16_8_;
    *(undefined8 *)(pcVar9 + 0x18) = uVar4;
    uVar4 = s__Preset__Trigger__narrow_phase__03bf7aa2._8_8_;
    *(undefined8 *)pcVar9 = s__Preset__Trigger__narrow_phase__03bf7aa2._0_8_;
    *(undefined8 *)(pcVar9 + 8) = uVar4;
    local_c0 = (ulong)pcVar9 | 1;
    if ((uVar6 & 1) != 0) {
      (**(code **)(puVar11 + 8))(0,uVar6 - 1,0);
    }
  }
  local_a8 = 2;
  local_64 = 0;
  FUN_00cb06cc(&uStack_a7,&local_64);
  FUN_00cb1704(param_1,&local_c0);
  if ((local_b8 != (long *)0x0) && (local_b8[1] != 0)) {
    plVar1 = local_b8 + 2;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar11 = PTR_DAT_047d1a08;
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_b8 + 0x18))();
    }
  }
  if ((local_c0 & 1) != 0) {
    (**(code **)(puVar11 + 8))(0,local_c0 - 1,0);
  }
  memset(&local_c0,0,0x50);
  local_64 = 0;
  FUN_00cb06cc(&uStack_a7,&local_64);
  uVar6 = local_c0;
  local_a0 = 0x201;
  local_a6 = 0x3f003f00;
  local_8e = 0x3f80;
  local_98 = 0x3f8000007f7fffee;
  local_9c = 0x3d4ccccd;
  local_90 = 0;
  local_86 = 0x40a0;
  local_b0 = 1;
  if ((char *)(local_c0 & 0xfffffffffffffffe) != "[Preset] Trigger (contact solver)") {
    __dest = (void *)(**(code **)(*(long *)puVar5 + 0x18))(puVar5,0x22);
    memcpy(__dest,"[Preset] Trigger (contact solver)",0x22);
    local_c0 = (ulong)__dest | 1;
    if ((uVar6 & 1) != 0) {
      (**(code **)(puVar11 + 8))(0,uVar6 - 1,0);
    }
  }
  local_a8 = 3;
  local_64 = 0;
  FUN_00cb06cc(&uStack_a7,&local_64);
  FUN_00cb1704(param_1,&local_c0);
  if ((local_b8 != (long *)0x0) && (local_b8[1] != 0)) {
    plVar1 = local_b8 + 2;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar11 = PTR_DAT_047d1a08;
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_b8 + 0x18))();
    }
  }
  if ((local_c0 & 1) != 0) {
    (**(code **)(puVar11 + 8))(0,local_c0 - 1,0);
  }
  return;
}


