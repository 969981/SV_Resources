/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c1b68; name: FUN_011c1b68
 */


void FUN_011c1b68(char *param_1,undefined1 param_2 [16],float param_3)

{
  MutexType *pMVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = '\0';
  fStack_f8 = param_2._8_4_;
  fStack_f4 = param_2._12_4_;
  if (((*PTR_DAT_047d92e0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d92e0), iVar6 != 0))
  {
    FUN_00100190(&LAB_00a989cc,PTR_DAT_047d92e8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d92e0);
  }
  lVar9 = *(long *)PTR_DAT_047d92e8;
  *(long *)PTR_DAT_047d92f0 = lVar9;
  lVar9 = *(long *)(lVar9 + 0x28);
  pMVar1 = (MutexType *)(lVar9 + 0x130);
  uStack_c8 = CONCAT44(fStack_f4 - 0.0,fStack_f8 - 0.0);
  local_d0 = CONCAT44(param_2._4_4_ - param_3,param_2._0_4_ - 0.0);
  nn::os::LockMutex(pMVar1);
  puVar5 = PTR_DAT_047d92f8;
  plVar7 = *(long **)(*(long *)(*(long *)(lVar9 + 8) + 0x130) + 0xe0);
  local_88 = 0xffffffff;
  local_90 = PTR_DAT_047d9300 + 0x10;
  local_70 = 0;
  local_a0 = 1;
  uStack_58 = (ulong)(uint)(fStack_f8 + 0.0);
  uStack_48 = (ulong)(uint)(fStack_f8 - 0.0);
  local_50 = local_d0;
  local_98 = 0xffffffff;
  uStack_b8 = 0xffffffff;
  local_b0 = PTR_DAT_047d92f8 + 0x10;
  local_a8 = 0xffffffff;
  local_80 = &local_b0;
  uStack_78 = 0;
  local_c0 = 0x3f8000003f800000;
  local_60._0_4_ = param_2._0_4_ + 0.0;
  local_60._4_4_ = param_2._4_4_ + param_3;
  uVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_90,&local_c0);
  if ((uVar8 & 1) != 0) {
    fVar12 = (float)((ulong)local_c0 >> 0x20);
    fVar15 = (float)(uStack_58 >> 0x20);
    fVar11 = (float)local_60 + ((float)local_50 - (float)local_60) * (float)local_c0;
    fVar13 = local_60._4_4_ + (local_50._4_4_ - local_60._4_4_) * fVar12;
    fVar14 = (float)uStack_58 + ((float)uStack_48 - (float)uStack_58) * (float)local_c0;
    fVar15 = fVar15 + (uStack_48._4_4_ - fVar15) * fVar12;
    auVar10._4_4_ = fVar13;
    auVar10._0_4_ = fVar11;
    auVar10._8_4_ = fVar14;
    auVar10._12_4_ = fVar15;
    auVar2._4_4_ = fVar13;
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar14;
    auVar2._12_4_ = fVar15;
    auVar10 = NEON_ext(auVar10,auVar2,8,1);
    uStack_c8 = (ulong)auVar10._0_4_;
    local_d0 = CONCAT44(fVar13,fVar11);
  }
  nn::os::UnlockMutex(pMVar1);
  if ((uVar8 & 1) == 0) {
    nn::os::LockMutex(pMVar1);
    local_b0 = puVar5 + 0x10;
    auVar10 = NEON_ext(param_2,param_2,8,1);
    plVar7 = *(long **)(*(long *)(*(long *)(lVar9 + 8) + 0x130) + 0xe0);
    local_88 = 0xffffffff;
    local_70 = 0;
    uStack_58 = (ulong)auVar10._0_4_;
    local_98 = 0xffffffff;
    uStack_b8 = 0;
    uStack_b4 = 0;
    local_50 = CONCAT44(param_3,param_3);
    local_90 = PTR_DAT_047d9308 + 0x10;
    local_a8 = 0xffffffff;
    local_a0 = 1;
    local_80 = &local_b0;
    uStack_78 = 0;
    local_c0 = 0;
    local_60 = param_2._0_8_;
    iVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,&local_90,&local_c0);
    if (iVar6 != -1) {
      auVar4._8_4_ = uStack_b8;
      auVar4._0_8_ = local_c0;
      auVar3._8_4_ = uStack_b8;
      auVar3._0_8_ = local_c0;
      auVar3._12_4_ = uStack_b4;
      auVar4._12_4_ = uStack_b4;
      auVar10 = NEON_ext(auVar3,auVar4,8,1);
      uStack_c8 = (ulong)auVar10._0_4_;
      local_d0 = local_c0;
    }
    nn::os::UnlockMutex(pMVar1);
    if (iVar6 == -1) {
      return;
    }
  }
  *(ulong *)(param_1 + 0x18) = uStack_c8;
  *(undefined8 *)(param_1 + 0x10) = local_d0;
  if (*param_1 == '\0') {
    *param_1 = '\x01';
  }
  return;
}


