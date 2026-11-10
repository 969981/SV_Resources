/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014cf650; name: FUN_014cf650
 */


void FUN_014cf650(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
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
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  puVar1 = (undefined8 *)(param_1 + 400);
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (local_f8 = *(long **)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), local_f8 == (long *)0x0)) {
    local_f8 = (long *)FUN_01060ed0();
  }
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  local_d8 = 0;
  local_f0 = 0x7fffffffffffffff;
  local_e8 = 0;
  local_168 = (long *)*puVar1;
  local_118 = 0;
  local_150 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_138 = 0;
  local_170 = 0;
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x700);
  local_148 = 0;
  uStack_140 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_f8 != local_168) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
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
  local_188[0]._0_2_ = 0x600;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x801);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0] = 8;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
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
  local_188[0]._0_2_ = 0x600;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x902);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x901);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0] = 9;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
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
  local_188[0]._0_2_ = 0x600;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xa03);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x701;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xa02);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xa01);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0] = 10;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
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
  local_188[0]._0_2_ = 0x600;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xb04);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x801;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xb02);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xb02);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0] = 0xb;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
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
  local_188[0]._0_2_ = 0x600;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xc05);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x601;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xc02);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x802;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xc03);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0] = 0xc;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_118 = 0;
  local_150 = 0;
  local_188[0]._0_2_ = 0x500;
  local_170 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x701;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xd05);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x801;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xd06);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xd02);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x901;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xd03);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xd03);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0] = 0xd;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
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
  local_188[0]._0_2_ = 0x600;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x803;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xe07);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x903;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xe04);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x501;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xe02);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xe03);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x802;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xe05);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0] = 0xe;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_118 = 0;
  local_150 = 0;
  local_188[0]._0_2_ = 0x500;
  local_170 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xf04);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x901;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xf07);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xf02);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x601;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x902;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0xf05);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0] = 0xf;
  FUN_014d4304(&local_d0,local_188,&local_148);
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
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
  local_188[0]._0_2_ = 0x600;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1006);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xb03;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1006);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xc02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1003);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x601;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1004);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa04;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1005);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_118 = 0;
  local_150 = 0;
  local_188[0]._0_2_ = 0x500;
  local_170 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x701;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1106);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x801;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1106);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xc02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1104);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xc02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1104);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1105);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
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
  local_188[0]._0_2_ = 0x600;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1207);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x802;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1206);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x802;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1206);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x801;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1206);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x601;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1205);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_118 = 0;
  local_150 = 0;
  local_188[0]._0_2_ = 0x500;
  local_170 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x701;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1307);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x903;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1306);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x701;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1306);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1306);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x601;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x902;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1306);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_118 = 0;
  local_150 = 0;
  local_188[0]._0_2_ = 0x500;
  local_170 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa04;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1406);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1406);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x501;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xb02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1406);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x601;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa03;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1406);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
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
  local_188[0]._0_2_ = 0x600;
  local_180 = 0;
  local_178 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1508);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x500;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x903;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1507);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x702;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xb03;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1506);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x901;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1507);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_118 = 0;
  local_150 = 0;
  local_188[0]._0_2_ = 0x500;
  local_170 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x701;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1608);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x702;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xc04;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1606);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1606);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x701;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1606);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_118 = 0;
  local_150 = 0;
  local_188[0]._0_2_ = 0x500;
  local_170 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x802;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1708);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x702;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xc04;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1707);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x501;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x802;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xd04;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1706);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x902;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xd03;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1706);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_118 = 0;
  local_150 = 0;
  local_188[0]._0_2_ = 0x500;
  local_170 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x903;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1808);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa04;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1806);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x501;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x802;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xe05;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1806);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  local_168 = (long *)*puVar1;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_118 = 0;
  local_150 = 0;
  local_188[0]._0_2_ = 0x500;
  local_170 = 0;
  local_128 = 0x3ffffffffffffff;
  uStack_120 = 0;
  local_180 = 0;
  local_178 = 0;
  local_160 = 0x7fffffffffffffff;
  local_158 = 0;
  plStack_130 = local_168;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa04;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1908);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x400;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xa02;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1908);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  local_188[0]._0_2_ = 0x300;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x501;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0x903;
  FUN_014db39c(&local_180,local_188);
  local_188[0]._0_2_ = 0xf05;
  FUN_014db39c(&local_180,local_188);
  local_188[0] = CONCAT22(local_188[0]._2_2_,0x1906);
  FUN_014db39c(&local_180,local_188);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
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
  plVar2 = local_168;
  lVar4 = local_180;
  if (local_180 != 0) {
    local_178 = local_180;
    lVar7 = local_170 - local_180;
    uVar5 = (**(code **)(*local_168 + 0xf8))(local_168);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4bf4(&local_148);
  FUN_014d4d44(param_1 + 0xf8,&DAT_03d31504,&local_d0);
  plVar2 = local_f8;
  lVar4 = local_110;
  if (local_110 != 0) {
    local_108 = local_110;
    lVar7 = local_100 - local_110;
    uVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar7,1);
    }
    else {
      FUN_00c48fe8(plVar2,lVar4,lVar7,1);
    }
  }
  FUN_014d4ac4(&local_d0);
  return;
}


