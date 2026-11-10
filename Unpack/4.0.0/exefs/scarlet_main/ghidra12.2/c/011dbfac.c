/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011dbfac; name: FUN_011dbfac
 */


void FUN_011dbfac(long *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *__compar;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  uint *puVar13;
  int *piVar14;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  ushort *puVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  int *piVar22;
  long *plVar23;
  long lVar24;
  undefined *puVar25;
  undefined4 *puVar26;
  undefined *puVar27;
  float fVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int *local_2d8;
  int *local_2d0;
  undefined1 auStack_2c0 [24];
  int *local_2a8;
  int *local_2a0;
  ulong local_290;
  undefined *puStack_288;
  byte *local_280;
  long *local_278;
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  long local_240;
  undefined8 local_238;
  uint *local_230;
  byte *pbStack_228;
  byte *local_220;
  long *local_218;
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  uint local_1e0 [6];
  undefined8 local_1c8;
  byte *pbStack_1c0;
  undefined1 *local_1b8;
  uint *local_1b0;
  byte *local_1a8;
  byte *local_1a0;
  long *local_198;
  undefined1 auStack_190 [24];
  uint **local_178;
  byte *local_170;
  undefined1 *local_168;
  long *local_160;
  undefined8 local_158;
  byte *local_148;
  char *local_140;
  byte *local_138;
  size_t local_130;
  long *local_128;
  undefined8 local_120;
  int local_64;
  
  local_178 = (uint **)0x4dd9d42691dd2812;
  local_170 = (byte *)0x3c77876;
  local_168 = (undefined1 *)0x7;
  local_160 = (long *)0x0;
  FUN_00d996a8(auStack_258,param_2,&local_178);
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  local_240 = *(long *)(lVar5 + 0x30);
  local_238 = *(undefined8 *)(lVar5 + 0x38);
  *(long *)(lVar5 + 0x30) = param_3;
  *(undefined2 *)(lVar5 + 0x38) = 1;
  local_140 = (char *)0xb846433d947f695f;
  local_138 = (byte *)0x3c7e00c;
  local_130 = 0x11;
  local_128 = (long *)0x0;
  FUN_00d996a8(&local_230,auStack_258,&local_140);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  lVar24 = *param_1;
  if (lVar24 != 0) {
    lVar16 = param_1[1];
    if (lVar16 == lVar24) {
      lVar16 = lVar24;
    }
    else {
      do {
        plVar23 = (long *)(lVar16 + -0x10);
        lVar16 = lVar16 + -0x28;
        if ((long *)*plVar23 != (long *)0x0) {
          (**(code **)(*(long *)*plVar23 + 0x20))();
        }
      } while (lVar24 != lVar16);
      lVar16 = *param_1;
    }
    lVar3 = param_1[2];
    plVar23 = (long *)param_1[3];
    param_1[1] = lVar24;
    uVar17 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar16,lVar3 - lVar16,8);
    }
    else {
      FUN_00c48fe8(plVar23,lVar16,lVar3 - lVar16,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0x666666666666666;
  param_1[5] = 0;
  puVar26 = (undefined4 *)((ulong)&local_158 | 1);
  param_1[2] = 0;
  param_1[3] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = PTR_DAT_047d3e30;
  puVar25 = PTR_DAT_047d3e28;
  local_1c8 = (uint **)((ulong)local_1c8._4_4_ << 0x20);
  do {
    FUN_00fb59d0(&local_140,&DAT_03c84d71);
    local_158._0_4_ = CONCAT31(local_158._1_3_,10);
    *(undefined1 *)(puVar26 + 1) = 0x65;
    *puVar26 = 0x756c6156;
    local_1a8 = &LAB_00aa8320;
    local_158._6_1_ = 0;
    local_1a0 = &LAB_00e23be0;
    local_1b0 = (uint *)&local_158;
    uVar11 = FUN_00fb57e0(&local_140,&local_1b0);
    local_1b0 = (uint *)&local_1c8;
    local_1a8 = PTR_LAB_047d9c70;
    local_1a0 = PTR_LAB_047d9c78;
    FUN_00fb57e0(uVar11,&local_1b0);
    FUN_00fb5c44(&local_290);
    pbVar2 = local_148;
    if ((((uint)local_158 & 1) != 0) && (local_148 != (byte *)0x0)) {
      plVar23 = *(long **)(lVar5 + 0x30);
      if (plVar23 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar23 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar23,pbVar2,0,8);
      }
    }
    FUN_00fb5f3c(&local_140);
    local_120 = 0;
    local_140 = &DAT_cbf29ce484222645;
    local_138 = &DAT_03c886bc;
    local_130 = 0;
    local_128 = (long *)0x0;
    FUN_011dfec0(param_1,&local_140);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    lVar24 = param_1[1];
    pbVar2 = (byte *)((ulong)&local_290 | 1);
    if ((local_290 & 1) != 0) {
      pbVar2 = local_280;
    }
    if (pbVar2 == (byte *)0x0) {
      if (((*puVar25 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar25), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar25);
      }
      local_140 = *(char **)puVar6;
      local_138 = *(byte **)(puVar6 + 8);
      local_130 = *(size_t *)(puVar6 + 0x10);
      local_128 = *(long **)(puVar6 + 0x18);
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x18))();
      }
    }
    else {
      local_130 = strlen((char *)pbVar2);
      bVar8 = *pbVar2;
      local_140 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_140 = &DAT_cbf29ce484222645;
        pbVar20 = pbVar2;
        do {
          pbVar20 = pbVar20 + 1;
          local_140 = (char *)(((ulong)local_140 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar20;
        } while (bVar8 != 0);
      }
      local_128 = (long *)0x0;
      local_138 = pbVar2;
    }
    FUN_00d996a8(auStack_190,&local_230,&local_140);
    FUN_011dfcb4(lVar24 + -0x28,auStack_190);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    pbVar2 = local_280;
    if (((local_290 & 1) != 0) && (local_280 != (byte *)0x0)) {
      plVar23 = *(long **)(lVar5 + 0x30);
      if (plVar23 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar23 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar23,pbVar2,0,8);
      }
    }
    uVar21 = (uint)local_1c8;
    local_1c8 = (uint **)CONCAT44(local_1c8._4_4_,(uint)local_1c8 + 1);
  } while ((int)uVar21 < 4);
  local_140 = (char *)0x88e45684e5b9f6e3;
  local_138 = (byte *)0x3c2e4e6;
  local_130 = 0x10;
  local_128 = (long *)0x0;
  FUN_00d996a8(&local_1b0,auStack_258,&local_140);
  local_230 = local_1b0;
  pbStack_228 = local_1a8;
  local_220 = local_1a0;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  plVar23 = param_1 + 7;
  lVar24 = *plVar23;
  if (lVar24 != 0) {
    lVar16 = param_1[8];
    if (lVar16 == lVar24) {
      lVar16 = lVar24;
    }
    else {
      do {
        plVar12 = (long *)(lVar16 + -0x10);
        lVar16 = lVar16 + -0x28;
        if ((long *)*plVar12 != (long *)0x0) {
          (**(code **)(*(long *)*plVar12 + 0x20))();
        }
      } while (lVar24 != lVar16);
      lVar16 = *plVar23;
    }
    lVar3 = param_1[9];
    plVar12 = (long *)param_1[10];
    param_1[8] = lVar24;
    uVar17 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar16,lVar3 - lVar16,8);
    }
    else {
      FUN_00c48fe8(plVar12,lVar16,lVar3 - lVar16,8);
    }
    param_1[8] = 0;
    param_1[9] = 0;
    *plVar23 = 0;
  }
  param_1[10] = param_3;
  param_1[0xb] = 0x666666666666666;
  puVar26 = (undefined4 *)((ulong)&local_158 | 1);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *plVar23 = 0;
  local_1e0[0] = 0;
  do {
    FUN_00fb59d0(&local_140,&DAT_03c84d71);
    local_158._0_4_ = CONCAT31(local_158._1_3_,10);
    *(undefined1 *)(puVar26 + 1) = 0x65;
    *puVar26 = 0x756c6156;
    local_1a8 = &LAB_00aa8320;
    local_158._6_1_ = 0;
    local_1a0 = &LAB_00e23be0;
    local_1b0 = (uint *)&local_158;
    uVar11 = FUN_00fb57e0(&local_140,&local_1b0);
    local_1b0 = local_1e0;
    local_1a8 = PTR_LAB_047d9c70;
    local_1a0 = PTR_LAB_047d9c78;
    FUN_00fb57e0(uVar11,&local_1b0);
    FUN_00fb5c44(&local_290);
    pbVar2 = local_148;
    if ((((uint)local_158 & 1) != 0) && (local_148 != (byte *)0x0)) {
      plVar12 = *(long **)(lVar5 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,pbVar2,0,8);
      }
    }
    FUN_00fb5f3c(&local_140);
    local_120 = 0;
    local_140 = &DAT_cbf29ce484222645;
    local_138 = &DAT_03c886bc;
    local_130 = 0;
    local_128 = (long *)0x0;
    FUN_011dfec0(plVar23,&local_140);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    lVar24 = param_1[8];
    pbVar2 = (byte *)((ulong)&local_290 | 1);
    if ((local_290 & 1) != 0) {
      pbVar2 = local_280;
    }
    if (pbVar2 == (byte *)0x0) {
      if (((*puVar25 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar25), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar25);
      }
      local_140 = *(char **)puVar6;
      local_138 = *(byte **)(puVar6 + 8);
      local_130 = *(size_t *)(puVar6 + 0x10);
      local_128 = *(long **)(puVar6 + 0x18);
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x18))();
      }
    }
    else {
      local_130 = strlen((char *)pbVar2);
      bVar8 = *pbVar2;
      local_140 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_140 = &DAT_cbf29ce484222645;
        pbVar20 = pbVar2;
        do {
          pbVar20 = pbVar20 + 1;
          local_140 = (char *)(((ulong)local_140 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar20;
        } while (bVar8 != 0);
      }
      local_128 = (long *)0x0;
      local_138 = pbVar2;
    }
    FUN_00d996a8(&local_1c8,&local_230,&local_140);
    FUN_011dfcb4(lVar24 + -0x28,&local_1c8);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    pbVar2 = local_280;
    if (((local_290 & 1) != 0) && (local_280 != (byte *)0x0)) {
      plVar12 = *(long **)(lVar5 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,pbVar2,0,8);
      }
    }
    uVar21 = local_1e0[0] + 1;
    bVar1 = (int)local_1e0[0] < 4;
    local_1e0[0] = uVar21;
  } while (bVar1);
  *(long *)(lVar5 + 0x30) = local_240;
  *(undefined2 *)(lVar5 + 0x38) = (undefined2)local_238;
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  local_290 = 0xa5ffd3e5b51ec72e;
  puStack_288 = &DAT_03c190f8;
  local_280 = (byte *)0x4;
  local_278 = (long *)0x0;
  FUN_00d996a8(auStack_270,param_2,&local_290);
  if (*(long *)(lVar5 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  }
  plVar23 = param_1 + 0xe;
  local_140 = (char *)0xb846433d947f695f;
  local_128 = (long *)0x0;
  local_240 = *(long *)(lVar5 + 0x30);
  local_238 = *(undefined8 *)(lVar5 + 0x38);
  *(undefined2 *)(lVar5 + 0x38) = 1;
  local_138 = (byte *)0x3c7e00c;
  local_130 = 0x11;
  *(long *)(lVar5 + 0x30) = param_3;
  FUN_00d996a8(&local_1c8,auStack_270,&local_140);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  lVar24 = *plVar23;
  if (lVar24 != 0) {
    lVar16 = param_1[0xf];
    if (lVar16 == lVar24) {
      lVar16 = lVar24;
    }
    else {
      do {
        plVar12 = (long *)(lVar16 + -0x10);
        lVar16 = lVar16 + -0x28;
        if ((long *)*plVar12 != (long *)0x0) {
          (**(code **)(*(long *)*plVar12 + 0x20))();
        }
      } while (lVar24 != lVar16);
      lVar16 = *plVar23;
    }
    lVar3 = param_1[0x10];
    plVar12 = (long *)param_1[0x11];
    param_1[0xf] = lVar24;
    uVar17 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar16,lVar3 - lVar16,8);
    }
    else {
      FUN_00c48fe8(plVar12,lVar16,lVar3 - lVar16,8);
    }
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *plVar23 = 0;
  }
  param_1[0x11] = param_3;
  param_1[0x12] = 0x666666666666666;
  puVar26 = (undefined4 *)((ulong)&local_230 | 1);
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *plVar23 = 0;
  local_158._0_4_ = 0;
  do {
    FUN_00fb59d0(&local_140,&DAT_03c84d71);
    puVar13 = local_230;
    local_230 = (uint *)CONCAT71(local_230._1_7_,10);
    puVar7 = local_230;
    *(undefined1 *)(puVar26 + 1) = 0x65;
    *puVar26 = 0x756c6156;
    local_170 = &LAB_00aa8320;
    local_230._7_1_ = SUB81(puVar13,7);
    local_230._0_6_ = (uint6)puVar7;
    local_230._0_7_ = (uint7)(uint6)local_230;
    local_168 = &LAB_00e23be0;
    local_178 = &local_230;
    uVar11 = FUN_00fb57e0(&local_140,&local_178);
    local_178 = (uint **)&local_158;
    local_170 = PTR_LAB_047d9c70;
    local_168 = PTR_LAB_047d9c78;
    FUN_00fb57e0(uVar11,&local_178);
    FUN_00fb5c44(&local_1b0);
    pbVar2 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (byte *)0x0)) {
      plVar12 = *(long **)(lVar5 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,pbVar2,0,8);
      }
    }
    FUN_00fb5f3c(&local_140);
    local_120 = 0;
    local_140 = &DAT_cbf29ce484222645;
    local_138 = &DAT_03c886bc;
    local_130 = 0;
    local_128 = (long *)0x0;
    FUN_011dfec0(plVar23,&local_140);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    lVar24 = param_1[0xf];
    pbVar2 = (byte *)((ulong)&local_1b0 | 1);
    if (((ulong)local_1b0 & 1) != 0) {
      pbVar2 = local_1a0;
    }
    if (pbVar2 == (byte *)0x0) {
      if (((*puVar25 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar25), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar25);
      }
      local_140 = *(char **)puVar6;
      local_138 = *(byte **)(puVar6 + 8);
      local_130 = *(size_t *)(puVar6 + 0x10);
      local_128 = *(long **)(puVar6 + 0x18);
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x18))();
      }
    }
    else {
      local_130 = strlen((char *)pbVar2);
      bVar8 = *pbVar2;
      local_140 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_140 = &DAT_cbf29ce484222645;
        pbVar20 = pbVar2;
        do {
          pbVar20 = pbVar20 + 1;
          local_140 = (char *)(((ulong)local_140 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar20;
        } while (bVar8 != 0);
      }
      local_128 = (long *)0x0;
      local_138 = pbVar2;
    }
    FUN_00d996a8(local_1e0,&local_1c8,&local_140);
    FUN_011dfcb4(lVar24 + -0x28,local_1e0);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    pbVar2 = local_1a0;
    if ((((ulong)local_1b0 & 1) != 0) && (local_1a0 != (byte *)0x0)) {
      plVar12 = *(long **)(lVar5 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,pbVar2,0,8);
      }
    }
    uVar21 = (uint)local_158 + 1;
    bVar1 = (int)(uint)local_158 < 4;
    local_158._0_4_ = uVar21;
  } while (bVar1);
  local_128 = (long *)0x0;
  local_140 = (char *)0x88e45684e5b9f6e3;
  local_138 = (byte *)0x3c2e4e6;
  local_130 = 0x10;
  FUN_00d996a8(&local_178,auStack_270,&local_140);
  local_1c8 = local_178;
  pbStack_1c0 = local_170;
  local_1b8 = local_168;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  plVar23 = param_1 + 0x15;
  lVar24 = *plVar23;
  if (lVar24 != 0) {
    lVar16 = param_1[0x16];
    if (lVar16 == lVar24) {
      lVar16 = lVar24;
    }
    else {
      do {
        plVar12 = (long *)(lVar16 + -0x10);
        lVar16 = lVar16 + -0x28;
        if ((long *)*plVar12 != (long *)0x0) {
          (**(code **)(*(long *)*plVar12 + 0x20))();
        }
      } while (lVar24 != lVar16);
      lVar16 = *plVar23;
    }
    lVar3 = param_1[0x17];
    plVar12 = (long *)param_1[0x18];
    param_1[0x16] = lVar24;
    uVar17 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar16,lVar3 - lVar16,8);
    }
    else {
      FUN_00c48fe8(plVar12,lVar16,lVar3 - lVar16,8);
    }
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *plVar23 = 0;
  }
  param_1[0x18] = param_3;
  param_1[0x19] = 0x666666666666666;
  puVar26 = (undefined4 *)((ulong)&local_230 | 1);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *plVar23 = 0;
  local_158._0_4_ = 0;
  do {
    FUN_00fb59d0(&local_140,&DAT_03c84d71);
    puVar13 = local_230;
    local_230 = (uint *)CONCAT71(local_230._1_7_,10);
    puVar7 = local_230;
    *(undefined1 *)(puVar26 + 1) = 0x65;
    *puVar26 = 0x756c6156;
    local_170 = &LAB_00aa8320;
    local_230._7_1_ = SUB81(puVar13,7);
    local_230._0_6_ = (uint6)puVar7;
    local_230._0_7_ = (uint7)(uint6)local_230;
    local_168 = &LAB_00e23be0;
    local_178 = &local_230;
    uVar11 = FUN_00fb57e0(&local_140,&local_178);
    local_178 = (uint **)&local_158;
    local_170 = PTR_LAB_047d9c70;
    local_168 = PTR_LAB_047d9c78;
    FUN_00fb57e0(uVar11,&local_178);
    FUN_00fb5c44(&local_1b0);
    pbVar2 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (byte *)0x0)) {
      plVar12 = *(long **)(lVar5 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,pbVar2,0,8);
      }
    }
    FUN_00fb5f3c(&local_140);
    local_120 = 0;
    local_140 = &DAT_cbf29ce484222645;
    local_138 = &DAT_03c886bc;
    local_130 = 0;
    local_128 = (long *)0x0;
    FUN_011dfec0(plVar23,&local_140);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    lVar24 = param_1[0x16];
    pbVar2 = (byte *)((ulong)&local_1b0 | 1);
    if (((ulong)local_1b0 & 1) != 0) {
      pbVar2 = local_1a0;
    }
    if (pbVar2 == (byte *)0x0) {
      if (((*puVar25 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar25), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar25);
      }
      local_140 = *(char **)puVar6;
      local_138 = *(byte **)(puVar6 + 8);
      local_130 = *(size_t *)(puVar6 + 0x10);
      local_128 = *(long **)(puVar6 + 0x18);
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x18))();
      }
    }
    else {
      local_130 = strlen((char *)pbVar2);
      bVar8 = *pbVar2;
      local_140 = &DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_140 = &DAT_cbf29ce484222645;
        pbVar20 = pbVar2;
        do {
          pbVar20 = pbVar20 + 1;
          local_140 = (char *)(((ulong)local_140 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar20;
        } while (bVar8 != 0);
      }
      local_128 = (long *)0x0;
      local_138 = pbVar2;
    }
    FUN_00d996a8(auStack_1f8,&local_1c8,&local_140);
    FUN_011dfcb4(lVar24 + -0x28,auStack_1f8);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    pbVar2 = local_1a0;
    if ((((ulong)local_1b0 & 1) != 0) && (local_1a0 != (byte *)0x0)) {
      plVar12 = *(long **)(lVar5 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,pbVar2,0,8);
      }
    }
    uVar21 = (uint)local_158 + 1;
    bVar1 = (int)(uint)local_158 < 4;
    local_158._0_4_ = uVar21;
  } while (bVar1);
  local_140 = (char *)0x8723924ae2150fe3;
  local_138 = (byte *)0x3c98b0e;
  local_130 = 0xd;
  local_128 = (long *)0x0;
  bVar8 = FUN_00cf7518(auStack_270,&local_140);
  *(byte *)(param_1 + 0x1c) = bVar8 & 1;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  local_230 = (uint *)&DAT_3a1854700039a2e6;
  pbStack_228 = (byte *)0x3c6a473;
  local_220 = &DAT_0000000a;
  local_218 = (long *)0x0;
  FUN_00d996a8(auStack_210,auStack_270,&local_230);
  __compar = PTR_LAB_047d5600;
  local_64 = 0;
  puVar27 = PTR_DAT_047d5608;
  do {
    iVar10 = local_64;
    *(undefined1 *)(param_1 + (long)local_64 * 8 + 0x1e) = 0;
    if (((*puVar25 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar25), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar25);
    }
    param_1[(long)iVar10 * 8 + 0x1f] = *(long *)puVar6;
    param_1[(long)iVar10 * 8 + 0x20] = *(long *)(puVar6 + 8);
    param_1[(long)iVar10 * 8 + 0x21] = *(long *)(puVar6 + 0x10);
    plVar23 = *(long **)(puVar6 + 0x18);
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    plVar12 = (long *)param_1[(long)iVar10 * 8 + 0x22];
    param_1[(long)iVar10 * 8 + 0x22] = (long)plVar23;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    param_1[(long)iVar10 * 8 + 0x24] = 0;
    param_1[(long)iVar10 * 8 + 0x25] = 0;
    FUN_00fb59d0(&local_140,&DAT_03c84d71);
    puVar13 = local_1b0;
    local_1b0 = (uint *)CONCAT71(local_1b0._1_7_,10);
    puVar7 = local_1b0;
    *(undefined1 *)((undefined4 *)((ulong)&local_1b0 | 1) + 1) = 0x74;
    *(undefined4 *)((ulong)&local_1b0 | 1) = 0x6e696f4a;
    local_178 = &local_1b0;
    local_1b0._7_1_ = SUB81(puVar13,7);
    local_1b0._0_7_ = (uint7)(uint6)puVar7;
    local_170 = &LAB_00aa8320;
    local_168 = &LAB_00e23be0;
    uVar11 = FUN_00fb57e0(&local_140,&local_178);
    local_178 = (uint **)&local_64;
    local_170 = PTR_LAB_047d9c70;
    local_168 = PTR_LAB_047d9c78;
    FUN_00fb57e0(uVar11,&local_178);
    FUN_00fb5c44(&local_158);
    pbVar2 = local_1a0;
    if ((((ulong)local_1b0 & 1) != 0) && (local_1a0 != (byte *)0x0)) {
      plVar23 = *(long **)(lVar5 + 0x30);
      if (plVar23 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar23 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
        puVar27 = PTR_DAT_047d5608;
      }
      uVar17 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar23,pbVar2,0,8);
      }
    }
    FUN_00fb5f3c(&local_140);
    iVar10 = local_64;
    pbVar2 = (byte *)((ulong)&local_158 | 1);
    if (((uint)local_158 & 1) != 0) {
      pbVar2 = local_148;
    }
    if (pbVar2 == (byte *)0x0) {
      if (((*puVar25 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar25), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar25);
      }
      local_1b0 = *(uint **)puVar6;
      local_1a8 = *(byte **)(puVar6 + 8);
      local_1a0 = *(byte **)(puVar6 + 0x10);
      local_198 = *(long **)(puVar6 + 0x18);
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x18))();
      }
    }
    else {
      local_1a0 = (byte *)strlen((char *)pbVar2);
      bVar8 = *pbVar2;
      local_1b0 = (uint *)&DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_1b0 = (uint *)&DAT_cbf29ce484222645;
        pbVar20 = pbVar2;
        do {
          pbVar20 = pbVar20 + 1;
          local_1b0 = (uint *)(((ulong)local_1b0 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar20;
        } while (bVar8 != 0);
      }
      local_198 = (long *)0x0;
      puVar27 = PTR_DAT_047d5608;
      local_1a8 = pbVar2;
    }
    FUN_00d996a8(auStack_190,auStack_210,&local_1b0);
    local_128 = (long *)0x0;
    local_140 = (char *)0xa37af3f3b1f97f1;
    local_138 = (byte *)0x3c497f3;
    local_130 = 5;
    bVar8 = FUN_00cf7518(auStack_190,&local_140);
    *(byte *)(param_1 + (long)iVar10 * 8 + 0x1e) = bVar8 & 1;
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    local_160 = (long *)0x0;
    local_178 = (uint **)0x352b79c017918034;
    local_170 = (byte *)0x3c56c55;
    local_168 = &DAT_00000009;
    FUN_00cee868(&local_140,auStack_190,&local_178);
    param_1[(long)iVar10 * 8 + 0x1f] = (long)local_140;
    param_1[(long)iVar10 * 8 + 0x20] = (long)local_138;
    plVar23 = (long *)param_1[(long)iVar10 * 8 + 0x22];
    param_1[(long)iVar10 * 8 + 0x21] = local_130;
    param_1[(long)iVar10 * 8 + 0x22] = 0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    plVar23 = local_128;
    local_128 = (long *)0x0;
    param_1[(long)iVar10 * 8 + 0x22] = (long)plVar23;
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    local_128 = (long *)0x0;
    local_140 = (char *)0xa1a5a39f1e539c0a;
    local_138 = (byte *)0x3bdb8a5;
    local_130 = 6;
    FUN_00fb4c10(&local_178,auStack_190,&local_140);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    fVar30 = 0.0;
    fVar28 = 0.0;
    uVar17 = 0;
    if (local_170 != (byte *)0x0) {
      if ((*(ushort *)(local_170 + -(long)*(int *)local_170) < 7) ||
         (uVar17 = (ulong)*(ushort *)((long)(local_170 + -(long)*(int *)local_170) + 6), uVar17 == 0
         )) {
        puVar13 = (uint *)0x0;
      }
      else {
        puVar13 = (uint *)((long)(local_170 + uVar17) + (ulong)*(uint *)(local_170 + uVar17));
      }
      local_140 = "x";
      puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)__compar);
      if (puVar13 == (uint *)0x0) {
        fVar28 = 0.0;
      }
      else {
        piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
        puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
        uVar4 = *puVar18;
        if (uVar4 < 7) {
          piVar22 = (int *)0x0;
        }
        else {
          piVar22 = (int *)0x0;
          if ((ulong)puVar18[3] != 0) {
            puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
            piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
          }
        }
        if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
           (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
          uVar17 = 0;
        }
        else {
          uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
        }
        if (*(long *)(puVar27 + uVar17 * 8) == 4) {
          if ((uVar4 < 0xb) || ((ulong)puVar18[5] == 0)) {
            uVar17 = 0;
          }
          else {
            uVar17 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
          }
          fVar28 = *(float *)((long)local_178 + uVar17);
        }
        else {
          fVar28 = 0.0;
          if (0xe < uVar4) {
            fVar28 = 0.0;
            if ((ulong)puVar18[7] != 0) {
              fVar28 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
            }
          }
        }
      }
      if (local_170 == (byte *)0x0) {
        fVar30 = 0.0;
      }
      else {
        if ((*(ushort *)(local_170 + -(long)*(int *)local_170) < 7) ||
           (uVar17 = (ulong)*(ushort *)((long)(local_170 + -(long)*(int *)local_170) + 6),
           uVar17 == 0)) {
          puVar13 = (uint *)0x0;
        }
        else {
          puVar13 = (uint *)((long)(local_170 + uVar17) + (ulong)*(uint *)(local_170 + uVar17));
        }
        local_140 = "y";
        puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)__compar);
        if (puVar13 == (uint *)0x0) {
          fVar30 = 0.0;
        }
        else {
          piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
          puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
          uVar4 = *puVar18;
          if (uVar4 < 7) {
            piVar22 = (int *)0x0;
          }
          else {
            piVar22 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
              piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
            }
          }
          if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
             (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
            uVar17 = 0;
          }
          else {
            uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
          }
          if (*(long *)(puVar27 + uVar17 * 8) == 4) {
            if ((uVar4 < 0xb) || ((ulong)puVar18[5] == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
            }
            fVar30 = *(float *)((long)local_178 + uVar17);
          }
          else {
            fVar30 = 0.0;
            if (0xe < uVar4) {
              fVar30 = 0.0;
              if ((ulong)puVar18[7] != 0) {
                fVar30 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
              }
            }
          }
        }
        if (local_170 != (byte *)0x0) {
          if ((*(ushort *)(local_170 + -(long)*(int *)local_170) < 7) ||
             (uVar17 = (ulong)*(ushort *)((long)(local_170 + -(long)*(int *)local_170) + 6),
             uVar17 == 0)) {
            puVar13 = (uint *)0x0;
          }
          else {
            puVar13 = (uint *)((long)(local_170 + uVar17) + (ulong)*(uint *)(local_170 + uVar17));
          }
          local_140 = "z";
          puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)__compar);
          if (puVar13 != (uint *)0x0) {
            piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
            puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
            }
            if (*(long *)(puVar27 + uVar17 * 8) == 4) {
              if ((uVar4 < 0xb) || ((ulong)puVar18[5] == 0)) {
                uVar17 = 0;
              }
              else {
                uVar17 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
              }
              uVar17 = (ulong)*(uint *)((long)local_178 + uVar17);
            }
            else {
              if ((uVar4 < 0xf) || ((ulong)puVar18[7] == 0)) {
                uVar17 = 0;
              }
              else {
                uVar17 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
              }
              puVar27 = PTR_DAT_047d5608;
            }
            goto LAB_011dd144;
          }
        }
      }
      uVar17 = 0;
    }
