/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0084ed5c; name: FUN_0084ed5c
 */


void FUN_0084ed5c(float *param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  float *pfVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar46;
  float fVar47;
  undefined1 auVar45 [16];
  float fVar48;
  undefined1 auStack_2e0 [16];
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [64];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  
  fVar24 = param_1[0xe];
  uVar23 = (long)(int)fVar24 + 1;
  ppuVar2 = (undefined1 **)(param_1 + 0xc);
  fVar26 = fVar24;
  if ((int)ABS(param_1[0xf]) <= (int)fVar24) {
    FUN_02e9b11c(ppuVar2,PTR_PTR_047d1a50,uVar23);
    fVar26 = param_1[0xe];
  }
  puVar17 = (undefined8 *)(*(long *)(param_1 + 0xc) + (long)(int)fVar26 * 0x10);
  uVar4 = *(undefined8 *)(param_2 + 2);
  *puVar17 = *(undefined8 *)param_2;
  puVar17[1] = uVar4;
  fVar26 = (float)uVar23;
  param_1[0xe] = fVar26;
  puVar13 = PTR_DAT_047d19b0;
  if ((int)fVar24 - 2U < 2) {
    fVar29 = (float)*(undefined8 *)(param_1 + 2);
    fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
    fVar25 = (float)*(undefined8 *)param_1;
    fVar27 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    fVar24 = param_1[4];
    fVar28 = param_1[5];
    fVar32 = param_1[6];
    fVar30 = param_2[3];
    fVar44 = *param_2 - fVar25;
    fVar46 = param_2[1] - fVar27;
    fVar47 = param_2[2] - fVar29;
    fVar33 = fVar44 * fVar24;
    fVar39 = fVar46 * fVar28;
    fVar41 = fVar47 * fVar32;
    fVar34 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
    fVar40 = (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x60) >> 0x20);
    fVar48 = (fVar33 + fVar39 + fVar41) *
             (fVar34 / (fVar32 * fVar32 + fVar24 * fVar24 + fVar28 * fVar28));
    fVar33 = (fVar33 + fVar39 + fVar41) *
             (fVar40 / (fVar32 * fVar32 + fVar24 * fVar24 + fVar28 * fVar28));
    pfVar5 = &local_70;
    if (fVar26 != 4.2039e-45) {
      pfVar5 = &local_80;
    }
    fVar24 = fVar24 * fVar48;
    fVar28 = fVar28 * fVar33;
    fVar32 = fVar32 * fVar48;
    fVar33 = param_1[7] * fVar33;
    pfVar3 = &local_80;
    if (fVar26 != 4.2039e-45) {
      pfVar3 = &local_70;
    }
    pfVar5[2] = fVar32;
    pfVar5[3] = fVar33;
    *pfVar5 = fVar24;
    pfVar5[1] = fVar28;
    pfVar3[2] = fVar47 - fVar32;
    pfVar3[3] = (fVar30 - fVar31) - fVar33;
    *pfVar3 = fVar44 - fVar24;
    pfVar3[1] = fVar46 - fVar28;
    fVar24 = local_70 * local_70 + fStack_6c * fStack_6c + fStack_68 * fStack_68;
    if (fVar31 < fVar24) {
      local_d0 = local_c0;
      local_c8 = 0x8000000400000000;
      if (&local_d0 != ppuVar2) {
        memcpy(local_d0,*ppuVar2,(uVar23 & 0xffffffff) << 4);
        local_c8 = CONCAT44(local_c8._4_4_,fVar26);
      }
      param_1[0xe] = 0.0;
      FUN_0084ed5c(param_1,param_2);
      if (0 < (int)(uint)local_c8) {
        uVar20 = *(ulong *)(puVar13 + 0x240);
        uVar23 = 0;
        uVar22 = 0xffffffff;
        uVar19 = uVar20;
        do {
          pfVar5 = (float *)(local_d0 + uVar23 * 0x10);
          fVar24 = *pfVar5 - (float)*(undefined8 *)param_1;
          fVar26 = pfVar5[1] - (float)((ulong)*(undefined8 *)param_1 >> 0x20);
          fVar28 = pfVar5[2] - (float)*(undefined8 *)(param_1 + 2);
          fVar32 = pfVar5[3] - (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
          auVar43._0_4_ = fVar24 * fVar24;
          auVar43._4_4_ = fVar26 * fVar26;
          auVar43._8_4_ = fVar28 * fVar28;
          auVar43._12_4_ = fVar32 * fVar32;
          auVar45 = NEON_ext(auVar43,auVar43,8,1);
          fVar24 = fStack_68 * pfVar5[2] + local_70 * *pfVar5 + fStack_6c * pfVar5[1];
          bVar15 = false;
          if ((float)*(undefined8 *)(param_1 + 8) <= auVar43._0_4_ + auVar43._4_4_ + auVar45._0_4_)
          {
            bVar15 = false;
            if (!NAN(fVar24) && !NAN((float)uVar19)) {
              bVar15 = fVar24 < (float)uVar19;
            }
          }
          if (bVar15) {
            uVar22 = uVar23 & 0xffffffff;
            uVar19 = (ulong)(uint)fVar24;
          }
          uVar23 = uVar23 + 1;
        } while ((local_c8 & 0xffffffff) != uVar23);
        if (-1 < (int)uVar22) {
          FUN_0084ed5c(param_1,local_d0 + uVar22 * 0x10);
        }
        if ((int)(uint)local_c8 < 1) {
          uVar23 = 0xffffffff;
        }
        else {
          uVar19 = 0;
          uVar23 = 0xffffffff;
          do {
            pfVar5 = (float *)(local_d0 + uVar19 * 0x10);
            fVar24 = *pfVar5 - (float)*(undefined8 *)param_1;
            fVar26 = pfVar5[1] - (float)((ulong)*(undefined8 *)param_1 >> 0x20);
            fVar28 = pfVar5[2] - (float)*(undefined8 *)(param_1 + 2);
            fVar32 = pfVar5[3] - (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
            auVar45._0_4_ = fVar24 * fVar24;
            auVar45._4_4_ = fVar26 * fVar26;
            auVar45._8_4_ = fVar28 * fVar28;
            auVar45._12_4_ = fVar32 * fVar32;
            auVar43 = NEON_ext(auVar45,auVar45,8,1);
            fVar24 = fStack_68 * pfVar5[2] + local_70 * *pfVar5 + fStack_6c * pfVar5[1];
            bVar15 = false;
            if ((float)*(undefined8 *)(param_1 + 8) <= auVar45._0_4_ + auVar45._4_4_ + auVar43._0_4_
               ) {
              bVar15 = false;
              if (!NAN(fVar24) && !NAN((float)uVar20)) {
                bVar15 = fVar24 < (float)uVar20;
              }
            }
            if (bVar15) {
              uVar23 = uVar19 & 0xffffffff;
              uVar20 = (ulong)(uint)fVar24;
            }
            uVar19 = uVar19 + 1;
          } while ((uint)local_c8 != uVar19);
          if (-1 < (int)uVar23) {
            if ((int)(uint)local_c8 < 4) {
              FUN_032260f8(auStack_2e0,&local_2d0,0x200);
              FUN_0322b1e0(auStack_2e0,
                           "SphereFinder::SimplexBoundingSphere::Expand has found a non-minimal simplex without any internal points."
                          );
              iVar16 = FUN_03226f50(0x4c74ccb1,&local_2d0,
                                    "D:/CI/Stable_Package_Build_nx64/Source/Common/Internal/ConvexHull/hkGeometryUtility.cpp"
                                    ,0x56f);
              if (iVar16 != 0) {
                CallSupervisor(0x26);
              }
              FUN_032261b0(auStack_2e0);
            }
            FUN_0084ed5c(param_1,local_d0 + uVar23 * 0x10);
            uVar12 = *(undefined8 *)
                      ((long)(local_d0 + (long)(3 - ((int)uVar22 + (int)uVar23)) * 0x10) + 8);
            uVar4 = *(undefined8 *)(local_d0 + (long)(3 - ((int)uVar22 + (int)uVar23)) * 0x10);
            fVar24 = (float)uVar4 - *param_1;
            fVar26 = (float)((ulong)uVar4 >> 0x20) - param_1[1];
            fVar28 = (float)uVar12 - param_1[2];
            fVar32 = (float)((ulong)uVar12 >> 0x20) - param_1[3];
            fVar24 = fVar24 * fVar24;
            fVar26 = fVar26 * fVar26;
            fVar28 = fVar28 * fVar28;
            fVar32 = fVar32 * fVar32;
            auVar6._4_4_ = fVar26;
            auVar6._0_4_ = fVar24;
            auVar6._8_4_ = fVar28;
            auVar6._12_4_ = fVar32;
            auVar7._4_4_ = fVar26;
            auVar7._0_4_ = fVar24;
            auVar7._8_4_ = fVar28;
            auVar7._12_4_ = fVar32;
            auVar43 = NEON_ext(auVar6,auVar7,8,1);
            if ((float)*(undefined8 *)(param_1 + 8) <= fVar24 + fVar26 + auVar43._0_4_) {
              FUN_032260f8(auStack_2e0,&local_2d0,0x200);
              FUN_0322b1e0(auStack_2e0,
                           "SphereFinder::SimplexBoundingSphere::Expand has found a non-minimal simplex without any internal points."
                          );
              iVar16 = FUN_03226f50(0x4c74ccb1,&local_2d0,
                                    "D:/CI/Stable_Package_Build_nx64/Source/Common/Internal/ConvexHull/hkGeometryUtility.cpp"
                                    ,0x577);
              if (iVar16 != 0) {
                CallSupervisor(0x26);
              }
              FUN_032261b0(auStack_2e0);
            }
          }
        }
        puVar13 = PTR_PTR_047d1a50;
        if (1 < (int)(uint)local_c8) {
          lVar21 = 0;
          uVar19 = 0;
          iVar16 = (uint)local_c8;
          do {
            puVar14 = local_d0;
            if ((uVar22 != uVar19) && (uVar23 != uVar19)) {
              fVar24 = param_1[0x22];
              lVar18 = (long)(int)fVar24;
              if ((int)ABS(param_1[0x23]) <= (int)fVar24) {
                FUN_02e9b11c(param_1 + 0x20,puVar13,lVar18 + 1);
                fVar24 = param_1[0x22];
              }
              puVar17 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)(int)fVar24 * 0x10);
              uVar4 = *(undefined8 *)((long)(puVar14 + lVar21) + 8);
              *puVar17 = *(undefined8 *)(puVar14 + lVar21);
              puVar17[1] = uVar4;
              param_1[0x22] = (float)(lVar18 + 1);
              iVar16 = (uint)local_c8;
            }
            uVar19 = uVar19 + 1;
            lVar21 = lVar21 + 0x10;
          } while ((long)uVar19 < (long)(iVar16 + -1));
        }
      }
      uVar23 = local_c8;
      uVar19 = (ulong)local_c8._4_4_;
      local_c8 = (ulong)local_c8._4_4_ << 0x20;
      if ((-1 < (long)uVar23) && (local_d0 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_d0,uVar19 << 4);
      }
      goto LAB_0084f29c;
    }
    fVar28 = local_80 * local_80 + fStack_7c * fStack_7c + fStack_78 * fStack_78;
    fVar32 = local_80 * local_80 + fStack_7c * fStack_7c + fStack_78 * fStack_78;
    fVar24 = (fVar34 / fVar28) *
             ((fVar24 + fVar28) - fVar31) * (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x150);
    fVar28 = (fVar40 / fVar32) *
             ((local_70 * local_70 + fStack_6c * fStack_6c + fStack_68 * fStack_68 + fVar32) -
             fVar31) * (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x150) >> 0x20);
    local_80 = local_80 * fVar24;
    fStack_7c = fStack_7c * fVar28;
    fStack_78 = fStack_78 * fVar24;
    fStack_74 = fStack_74 * fVar28;
    fVar25 = fVar25 + local_80;
    fVar27 = fVar27 + fStack_7c;
    fVar29 = fVar29 + fStack_78;
    *(ulong *)(param_1 + 2) = CONCAT44(fVar31 + fStack_74,fVar29);
    *(ulong *)param_1 = CONCAT44(fVar27,fVar25);
    fVar24 = param_2[3] - (fVar31 + fStack_74);
    auVar35._0_4_ = (*param_2 - fVar25) * (*param_2 - fVar25);
    auVar35._4_4_ = (param_2[1] - fVar27) * (param_2[1] - fVar27);
    auVar35._8_4_ = (param_2[2] - fVar29) * (param_2[2] - fVar29);
    auVar35._12_4_ = fVar24 * fVar24;
    auVar43 = NEON_ext(auVar35,auVar35,8,1);
    *(ulong *)(param_1 + 2) = CONCAT44(auVar35._0_4_ + auVar35._4_4_ + auVar43._0_4_,fVar29);
    *(ulong *)param_1 = CONCAT44(fVar27,fVar25);
    if (fVar26 != 4.2039e-45) goto LAB_0084f29c;
    puVar17 = *(undefined8 **)(param_1 + 0xc);
    fVar24 = (float)*puVar17 - *(float *)(puVar17 + 2);
    fVar28 = (float)((ulong)*puVar17 >> 0x20) - *(float *)((long)puVar17 + 0x14);
    fVar30 = (float)puVar17[1] - *(float *)(puVar17 + 3);
    fVar25 = (float)((ulong)puVar17[1] >> 0x20) - *(float *)((long)puVar17 + 0x1c);
    auVar36._0_4_ = *(float *)(puVar17 + 2) - *(float *)(puVar17 + 4);
    auVar36._4_4_ = *(float *)((long)puVar17 + 0x14) - *(float *)((long)puVar17 + 0x24);
    auVar36._8_4_ = *(float *)(puVar17 + 3) - *(float *)(puVar17 + 5);
    auVar36._12_4_ = *(float *)((long)puVar17 + 0x1c) - *(float *)((long)puVar17 + 0x2c);
    auVar8._4_4_ = fVar28;
    auVar8._0_4_ = fVar24;
    auVar8._8_4_ = fVar30;
    auVar8._12_4_ = fVar25;
    auVar9._4_4_ = fVar28;
    auVar9._0_4_ = fVar24;
    auVar9._8_4_ = fVar30;
    auVar9._12_4_ = fVar25;
    auVar43 = NEON_ext(auVar8,auVar9,4,1);
    auVar45 = NEON_ext(auVar36,auVar36,4,1);
    fVar26 = fVar24 * auVar45._0_4_ - auVar36._0_4_ * auVar43._0_4_;
    fVar32 = fVar28 * auVar45._4_4_ - auVar36._4_4_ * auVar43._4_4_;
    fVar24 = fVar30 * auVar36._0_4_ - auVar36._8_4_ * fVar24;
    fVar28 = fVar25 * auVar36._4_4_ - auVar36._12_4_ * fVar28;
    auVar10._4_4_ = fVar32;
    auVar10._0_4_ = fVar26;
    auVar10._8_4_ = fVar24;
    auVar10._12_4_ = fVar28;
    auVar11._4_4_ = fVar32;
    auVar11._0_4_ = fVar26;
    auVar11._8_4_ = fVar24;
    auVar11._12_4_ = fVar28;
    auVar43 = NEON_ext(auVar10,auVar11,4,1);
    auVar37._0_8_ = auVar43._0_8_;
    auVar37._8_4_ = fVar26;
    auVar37._12_4_ = 0.0;
  }
  else {
    if (fVar24 != 1.4013e-45) {
      if (fVar24 == 0.0) {
        uVar4 = *(undefined8 *)param_2;
        *(ulong *)(param_1 + 2) =
             CONCAT44(*(undefined4 *)(PTR_DAT_047d19b0 + 0x50),(int)*(undefined8 *)(param_2 + 2));
        *(undefined8 *)param_1 = uVar4;
      }
      goto LAB_0084f29c;
    }
    auVar43 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x150);
    auVar45 = NEON_ext(auVar43,auVar43,8,1);
    auVar43 = NEON_ext(auVar45,auVar43,8,1);
    fVar24 = ((float)*(undefined8 *)param_1 + *param_2) * auVar43._0_4_;
    fVar26 = ((float)((ulong)*(undefined8 *)param_1 >> 0x20) + param_2[1]) * auVar43._4_4_;
    fVar28 = ((float)*(undefined8 *)(param_1 + 2) + param_2[2]) * auVar43._8_4_;
    fVar32 = ((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + param_2[3]) * auVar43._12_4_;
    *(ulong *)(param_1 + 2) = CONCAT44(fVar32,fVar28);
    *(ulong *)param_1 = CONCAT44(fVar26,fVar24);
    auVar37._0_4_ = *param_2 - fVar24;
    auVar37._4_4_ = param_2[1] - fVar26;
    auVar37._8_4_ = param_2[2] - fVar28;
    auVar37._12_4_ = param_2[3] - fVar32;
    auVar42._0_4_ = auVar37._0_4_ * auVar37._0_4_;
    auVar42._4_4_ = auVar37._4_4_ * auVar37._4_4_;
    auVar42._8_4_ = auVar37._8_4_ * auVar37._8_4_;
    auVar42._12_4_ = auVar37._12_4_ * auVar37._12_4_;
    auVar43 = NEON_ext(auVar42,auVar42,8,1);
    *(ulong *)(param_1 + 2) = CONCAT44(auVar42._0_4_ + auVar42._4_4_ + auVar43._0_4_,fVar28);
    *(ulong *)param_1 = CONCAT44(fVar26,fVar24);
  }
  *(long *)(param_1 + 6) = auVar37._8_8_;
  *(long *)(param_1 + 4) = auVar37._0_8_;
