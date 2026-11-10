/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed6e00; name: FUN_02ed6e00
 */


void FUN_02ed6e00(long *param_1,ulong param_2,undefined8 *param_3)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  ulong *puVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
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
  undefined4 local_240 [2];
  undefined4 *local_238;
  undefined8 local_230;
  undefined8 local_228;
  long lStack_220;
  undefined4 local_218;
  undefined8 local_210;
  long local_200;
  long lStack_1f8;
  long local_1f0;
  undefined8 local_1e8;
  float *local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  long local_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  float local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  float fStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined1 local_140 [16];
  undefined8 uStack_130;
  undefined4 uStack_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined2 local_e0;
  undefined4 local_dc;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  ulong uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [32];
  long local_80;
  
  uVar3 = (**(code **)(**(long **)(*param_1 + 0x50) + 0x68))
                    (*(long **)(*param_1 + 0x50),param_2,&local_160);
  local_190 = local_160;
  uStack_18c = uStack_15c;
  local_188 = fStack_158;
  local_184 = uStack_150;
  local_17c = uStack_148;
  local_178 = local_140._0_8_;
  local_170 = local_140._8_4_;
  local_16c = uStack_130;
  local_164 = uStack_128;
  uVar15 = (ulong)uVar3;
  uVar4 = (**(code **)(**(long **)(*param_1 + 0x50) + 0x78))
                    (*(long **)(*param_1 + 0x50),param_2 & 0xffffffff);
  iVar5 = (**(code **)(**(long **)(*param_1 + 0x50) + 0x20))();
  iVar14 = (int)param_2;
  uVar7 = 1;
  if (iVar5 <= iVar14 && (uVar4 & 7) != 7) {
    uVar7 = 2;
  }
  local_1a0 = *(undefined8 *)param_1[6];
  uStack_198 = ((undefined8 *)param_1[6])[1];
  lVar8 = param_1[5];
  if ((*(char *)(lVar8 + 0x30) != '\0') && (0 < (int)uVar3)) {
    uVar22 = *(undefined8 *)(lVar8 + 0x48);
    uVar10 = *(undefined8 *)(lVar8 + 0x40);
    fVar19 = *(float *)(lVar8 + 0x50);
    fVar20 = *(float *)(lVar8 + 0x54);
    fVar21 = *(float *)(lVar8 + 0x58);
    pfVar12 = &local_188;
    do {
      uVar15 = uVar15 - 1;
      *(ulong *)(pfVar12 + -2) =
           CONCAT44(fVar20 + (float)((ulong)uVar10 >> 0x20) *
                             (float)((ulong)*(undefined8 *)(pfVar12 + -2) >> 0x20),
                    fVar19 + (float)uVar10 * (float)*(undefined8 *)(pfVar12 + -2));
      *pfVar12 = fVar21 + (float)uVar22 * *pfVar12;
      pfVar12 = pfVar12 + 3;
    } while (uVar15 != 0);
  }
  NEON_fmov(0x3f800000,4);
  uVar3 = 0;
  puVar17 = (ulong *)((ulong)&local_1a0 | 4);
  uVar13 = 3;
  if ((uVar4 & 7) == 7) {
    uVar13 = 4;
  }
  do {
    plVar9 = (long *)param_1[5];
    local_200 = *plVar9;
    lStack_1f8 = plVar9[1];
    local_1f0 = plVar9[2];
    local_1e0 = (float *)plVar9[4];
    uStack_1d8 = 0;
    local_1d0 = (undefined1)plVar9[6];
    lStack_1b8 = plVar9[9];
    local_1c0 = plVar9[8];
    local_1cc = *(undefined4 *)((long)plVar9 + 0x34);
    uStack_1a8 = SUB168(*(undefined1 (*) [16])(plVar9 + 10),8);
    uStack_1b0 = SUB168(*(undefined1 (*) [16])(plVar9 + 10),0);
    lVar8 = *param_1;
    iVar5 = *(int *)((long)plVar9 + 0x1c) + (uint)*(byte *)(lVar8 + 0x1c);
    local_1e8 = CONCAT44(iVar5,((uVar3 | iVar14 << 1) + 1 << (ulong)(-iVar5 & 0x1f)) - 1 |
                               *(uint *)(PTR_DAT_047d1a60 + (long)*(int *)((long)plVar9 + 0x1c) * 4)
                               & *(uint *)(plVar9 + 3));
    local_1c8 = *(undefined4 *)(lVar8 + 0x20);
    plVar9 = (long *)param_1[2];
    if (*plVar9 == 0) {
LAB_02ed7154:
      local_228 = 0;
      lStack_220 = 0;
      local_240[0] = 3;
      local_238 = &local_190;
      local_230 = CONCAT44(local_1c8,uVar13);
      plVar16 = (long *)param_1[0x12];
      puVar1 = (uint *)param_1[3];
      plVar2 = (long *)param_1[4];
      if ((*(byte *)(plVar16 + 1) >> 1 & 1) == 0) {
        local_80 = plVar16[2];
        uVar15 = (**(code **)(*(long *)param_1[1] + (ulong)*puVar1 * 0x38 + 0x3cd0))
                           (puVar1,local_240,param_1 + 8,*(byte *)(plVar16 + 1),local_a0);
        if ((uVar15 & 1) != 0) {
          local_a8 = 5;
          uStack_a4 = 0;
          local_100 = CONCAT44(local_100._4_4_,(int)local_80);
          fVar24 = local_a0._0_4_;
          fVar25 = local_a0._4_4_;
          fVar19 = (float)*(undefined8 *)(local_1e0 + 4);
          fVar20 = (float)((ulong)*(undefined8 *)(local_1e0 + 4) >> 0x20);
          fVar21 = (float)*(undefined8 *)(local_1e0 + 6);
          fVar23 = (float)((ulong)*(undefined8 *)(local_1e0 + 6) >> 0x20);
          fVar27 = local_a0._20_4_;
          fVar26 = local_a0._8_4_;
          fVar29 = (float)*(undefined8 *)(local_1e0 + 8);
          fVar30 = (float)((ulong)*(undefined8 *)(local_1e0 + 8) >> 0x20);
          fVar31 = (float)*(undefined8 *)(local_1e0 + 10);
          fVar32 = (float)((ulong)*(undefined8 *)(local_1e0 + 10) >> 0x20);
          fVar28 = local_a0._24_4_;
          _fStack_118 = CONCAT44((float)((ulong)*(undefined8 *)(local_1e0 + 0xe) >> 0x20) +
                                 fVar32 * fVar26 + local_1e0[3] * fVar24 + fVar23 * fVar25,
                                 (float)*(undefined8 *)(local_1e0 + 0xe) +
                                 fVar31 * fVar26 + local_1e0[2] * fVar24 + fVar21 * fVar25);
          _local_120 = CONCAT44((float)((ulong)*(undefined8 *)(local_1e0 + 0xc) >> 0x20) +
                                fVar30 * fVar26 + local_1e0[1] * fVar24 + fVar20 * fVar25,
                                (float)*(undefined8 *)(local_1e0 + 0xc) +
                                fVar29 * fVar26 + *local_1e0 * fVar24 + fVar19 * fVar25);
          fVar24 = local_a0._16_4_;
          auVar18._0_8_ =
               CONCAT44(fVar30 * fVar28 + local_1e0[1] * fVar24 + fVar20 * fVar27,
                        fVar29 * fVar28 + *local_1e0 * fVar24 + fVar19 * fVar27);
          auVar18._8_4_ = fVar31 * fVar28 + local_1e0[2] * fVar24 + fVar21 * fVar27;
          auVar18._12_4_ = fVar32 * fVar28 + local_1e0[3] * fVar24 + fVar23 * fVar27;
          uStack_108 = auVar18._8_8_;
          lVar8 = *plVar2;
          local_e8 = (undefined4)plVar2[3];
          local_e0 = (undefined2)plVar9[2];
          local_dc = (undefined4)*(ulong *)((long)plVar9 + 0x14);
          uStack_d8 = *(ulong *)((long)plVar9 + 0x14) >> 0x20;
          local_e4 = 0xf;
          if (lVar8 == 0) {
            uVar6 = 0xffffff;
            local_f8 = 0xffffffffffffffff;
          }
          else {
            local_f8 = *(undefined8 *)(lVar8 + 0xb0);
            uVar6 = *(undefined4 *)(lVar8 + 0x50);
          }
          local_d0 = 0xffffffffffffffff;
          local_f0 = CONCAT44((int)((ulong)local_f0 >> 0x20),uVar6);
          if (local_200 == 0) {
            local_c8 = 0xffffff;
          }
          else {
            local_d0 = *(undefined8 *)(local_200 + 0xb0);
            local_c8 = *(undefined4 *)(local_200 + 0x50);
          }
          local_c0 = (undefined4)local_1e8;
          local_b8 = (undefined2)local_1a0;
          local_b4 = (undefined4)*puVar17;
          uStack_b0 = *puVar17 >> 0x20;
          local_bc = (undefined1)plVar9[4];
          local_110 = auVar18._0_8_;
          (**(code **)(*plVar16 + 0x28))(plVar16,&local_120);
        }
      }
      else {
        (**(code **)(*plVar16 + 0x30))
                  (plVar16,*(long *)param_1[1],plVar9,puVar1,plVar9 + 2,plVar2,local_240,&local_1a0,
                   &local_200,param_1 + 8);
      }
      local_17c = local_170;
      local_184 = local_178;
      local_170 = local_164;
      local_178 = local_16c;
    }
    else {
      uVar6 = (**(code **)(**(long **)(lVar8 + 0x50) + 0x70))(*(long **)(lVar8 + 0x50),iVar14);
      (**(code **)(**(long **)param_1[2] + 0x40))
                (*(long **)param_1[2],uVar6,5,*(undefined8 *)param_1[5],
                 ((undefined8 *)param_1[5])[1],*param_1,local_1e8 & 0xffffffff,0,&local_1a0);
      plVar9 = (long *)param_1[2];
      if (plVar9[1] == 0) goto LAB_02ed7154;
      _local_120 = CONCAT62(stack0xfffffffffffffee2,(short)plVar9[2]);
      uVar10 = *(undefined8 *)((long)plVar9 + 0x14);
      *(undefined4 *)((undefined8 *)((ulong)&local_120 | 4) + 1) =
           *(undefined4 *)((long)plVar9 + 0x1c);
      *(undefined8 *)((ulong)&local_120 | 4) = uVar10;
      puVar11 = (undefined8 *)param_1[4];
      local_110 = *puVar11;
      uStack_108 = puVar11[1];
      local_100 = puVar11[2];
      local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(puVar11 + 3));
      local_f0 = plVar9[7];
      local_240[0] = CONCAT22(local_240[0]._2_2_,(undefined2)local_1a0);
      uVar15 = *puVar17;
      *(int *)((ulong *)((ulong)local_240 | 4) + 1) = (int)puVar17[1];
      *(ulong *)((ulong)local_240 | 4) = uVar15;
      local_230 = *(undefined8 *)param_1[5];
      local_228 = ((undefined8 *)param_1[5])[1];
      lStack_220 = *param_1;
      local_218 = (undefined4)local_1e8;
      local_210 = 0;
      uVar15 = (**(code **)(*(long *)plVar9[1] + 0x40))
                         ((long *)plVar9[1],5,(char)param_1[0x11] == '\0',&local_120,local_240);
      if ((uVar15 & 1) != 0) {
        plVar9 = (long *)param_1[2];
        goto LAB_02ed7154;
      }
    }
    uVar3 = uVar3 + 1;
    if (uVar7 <= uVar3) {
      uVar10 = NEON_fmax(CONCAT44((float)((ulong)*(undefined8 *)(param_1[0x12] + 0x10) >> 0x20) *
                                  (float)((ulong)param_1[0x10] >> 0x20),
                                  (float)*(undefined8 *)(param_1[0x12] + 0x10) *
                                  (float)param_1[0x10]),0,4);
      fVar19 = (float)((ulong)uVar10 >> 0x20);
      *param_3 = CONCAT44(fVar19 * fVar19,(float)uVar10 * (float)uVar10);
      return;
    }
  } while( true );
}