LAB_011dd144:
    param_1[(long)iVar10 * 8 + 0x25] = uVar17;
    param_1[(long)iVar10 * 8 + 0x24] = CONCAT44(fVar30,fVar28);
    if (local_198 != (long *)0x0) {
      (**(code **)(*local_198 + 0x20))();
    }
    pbVar2 = local_148;
    if ((((uint)local_158 & 1) != 0) && (local_148 != (byte *)0x0)) {
      plVar23 = *(long **)(lVar5 + 0x30);
      if (plVar23 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar23 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
        puVar27 = PTR_DAT_047d5608;
      }
      uVar17 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar23,pbVar2,0,8);
      }
    }
    iVar10 = local_64 + 1;
    bVar1 = local_64 < 0x13;
    local_64 = iVar10;
  } while (bVar1);
  if (local_218 != (long *)0x0) {
    (**(code **)(*local_218 + 0x20))();
  }
  local_140 = (char *)0x34c9d23ca76cf8ab;
  local_138 = (byte *)0x3bfcf2c;
  local_130 = 0x16;
  local_128 = (long *)0x0;
  bVar8 = FUN_00cf7518(auStack_270,&local_140);
  *(byte *)(param_1 + 0xbe) = bVar8 & 1;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  local_140 = (char *)0xd9f038f5d8a7a928;
  local_138 = (byte *)0x3c56c49;
  local_130 = 0xb;
  local_128 = (long *)0x0;
  bVar8 = FUN_00cf7518(auStack_270,&local_140);
  *(byte *)((long)param_1 + 0x5f1) = bVar8 & 1;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  local_1b0 = (uint *)&DAT_7c14df00dfce5d3;
  local_1a8 = (byte *)0x3c272e6;
  local_1a0 = (byte *)0x10;
  local_198 = (long *)0x0;
  FUN_00d996a8(auStack_190,auStack_270,&local_1b0);
  local_64 = 0;
  puVar26 = (undefined4 *)((ulong)&local_158 | 1);
  do {
    if (((*puVar25 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar25), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,puVar6,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar25);
    }
    param_1[(long)local_64 * 4 + 0xbf] = *(long *)puVar6;
    param_1[(long)local_64 * 4 + 0xc0] = *(long *)(puVar6 + 8);
    param_1[(long)local_64 * 4 + 0xc1] = *(long *)(puVar6 + 0x10);
    plVar23 = *(long **)(puVar6 + 0x18);
    lVar24 = (long)local_64;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    plVar12 = (long *)param_1[lVar24 * 4 + 0xc2];
    param_1[lVar24 * 4 + 0xc2] = (long)plVar23;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    FUN_00fb59d0(&local_140,&DAT_03c84d71);
    local_158._0_4_ = CONCAT31(local_158._1_3_,10);
    *(undefined1 *)(puVar26 + 1) = 0x74;
    *puVar26 = 0x6e696f4a;
    local_170 = &LAB_00aa8320;
    local_158._6_1_ = 0;
    local_168 = &LAB_00e23be0;
    local_178 = (uint **)&local_158;
    uVar11 = FUN_00fb57e0(&local_140,&local_178);
    local_170 = PTR_LAB_047d9c70;
    local_168 = PTR_LAB_047d9c78;
    local_178 = (uint **)&local_64;
    FUN_00fb57e0(uVar11,&local_178);
    FUN_00fb5c44(&local_230);
    pbVar2 = local_148;
    if ((((uint)local_158 & 1) != 0) && (local_148 != (byte *)0x0)) {
      plVar23 = *(long **)(lVar5 + 0x30);
      if (plVar23 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar23 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar23,pbVar2,0,8);
      }
    }
    FUN_00fb5f3c(&local_140);
    pbVar2 = (byte *)((ulong)&local_230 | 1);
    if (((ulong)local_230 & 1) != 0) {
      pbVar2 = local_220;
    }
    if (pbVar2 == (byte *)0x0) {
      if (((*puVar25 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar25), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar25);
      }
      local_178 = *(uint ***)puVar6;
      local_170 = *(byte **)(puVar6 + 8);
      local_168 = *(undefined1 **)(puVar6 + 0x10);
      local_160 = *(long **)(puVar6 + 0x18);
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x18))();
      }
    }
    else {
      local_168 = (undefined1 *)strlen((char *)pbVar2);
      bVar8 = *pbVar2;
      local_178 = (uint **)&DAT_cbf29ce484222645;
      if (bVar8 != 0) {
        local_178 = (uint **)&DAT_cbf29ce484222645;
        pbVar20 = pbVar2;
        do {
          pbVar20 = pbVar20 + 1;
          local_178 = (uint **)(((ulong)local_178 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar20;
        } while (bVar8 != 0);
      }
      local_160 = (long *)0x0;
      local_170 = pbVar2;
    }
    FUN_00cee868(&local_140,auStack_190,&local_178);
    param_1[(long)local_64 * 4 + 0xbf] = (long)local_140;
    param_1[(long)local_64 * 4 + 0xc0] = (long)local_138;
    plVar23 = (long *)param_1[(long)local_64 * 4 + 0xc2];
    lVar24 = (long)local_64;
    param_1[(long)local_64 * 4 + 0xc1] = local_130;
    param_1[(long)local_64 * 4 + 0xc2] = 0;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))();
    }
    plVar23 = local_128;
    local_128 = (long *)0x0;
    param_1[lVar24 * 4 + 0xc2] = (long)plVar23;
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    pbVar2 = local_220;
    if ((((ulong)local_230 & 1) != 0) && (local_220 != (byte *)0x0)) {
      plVar23 = *(long **)(lVar5 + 0x30);
      if (plVar23 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar23 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar17 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar17 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,pbVar2,0,8);
      }
      else {
        FUN_00c48fe8(plVar23,pbVar2,0,8);
      }
    }
    iVar10 = local_64 + 1;
    bVar1 = local_64 < 0x13;
    local_64 = iVar10;
  } while (bVar1);
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  *(long *)(lVar5 + 0x30) = local_240;
  *(undefined2 *)(lVar5 + 0x38) = (undefined2)local_238;
  puVar25 = PTR_DAT_047d5608;
  if (local_278 != (long *)0x0) {
    (**(code **)(*local_278 + 0x20))();
  }
  local_178 = (uint **)0x6b9c05c461fc43e4;
  local_170 = (byte *)0x3c7dffe;
  local_168 = (undefined1 *)0xd;
  local_160 = (long *)0x0;
  FUN_00d996a8(&local_2a8,param_2,&local_178);
  fVar28 = 0.0;
  if (local_2a0 != (int *)0x0) {
    if (6 < *(ushort *)((long)local_2a0 - (long)*local_2a0)) {
      uVar17 = (ulong)((ushort *)((long)local_2a0 - (long)*local_2a0))[3];
      if (uVar17 != 0) {
        puVar13 = (uint *)((long)local_2a0 + uVar17);
        puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
        local_140 = "CameraDistance";
        puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar13 != (uint *)0x0) && (local_2a8 != (int *)0x0)) {
          piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
          puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
          uVar4 = *puVar18;
          if (uVar4 < 7) {
            piVar22 = (int *)0x0;
          }
          else {
            piVar22 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
              piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
            }
          }
          if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
             (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
            uVar17 = 0;
          }
          else {
            uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
          }
          if (*(long *)(puVar25 + uVar17 * 8) == 4) {
            fVar28 = 0.0;
            if (uVar4 < 0xb) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              if ((ulong)puVar18[5] != 0) {
                uVar21 = (uint)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
              }
              if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                fVar28 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
              }
            }
            if (uVar21 < *(ushort *)((long)local_2a8 - (long)*local_2a8)) {
              uVar17 = (ulong)*(ushort *)(((long)local_2a8 - (long)*local_2a8) + (ulong)uVar21);
              if (uVar17 != 0) {
                fVar28 = *(float *)((long)local_2a8 + uVar17);
              }
            }
          }
          else {
            puVar25 = PTR_DAT_047d5608;
            if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
              fVar28 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
            }
          }
        }
      }
    }
  }
  *(float *)(param_1 + 0x110) = fVar28;
  local_140 = (char *)0xb73870144574ae0;
  local_138 = (byte *)0x3c70fbd;
  local_130 = 0xc;
  local_128 = (long *)0x0;
  FUN_00d996a8(&local_1b0,&local_2a8,&local_140);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (local_1a8 == (byte *)0x0) {
    fVar28 = 0.0;
LAB_011df8ac:
    uVar29 = 0;
    uVar17 = uVar29;
  }
  else {
    fVar28 = 0.0;
    if (6 < *(ushort *)((long)local_1a8 - (long)*(int *)local_1a8)) {
      uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3];
      fVar28 = 0.0;
      if (uVar17 != 0) {
        puVar13 = (uint *)((long)local_1a8 + uVar17);
        puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
        local_140 = "x";
        puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar13 == (uint *)0x0) {
          fVar28 = 0.0;
        }
        else {
          fVar28 = 0.0;
          if (local_1b0 != (uint *)0x0) {
            piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
            puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
            }
            if (*(long *)(puVar25 + uVar17 * 8) == 4) {
              fVar28 = 0.0;
              if (uVar4 < 0xb) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                  fVar28 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
              if ((uVar21 < *(ushort *)((long)local_1b0 - (long)(int)*local_1b0)) &&
                 (uVar17 = (ulong)*(ushort *)
                                   (((long)local_1b0 - (long)(int)*local_1b0) + (ulong)uVar21),
                 uVar17 != 0)) {
                fVar28 = *(float *)((long)local_1b0 + uVar17);
              }
            }
            else {
              fVar28 = 0.0;
              if (0xe < uVar4) {
                fVar28 = 0.0;
                if ((ulong)puVar18[7] != 0) {
                  fVar28 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
            }
          }
        }
      }
    }
    if (local_1a8 == (byte *)0x0) goto LAB_011df8ac;
    uVar29 = 0;
    if (6 < *(ushort *)((long)local_1a8 - (long)*(int *)local_1a8)) {
      uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3];
      uVar29 = 0;
      if (uVar17 != 0) {
        puVar13 = (uint *)((long)local_1a8 + uVar17);
        puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
        local_140 = "y";
        puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar13 == (uint *)0x0) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          if (local_1b0 != (uint *)0x0) {
            piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
            puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
            }
            if (*(long *)(puVar25 + uVar17 * 8) == 4) {
              uVar29 = 0;
              if (uVar4 < 0xb) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                  uVar29 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
              if ((uVar21 < *(ushort *)((long)local_1b0 - (long)(int)*local_1b0)) &&
                 (uVar17 = (ulong)*(ushort *)
                                   (((long)local_1b0 - (long)(int)*local_1b0) + (ulong)uVar21),
                 uVar17 != 0)) {
                uVar29 = (ulong)*(uint *)((long)local_1b0 + uVar17);
              }
            }
            else {
              uVar29 = 0;
              if (0xe < uVar4) {
                uVar29 = 0;
                if ((ulong)puVar18[7] != 0) {
                  uVar29 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
            }
          }
        }
      }
    }
    uVar17 = 0;
    if (local_1a8 != (byte *)0x0) {
      if (6 < *(ushort *)((long)local_1a8 - (long)*(int *)local_1a8)) {
        uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3];
        if (uVar17 != 0) {
          puVar13 = (uint *)((long)local_1a8 + uVar17);
          puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
          local_140 = "z";
          puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600
                           );
          if ((puVar13 != (uint *)0x0) && (local_1b0 != (uint *)0x0)) {
            piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
            puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
            }
            if (*(long *)(puVar25 + uVar17 * 8) == 4) {
              uVar17 = 0;
              if (uVar4 < 0xb) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                  uVar17 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
              if (uVar21 < *(ushort *)((long)local_1b0 - (long)(int)*local_1b0)) {
                uVar19 = (ulong)*(ushort *)
                                 (((long)local_1b0 - (long)(int)*local_1b0) + (ulong)uVar21);
                if (uVar19 != 0) {
                  uVar17 = (ulong)*(uint *)((long)local_1b0 + uVar19);
                }
              }
            }
            else {
              puVar25 = PTR_DAT_047d5608;
              if ((uVar4 < 0xf) || ((ulong)puVar18[7] == 0)) goto LAB_011df79c;
              uVar17 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
            }
            goto LAB_011ddb60;
          }
        }
