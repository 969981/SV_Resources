/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ea1b0; name: FUN_034ea1b0
 */


void FUN_034ea1b0(float param_1,float param_2,int *param_3,uint param_4,void *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_b0;
  float local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  
  fVar19 = -4.712389;
  if (param_2 <= 1.5707964) {
    fVar19 = 1.5707964;
  }
  fVar16 = -4.712389;
  if (param_1 <= 1.5707964) {
    fVar16 = 1.5707964;
  }
  fVar16 = fVar16 + param_1;
  fVar19 = fVar19 + param_2;
  fVar22 = param_1 * 1.2732395 - param_1 * 0.4052847 * ABS(param_1);
  local_88 = param_2 * 1.2732395 - param_2 * 0.4052847 * ABS(param_2);
  fVar16 = fVar16 * 1.2732395 - fVar16 * 0.4052847 * ABS(fVar16);
  fVar19 = fVar19 * 1.2732395 - fVar19 * 0.4052847 * ABS(fVar19);
  local_88 = local_88 + (ABS(local_88) * local_88 - local_88) * 0.225;
  fVar19 = fVar19 + (ABS(fVar19) * fVar19 - fVar19) * 0.225;
  fVar22 = fVar19 * (fVar22 + (ABS(fVar22) * fVar22 - fVar22) * 0.225);
  fVar19 = fVar19 * (fVar16 + (ABS(fVar16) * fVar16 - fVar16) * 0.225);
  local_a0 = &local_b0 + (ulong)(param_4 << 1) * -3;
  local_98 = (ulong)(param_4 << 1);
  local_90 = fVar19;
  fStack_8c = fVar22;
  FUN_034e92f8(param_3,&local_90,&local_a0);
  if (param_4 != 0) {
    memset(param_5,0,(ulong)param_4 << 2);
  }
  puVar4 = local_a0;
  uVar5 = local_98._4_4_;
  if (local_98._4_4_ != 0) {
    uVar11 = 0;
    do {
      uVar11 = uVar11 & 0xffff;
      puVar9 = (uint *)(puVar4 + uVar11 * 3);
      uVar3 = *param_3 - 1;
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      uVar10 = uVar2;
      if (((uVar1 == uVar3) || (uVar10 = uVar1, uVar2 == uVar3)) ||
         (*(uint *)(puVar4 + uVar11 * 3 + 1) == uVar3)) {
        if (*(uint *)(puVar4 + uVar11 * 3 + 1) != uVar3) {
          uVar2 = *(uint *)(puVar4 + uVar11 * 3 + 1);
        }
        uVar12 = (ulong)uVar2;
        pfVar14 = (float *)(*(long *)(param_3 + 0x12) + (ulong)uVar10 * 0xc);
        pfVar13 = (float *)(*(long *)(param_3 + 0x12) + uVar12 * 0xc);
        fVar20 = *pfVar13;
        fVar21 = pfVar13[1];
        fVar16 = *pfVar14;
        fVar15 = pfVar14[1];
        fVar23 = fVar21 * fVar16 - fVar20 * fVar15;
        bVar6 = false;
        bVar7 = true;
        bVar8 = false;
        if (fVar23 < 1e-38) {
          bVar6 = false;
          bVar7 = false;
          bVar8 = true;
          if (!NAN(fVar23)) {
            bVar6 = fVar23 < -1e-38;
            bVar7 = fVar23 == -1e-38;
            bVar8 = false;
          }
        }
        fVar17 = 0.0;
        fVar24 = 0.0;
        if (bVar7 || bVar6 != bVar8) {
          fVar24 = (1.0 / fVar23) * fVar22;
          fVar23 = (1.0 / fVar23) * fVar19;
          fVar17 = fVar23 * fVar21 - fVar24 * fVar20;
          fVar24 = fVar24 * fVar16 - fVar23 * fVar15;
          bVar6 = true;
          bVar7 = false;
          if (-1e-05 <= fVar17) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(fVar24)) {
              bVar6 = fVar24 < -1e-05;
              bVar7 = false;
            }
          }
          if (bVar6 != bVar7) goto LAB_034ea454;
        }
        auVar18._0_4_ = fVar24 * fVar24 + fVar17 * fVar17;
        if (1.1920929e-07 <= auVar18._0_4_) {
          auVar18._4_4_ = auVar18._0_4_;
          auVar18._8_4_ = auVar18._0_4_;
          auVar18._12_4_ = auVar18._0_4_;
          auVar18 = NEON_frecpe(auVar18,4);
          *(float *)((long)param_5 + (ulong)uVar10 * 4) =
               *(float *)((long)param_5 + (ulong)uVar10 * 4) + fVar17 * fVar17 * auVar18._0_4_;
          *(float *)((long)param_5 + uVar12 * 4) =
               *(float *)((long)param_5 + uVar12 * 4) + fVar24 * fVar24 * auVar18._0_4_;
        }
      }
      else {
        local_b0 = CONCAT44(fStack_8c,local_90);
        local_a8 = local_88;
        FUN_034ea488(param_3,puVar9,&local_b0,param_5);
      }
LAB_034ea454:
      uVar2 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar2;
    } while ((uVar2 & 0xffff) < uVar5);
  }
  return;
}


