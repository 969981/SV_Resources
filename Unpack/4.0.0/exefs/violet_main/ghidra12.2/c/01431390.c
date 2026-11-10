/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01431390; name: FUN_01431390
 */


void FUN_01431390(float param_1,long param_2,undefined2 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 extraout_d0;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  undefined8 extraout_var_03;
  float extraout_var_04;
  float extraout_var_05;
  undefined1 auVar10 [16];
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_60;
  undefined8 uStack_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  if (*(char *)(param_2 + 0x69) != '\0') {
    iVar1 = *(int *)(param_2 + 0x25c);
    if (iVar1 == 3) {
      *(undefined4 *)(param_2 + 0x25c) = 0;
      *(undefined4 *)(param_2 + 0x264) = 0;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 0x25c) = 2;
        *(undefined4 *)(param_2 + 0x264) = 0;
      }
      if ((0.0 < *(float *)(param_3 + 0x34)) && (0.0 < *(float *)(param_3 + 0x32))) {
        lVar7 = *(long *)(param_2 + 0x70);
        lVar6 = FUN_00c4c40c(lVar7,param_3[1]);
        fVar8 = (float)*(undefined8 *)(lVar6 + 0x30);
        fVar11 = (float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20);
        fVar12 = (float)*(undefined8 *)(lVar6 + 0x38);
        uVar17 = 0x34000000;
        uVar18 = 0;
        fVar13 = (float)((ulong)*(undefined8 *)(lVar6 + 0x38) >> 0x20);
        fVar27 = *(float *)(lVar7 + 0x3e0) * fVar8 + (float)*(undefined8 *)(lVar7 + 0x3f0) * fVar11
                 + (float)*(undefined8 *)(lVar7 + 0x400) * fVar12 +
                 (float)*(undefined8 *)(lVar7 + 0x410) * fVar13;
        fVar28 = *(float *)(lVar7 + 0x3e4) * fVar8 +
                 (float)((ulong)*(undefined8 *)(lVar7 + 0x3f0) >> 0x20) * fVar11 +
                 (float)((ulong)*(undefined8 *)(lVar7 + 0x400) >> 0x20) * fVar12 +
                 (float)((ulong)*(undefined8 *)(lVar7 + 0x410) >> 0x20) * fVar13;
        fVar29 = *(float *)(lVar7 + 1000) * fVar8 + (float)*(undefined8 *)(lVar7 + 0x3f8) * fVar11 +
                 (float)*(undefined8 *)(lVar7 + 0x408) * fVar12 +
                 (float)*(undefined8 *)(lVar7 + 0x418) * fVar13;
        uVar2 = CONCAT44(fVar28,fVar27);
        uVar22 = (ulong)(uint)fVar29;
        fVar8 = (fVar27 - *(float *)(param_3 + 0x60)) * (fVar27 - *(float *)(param_3 + 0x60));
        fVar11 = (fVar28 - *(float *)(param_3 + 0x62)) * (fVar28 - *(float *)(param_3 + 0x62));
        fVar12 = (fVar29 - *(float *)(param_3 + 100)) * (fVar29 - *(float *)(param_3 + 100));
        fVar13 = (0.0 - *(float *)(param_3 + 0x66)) * (0.0 - *(float *)(param_3 + 0x66));
        fVar14 = *(float *)(param_3 + 0x32) * *(float *)(param_3 + 0x32);
        auVar9._0_4_ = fVar8 + fVar11;
        auVar9._4_4_ = fVar12 + fVar13;
        auVar9._8_4_ = fVar8 + fVar11;
        auVar9._12_4_ = fVar12 + fVar13;
        auVar9 = NEON_ext(auVar9,auVar9,4,1);
        fVar8 = auVar9._0_4_ + auVar9._4_4_;
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        if (1.1920929e-07 < fVar8) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar8) && !NAN(fVar14)) {
            bVar3 = fVar8 < fVar14;
            bVar4 = fVar8 == fVar14;
            bVar5 = false;
          }
        }
        if (bVar4 || bVar3 != bVar5) {
          uVar20 = uVar2;
          uVar23 = uVar22;
          FUN_00c8ecec(*(undefined8 *)(param_2 + 0x70),*param_3);
          fVar11 = (float)uVar23;
          fVar8 = *(float *)(param_3 + 0x3a) / *(float *)(param_3 + 0x34);
          uVar15 = 0x3f800000;
          uVar16 = 0;
          if (1.0 < fVar8) {
            fVar8 = 1.0;
          }
          FUN_014321cc(param_2,*param_3);
          fVar24 = (float)*(undefined8 *)(param_3 + 0x60);
          fVar12 = (float)((ulong)uVar15 >> 0x20);
          fVar13 = (float)((ulong)uVar16 >> 0x20);
          fVar25 = (float)((ulong)*(undefined8 *)(param_3 + 0x60) >> 0x20);
          fVar14 = (float)((ulong)uVar17 >> 0x20);
          fVar19 = (float)((ulong)uVar18 >> 0x20);
          fVar26 = (float)*(undefined8 *)(param_3 + 100);
          fVar21 = (float)((ulong)uVar20 >> 0x20);
          local_60 = 0;
          uStack_58 = 0;
          local_50 = ((float)uVar20 +
                     extraout_s0 * fVar27 + (float)uVar15 * fVar28 + (float)uVar17 * fVar29) -
                     ((float)uVar20 +
                     extraout_s0 * fVar24 + (float)uVar15 * fVar25 + (float)uVar17 * fVar26);
          fStack_4c = (fVar21 + extraout_var * fVar27 + fVar12 * fVar28 + fVar14 * fVar29) -
                      (fVar21 + extraout_var * fVar24 + fVar12 * fVar25 + fVar14 * fVar26);
          fStack_48 = (fVar11 + extraout_var_01 * fVar27 + (float)uVar16 * fVar28 +
                                (float)uVar18 * fVar29) -
                      (fVar11 + extraout_var_01 * fVar24 + (float)uVar16 * fVar25 +
                                (float)uVar18 * fVar26);
          fStack_44 = (extraout_var_04 * fVar27 + fVar13 * fVar28 + fVar19 * fVar29 + 0.0) -
                      (extraout_var_04 * fVar24 + fVar13 * fVar25 + fVar19 * fVar26 + 0.0);
          FUN_0143251c(fVar8,&local_50,&local_60);
          auVar10._4_4_ = (float)((ulong)extraout_d0 >> 0x20) - extraout_var_00;
          auVar10._0_4_ = (float)extraout_d0 - extraout_s0_00;
          auVar10._12_4_ = (float)((ulong)extraout_var_03 >> 0x20) - extraout_var_05;
          auVar10._8_4_ = (float)extraout_var_03 - extraout_var_02;
          local_50 = extraout_s0_00;
          fStack_4c = extraout_var_00;
          fStack_48 = extraout_var_02;
          fStack_44 = extraout_var_05;
          FUN_00cc3a84(auVar10,*(undefined8 *)(param_2 + 0x70),*param_3);
          if (*(float *)(param_3 + 0x3a) <= *(float *)(param_3 + 0x34)) {
            *(float *)(param_3 + 0x3a) = *(float *)(param_3 + 0x3a) + param_1;
          }
          else {
            *(undefined4 *)(param_3 + 0x3a) = 0;
            *(ulong *)(param_3 + 100) = uVar22;
            *(undefined8 *)(param_3 + 0x60) = uVar2;
          }
        }
        else {
          *(undefined4 *)(param_3 + 0x3a) = 0;
          *(ulong *)(param_3 + 100) = uVar22;
          *(undefined8 *)(param_3 + 0x60) = uVar2;
        }
      }
    }
  }
  return;
}