LAB_011df79c:
        uVar17 = 0;
      }
    }
  }
LAB_011ddb60:
  param_1[0x113] = uVar17;
  param_1[0x112] = CONCAT44((int)uVar29,fVar28);
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  local_178 = (uint **)0x772f65bba2868c5d;
  local_170 = (byte *)0x3c98b03;
  local_168 = (undefined1 *)0xa;
  local_160 = (long *)0x0;
  FUN_00d996a8(auStack_2c0,param_2,&local_178);
  local_140 = (char *)0x29627b4ae9a652c9;
  local_138 = (byte *)0x3c7e01e;
  local_130 = 0xe;
  local_128 = (long *)0x0;
  FUN_00d996a8(&local_1b0,auStack_2c0,&local_140);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (local_1a8 == (byte *)0x0) {
    fVar28 = 0.0;
LAB_011df8bc:
    uVar29 = 0;
    uVar17 = uVar29;
  }
  else {
    fVar28 = 0.0;
    if (6 < *(ushort *)((long)local_1a8 - (long)*(int *)local_1a8)) {
      uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3];
      fVar28 = 0.0;
      if (uVar17 != 0) {
        puVar13 = (uint *)((long)local_1a8 + uVar17);
        puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
        local_140 = "x";
        puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar13 == (uint *)0x0) {
          fVar28 = 0.0;
        }
        else {
          fVar28 = 0.0;
          if (local_1b0 != (uint *)0x0) {
            piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
            puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
            }
            if (*(long *)(puVar25 + uVar17 * 8) == 4) {
              fVar28 = 0.0;
              if (uVar4 < 0xb) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                  fVar28 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
              if ((uVar21 < *(ushort *)((long)local_1b0 - (long)(int)*local_1b0)) &&
                 (uVar17 = (ulong)*(ushort *)
                                   (((long)local_1b0 - (long)(int)*local_1b0) + (ulong)uVar21),
                 uVar17 != 0)) {
                fVar28 = *(float *)((long)local_1b0 + uVar17);
              }
            }
            else {
              fVar28 = 0.0;
              if (0xe < uVar4) {
                fVar28 = 0.0;
                if ((ulong)puVar18[7] != 0) {
                  fVar28 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
            }
          }
        }
      }
    }
    if (local_1a8 == (byte *)0x0) goto LAB_011df8bc;
    uVar29 = 0;
    if (6 < *(ushort *)((long)local_1a8 - (long)*(int *)local_1a8)) {
      uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3];
      uVar29 = 0;
      if (uVar17 != 0) {
        puVar13 = (uint *)((long)local_1a8 + uVar17);
        puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
        local_140 = "y";
        puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar13 == (uint *)0x0) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          if (local_1b0 != (uint *)0x0) {
            piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
            puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
            }
            if (*(long *)(puVar25 + uVar17 * 8) == 4) {
              uVar29 = 0;
              if (uVar4 < 0xb) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                  uVar29 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
              if ((uVar21 < *(ushort *)((long)local_1b0 - (long)(int)*local_1b0)) &&
                 (uVar17 = (ulong)*(ushort *)
                                   (((long)local_1b0 - (long)(int)*local_1b0) + (ulong)uVar21),
                 uVar17 != 0)) {
                uVar29 = (ulong)*(uint *)((long)local_1b0 + uVar17);
              }
            }
            else {
              uVar29 = 0;
              if (0xe < uVar4) {
                uVar29 = 0;
                if ((ulong)puVar18[7] != 0) {
                  uVar29 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
            }
          }
        }
      }
    }
    uVar17 = 0;
    if (local_1a8 != (byte *)0x0) {
      if (6 < *(ushort *)((long)local_1a8 - (long)*(int *)local_1a8)) {
        uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3];
        if (uVar17 != 0) {
          puVar13 = (uint *)((long)local_1a8 + uVar17);
          puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
          local_140 = "z";
          puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600
                           );
          if ((puVar13 != (uint *)0x0) && (local_1b0 != (uint *)0x0)) {
            piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
            puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
            }
            if (*(long *)(puVar25 + uVar17 * 8) == 4) {
              uVar17 = 0;
              if (uVar4 < 0xb) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                  uVar17 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
              if (uVar21 < *(ushort *)((long)local_1b0 - (long)(int)*local_1b0)) {
                uVar19 = (ulong)*(ushort *)
                                 (((long)local_1b0 - (long)(int)*local_1b0) + (ulong)uVar21);
                if (uVar19 != 0) {
                  uVar17 = (ulong)*(uint *)((long)local_1b0 + uVar19);
                }
              }
            }
            else {
              puVar25 = PTR_DAT_047d5608;
              if ((uVar4 < 0xf) || ((ulong)puVar18[7] == 0)) goto LAB_011df80c;
              uVar17 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
            }
            goto LAB_011ddf3c;
          }
        }
