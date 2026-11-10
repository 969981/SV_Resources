/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008735f4; name: FUN_008735f4
 */


void FUN_008735f4(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  long lVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  float *pfVar26;
  uint *puVar27;
  float extraout_s0;
  float fVar28;
  float fVar29;
  float fVar30;
  float extraout_var;
  float fVar32;
  undefined8 uVar31;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar39;
  float fVar40;
  float fVar42;
  undefined1 auVar37 [16];
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8 [2];
  uint local_e0 [2];
  byte *local_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 uStack_b4;
  uint local_b0;
  byte *local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  uint local_80;
  byte *local_78;
  
  if ((int)param_1[1] != 0) {
    auVar37 = *(undefined1 (*) [16])(param_1 + 2);
    uStack_88 = param_1[5];
    fVar29 = (float)uStack_88;
    uVar35 = (undefined4)(uStack_88 >> 0x20);
    local_90 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 4);
    fVar30 = (float)local_90;
    fVar34 = (float)((ulong)local_90 >> 0x20);
    lVar16 = param_2[1];
    uStack_98 = auVar37._8_8_;
    local_a0 = auVar37._0_8_;
    local_80 = 0;
    local_78 = (byte *)(*param_1 + (long)param_1);
    pauVar25 = (undefined1 (*) [16])(param_3 + 2);
    auVar46 = *pauVar25;
    auVar43 = NEON_fmax(auVar37,auVar46,4);
    auVar44._12_4_ = uVar35;
    auVar44._0_12_ = *(undefined1 (*) [12])(param_1 + 4);
    auVar44 = NEON_fmin(auVar44,auVar43,4);
    pfVar26 = (float *)(param_3 + 4);
    fVar36 = auVar46._0_4_ - auVar44._0_4_;
    fVar39 = auVar46._4_4_ - auVar44._4_4_;
    fVar40 = auVar46._8_4_ - auVar44._8_4_;
    fVar42 = auVar46._12_4_ - auVar44._12_4_;
    auVar46._0_4_ = fVar36 * fVar36;
    auVar46._4_4_ = fVar39 * fVar39;
    auVar46._8_4_ = fVar40 * fVar40;
    auVar46._12_4_ = fVar42 * fVar42;
    auVar44 = NEON_ext(auVar46,auVar46,8,1);
    if (auVar46._0_4_ + auVar46._4_4_ + auVar44._0_4_ <= (float)*(undefined8 *)pfVar26) {
      uVar22 = 0;
      fVar36 = *(float *)(PTR_DAT_047d19b0 + 0x1e0);
      fVar39 = *(float *)(PTR_DAT_047d19b0 + 0x1e4);
      fVar41 = auVar37._8_4_;
      fVar40 = auVar37._0_4_;
      fVar42 = auVar37._4_4_;
      do {
        if ((char)local_78[3] < '\0') {
          uVar21 = (long)(int)uVar22 + 1;
          local_e0[0] = (uint)uVar21;
          local_b0 = ((uint)*(ushort *)(local_78 + 4) << 1 | (local_78[3] & 0x7f) << 0x11) +
                     (int)uVar22;
          fVar28 = (fVar30 - auVar37._0_4_) * fVar36;
          fVar32 = (fVar34 - auVar37._4_4_) * fVar39;
          fVar33 = (fVar29 - auVar37._8_4_) * fVar36;
          local_d8 = (byte *)((long)param_1 + uVar21 * 6 + *param_1);
          local_a8 = (byte *)((long)param_1 + (long)(int)local_b0 * 6 + *param_1);
          bVar7 = *local_d8 >> 4;
          bVar1 = *local_d8 & 0xf;
          bVar8 = local_d8[1] >> 4;
          bVar2 = local_d8[1] & 0xf;
          bVar9 = local_d8[2] >> 4;
          bVar3 = local_d8[2] & 0xf;
          bVar10 = *local_a8 >> 4;
          bVar4 = *local_a8 & 0xf;
          bVar11 = local_a8[2] >> 4;
          uStack_f4 = 0;
          bVar5 = local_a8[2] & 0xf;
          local_e8[1] = 0.0;
          local_100 = (float)(byte)(bVar7 * bVar7) * fVar28 + fVar40;
          fStack_fc = (float)(byte)(bVar8 * bVar8) * fVar32 + fVar42;
          fStack_f8 = (float)(byte)(bVar9 * bVar9) * fVar33 + fVar41;
          bVar8 = local_a8[1] >> 4;
          bVar7 = local_a8[1] & 0xf;
          local_f0 = fVar30 - (float)(byte)(bVar1 * bVar1) * fVar28;
          fStack_ec = fVar34 - (float)(byte)(bVar2 * bVar2) * fVar32;
          local_e8[0] = fVar29 - (float)(byte)(bVar3 * bVar3) * fVar33;
          local_d0 = (float)(byte)(bVar10 * bVar10) * fVar28 + fVar40;
          uStack_c4 = 0;
          fStack_cc = (float)(byte)(bVar8 * bVar8) * fVar32 + fVar42;
          uStack_b4 = 0;
          fStack_c8 = (float)(byte)(bVar11 * bVar11) * fVar33 + fVar41;
          fVar34 = fVar34 - (float)(byte)(bVar7 * bVar7) * fVar32;
          fVar30 = fVar30 - (float)(byte)(bVar4 * bVar4) * fVar28;
          fVar29 = fVar29 - (float)(byte)(bVar5 * bVar5) * fVar33;
          local_c0 = fVar30;
          fStack_bc = fVar34;
          local_b8 = fVar29;
          uVar31 = CONCAT44(fStack_fc,local_100);
          auVar12._8_4_ = fStack_f8;
          auVar12._0_8_ = uVar31;
          auVar12._12_4_ = 0;
          uVar35 = 0;
          auVar43._4_4_ = fStack_ec;
          auVar43._0_4_ = local_f0;
          auVar43._8_4_ = local_e8[0];
          auVar44 = *(undefined1 (*) [16])(param_3 + 2);
          auVar37 = NEON_fmax(auVar12,auVar44,4);
          auVar43._12_4_ = 0;
          auVar37 = NEON_fmin(auVar43,auVar37,4);
          fVar40 = auVar44._0_4_ - auVar37._0_4_;
          fVar42 = auVar44._4_4_ - auVar37._4_4_;
          fVar41 = auVar44._8_4_ - auVar37._8_4_;
          fVar28 = auVar44._12_4_ - auVar37._12_4_;
          auVar38._0_4_ = fVar40 * fVar40;
          auVar38._4_4_ = fVar42 * fVar42;
          auVar38._8_4_ = fVar41 * fVar41;
          auVar38._12_4_ = fVar28 * fVar28;
          auVar37 = NEON_ext(auVar38,auVar38,8,1);
          fVar32 = auVar38._0_4_ + auVar38._4_4_ + auVar37._0_4_;
          uVar14 = CONCAT44(fStack_cc,local_d0);
          auVar37._8_4_ = fStack_c8;
          auVar37._0_8_ = uVar14;
          auVar37._12_4_ = 0;
          auVar15._4_4_ = fVar34;
          auVar15._0_4_ = fVar30;
          auVar15._8_4_ = fVar29;
          auVar15._12_4_ = 0;
          auVar46 = NEON_fmax(auVar37,auVar44,4);
          auVar46 = NEON_fmin(auVar15,auVar46,4);
          fVar40 = auVar44._0_4_ - auVar46._0_4_;
          fVar42 = auVar44._4_4_ - auVar46._4_4_;
          fVar41 = auVar44._8_4_ - auVar46._8_4_;
          fVar28 = auVar44._12_4_ - auVar46._12_4_;
          auVar45._0_4_ = fVar40 * fVar40;
          auVar45._4_4_ = fVar42 * fVar42;
          auVar45._8_4_ = fVar41 * fVar41;
          auVar45._12_4_ = fVar28 * fVar28;
          auVar44 = NEON_ext(auVar45,auVar45,8,1);
          fVar40 = auVar45._0_4_ + auVar45._4_4_ + auVar44._0_4_;
          bVar1 = fVar32 <= (float)param_3[4] | (fVar40 <= (float)param_3[4]) << 1;
          if (bVar1 == 1) {
            local_a0 = uVar31;
            local_78 = local_d8;
            auVar37 = auVar12;
            fVar30 = local_f0;
            fVar34 = fStack_ec;
            fVar29 = local_e8[0];
            uStack_98 = (ulong)(uint)fStack_f8;
            local_80 = (uint)uVar21;
            goto LAB_008736ec;
          }
          if (bVar1 == 2) {
            uVar21 = (ulong)local_b0;
            uStack_98 = (ulong)(uint)fStack_c8;
            uVar35 = 0;
            local_a0 = uVar14;
            local_90 = CONCAT44(fVar34,fVar30);
            uStack_88 = (ulong)(uint)fVar29;
            local_80 = local_b0;
            local_78 = local_a8;
          }
          else {
            if (bVar1 != 3) goto LAB_00873a58;
            *(uint *)(param_3 + 5) = (uint)(fVar40 < fVar32);
            iVar18 = (int)param_2[1];
            lVar19 = (long)iVar18;
            uVar22 = (ulong)(fVar40 >= fVar32);
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar18) {
              FUN_02ec1dcc(param_2,PTR_PTR_047d1a50,lVar19 + 1);
              iVar18 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = (int)(lVar19 + 1);
            uVar31 = *(undefined8 *)(local_e8 + uVar22 * 0xc + -6);
            puVar20 = (undefined8 *)(*param_2 + (long)iVar18 * 0x30);
            puVar20[1] = *(undefined8 *)(local_e8 + uVar22 * 0xc + -4);
            *puVar20 = uVar31;
            uVar31 = *(undefined8 *)(local_e8 + uVar22 * 0xc + -2);
            uVar23 = (ulong)(fVar40 < fVar32);
            puVar20[3] = *(undefined8 *)(local_e8 + uVar22 * 0xc);
            puVar20[2] = uVar31;
            *(uint *)(puVar20 + 4) = local_e0[uVar22 * 0xc];
            uVar21 = (ulong)local_e0[uVar23 * 0xc];
            auVar37._8_8_ = *(ulong *)(local_e8 + uVar23 * 0xc + -4);
            auVar37._0_8_ = *(undefined8 *)(local_e8 + uVar23 * 0xc + -6);
            uStack_88 = *(ulong *)(local_e8 + uVar23 * 0xc);
            fVar29 = (float)uStack_88;
            uVar35 = (undefined4)(uStack_88 >> 0x20);
            local_90 = *(undefined8 *)(local_e8 + uVar23 * 0xc + -2);
            fVar30 = (float)local_90;
            fVar34 = (float)((ulong)local_90 >> 0x20);
            local_a0 = auVar37._0_8_;
            uStack_98 = auVar37._8_8_;
            local_80 = local_e0[uVar23 * 0xc];
            local_78 = *(byte **)(local_e0 + uVar23 * 0xc + 2);
          }
        }
        else {
          puVar27 = (uint *)*param_3;
          local_100 = (float)*(undefined8 *)*pauVar25;
          fStack_fc = (float)((ulong)*(undefined8 *)*pauVar25 >> 0x20);
          fStack_f8 = (float)param_3[3];
          uStack_f4 = (undefined4)((ulong)param_3[3] >> 0x20);
          plVar17 = *(long **)(puVar27 + 8);
          if (plVar17 == (long *)0x0) {
            auVar13._12_4_ = uStack_f4;
            auVar13._0_12_ = *(undefined1 (*) [12])*pauVar25;
            auVar44 = NEON_fmax(auVar13,auVar37,4);
            auVar6._4_4_ = fVar34;
            auVar6._0_4_ = fVar30;
            auVar6._8_4_ = fVar29;
            auVar6._12_4_ = uVar35;
            auVar44 = NEON_fmin(auVar44,auVar6,4);
            fStack_f8 = auVar44._8_4_;
            uStack_f4 = auVar44._12_4_;
            local_100 = auVar44._0_4_;
            fStack_fc = auVar44._4_4_;
            fVar29 = local_100 - (float)*(undefined8 *)*pauVar25;
            fVar40 = fStack_fc - (float)((ulong)*(undefined8 *)*pauVar25 >> 0x20);
            fVar34 = fStack_f8 - (float)param_3[3];
            fVar29 = fVar29 * fVar29;
            fVar40 = fVar40 * fVar40;
            fVar34 = fVar34 * fVar34;
            fVar30 = fVar29 + fVar40 + fVar34;
            fVar34 = fVar29 + fVar40 + fVar34;
            if (fVar30 < (float)*(undefined8 *)pfVar26) goto LAB_00873a38;
          }
          else {
            (**(code **)(*plVar17 + 0x10))
                      (plVar17,(ulong)CONCAT12(local_78[3],*(undefined2 *)(local_78 + 4)),&local_a0,
                       pauVar25,&local_100,pfVar26);
            fVar30 = extraout_s0;
            fVar34 = extraout_var;
            if (extraout_s0 < (float)*(undefined8 *)pfVar26) {
LAB_00873a38:
              *pfVar26 = fVar30;
              *(float *)((long)param_3 + 0x24) = fVar34;
              *(ulong *)(puVar27 + 6) = CONCAT44(uStack_f4,fStack_f8);
              *(ulong *)(puVar27 + 4) = CONCAT44(fStack_fc,local_100);
              *puVar27 = (uint)CONCAT12(local_78[3],*(undefined2 *)(local_78 + 4));
            }
          }
LAB_00873a58:
          if ((int)param_2[1] <= (int)lVar16) {
            return;
          }
          iVar18 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar18;
          pauVar24 = (undefined1 (*) [16])(*param_2 + (long)iVar18 * 0x30);
          uVar21 = (ulong)*(uint *)pauVar24[2];
          auVar37 = *pauVar24;
          local_a0 = auVar37._0_8_;
          uVar35 = (undefined4)((ulong)*(undefined8 *)(pauVar24[1] + 8) >> 0x20);
          local_78 = (byte *)((long)param_1 + (long)*(int *)pauVar24[2] * 6 + *param_1);
          fVar30 = (float)*(undefined8 *)pauVar24[1];
          fVar34 = (float)((ulong)*(undefined8 *)pauVar24[1] >> 0x20);
          fVar29 = (float)*(undefined8 *)(pauVar24[1] + 8);
          uStack_98 = auVar37._8_8_;
          local_80 = *(uint *)pauVar24[2];
LAB_008736ec:
          local_90 = CONCAT44(fVar34,fVar30);
          uStack_88 = CONCAT44(uVar35,fVar29);
        }
        fVar42 = auVar37._4_4_;
        uVar22 = uVar21 & 0xffffffff;
        fVar40 = auVar37._0_4_;
        fVar41 = auVar37._8_4_;
      } while( true );
    }
  }
  return;
}


