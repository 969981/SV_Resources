/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e91360; name: FUN_02e91360
 */


void FUN_02e91360(long *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  undefined8 uVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  long local_c0;
  undefined8 local_b8;
  float *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  
  lVar8 = *param_1;
  puVar10 = (undefined8 *)
            (lVar8 + 0x48 + (ulong)(param_2 & 0xffff) * 0x40 + *(long *)(lVar8 + 0x48));
  pbVar14 = (byte *)((long)puVar10 + 0x1e);
  if ((*pbVar14 >> 6 & 1) == 0) {
    return;
  }
  uVar11 = *(undefined8 *)param_1[7];
  uVar26 = ((undefined8 *)param_1[7])[1];
  local_70 = (undefined2)uVar11;
  uStack_6e = (undefined2)((ulong)uVar11 >> 0x10);
  uStack_6c = (undefined4)((ulong)uVar11 >> 0x20);
  uStack_68 = (undefined4)uVar26;
  local_64 = (undefined4)((ulong)uVar26 >> 0x20);
  puVar9 = (undefined8 *)param_1[6];
  uVar12 = puVar9[3];
  plVar15 = puVar10 + 6;
  iVar1 = (uint)*(byte *)(lVar8 + 0x1c) + (int)(uVar12 >> 0x20);
  uVar12 = (ulong)((param_2 + 1 << (ulong)(-iVar1 & 0x1f)) - 1) |
           uVar12 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar12 >> 0x20) * 4);
  plVar7 = *(long **)param_1[4];
  lVar2 = 0;
  if (*plVar15 != 0) {
    lVar2 = *plVar15 + (long)plVar15;
  }
  uVar13 = (undefined4)uVar12;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x40))
              (plVar7,*(undefined2 *)((long)puVar10 + 0x2c),5,*puVar9,puVar9[1],lVar8,uVar12,lVar2,
               &local_70);
    lVar8 = param_1[4];
    if (*(long *)(lVar8 + 8) != 0) {
      local_d0 = *(undefined2 *)(lVar8 + 0x10);
      local_c4 = *(undefined4 *)(lVar8 + 0x1c);
      uStack_cc = (undefined4)*(undefined8 *)(lVar8 + 0x14);
      uStack_c8 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0x14) >> 0x20);
      puVar9 = (undefined8 *)param_1[5];
      local_c0 = *puVar9;
      local_b8 = puVar9[1];
      local_b0 = (float *)puVar9[2];
      local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(puVar9 + 3));
      local_a0 = *(undefined8 *)(lVar8 + 0x38);
      fStack_10c = (float)uStack_6c;
      fStack_108 = (float)uStack_68;
      fStack_104 = (float)local_64;
      local_110._0_2_ = local_70;
      local_100 = *(undefined8 *)param_1[6];
      local_f8 = ((undefined8 *)param_1[6])[1];
      local_f0 = *param_1;
      uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar13);
      local_e0 = lVar2;
      uVar12 = (**(code **)(**(long **)(lVar8 + 8) + 0x40))
                         (*(long **)(lVar8 + 8),5,(char)param_1[0x10] == '\0',&local_d0,&local_110);
      if ((uVar12 & 1) == 0) {
        return;
      }
    }
  }
  puVar9 = (undefined8 *)param_1[6];
  auVar35 = NEON_fmov(0x3f800000,4);
  uVar11 = *puVar9;
  local_d0 = (undefined2)uVar11;
  uStack_ce = (undefined2)((ulong)uVar11 >> 0x10);
  uStack_cc = (undefined4)((ulong)uVar11 >> 0x20);
  uStack_c8 = (undefined4)puVar9[1];
  local_c4 = (undefined4)((ulong)puVar9[1] >> 0x20);
  local_c0 = puVar9[2];
  local_b8 = puVar9[3];
  local_b0 = (float *)puVar9[4];
  local_a8 = 0;
  uStack_78 = puVar9[0xb];
  local_80 = puVar9[10];
  local_98[0] = *(undefined4 *)(puVar9 + 7);
  local_a0._0_4_ = (undefined4)CONCAT71((int7)((ulong)local_a0 >> 8),*(undefined1 *)(puVar9 + 6));
  local_a0 = CONCAT44(*(undefined4 *)((long)puVar9 + 0x34),(undefined4)local_a0);
  uVar11 = puVar10[2];
  local_90 = puVar10[4];
  uStack_88 = CONCAT44(0x3f800000,(float)puVar10[5]);
  fVar36 = (float)puVar10[3];
  fVar16 = (float)*puVar10;
  fVar18 = (float)((ulong)*puVar10 >> 0x20);
  fVar27 = fVar18 + fVar18;
  fVar34 = (float)puVar10[1];
  fVar28 = fVar34 + fVar34;
  fVar29 = (fVar16 + fVar16) * fVar16;
  fVar17 = (float)((ulong)puVar10[1] >> 0x20);
  fVar25 = (fVar16 + fVar16) * fVar17;
  fVar34 = 1.0 - fVar34 * fVar28;
  fVar37 = fVar34 - fVar27 * fVar18;
  fVar39 = fVar28 * fVar18 - fVar25;
  fVar41 = fVar27 * fVar16 - fVar28 * fVar17;
  fVar40 = fVar27 * fVar16 + fVar28 * fVar17;
  fVar25 = fVar28 * fVar18 + fVar25;
  fVar38 = fVar28 * fVar16 + fVar27 * fVar17;
  fVar34 = fVar34 - fVar29;
  fVar18 = (1.0 - fVar29) - fVar27 * fVar18;
  uVar12 = (ulong)(uint)fVar18;
  fVar27 = fVar28 * fVar16 - fVar27 * fVar17;
  if (*(char *)(puVar9 + 6) == '\0') {
    uVar26 = puVar9[8];
    uVar6 = puVar9[9];
    if ((*pbVar14 >> 3 & 1) == 0) goto LAB_02e916b4;
  }
  else {
    uVar12 = puVar9[8];
    fVar28 = (float)(uVar12 >> 0x20);
    local_90 = CONCAT44((float)((ulong)local_90 >> 0x20) * fVar28,(float)local_90 * (float)uVar12);
    fVar16 = (float)puVar9[9];
    uStack_88 = CONCAT44((float)((ulong)puVar9[9] >> 0x20) * 1.0,(float)puVar10[5] * fVar16);
    uVar11 = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar28,(float)uVar11 * (float)uVar12);
    fVar36 = fVar36 * fVar16;
  }
  local_a0 = CONCAT71(local_a0._1_7_,1);
  local_80 = 0;
  uStack_78 = 0;
  if ((*pbVar14 >> 3 & 1) == 0) {
    uVar4 = *(uint *)((long)puVar9 + 0x34);
  }
  else {
    uVar4 = (*pbVar14 >> 5 ^ 0xffffffff) & 1;
  }
  local_a0 = CONCAT44(uVar4,(undefined4)local_a0);
  lVar8 = 0;
  if (*plVar15 != 0) {
    lVar8 = *plVar15 + (long)plVar15;
  }
  local_98[0] = *(undefined4 *)(lVar8 + 0x20);
  uVar26 = local_90;
  uVar6 = uStack_88;
  if ((lVar8 != 0) && ((*(ushort *)(lVar8 + 0x1a) & 1) != 0)) {
    iVar5 = *(int *)(lVar8 + 0x40);
    lVar3 = 0;
    if (iVar5 != 0) {
      lVar3 = (long)iVar5 + lVar8 + 0x40;
    }
    FUN_00cb0560(local_90,uVar12,0,lVar3,*(undefined4 *)(lVar8 + 0x44),uVar4,&local_90,local_98,
                 &local_80);
    uVar26 = local_90;
    uVar6 = uStack_88;
  }