LAB_011df80c:
        uVar17 = 0;
      }
    }
  }
LAB_011ddf3c:
  param_1[0x115] = uVar17;
  param_1[0x114] = CONCAT44((int)uVar29,fVar28);
  local_140 = (char *)0x7bd7efecbe345420;
  local_138 = (byte *)0x3c3bb82;
  local_130 = 0xe;
  local_128 = (long *)0x0;
  FUN_00d996a8(&local_230,auStack_2c0,&local_140);
  local_1b0 = local_230;
  local_1a8 = pbStack_228;
  local_1a0 = local_220;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (local_1a8 == (byte *)0x0) {
    fVar28 = 0.0;
LAB_011df8cc:
    uVar29 = 0;
    uVar17 = uVar29;
  }
  else {
    fVar28 = 0.0;
    if (6 < *(ushort *)((long)local_1a8 - (long)*(int *)local_1a8)) {
      uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3];
      fVar28 = 0.0;
      if (uVar17 != 0) {
        puVar13 = (uint *)((long)local_1a8 + uVar17);
        puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
        local_140 = "x";
        puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar13 == (uint *)0x0) {
          fVar28 = 0.0;
        }
        else {
          fVar28 = 0.0;
          if (local_1b0 != (uint *)0x0) {
            piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
            puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
            }
            if (*(long *)(puVar25 + uVar17 * 8) == 4) {
              fVar28 = 0.0;
              if (uVar4 < 0xb) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                  fVar28 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
              if ((uVar21 < *(ushort *)((long)local_1b0 - (long)(int)*local_1b0)) &&
                 (uVar17 = (ulong)*(ushort *)
                                   (((long)local_1b0 - (long)(int)*local_1b0) + (ulong)uVar21),
                 uVar17 != 0)) {
                fVar28 = *(float *)((long)local_1b0 + uVar17);
              }
            }
            else {
              fVar28 = 0.0;
              if (0xe < uVar4) {
                fVar28 = 0.0;
                if ((ulong)puVar18[7] != 0) {
                  fVar28 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
            }
          }
        }
      }
    }
    if (local_1a8 == (byte *)0x0) goto LAB_011df8cc;
    uVar29 = 0;
    if (6 < *(ushort *)((long)local_1a8 - (long)*(int *)local_1a8)) {
      uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3];
      uVar29 = 0;
      if (uVar17 != 0) {
        puVar13 = (uint *)((long)local_1a8 + uVar17);
        puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
        local_140 = "y";
        puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar13 == (uint *)0x0) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          if (local_1b0 != (uint *)0x0) {
            piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
            puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
            }
            if (*(long *)(puVar25 + uVar17 * 8) == 4) {
              uVar29 = 0;
              if (uVar4 < 0xb) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                  uVar29 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
              if ((uVar21 < *(ushort *)((long)local_1b0 - (long)(int)*local_1b0)) &&
                 (uVar17 = (ulong)*(ushort *)
                                   (((long)local_1b0 - (long)(int)*local_1b0) + (ulong)uVar21),
                 uVar17 != 0)) {
                uVar29 = (ulong)*(uint *)((long)local_1b0 + uVar17);
              }
            }
            else {
              uVar29 = 0;
              if (0xe < uVar4) {
                uVar29 = 0;
                if ((ulong)puVar18[7] != 0) {
                  uVar29 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
            }
          }
        }
      }
    }
    uVar17 = 0;
    if (local_1a8 != (byte *)0x0) {
      if (6 < *(ushort *)((long)local_1a8 - (long)*(int *)local_1a8)) {
        uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3];
        if (uVar17 != 0) {
          puVar13 = (uint *)((long)local_1a8 + uVar17);
          puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
          local_140 = "z";
          puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600
                           );
          if ((puVar13 != (uint *)0x0) && (local_1b0 != (uint *)0x0)) {
            piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
            puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
            uVar4 = *puVar18;
            if (uVar4 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
            }
            if (*(long *)(puVar25 + uVar17 * 8) == 4) {
              uVar17 = 0;
              if (uVar4 < 0xb) {
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar21 = (uint)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
                  uVar17 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
                }
              }
              if (uVar21 < *(ushort *)((long)local_1b0 - (long)(int)*local_1b0)) {
                uVar19 = (ulong)*(ushort *)
                                 (((long)local_1b0 - (long)(int)*local_1b0) + (ulong)uVar21);
                if (uVar19 != 0) {
                  uVar17 = (ulong)*(uint *)((long)local_1b0 + uVar19);
                }
              }
            }
            else {
              puVar25 = PTR_DAT_047d5608;
              if ((uVar4 < 0xf) || ((ulong)puVar18[7] == 0)) goto LAB_011df87c;
              uVar17 = (ulong)(uint)(float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
            }
            goto LAB_011de2ec;
          }
        }
