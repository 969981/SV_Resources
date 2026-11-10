/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014cc298; name: FUN_014cc298
 */


void FUN_014cc298(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_188 [2];
  long local_180;
  long local_178;
  long local_170;
  long *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  long local_110;
  long local_108;
  long local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  local_c0 = *(undefined8 *)(param_1 + 400);
  local_b0 = 0;
  uStack_b8 = 0x3ffffffffffffff;
  local_a8 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_110 = 0;
  local_70 = 0x3f800000;
  local_d0 = 0;
  uStack_c8 = 0;
  local_90 = 0x3ffffffffffffff;
  uStack_88 = 0;
  local_108 = 0;
  local_100 = 0;
  uStack_98 = local_c0;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (local_f8 = *(long **)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), local_f8 == (long *)0x0)) {
    local_f8 = (long *)FUN_01060ed0();
  }
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  local_d8 = 0;
  local_f0 = 0x7fffffffffffffff;
  local_e8 = 0;
  local_168 = *(long **)(param_1 + 400);
  local_118 = 0;
  local_150 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_138 = 0;
  local_170 = 0;
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xd00);
  local_148 = 0;
  uStack_140 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_f8 != local_168) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
    local_108 = 0;
    local_100 = 0;
    local_110 = 0;
  }
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  FUN_014d514c(&local_110,local_180,local_178);
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xe01);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0xe;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xf02);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0xf;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1003);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_178 = 0;
  local_170 = 0;
  local_180 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xd01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1005);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0x10;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1104);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_178 = 0;
  local_170 = 0;
  local_180 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1102);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xd01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1103);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0x11;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1205);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_178 = 0;
  local_170 = 0;
  local_180 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xd01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1204);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xe02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1203);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1202);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xc01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1202);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0x12;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1306);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_178 = 0;
  local_170 = 0;
  local_180 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xd01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1305);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xe02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1304);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xe01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1306);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1302);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0x13;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1406);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_178 = 0;
  local_170 = 0;
  local_180 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xe02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1405);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xe01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1405);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x1002;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1403);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0x900;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xf01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1404);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0x14;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1506);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_178 = 0;
  local_170 = 0;
  local_180 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xd01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1506);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xc01;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xf02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1505);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x1002;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1504);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0x900;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xf01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1505);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0x15;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1606);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_178 = 0;
  local_170 = 0;
  local_180 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xd01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1606);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x1002;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1605);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0x900;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xd01;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x1002;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1605);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0x900;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x1202;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1603);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0x16;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1707);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_178 = 0;
  local_170 = 0;
  local_180 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xd01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1706);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xc01;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xf02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1706);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0x900;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xf01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1706);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0x900;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x1202;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1706);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0x17;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1807);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_178 = 0;
  local_170 = 0;
  local_180 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xe02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1806);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xe01;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1806);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0x900;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x1202;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1805);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0x18;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = *(long **)(param_1 + 400);
  local_148 = 0;
  uStack_140 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_118 = 0;
  local_150 = 0;
  local_138 = 0;
  local_170 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  local_188[0]._0_2_ = 0xc00;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1908);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_100 = local_170;
  local_178 = 0;
  local_170 = 0;
  local_180 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xb00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xf03;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1906);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0xa00;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x1002;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1906);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0x900;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xd01;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x1002;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1906);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0]._0_2_ = 0x800;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x1402;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1904);
  FUN_014db39c(&local_180,local_188);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  local_100 = local_170;
  local_108 = local_178;
  local_110 = local_180;
  local_e0 = CONCAT44(uStack_14c,local_150);
  local_e8 = local_158;
  local_f8 = local_168;
  local_f0 = local_160;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_014db748(&local_148,&local_110);
  local_188[0] = 0x19;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar1 = local_168;
  lVar3 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar6 = local_170 - local_180;
    uVar4 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4bf4(&local_148);
  FUN_014d4d44(param_1 + 0xf8,&DAT_03d31506,&local_d0);
  plVar1 = local_f8;
  lVar3 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar6 = local_100 - local_110;
    uVar4 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar3,lVar6,1);
    }
  }
  FUN_014d4ac4(&local_d0);
  return;
}