LAB_02e916b4:
  uStack_88 = uVar6;
  local_90 = uVar26;
  puVar10 = *(undefined8 **)(param_1[6] + 0x20);
  fVar22 = (float)((ulong)uVar11 >> 0x20);
  fVar19 = (float)puVar10[2];
  fVar21 = (float)((ulong)puVar10[2] >> 0x20);
  fVar23 = (float)puVar10[3];
  fVar24 = (float)((ulong)puVar10[3] >> 0x20);
  fVar30 = (float)puVar10[4];
  fVar31 = (float)((ulong)puVar10[4] >> 0x20);
  fVar32 = (float)puVar10[5];
  fVar33 = (float)((ulong)puVar10[5] >> 0x20);
  fVar20 = (float)uVar11;
  fVar28 = (float)*puVar10;
  fVar16 = (float)((ulong)*puVar10 >> 0x20);
  fVar17 = (float)puVar10[1];
  fVar29 = (float)((ulong)puVar10[1] >> 0x20);
  local_f0 = CONCAT44(fVar31 * fVar18 + fVar16 * fVar38 + fVar21 * fVar39,
                      fVar30 * fVar18 + fVar28 * fVar38 + fVar19 * fVar39);
  uStack_e8 = CONCAT44(fVar33 * fVar18 + fVar29 * fVar38 + fVar24 * fVar39,
                       fVar32 * fVar18 + fVar17 * fVar38 + fVar23 * fVar39);
  local_100 = CONCAT44(fVar31 * fVar25 + fVar16 * fVar41 + fVar21 * fVar34,
                       fVar30 * fVar25 + fVar28 * fVar41 + fVar19 * fVar34);
  local_f8 = CONCAT44(fVar33 * fVar25 + fVar29 * fVar41 + fVar24 * fVar34,
                      fVar32 * fVar25 + fVar17 * fVar41 + fVar23 * fVar34);
  local_110 = fVar30 * fVar27 + fVar28 * fVar37 + fVar19 * fVar40;
  fStack_10c = fVar31 * fVar27 + fVar16 * fVar37 + fVar21 * fVar40;
  fStack_108 = fVar32 * fVar27 + fVar17 * fVar37 + fVar23 * fVar40;
  fStack_104 = fVar33 * fVar27 + fVar29 * fVar37 + fVar24 * fVar40;
  local_e0 = CONCAT44(fVar31 * fVar36 + fVar16 * fVar20 + fVar21 * fVar22 +
                      (float)((ulong)puVar10[6] >> 0x20),
                      fVar30 * fVar36 + fVar28 * fVar20 + fVar19 * fVar22 + (float)puVar10[6]);
  uStack_d8 = CONCAT44(fVar33 * fVar36 + fVar29 * fVar20 + fVar24 * fVar22 +
                       (float)((ulong)puVar10[7] >> 0x20),
                       fVar32 * fVar36 + fVar17 * fVar20 + fVar23 * fVar22 + (float)puVar10[7]);
  local_c0 = *param_1;
  local_b0 = &local_110;
  local_b8 = CONCAT44(iVar1,uVar13);
  local_a8 = 0;
  fVar28 = (float)param_1[0xc];
  fVar16 = (float)((ulong)param_1[0xc] >> 0x20);
  fVar17 = (float)param_1[0xd];
  uStack_130 = CONCAT44(fVar25 * fVar17 + fVar41 * fVar28 + fVar34 * fVar16,
                        fVar27 * fVar17 + fVar37 * fVar28 + fVar40 * fVar16);
  uStack_128 = CONCAT44(fVar17 * 0.0 + fVar39 * fVar28 + fVar16 * 0.0,
                        fVar18 * fVar17 + fVar38 * fVar28 + fVar39 * fVar16);
  fVar28 = (float)param_1[10];
  fVar16 = (float)((ulong)param_1[10] >> 0x20);
  fVar17 = (float)param_1[0xb];
  local_140 = CONCAT44(fVar25 * fVar17 + fVar41 * fVar28 + fVar34 * fVar16,
                       fVar27 * fVar17 + fVar37 * fVar28 + fVar40 * fVar16);
  uStack_138 = CONCAT44(fVar17 * 0.0 + fVar39 * fVar28 + fVar16 * 0.0,
                        fVar18 * fVar17 + fVar38 * fVar28 + fVar39 * fVar16);
  fVar28 = (float)param_1[8];
  fVar16 = (float)((ulong)param_1[8] >> 0x20);
  fVar17 = (float)param_1[9];
  local_150 = CONCAT44(fVar25 * fVar17 + fVar41 * fVar28 + fVar34 * fVar16,
                       fVar27 * fVar17 + fVar37 * fVar28 + fVar40 * fVar16);
  uStack_148 = CONCAT44(fVar17 * 0.0 + fVar39 * fVar28 + fVar16 * 0.0,
                        fVar18 * fVar17 + fVar38 * fVar28 + fVar39 * fVar16);
  fVar20 = (float)param_1[0xe] - fVar20;
  fVar22 = (float)((ulong)param_1[0xe] >> 0x20) - fVar22;
  fVar36 = (float)param_1[0xf] - fVar36;
  local_120 = CONCAT44(fVar25 * fVar36 + fVar41 * fVar20 + fVar34 * fVar22,
                       fVar27 * fVar36 + fVar37 * fVar20 + fVar40 * fVar22);
  uStack_118 = CONCAT44(fVar36 * 0.0 + fVar39 * fVar20 + fVar22 * 0.0,
                        fVar18 * fVar36 + fVar38 * fVar20 + fVar39 * fVar22);
  FUN_02ea2bc4(*(undefined8 *)param_1[3],(undefined8 *)param_1[3],param_1[4],param_1[5],lVar2,
               &local_70,&local_d0,&local_150,(char)param_1[0x10],param_1[0x11]);
  lVar8 = param_1[6];
  uVar11 = NEON_fmax(*(undefined8 *)(param_1[0x11] + 0x10),0,4);
  if (*(char *)(lVar8 + 0x30) != '\0') {
    uVar26 = CONCAT44(auVar35._4_4_ / ABS((float)((ulong)*(undefined8 *)(lVar8 + 0x40) >> 0x20)),
                      auVar35._0_4_ / ABS((float)*(undefined8 *)(lVar8 + 0x40)));
    fVar18 = auVar35._8_4_ / ABS((float)*(undefined8 *)(lVar8 + 0x48));
    uVar26 = NEON_fmaxp(uVar26,uVar26,4);
    uVar26 = NEON_fmax(CONCAT44(fVar18,fVar18),uVar26,4);
    uVar11 = CONCAT44((float)((ulong)uVar11 >> 0x20) * (float)((ulong)uVar26 >> 0x20),
                      (float)uVar11 * (float)uVar26);
  }
  fVar18 = (float)((ulong)uVar11 >> 0x20);
  *param_3 = CONCAT44(fVar18 * fVar18,(float)uVar11 * (float)uVar11);
  return;
}