LAB_011df87c:
        uVar17 = 0;
      }
    }
  }
LAB_011de2ec:
  param_1[0x117] = uVar17;
  param_1[0x116] = CONCAT44((int)uVar29,fVar28);
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  local_178 = (uint **)0x129a4f68dfd74ee0;
  local_170 = (byte *)0x3ca65b4;
  local_168 = (undefined1 *)0xa;
  local_160 = (long *)0x0;
  FUN_00d996a8(&local_2d8,param_2,&local_178);
  local_140 = (char *)0xd19051cb8fa0c54f;
  local_138 = (byte *)0x3c98b1c;
  local_130 = 0xc;
  local_128 = (long *)0x0;
  FUN_00fb4c10(&local_1b0,&local_2d8,&local_140);
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  fVar32 = 0.0;
  fVar31 = 0.0;
  fVar30 = 0.0;
  fVar28 = 0.0;
  if (local_1a8 != (byte *)0x0) {
    if ((*(ushort *)((long)local_1a8 - (long)*(int *)local_1a8) < 7) ||
       (uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3], uVar17 == 0)) {
      puVar13 = (uint *)0x0;
    }
    else {
      puVar13 = (uint *)((long)local_1a8 + uVar17);
      puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
    }
    local_140 = "x";
    puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar13 == (uint *)0x0) {
      fVar30 = 0.0;
    }
    else {
      piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
      puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
      uVar4 = *puVar18;
      if (uVar4 < 7) {
        piVar22 = (int *)0x0;
      }
      else {
        piVar22 = (int *)0x0;
        if ((ulong)puVar18[3] != 0) {
          puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
          piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
        }
      }
      if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
        uVar17 = 0;
      }
      else {
        uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
      }
      if (*(long *)(puVar25 + uVar17 * 8) == 4) {
        if ((uVar4 < 0xb) || ((ulong)puVar18[5] == 0)) {
          uVar17 = 0;
        }
        else {
          uVar17 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
        }
        fVar30 = *(float *)((long)local_1b0 + uVar17);
      }
      else {
        fVar30 = 0.0;
        puVar25 = PTR_DAT_047d5608;
        if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
          fVar30 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
        }
      }
    }
    if (local_1a8 == (byte *)0x0) {
      fVar31 = 0.0;
    }
    else {
      if ((*(ushort *)((long)local_1a8 - (long)*(int *)local_1a8) < 7) ||
         (uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3], uVar17 == 0))
      {
        puVar13 = (uint *)0x0;
      }
      else {
        puVar13 = (uint *)((long)local_1a8 + uVar17);
        puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
      }
      local_140 = "y";
      puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (puVar13 == (uint *)0x0) {
        fVar31 = 0.0;
      }
      else {
        piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
        puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
        uVar4 = *puVar18;
        if (uVar4 < 7) {
          piVar22 = (int *)0x0;
        }
        else {
          piVar22 = (int *)0x0;
          if ((ulong)puVar18[3] != 0) {
            puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
            piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
          }
        }
        if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
           (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
          uVar17 = 0;
        }
        else {
          uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
        }
        if (*(long *)(puVar25 + uVar17 * 8) == 4) {
          if ((uVar4 < 0xb) || ((ulong)puVar18[5] == 0)) {
            uVar17 = 0;
          }
          else {
            uVar17 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
          }
          fVar31 = *(float *)((long)local_1b0 + uVar17);
        }
        else {
          fVar31 = 0.0;
          puVar25 = PTR_DAT_047d5608;
          if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
            fVar31 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
          }
        }
      }
      if (local_1a8 != (byte *)0x0) {
        if ((*(ushort *)((long)local_1a8 - (long)*(int *)local_1a8) < 7) ||
           (uVar17 = (ulong)((ushort *)((long)local_1a8 - (long)*(int *)local_1a8))[3], uVar17 == 0)
           ) {
          puVar13 = (uint *)0x0;
        }
        else {
          puVar13 = (uint *)((long)local_1a8 + uVar17);
          puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
        }
        local_140 = "z";
        puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar13 != (uint *)0x0) {
          piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
          puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
          uVar4 = *puVar18;
          if (uVar4 < 7) {
            piVar22 = (int *)0x0;
          }
          else {
            piVar22 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
              piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
            }
          }
          if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
             (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
            uVar17 = 0;
          }
          else {
            uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
          }
          if (*(long *)(puVar25 + uVar17 * 8) == 4) {
            if ((uVar4 < 0xb) || ((ulong)puVar18[5] == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (ulong)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
            }
            fVar28 = *(float *)((long)local_1b0 + uVar17);
          }
          else {
            if ((uVar4 < 0xf) || ((ulong)puVar18[7] == 0)) {
              fVar28 = 0.0;
            }
            else {
              fVar28 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
            }
            puVar25 = PTR_DAT_047d5608;
          }
          goto LAB_011de610;
        }
      }
    }
    fVar28 = 0.0;
  }
