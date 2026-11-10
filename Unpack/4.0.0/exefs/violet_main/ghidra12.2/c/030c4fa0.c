/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030c4fa0; name: FUN_030c4fa0
 */


void FUN_030c4fa0(long param_1,uint *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  ulong uVar12;
  char cVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  char cVar17;
  int iVar18;
  char cVar19;
  undefined1 uVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  undefined1 local_bc;
  undefined2 local_bb;
  undefined1 local_b9;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(char *)((long)param_2 + 5) == '\x02') {
    uVar14 = *(int *)(param_1 + 0x20) - 1;
    uVar24 = *(undefined4 *)(param_1 + 0x104);
LAB_030c4ff4:
    if (uVar14 == 0xffffffff) goto LAB_030c5010;
    puVar15 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)(int)uVar14 * 0x80 + 0xc);
  }
  else {
    if (*(char *)((long)param_2 + 5) != '\x01') {
      if ((float)*(undefined8 *)(param_1 + 0x18) < 1.1920929e-07) goto LAB_030c50c0;
      if (*(char *)((long)param_2 + 6) == '\0') {
        cVar17 = (char)param_2[1];
        cVar19 = cVar17;
LAB_030c50b0:
        cVar13 = cVar17;
        if (cVar19 == '\x02') {
LAB_030c50c0:
          *param_3 = *(undefined8 *)param_2;
          uVar11 = *(undefined8 *)(param_2 + 4);
          param_3[3] = *(undefined8 *)(param_2 + 6);
          param_3[2] = uVar11;
          uVar11 = *(undefined8 *)(param_2 + 8);
          param_3[5] = *(undefined8 *)(param_2 + 10);
          param_3[4] = uVar11;
          return;
        }
      }
      else {
        cVar17 = (char)param_2[1];
        cVar19 = cVar17;
        if (*(char *)((long)param_2 + 7) == '\0') goto LAB_030c50b0;
        cVar13 = '\x01';
        cVar19 = '\x01';
        if (cVar17 != '\0') {
          cVar19 = '\x02';
        }
        if (cVar17 != '\x01') goto LAB_030c50b0;
      }
      uVar14 = *param_2;
      if (((int)uVar14 < 0) || (*(int *)(param_1 + 0x20) <= (int)uVar14)) {
        iVar22 = -1;
      }
      else {
        piVar1 = (int *)(*(long *)(param_1 + 0x40) + (ulong)uVar14 * 0x80);
        piVar3 = piVar1 + 1;
        if (cVar13 != '\x01') {
          piVar3 = piVar1;
        }
        iVar22 = *piVar3;
      }
      local_90 = (ulong)CONCAT14(cVar13,uVar14);
      FUN_030c3514(param_1,&local_90);
      uVar11 = *(undefined8 *)(param_2 + 4);
      uVar4 = *param_2;
      if ((int)uVar4 < *(int *)(param_1 + 0x20)) {
        fVar25 = (float)uVar11 - (float)param_2[8];
        fVar28 = (float)((ulong)uVar11 >> 0x20) - (float)param_2[9];
        fVar31 = (float)*(undefined8 *)(param_2 + 6) - (float)param_2[10];
        fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20) - (float)param_2[0xb];
        auVar36._4_4_ = fVar28;
        auVar36._0_4_ = fVar25;
        auVar36._8_4_ = fVar31;
        auVar36._12_4_ = fVar34;
        auVar37._4_4_ = fVar28;
        auVar37._0_4_ = fVar25;
        auVar37._8_4_ = fVar31;
        auVar37._12_4_ = fVar34;
        auVar36 = NEON_ext(auVar36,auVar37,4,1);
        uVar20 = 1;
        if (local_90._4_1_ != '\0') {
          uVar20 = 2;
        }
        uVar12 = (long)(int)uVar4 << 7 | 0x20;
        uVar2 = 0;
        if (local_90._4_1_ != '\x01') {
          uVar2 = uVar20;
        }
        uVar14 = 0xffffffff;
        do {
          uVar23 = uVar4;
          if ((int)uVar23 < 0) {
            iVar18 = -1;
          }
          else {
            piVar1 = (int *)(*(long *)(param_1 + 0x40) + (ulong)uVar23 * 0x80);
            piVar3 = piVar1 + 1;
            if ((char)param_2[1] != '\x01') {
              piVar3 = piVar1;
            }
            iVar18 = *piVar3;
          }
          if (iVar18 != iVar22) break;
          local_bb = 0;
          local_b9 = 0;
          local_c0 = uVar23;
          local_bc = uVar2;
          FUN_030c3514(param_1,&local_c0);
          local_f0 = (float)local_80;
          fStack_ec = (float)((ulong)local_80 >> 0x20);
          fStack_e8 = (float)uStack_78;
          fStack_e4 = (float)((ulong)uStack_78 >> 0x20);
          local_f0 = (float)local_b0 - local_f0;
          fStack_ec = (float)((ulong)local_b0 >> 0x20) - fStack_ec;
          fStack_e8 = (float)uStack_a8 - fStack_e8;
          fStack_e4 = (float)((ulong)uStack_a8 >> 0x20) - fStack_e4;
          auVar5._4_4_ = fStack_ec;
          auVar5._0_4_ = local_f0;
          auVar5._8_4_ = fStack_e8;
          auVar5._12_4_ = fStack_e4;
          auVar6._4_4_ = fStack_ec;
          auVar6._0_4_ = local_f0;
          auVar6._8_4_ = fStack_e8;
          auVar6._12_4_ = fStack_e4;
          auVar37 = NEON_ext(auVar5,auVar6,4,1);
          fVar26 = fVar25 * auVar37._0_4_ - auVar36._0_4_ * local_f0;
          fVar29 = fVar28 * auVar37._4_4_ - auVar36._4_4_ * fStack_ec;
          fVar32 = fVar31 * local_f0 - fVar25 * fStack_e8;
          fVar35 = fVar34 * fStack_ec - fVar28 * fStack_e4;
          auVar7._4_4_ = fVar29;
          auVar7._0_4_ = fVar26;
          auVar7._8_4_ = fVar32;
          auVar7._12_4_ = fVar35;
          auVar8._4_4_ = fVar29;
          auVar8._0_4_ = fVar26;
          auVar8._8_4_ = fVar32;
          auVar8._12_4_ = fVar35;
          auVar37 = NEON_ext(auVar7,auVar8,4,1);
          fVar29 = (float)*(undefined8 *)(param_1 + 0x90) * auVar37._0_4_;
          fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) * auVar37._4_4_;
          fVar26 = (float)*(undefined8 *)(param_1 + 0x98) * fVar26;
          fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) * 0.0;
          auVar9._4_4_ = fVar32;
          auVar9._0_4_ = fVar29;
          auVar9._8_4_ = fVar26;
          auVar9._12_4_ = fVar35;
          auVar10._4_4_ = fVar32;
          auVar10._0_4_ = fVar29;
          auVar10._8_4_ = fVar26;
          auVar10._12_4_ = fVar35;
          auVar37 = NEON_ext(auVar9,auVar10,8,1);
          if (((char)param_2[1] == '\0') != 0.0 < fVar29 + fVar32 + auVar37._0_4_) {
            uStack_c8 = *(undefined8 *)(param_2 + 6);
            local_d0 = *(undefined8 *)(param_2 + 4);
            uVar12 = FUN_0308e0b0(*(undefined8 *)(param_1 + 0x28),param_1 + 0x90,
                                  *(undefined4 *)(*(long *)(param_1 + 0x40) + uVar12),&local_d0);
            *param_3 = *(undefined8 *)param_2;
            uVar11 = *(undefined8 *)(param_2 + 4);
            puVar16 = (uint *)&local_d0;
            if ((uVar12 & 1) == 0) {
              puVar16 = param_2 + 4;
            }
            param_3[3] = *(undefined8 *)(param_2 + 6);
            param_3[2] = uVar11;
            uVar30 = (undefined4)*(undefined8 *)(param_2 + 10);
            uVar33 = (undefined4)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
            uVar24 = (undefined4)*(undefined8 *)(param_2 + 8);
            uVar27 = (undefined4)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
            goto LAB_030c5058;
          }
          uVar12 = uVar12 + 0x80;
          uVar4 = uVar23 + 1;
          uVar14 = uVar23;
        } while ((int)(uVar23 + 1) < *(int *)(param_1 + 0x20));
      }
      else {
        uVar14 = 0xffffffff;
      }
      uVar24 = 0xffffffff;
      goto LAB_030c4ff4;
    }
    puVar15 = (undefined4 *)(param_1 + 0x104);
  }
  uVar24 = *puVar15;
LAB_030c5010:
  uStack_88 = *(undefined8 *)(param_2 + 6);
  puVar21 = param_2 + 4;
  local_90 = *(ulong *)puVar21;
  uVar12 = FUN_0308e0b0(*(undefined8 *)(param_1 + 0x28),param_1 + 0x90,uVar24,&local_90);
  *param_3 = *(undefined8 *)param_2;
  uVar11 = *(undefined8 *)puVar21;
  param_3[3] = *(undefined8 *)(param_2 + 6);
  param_3[2] = uVar11;
  uVar30 = (undefined4)*(undefined8 *)(param_2 + 10);
  uVar33 = (undefined4)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
  uVar24 = (undefined4)*(undefined8 *)(param_2 + 8);
  uVar27 = (undefined4)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  puVar16 = (uint *)&local_90;
  if ((uVar12 & 1) == 0) {
    puVar16 = puVar21;
  }
LAB_030c5058:
  param_3[5] = CONCAT44(uVar33,uVar30);
  param_3[4] = CONCAT44(uVar27,uVar24);
  uVar11 = *(undefined8 *)puVar16;
  param_3[3] = *(undefined8 *)(puVar16 + 2);
  param_3[2] = uVar11;
  return;
}