LAB_0084f29c:
  fVar26 = *param_1;
  fVar28 = param_1[1];
  fVar32 = param_1[2];
  fVar30 = param_1[3];
  fVar24 = param_1[0x22];
  fVar25 = (SQRT(fVar30) + 1e-05) * (SQRT(fVar30) + 1e-05);
  *(ulong *)(param_1 + 8) = CONCAT44((SQRT(fVar30) + 1e-05) * (SQRT(fVar30) + 1e-05),fVar25);
  if (0 < (int)fVar24) {
    lVar21 = 0;
    uVar23 = 0;
    while( true ) {
      lVar18 = *(long *)(param_1 + 0x20);
      pfVar5 = (float *)(lVar18 + lVar21);
      auVar38._0_4_ = (*pfVar5 - fVar26) * (*pfVar5 - fVar26);
      auVar38._4_4_ = (pfVar5[1] - fVar28) * (pfVar5[1] - fVar28);
      auVar38._8_4_ = (pfVar5[2] - fVar32) * (pfVar5[2] - fVar32);
      auVar38._12_4_ = (pfVar5[3] - fVar30) * (pfVar5[3] - fVar30);
      auVar43 = NEON_ext(auVar38,auVar38,8,1);
      if (fVar25 <= auVar38._0_4_ + auVar38._4_4_ + auVar43._0_4_) {
        puVar17 = (undefined8 *)(lVar18 + lVar21);
        local_2c8 = puVar17[1];
        local_2d0 = *puVar17;
        fVar24 = (float)((int)fVar24 - 1);
        param_1[0x22] = fVar24;
        if (uVar23 != (uint)fVar24) {
          puVar1 = (undefined8 *)(lVar18 + (long)(int)fVar24 * 0x10);
          *puVar17 = *puVar1;
          puVar17[1] = puVar1[1];
        }
        FUN_0084ed5c(param_1,&local_2d0);
        fVar24 = param_1[0x22];
      }
      uVar23 = uVar23 + 1;
      if ((long)(int)fVar24 <= (long)uVar23) break;
      fVar26 = *param_1;
      fVar28 = param_1[1];
      fVar32 = param_1[2];
      fVar30 = param_1[3];
      lVar21 = lVar21 + 0x10;
      fVar25 = (float)*(undefined8 *)(param_1 + 8);
    }
  }
  return;
}