LAB_011de610:
  param_1[0x119] = (ulong)(uint)fVar28;
  param_1[0x118] = CONCAT44(fVar31,fVar30);
  if (((local_2d0 != (int *)0x0) && (6 < *(ushort *)((long)local_2d0 - (long)*local_2d0))) &&
     (uVar17 = (ulong)((ushort *)((long)local_2d0 - (long)*local_2d0))[3], uVar17 != 0)) {
    puVar13 = (uint *)((long)local_2d0 + uVar17);
    puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
    local_140 = "EffectScale";
    puVar13 = bsearch(&local_140,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar13 != (uint *)0x0) && (local_2d8 != (int *)0x0)) {
      piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
      puVar18 = (ushort *)((long)piVar14 - (long)*piVar14);
      uVar4 = *puVar18;
      if (uVar4 < 7) {
        piVar22 = (int *)0x0;
      }
      else {
        piVar22 = (int *)0x0;
        if ((ulong)puVar18[3] != 0) {
          puVar13 = (uint *)((long)piVar14 + (ulong)puVar18[3]);
          piVar22 = (int *)((long)puVar13 + (ulong)*puVar13);
        }
      }
      if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
        uVar17 = 0;
      }
      else {
        uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
      }
      if (*(long *)(puVar25 + uVar17 * 8) == 4) {
        fVar32 = 0.0;
        if (uVar4 < 0xb) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0;
          if ((ulong)puVar18[5] != 0) {
            uVar21 = (uint)*(ushort *)((long)piVar14 + (ulong)puVar18[5]);
          }
          if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
            fVar32 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
          }
        }
        if ((uVar21 < *(ushort *)((long)local_2d8 - (long)*local_2d8)) &&
           (uVar17 = (ulong)*(ushort *)(((long)local_2d8 - (long)*local_2d8) + (ulong)uVar21),
           uVar17 != 0)) {
          fVar32 = *(float *)((long)local_2d8 + uVar17);
        }
      }
      else if ((0xe < uVar4) && ((ulong)puVar18[7] != 0)) {
        fVar32 = (float)*(double *)((long)piVar14 + (ulong)puVar18[7]);
      }
    }
  }
  *(float *)(param_1 + 0x11a) = fVar32;
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  local_140 = (char *)0xd74c0f335a9ca459;
  local_138 = (byte *)0x3ca65bf;
  local_130 = 0x11;
  local_128 = (long *)0x0;
  piVar14 = (int *)FUN_00d27b5c(param_2,&local_140);
  if ((piVar14 == (int *)0x0) || (*(ushort *)((long)piVar14 - (long)*piVar14) < 7)) {
    uVar15 = 0;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3];
    uVar15 = 0;
    if (uVar17 != 0) {
      uVar15 = *(undefined4 *)((long)piVar14 + uVar17);
    }
  }
  *(undefined4 *)(param_1 + 0x11c) = uVar15;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  return;
}


