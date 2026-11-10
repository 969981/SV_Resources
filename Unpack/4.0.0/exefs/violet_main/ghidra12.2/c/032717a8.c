/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032717a8; name: FUN_032717a8
 */


void FUN_032717a8(long *param_1,ulong *param_2,ulong *param_3,ulong *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [32];
  ulong local_170;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [32];
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  long local_70 [2];
  
  local_b0 = *param_1 >> 0xe;
  lStack_a8 = param_1[1] >> 0xe;
  local_a0 = param_1[2] >> 0xe;
  lStack_98 = param_1[3] >> 0xe;
  local_d0 = param_1[8] >> 0xe;
  lStack_c8 = param_1[9] >> 0xe;
  lStack_c0 = param_1[10] >> 0xe;
  lStack_b8 = param_1[0xb] >> 0xe;
  local_f0 = param_1[0x10] >> 0xe;
  lStack_e8 = param_1[0x11] >> 0xe;
  lStack_e0 = param_1[0x12] >> 0xe;
  lStack_d8 = param_1[0x13] >> 0xe;
  FUN_0326c774(auStack_130,&local_b0,&local_d0);
  FUN_0326c774(&local_170,&local_d0,&local_f0);
  FUN_0326c774(auStack_1b0,&local_f0,&local_b0);
  local_1c0 = param_1[3];
  local_1b8 = (param_1[2] << 0x35) >> 0x35;
  local_1d0 = param_1[0xb];
  local_1c8 = (param_1[10] << 0x35) >> 0x35;
  local_1e0 = param_1[0x13];
  local_1d8 = (param_1[0x12] << 0x35) >> 0x35;
  if (param_2 != (ulong *)0x0) {
    FUN_03270e9c(&local_200,&local_1c0,&local_170);
    FUN_03270e9c(&local_90,&local_1d0,auStack_1b0);
    bVar3 = CARRY8(local_90,local_200);
    local_200 = local_90 + local_200;
    bVar4 = CARRY8(local_88,local_1f8);
    uVar8 = local_88 + local_1f8;
    local_1f8 = uVar8 + bVar3;
    uVar6 = (ulong)(bVar4 || CARRY8(uVar8,(ulong)bVar3));
    bVar3 = CARRY8(local_80,local_1f0);
    uVar8 = local_80 + local_1f0;
    local_1f0 = uVar8 + uVar6;
    local_1e8 = local_78 + local_1e8 + (ulong)(bVar3 || CARRY8(uVar8,uVar6));
    FUN_03270e9c(&local_90,&local_1e0,auStack_130);
    bVar3 = CARRY8(local_90,local_200);
    local_200 = local_90 + local_200;
    bVar4 = CARRY8(local_88,local_1f8);
    uVar8 = local_88 + local_1f8;
    local_1f8 = uVar8 + bVar3;
    bVar5 = CARRY8(local_80,local_1f0);
    uVar6 = local_80 + local_1f0;
    uVar8 = (ulong)(bVar4 || CARRY8(uVar8,(ulong)bVar3));
    local_1f0 = uVar6 + uVar8;
    uVar8 = local_78 + local_1e8 + (ulong)(bVar5 || CARRY8(uVar6,uVar8));
    uVar6 = (ulong)(-local_200 < ~local_200);
    uVar11 = (ulong)CARRY8(~local_1f8,uVar6);
    *param_2 = -local_200;
    param_2[1] = ~local_1f8 + uVar6;
    uVar6 = -uVar8;
    if (!CARRY8(~local_1f0,uVar11)) {
      uVar6 = ~uVar8;
    }
    param_2[2] = ~local_1f0 + uVar11;
    param_2[3] = uVar6;
  }
  if (param_3 != (ulong *)0x0) {
    FUN_03270e9c(&local_200,&local_1c0,&local_160);
    FUN_03270e9c(&local_90,&local_1d0,auStack_1a0);
    bVar3 = CARRY8(local_90,local_200);
    local_200 = local_90 + local_200;
    bVar4 = CARRY8(local_88,local_1f8);
    uVar8 = local_88 + local_1f8;
    local_1f8 = uVar8 + bVar3;
    uVar6 = (ulong)(bVar4 || CARRY8(uVar8,(ulong)bVar3));
    bVar3 = CARRY8(local_80,local_1f0);
    uVar8 = local_80 + local_1f0;
    local_1f0 = uVar8 + uVar6;
    local_1e8 = local_78 + local_1e8 + (ulong)(bVar3 || CARRY8(uVar8,uVar6));
    FUN_03270e9c(&local_90,&local_1e0,auStack_120);
    bVar3 = CARRY8(local_90,local_200);
    local_200 = local_90 + local_200;
    bVar4 = CARRY8(local_88,local_1f8);
    uVar8 = local_88 + local_1f8;
    local_1f8 = uVar8 + bVar3;
    bVar5 = CARRY8(local_80,local_1f0);
    uVar6 = local_80 + local_1f0;
    uVar8 = (ulong)(bVar4 || CARRY8(uVar8,(ulong)bVar3));
    local_1f0 = uVar6 + uVar8;
    uVar8 = local_78 + local_1e8 + (ulong)(bVar5 || CARRY8(uVar6,uVar8));
    uVar6 = (ulong)(-local_200 < ~local_200);
    uVar11 = (ulong)CARRY8(~local_1f8,uVar6);
    *param_3 = -local_200;
    param_3[1] = ~local_1f8 + uVar6;
    uVar6 = -uVar8;
    if (!CARRY8(~local_1f0,uVar11)) {
      uVar6 = ~uVar8;
    }
    param_3[2] = ~local_1f0 + uVar11;
    param_3[3] = uVar6;
  }
  if (param_4 != (ulong *)0x0) {
    FUN_03270e9c(&local_200,&local_1c0,&local_150);
    FUN_03270e9c(&local_90,&local_1d0,auStack_190);
    bVar3 = CARRY8(local_90,local_200);
    local_200 = local_90 + local_200;
    bVar4 = CARRY8(local_88,local_1f8);
    uVar8 = local_88 + local_1f8;
    local_1f8 = uVar8 + bVar3;
    uVar6 = (ulong)(bVar4 || CARRY8(uVar8,(ulong)bVar3));
    bVar3 = CARRY8(local_80,local_1f0);
    uVar8 = local_80 + local_1f0;
    local_1f0 = uVar8 + uVar6;
    local_1e8 = local_78 + local_1e8 + (ulong)(bVar3 || CARRY8(uVar8,uVar6));
    FUN_03270e9c(&local_90,&local_1e0,auStack_110);
    bVar3 = CARRY8(local_80,local_1f0);
    uVar8 = local_80 + local_1f0;
    uVar11 = ~(local_88 + local_1f8 + (ulong)CARRY8(local_90,local_200));
    uVar6 = (ulong)(CARRY8(local_88,local_1f8) ||
                   CARRY8(local_88 + local_1f8,(ulong)CARRY8(local_90,local_200)));
    local_1f0 = uVar8 + uVar6;
    uVar8 = local_78 + local_1e8 + (ulong)(bVar3 || CARRY8(uVar8,uVar6));
    uVar6 = -(local_90 + local_200);
    uVar12 = (ulong)(uVar6 < ~(local_90 + local_200));
    uVar13 = (ulong)CARRY8(uVar11,uVar12);
    *param_4 = uVar6;
    param_4[1] = uVar11 + uVar12;
    uVar6 = -uVar8;
    if (!CARRY8(~local_1f0,uVar13)) {
      uVar6 = ~uVar8;
    }
    param_4[2] = ~local_1f0 + uVar13;
    param_4[3] = uVar6;
  }
  lVar1 = local_b0;
  if (param_5 != (long *)0x0) {
    uVar8 = (long)local_168 >> 0x3f;
    local_200 = (local_170 ^ uVar8) - uVar8;
    local_1f8 = ((local_168 ^ uVar8) - uVar8) - (ulong)((local_170 ^ uVar8) < uVar8);
    local_70[0] = -local_b0;
    if (-1 < local_b0) {
      local_70[0] = local_b0;
    }
    FUN_0326fcb0(&local_200,local_70,&local_90,2,1,4);
    lVar2 = lStack_a8;
    if (-(int)((long)local_168 >> 0x3f) == -(int)(lVar1 >> 0x3f)) {
      uVar12 = local_90;
      uVar11 = local_78;
      uVar6 = local_80;
      uVar8 = local_88;
    }
    else {
      uVar12 = -local_90;
      uVar8 = ~local_88 + (ulong)(uVar12 < ~local_90);
      uVar13 = (ulong)CARRY8(~local_88,(ulong)(uVar12 < ~local_90));
      uVar6 = uVar13 + ~local_80;
      uVar11 = -local_78;
      if (!CARRY8(uVar13,~local_80)) {
        uVar11 = ~local_78;
      }
    }
    uVar13 = (long)local_158 >> 0x3f;
    local_200 = (local_160 ^ uVar13) - uVar13;
    local_1f8 = ((local_158 ^ uVar13) - uVar13) - (ulong)((local_160 ^ uVar13) < uVar13);
    local_70[0] = -lStack_a8;
    if (-1 < lStack_a8) {
      local_70[0] = lStack_a8;
    }
    FUN_0326fcb0(&local_200,local_70,&local_90,2,1,4);
    lVar1 = local_a0;
    if (-(int)((long)local_158 >> 0x3f) == -(int)(lVar2 >> 0x3f)) {
      uVar17 = local_90;
      uVar10 = local_78;
      uVar18 = local_80;
      uVar13 = local_88;
    }
    else {
      uVar17 = -local_90;
      uVar13 = ~local_88 + (ulong)(uVar17 < ~local_90);
      uVar7 = (ulong)CARRY8(~local_88,(ulong)(uVar17 < ~local_90));
      uVar18 = uVar7 + ~local_80;
      uVar10 = -local_78;
      if (!CARRY8(uVar7,~local_80)) {
        uVar10 = ~local_78;
      }
    }
    uVar7 = (long)local_148 >> 0x3f;
    local_200 = (local_150 ^ uVar7) - uVar7;
    local_1f8 = ((local_148 ^ uVar7) - uVar7) - (ulong)((local_150 ^ uVar7) < uVar7);
    local_70[0] = -local_a0;
    if (-1 < local_a0) {
      local_70[0] = local_a0;
    }
    FUN_0326fcb0(&local_200,local_70,&local_90,2,1,4);
    if (-(int)((long)local_148 >> 0x3f) == -(int)(lVar1 >> 0x3f)) {
      uVar7 = local_78;
    }
    else {
      uVar7 = ~local_90;
      local_90 = -local_90;
      uVar9 = ~local_88;
      local_88 = uVar9 + (local_90 < uVar7);
      uVar14 = ~local_80;
      uVar9 = (ulong)CARRY8(uVar9,(ulong)(local_90 < uVar7));
      local_80 = uVar9 + uVar14;
      uVar7 = -local_78;
      if (!CARRY8(uVar9,uVar14)) {
        uVar7 = ~local_78;
      }
    }
    uVar9 = uVar13 + uVar8 + (ulong)CARRY8(uVar17,uVar12);
    uVar16 = (ulong)(CARRY8(uVar13,uVar8) || CARRY8(uVar13 + uVar8,(ulong)CARRY8(uVar17,uVar12)));
    uVar8 = uVar18 + uVar6 + uVar16;
    uVar14 = (ulong)CARRY8(local_90,uVar17 + uVar12);
    uVar13 = local_88 + uVar9;
    uVar15 = (ulong)(CARRY8(local_88,uVar9) || CARRY8(uVar13,uVar14));
    uVar9 = local_80 + uVar8;
    *param_5 = local_90 + uVar17 + uVar12;
    param_5[1] = uVar13 + uVar14;
    param_5[2] = uVar9 + uVar15;
    param_5[3] = uVar10 + uVar11 + (ulong)(CARRY8(uVar18,uVar6) || CARRY8(uVar18 + uVar6,uVar16)) +
                 uVar7 + (ulong)(CARRY8(local_80,uVar8) || CARRY8(uVar9,uVar15));
  }
  return;
}


