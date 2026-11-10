/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012a6760; name: FUN_012a6760
 */


void FUN_012a6760(undefined8 param_1,long param_2,undefined8 *param_3,int param_4,int param_5)

{
  bool bVar1;
  code *pcVar2;
  char *pcVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  float fVar13;
  int iVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int local_104;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  int *local_e0;
  int *local_d8;
  int *local_d0;
  undefined8 *local_c8;
  int local_38;
  int local_34;
  
  local_100._0_4_ = 0x22;
  local_34 = 1;
  local_104 = param_5;
  local_38 = param_4;
  FUN_00c85118(param_2,&local_34,&local_100);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 0xc;
  uVar6 = (uint)*param_3;
  if ((uVar6 >> 1 & 1) != 0) {
    local_100._0_4_ = 0x22;
    local_34 = 2;
    FUN_00c85118(param_2,&local_34,&local_100);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 0xc;
    uVar6 = (uint)*param_3;
  }
  if ((uVar6 >> 2 & 1) != 0) {
    local_100._0_4_ = 0x16;
    local_34 = 0x1e;
    FUN_00c85118(param_2,&local_34,&local_100);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 8;
  }
  local_34 = param_4 + 1;
  FUN_00ebd51c(param_2,param_1,(param_5 + 1) * local_34,1);
  lVar11 = *(long *)(param_2 + 0x38);
  local_e0 = &local_104;
  local_d8 = &local_34;
  local_d0 = &local_38;
  local_100 = &LAB_013251f0;
  local_f8 = FUN_02bb435c;
  local_f0 = &LAB_02bb4360;
  puStack_e8 = &LAB_02bb4374;
  local_c8 = param_3;
  pcVar3 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar11 + 0x70) + 0x110),lVar11 + 0x30);
  if ((*pcVar3 == '\0') || (*(long *)(pcVar3 + 8) == 0)) {
    pfVar4 = (float *)0x0;
    piVar8 = &local_104;
  }
  else {
    if (*(long *)(*(long *)(pcVar3 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    pfVar4 = (float *)(**(code **)PTR_DAT_047d8da8)();
    piVar8 = local_e0;
  }
  iVar10 = *piVar8;
  if (-1 < iVar10) {
    iVar14 = *local_d8;
    auVar12 = NEON_fmov(0x3f800000,4);
    iVar7 = 0;
    do {
      if (0 < iVar14) {
        iVar9 = 0;
        fVar13 = ((float)iVar7 / (float)iVar10) * 3.1415927;
        fVar17 = fVar13 + 1.5707964;
        iVar23 = -(uint)(fVar13 == 0.0);
        auVar15._0_4_ =
             (int)((float)(-(uint)(0.0 <= fVar13) & 0x80000000 ^ 0xbf000000) + fVar13 * 0.15915494);
        auVar15._4_4_ =
             (int)((float)(-(uint)(0.0 <= fVar13) & 0x80000000 ^ 0xbf000000) + fVar13 * 0.15915494);
        auVar15._8_4_ =
             (int)((float)(-(uint)(0.0 <= fVar13) & 0x80000000 ^ 0xbf000000) + fVar13 * 0.15915494);
        auVar15._12_4_ =
             (int)((float)(-(uint)(0.0 <= fVar13) & 0x80000000 ^ 0xbf000000) + fVar13 * 0.15915494);
        iVar22 = -(uint)(ABS(fVar17) == INFINITY);
        auVar27._0_4_ =
             (int)((float)(-(uint)(0.0 <= fVar17) & 0x80000000 ^ 0xbf000000) + fVar17 * 0.15915494);
        auVar27._4_4_ =
             (int)((float)(-(uint)(0.0 <= fVar13 + 1.5707964) & 0x80000000 ^ 0xbf000000) +
                  (fVar13 + 1.5707964) * 0.15915494);
        auVar27._8_4_ =
             (int)((float)(-(uint)(0.0 <= fVar13 + 1.5707964) & 0x80000000 ^ 0xbf000000) +
                  (fVar13 + 1.5707964) * 0.15915494);
        auVar27._12_4_ =
             (int)((float)(-(uint)(0.0 <= fVar13 + 1.5707964) & 0x80000000 ^ 0xbf000000) +
                  (fVar13 + 1.5707964) * 0.15915494);
        auVar15 = NEON_scvtf(auVar15,4);
        fVar16 = fVar13 - auVar15._0_4_ * 6.2831855;
        auVar15 = NEON_scvtf(auVar27,4);
        fVar17 = fVar17 - auVar15._0_4_ * 6.2831855;
        fVar17 = (float)((uint)fVar17 ^
                        ((uint)fVar17 ^ (uint)(-3.1415927 - fVar17)) & -(uint)(fVar17 < -1.5707964))
        ;
        fVar16 = (float)((uint)fVar16 ^
                        ((uint)fVar16 ^ (uint)(-3.1415927 - fVar16)) & -(uint)(fVar16 < -1.5707964))
        ;
        fVar17 = (float)((uint)fVar17 ^
                        ((uint)fVar17 ^ (uint)(3.1415927 - fVar17)) & -(uint)(1.5707964 < fVar17));
        fVar25 = fVar17 * fVar17;
        fVar16 = (float)((uint)fVar16 ^
                        ((uint)fVar16 ^ (uint)(3.1415927 - fVar16)) & -(uint)(1.5707964 < fVar16));
        fVar20 = fVar16 * fVar16;
        fVar18 = auVar12._0_4_;
        fVar17 = fVar17 * (fVar18 + fVar25 * (fVar25 * (fVar25 * (fVar25 * (fVar25 * -2.5052108e-08
                                                                           + 2.7557319e-06) +
                                                                 -0.0001984127) + 0.008333334) +
                                             -0.16666667));
        iVar14 = -(uint)(ABS(fVar13) == INFINITY);
        uVar6 = (uint)fVar17 ^
                ((uint)fVar17 ^ 0x7fc00000) &
                ~CONCAT13(~(byte)((uint)iVar22 >> 0x18),
                          CONCAT12(~(byte)((uint)iVar22 >> 0x10),
                                   CONCAT11(~(byte)((uint)iVar22 >> 8),~(byte)iVar22)));
        uVar19 = CONCAT13(~(byte)((uint)iVar14 >> 0x18),
                          CONCAT12(~(byte)((uint)iVar14 >> 0x10),
                                   CONCAT11(~(byte)((uint)iVar14 >> 8),~(byte)iVar14)));
        fVar13 = (float)((uVar6 ^ (uVar6 ^ (uint)fVar18) &
                                  ~CONCAT13(~(byte)((uint)iVar23 >> 0x18),
                                            CONCAT12(~(byte)((uint)iVar23 >> 0x10),
                                                     CONCAT11(~(byte)((uint)iVar23 >> 8),
                                                              ~(byte)iVar23))) ^ 0x7fc00000) &
                         uVar19 ^ 0x7fc00000);
        fVar16 = fVar16 * (fVar18 + fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * -2.5052108e-08
                                                                           + 2.7557319e-06) +
                                                                 -0.0001984127) + 0.008333334) +
                                             -0.16666667));
        fVar16 = (float)((uint)fVar16 ^ ((uint)fVar16 ^ 0x7fc00000) & ~uVar19);
        do {
          fVar20 = 0.0;
          if (iVar9 != *local_d0) {
            fVar20 = (-(float)iVar9 / (float)*local_d0) * 6.2831855;
          }
          fVar24 = fVar20 + 1.5707964;
          iVar14 = -(uint)(ABS(fVar24) == INFINITY);
          auVar21._0_4_ =
               (int)((float)(-(uint)(0.0 <= fVar20) & 0x80000000 ^ 0xbf000000) + fVar20 * 0.15915494
                    );
          auVar21._4_4_ =
               (int)((float)(-(uint)(0.0 <= fVar20) & 0x80000000 ^ 0xbf000000) + fVar20 * 0.15915494
                    );
          auVar21._8_4_ =
               (int)((float)(-(uint)(0.0 <= fVar20) & 0x80000000 ^ 0xbf000000) + fVar20 * 0.15915494
                    );
          auVar21._12_4_ =
               (int)((float)(-(uint)(0.0 <= fVar20) & 0x80000000 ^ 0xbf000000) + fVar20 * 0.15915494
                    );
          auVar26._0_4_ =
               (int)((float)(-(uint)(0.0 <= fVar24) & 0x80000000 ^ 0xbf000000) + fVar24 * 0.15915494
                    );
          auVar26._4_4_ =
               (int)((float)(-(uint)(0.0 <= fVar20 + 1.5707964) & 0x80000000 ^ 0xbf000000) +
                    (fVar20 + 1.5707964) * 0.15915494);
          auVar26._8_4_ =
               (int)((float)(-(uint)(0.0 <= fVar20 + 1.5707964) & 0x80000000 ^ 0xbf000000) +
                    (fVar20 + 1.5707964) * 0.15915494);
          auVar26._12_4_ =
               (int)((float)(-(uint)(0.0 <= fVar20 + 1.5707964) & 0x80000000 ^ 0xbf000000) +
                    (fVar20 + 1.5707964) * 0.15915494);
          auVar15 = NEON_scvtf(auVar21,4);
          auVar27 = NEON_scvtf(auVar26,4);
          fVar24 = fVar24 - auVar27._0_4_ * 6.2831855;
          fVar24 = (float)((uint)fVar24 ^
                          ((uint)fVar24 ^ (uint)(-3.1415927 - fVar24)) &
                          -(uint)(fVar24 < -1.5707964));
          fVar24 = (float)((uint)fVar24 ^
                          ((uint)fVar24 ^ (uint)(3.1415927 - fVar24)) & -(uint)(1.5707964 < fVar24))
          ;
          fVar17 = fVar24 * fVar24;
          iVar22 = -(uint)(fVar20 == 0.0);
          fVar25 = fVar20 - auVar15._0_4_ * 6.2831855;
          fVar24 = fVar24 * (fVar18 + fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
          fVar25 = (float)((uint)fVar25 ^
                          ((uint)fVar25 ^ (uint)(-3.1415927 - fVar25)) &
                          -(uint)(fVar25 < -1.5707964));
          uVar6 = (uint)fVar24 ^
                  ((uint)fVar24 ^ 0x7fc00000) &
                  ~CONCAT13(~(byte)((uint)iVar14 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar14 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar14 >> 8),~(byte)iVar14)));
          fVar25 = (float)((uint)fVar25 ^
                          ((uint)fVar25 ^ (uint)(3.1415927 - fVar25)) & -(uint)(1.5707964 < fVar25))
          ;
          uVar6 = uVar6 ^ (uVar6 ^ (uint)fVar18) &
                          ~CONCAT13(~(byte)((uint)iVar22 >> 0x18),
                                    CONCAT12(~(byte)((uint)iVar22 >> 0x10),
                                             CONCAT11(~(byte)((uint)iVar22 >> 8),~(byte)iVar22)));
          fVar17 = fVar25 * fVar25;
          iVar14 = -(uint)(ABS(fVar20) == INFINITY);
          uVar19 = CONCAT13(~(byte)((uint)iVar14 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar14 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar14 >> 8),~(byte)iVar14)));
          fVar20 = fVar16 * (float)(uVar6 ^ (uVar6 ^ 0x7fc00000) & ~uVar19);
          *pfVar4 = fVar20;
          pfVar4[1] = fVar13;
          fVar17 = fVar16 * (float)(((uint)(fVar25 * (fVar18 + fVar17 * (fVar17 * (fVar17 * (fVar17 
                                                  * (fVar17 * -2.5052108e-08 + 2.7557319e-06) +
                                                  -0.0001984127) + 0.008333334) + -0.16666667))) ^
                                    0x7fc00000) & uVar19 ^ 0x7fc00000);
          pfVar4[2] = fVar17;
          uVar6 = (uint)*local_c8;
          if ((uVar6 >> 1 & 1) == 0) {
            pfVar5 = pfVar4 + 3;
          }
          else {
            pfVar4[3] = fVar20;
            pfVar4[4] = fVar13;
            pfVar4[5] = fVar17;
            uVar6 = (uint)*local_c8;
            pfVar5 = pfVar4 + 6;
          }
          pfVar4 = pfVar5;
          if ((uVar6 >> 2 & 1) != 0) {
            pfVar4 = pfVar5 + 2;
            *pfVar5 = (float)iVar9 / (float)*local_d0;
            pfVar5[1] = (float)iVar7 / (float)iVar10;
          }
          iVar9 = iVar9 + 1;
          iVar14 = *local_d8;
        } while (iVar9 < iVar14);
        iVar10 = *local_e0;
      }
      bVar1 = iVar7 < iVar10;
      iVar7 = iVar7 + 1;
    } while (bVar1);
  }
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar11 + 0x70) + 0x110),lVar11 + 0x30);
  pcVar2 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined1 *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar2)(&local_e0);
  }
  return;
}


