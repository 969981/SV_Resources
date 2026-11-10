/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e9d820; name: FUN_02e9d820
 */


void FUN_02e9d820(long *param_1,long *param_2,undefined8 *param_3,long param_4,undefined2 *param_5,
                 undefined8 *param_6,undefined8 *param_7,uint param_8,undefined8 param_9)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_210 [8];
  long *local_208;
  undefined2 local_200 [2];
  undefined8 local_1fc;
  undefined4 local_1f4;
  long local_1d8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  uint local_128;
  int iStack_124;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  uint local_10c;
  undefined4 local_108 [2];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined2 local_d8 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a8;
  undefined2 local_a0 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78;
  long local_70;
  
  lVar12 = param_2[7];
  plVar1 = (long *)(lVar12 + 0x48);
  uVar5 = 0;
  do {
    uVar11 = uVar5;
    if ((*(uint *)(lVar12 + 0x50) & ((int)*(uint *)(lVar12 + 0x50) >> 0x1f ^ 0xffffffffU)) == uVar11
       ) {
      return;
    }
    uVar5 = uVar11 + 1;
  } while ((*(byte *)((long)plVar1 + (ulong)(uVar11 & 0xffff) * 0x40 + *plVar1 + 0x1e) & 1) != 0);
  if (uVar11 + 1 != 0) {
    lVar9 = *(long *)(lVar12 + 0x48);
    do {
      local_140 = *param_3;
      uStack_138 = param_3[1];
      local_130 = param_3[2];
      puVar2 = (undefined8 *)((long)plVar1 + (ulong)(uVar11 & 0xffff) * 0x40 + lVar9);
      local_128 = *(uint *)(param_3 + 3);
      iStack_124 = *(int *)((long)param_3 + 0x1c);
      local_120 = (undefined8 *)param_3[4];
      uStack_118 = 0;
      local_10c = *(uint *)((long)param_3 + 0x34);
      local_108[0] = *(undefined4 *)(param_3 + 7);
      uVar20 = param_3[9];
      uVar8 = param_3[8];
      uStack_e8 = param_3[0xb];
      local_f0 = param_3[10];
      uVar33 = puVar2[2];
      local_100 = puVar2[4];
      uStack_f8 = CONCAT44(0x3f800000,(float)puVar2[5]);
      fVar35 = (float)puVar2[3];
      fVar29 = (float)*puVar2;
      fVar13 = (float)((ulong)*puVar2 >> 0x20);
      fVar24 = fVar13 + fVar13;
      fVar27 = (float)puVar2[1];
      fVar25 = fVar27 + fVar27;
      fVar26 = (fVar29 + fVar29) * fVar29;
      fVar38 = (float)((ulong)puVar2[1] >> 0x20);
      fVar23 = (fVar29 + fVar29) * fVar38;
      fVar27 = 1.0 - fVar27 * fVar25;
      fVar28 = fVar25 * fVar13 - fVar23;
      fVar36 = fVar25 * fVar29 + fVar24 * fVar38;
      fVar37 = fVar27 - fVar24 * fVar13;
      fVar27 = fVar27 - fVar26;
      fVar31 = fVar24 * fVar29 + fVar25 * fVar38;
      fVar30 = fVar24 * fVar29 - fVar25 * fVar38;
      fVar23 = fVar25 * fVar13 + fVar23;
      fVar38 = fVar25 * fVar29 - fVar24 * fVar38;
      fVar29 = (1.0 - fVar26) - fVar24 * fVar13;
      if (*(char *)(param_3 + 6) == '\0') {
        local_110 = 0;
        if ((*(byte *)((long)puVar2 + 0x1e) >> 3 & 1) != 0) goto LAB_02e9d9e0;
      }
      else {
        fVar13 = (float)((ulong)uVar8 >> 0x20);
        local_100 = CONCAT44(fVar13 * (float)((ulong)local_100 >> 0x20),
                             (float)uVar8 * (float)local_100);
        uStack_f8 = CONCAT44((float)((ulong)uVar20 >> 0x20) * 1.0,(float)uVar20 * (float)puVar2[5]);
        uVar33 = CONCAT44(fVar13 * (float)((ulong)uVar33 >> 0x20),(float)uVar8 * (float)uVar33);
        fVar35 = (float)uVar20 * fVar35;
LAB_02e9d9e0:
        local_110 = 1;
        local_f0 = 0;
        uStack_e8 = 0;
        bVar3 = *(byte *)((long)puVar2 + 0x1e);
        if ((bVar3 & 8) != 0) {
          local_10c = (bVar3 >> 5 ^ 0xffffffff) & 1;
        }
        lVar10 = puVar2[6];
        lVar9 = 0;
        if (lVar10 != 0) {
          lVar9 = lVar10 + (long)(puVar2 + 6);
        }
        local_108[0] = *(undefined4 *)(lVar9 + 0x20);
        uVar8 = local_100;
        uVar20 = uStack_f8;
        if ((lVar9 != 0) && ((*(ushort *)(lVar9 + 0x1a) & 1) != 0)) {
          iVar4 = *(int *)(lVar9 + 0x40);
          lVar10 = 0;
          if (iVar4 != 0) {
            lVar10 = (long)iVar4 + lVar9 + 0x40;
          }
          FUN_00cb0560(lVar10,*(undefined4 *)(lVar9 + 0x44),local_10c,&local_100,local_108,&local_f0
                      );
          local_120 = (undefined8 *)param_3[4];
          uVar8 = local_100;
          uVar20 = uStack_f8;
        }
      }
      uStack_f8 = uVar20;
      local_100 = uVar8;
      fVar14 = (float)param_7[2];
      fVar16 = (float)((ulong)param_7[2] >> 0x20);
      fVar18 = (float)param_7[3];
      fVar21 = (float)((ulong)param_7[3] >> 0x20);
      fVar34 = (float)((ulong)uVar33 >> 0x20);
      fVar13 = (float)*param_7;
      fVar24 = (float)((ulong)*param_7 >> 0x20);
      fVar25 = (float)param_7[1];
      fVar26 = (float)((ulong)param_7[1] >> 0x20);
      fVar32 = (float)uVar33;
      fVar15 = (float)param_7[4];
      fVar17 = (float)((ulong)param_7[4] >> 0x20);
      fVar19 = (float)param_7[5];
      fVar22 = (float)((ulong)param_7[5] >> 0x20);
      uStack_168 = CONCAT44(fVar22 * fVar23 + fVar26 * fVar30 + fVar21 * fVar27,
                            fVar19 * fVar23 + fVar25 * fVar30 + fVar18 * fVar27);
      local_180 = CONCAT44(fVar17 * fVar38 + fVar24 * fVar37 + fVar16 * fVar31,
                           fVar15 * fVar38 + fVar13 * fVar37 + fVar14 * fVar31);
      uStack_178 = CONCAT44(fVar22 * fVar38 + fVar26 * fVar37 + fVar21 * fVar31,
                            fVar19 * fVar38 + fVar25 * fVar37 + fVar18 * fVar31);
      uStack_160 = CONCAT44(fVar17 * fVar29 + fVar24 * fVar36 + fVar16 * fVar28,
                            fVar15 * fVar29 + fVar13 * fVar36 + fVar14 * fVar28);
      uStack_158 = CONCAT44(fVar22 * fVar29 + fVar26 * fVar36 + fVar21 * fVar28,
                            fVar19 * fVar29 + fVar25 * fVar36 + fVar18 * fVar28);
      local_170 = CONCAT44(fVar17 * fVar23 + fVar24 * fVar30 + fVar16 * fVar27,
                           fVar15 * fVar23 + fVar13 * fVar30 + fVar14 * fVar27);
      local_150 = CONCAT44(fVar17 * fVar35 + fVar24 * fVar32 + fVar16 * fVar34 +
                           (float)((ulong)param_7[6] >> 0x20),
                           fVar15 * fVar35 + fVar13 * fVar32 + fVar14 * fVar34 + (float)param_7[6]);
      uStack_148 = CONCAT44(fVar22 * fVar35 + fVar26 * fVar32 + fVar21 * fVar34 +
                            (float)((ulong)param_7[7] >> 0x20),
                            fVar19 * fVar35 + fVar25 * fVar32 + fVar18 * fVar34 + (float)param_7[7])
      ;
      fVar14 = (float)local_120[2];
      fVar15 = (float)((ulong)local_120[2] >> 0x20);
      fVar16 = (float)local_120[3];
      fVar17 = (float)((ulong)local_120[3] >> 0x20);
      fVar18 = (float)local_120[4];
      fVar19 = (float)((ulong)local_120[4] >> 0x20);
      fVar21 = (float)local_120[5];
      fVar22 = (float)((ulong)local_120[5] >> 0x20);
      fVar13 = (float)*local_120;
      fVar24 = (float)((ulong)*local_120 >> 0x20);
      fVar25 = (float)local_120[1];
      fVar26 = (float)((ulong)local_120[1] >> 0x20);
      uStack_198 = CONCAT44(fVar22 * fVar29 + fVar26 * fVar36 + fVar17 * fVar28,
                            fVar21 * fVar29 + fVar25 * fVar36 + fVar16 * fVar28);
      uStack_1b0 = CONCAT44(fVar19 * fVar23 + fVar24 * fVar30 + fVar15 * fVar27,
                            fVar18 * fVar23 + fVar13 * fVar30 + fVar14 * fVar27);
      uStack_1a8 = CONCAT44(fVar22 * fVar23 + fVar26 * fVar30 + fVar17 * fVar27,
                            fVar21 * fVar23 + fVar25 * fVar30 + fVar16 * fVar27);
      local_1c0 = CONCAT44(fVar19 * fVar38 + fVar24 * fVar37 + fVar15 * fVar31,
                           fVar18 * fVar38 + fVar13 * fVar37 + fVar14 * fVar31);
      uStack_1b8 = CONCAT44(fVar22 * fVar38 + fVar26 * fVar37 + fVar17 * fVar31,
                            fVar21 * fVar38 + fVar25 * fVar37 + fVar16 * fVar31);
      local_1a0 = CONCAT44(fVar19 * fVar29 + fVar24 * fVar36 + fVar15 * fVar28,
                           fVar18 * fVar29 + fVar13 * fVar36 + fVar14 * fVar28);
      lVar9 = (long)iStack_124;
      local_190 = CONCAT44(fVar19 * fVar35 + fVar24 * fVar32 + fVar15 * fVar34 +
                           (float)((ulong)local_120[6] >> 0x20),
                           fVar18 * fVar35 + fVar13 * fVar32 + fVar14 * fVar34 + (float)local_120[6]
                          );
      uStack_188 = CONCAT44(fVar22 * fVar35 + fVar26 * fVar32 + fVar17 * fVar34 +
                            (float)((ulong)local_120[7] >> 0x20),
                            fVar21 * fVar35 + fVar25 * fVar32 + fVar16 * fVar34 +
                            (float)local_120[7]);
      lVar10 = puVar2[6];
      iStack_124 = iStack_124 + (uint)*(byte *)(lVar12 + 0x1c);
      uVar5 = ((uVar11 & 0xffff) + 1 << (ulong)(-iStack_124 & 0x1f)) - 1 |
              *(uint *)(PTR_DAT_047d1a60 + lVar9 * 4) & local_128;
      lVar9 = 0;
      if (lVar10 != 0) {
        lVar9 = lVar10 + (long)(puVar2 + 6);
      }
      local_120 = &local_1c0;
      local_128 = uVar5;
      memcpy(auStack_210,param_2,0x50);
      plVar6 = (long *)*param_2;
      local_1d8 = lVar9;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x40))
                  (plVar6,*(undefined2 *)((long)puVar2 + 0x2c),5,*param_3,param_3[1],lVar12,uVar5,
                   lVar9,local_200);
      }
      lVar9 = *param_1;
      if (local_208 == (long *)0x0) {
LAB_02e9dc98:
        (**(code **)(lVar9 + (ulong)*(byte *)(local_1d8 + 0x18) * 0xf8 +
                     (ulong)*(byte *)(param_4 + 0x18) * 8 + 0xa0))
                  (param_1,auStack_210,&local_140,param_4,param_5,param_6,&local_180,param_8 & 1,
                   param_9);
      }
      else {
        local_a0[0] = local_200[0];
        *(undefined4 *)((undefined8 *)((ulong)local_a0 | 4) + 1) = local_1f4;
        *(undefined8 *)((ulong)local_a0 | 4) = local_1fc;
        local_90 = local_140;
        uStack_88 = uStack_138;
        local_80 = local_130;
        local_78 = local_128;
        local_70 = local_1d8;
        local_d8[0] = *param_5;
        uVar8 = *(undefined8 *)(param_5 + 2);
        *(undefined4 *)((undefined8 *)((ulong)local_d8 | 4) + 1) = *(undefined4 *)(param_5 + 6);
        *(undefined8 *)((ulong)local_d8 | 4) = uVar8;
        local_c8 = *param_6;
        uStack_c0 = param_6[1];
        local_b8 = param_6[2];
        local_b0 = *(undefined4 *)(param_6 + 3);
        local_a8 = param_4;
        uVar7 = (**(code **)(*local_208 + 0x40))(local_208,5,(param_8 ^ 1) & 1,local_a0,local_d8);
        if ((uVar7 & 1) != 0) goto LAB_02e9dc98;
      }
      uVar5 = uVar11 + 1;
      do {
        uVar11 = uVar5;
        if (*(int *)(lVar12 + 0x50) <= (int)uVar11) {
          return;
        }
        lVar9 = *plVar1;
        uVar5 = uVar11 + 1;
      } while ((*(byte *)((long)plVar1 + (ulong)(uVar11 & 0xffff) * 0x40 + lVar9 + 0x1e) & 1) != 0);
    } while (uVar11 + 1 != 0);
  }
  return;
}


