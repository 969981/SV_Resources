/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e80c30; name: FUN_00e80c30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00e80c30(long param_1,int *param_2)

{
  long *plVar1;
  uint *puVar2;
  float *pfVar3;
  undefined8 *puVar4;
  char cVar5;
  ushort uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  uint uVar17;
  long *plVar18;
  ushort *puVar19;
  int *piVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  int iVar26;
  float fVar33;
  int iVar34;
  int iVar35;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar62;
  float fVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar64;
  int iVar68;
  int iVar69;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined4 local_120 [4];
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  long *local_d8;
  undefined4 local_d0 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_88;
  undefined4 local_80 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_40;
  long *local_38;
  
  if ((param_2 != (int *)0x0) && (*(int *)(param_1 + 0x3f4) == 1)) {
    puVar19 = (ushort *)((long)param_2 - (long)*param_2);
    uVar6 = *puVar19;
    if ((4 < uVar6) && ((ulong)puVar19[2] != 0)) {
      cVar5 = *(char *)((long)param_2 + (ulong)puVar19[2]);
      fVar62 = (float)((ulong)_DAT_03cab3a0 >> 0x20);
      fVar63 = (float)((ulong)_UNK_03cab3a8 >> 0x20);
      if (cVar5 == '\x02') {
        if (uVar6 < 7) {
          piVar20 = (int *)0x0;
        }
        else {
          piVar20 = (int *)0x0;
          if ((ulong)puVar19[3] != 0) {
            puVar2 = (uint *)((long)param_2 + (ulong)puVar19[3]);
            piVar20 = (int *)((long)puVar2 + (ulong)*puVar2);
          }
        }
        puVar19 = (ushort *)((long)piVar20 - (long)*piVar20);
        uStack_b0 = 0;
        auVar21 = ZEXT816(0);
        uStack_a8 = 0;
        if (4 < *puVar19) {
          uStack_b0 = 0;
          uStack_a8 = 0;
          auVar21 = ZEXT816(0);
          if (piVar20 != (int *)0x0) {
            auVar21 = ZEXT816(0);
            if (puVar19[2] != 0) {
              auVar21._12_4_ = 0;
              auVar21._0_12_ = *(undefined1 (*) [12])((long)piVar20 + (ulong)puVar19[2]);
            }
          }
          if (((6 < *puVar19) && (piVar20 != (int *)0x0)) && (puVar19[3] != 0)) {
            puVar4 = (undefined8 *)((long)piVar20 + (ulong)puVar19[3]);
            uStack_b0 = *puVar4;
            uStack_a8 = (ulong)*(uint *)(puVar4 + 1);
          }
        }
        pfVar3 = (float *)((long)piVar20 + (ulong)puVar19[4]);
        fVar36 = *(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390;
        local_88 = (long *)0x0;
        uStack_b8 = auVar21._8_8_;
        local_c0 = auVar21._0_8_;
        auVar41._8_4_ = 0x3f000000;
        auVar41._0_8_ = 0x3f0000003f000000;
        auVar41._12_4_ = 0x3f000000;
        fVar25 = fVar36 * pfVar3[2] * 0.5;
        fVar33 = fVar36 * *pfVar3 * 0.5;
        fVar36 = pfVar3[1] * fVar36 * 0.5;
        fVar45 = fVar25 + 1.5707964;
        fVar50 = fVar33 + 1.5707964;
        fVar52 = fVar36 + 1.5707964;
        auVar58._0_4_ = -(uint)(0.0 <= fVar25);
        auVar58._4_4_ = -(uint)(0.0 <= fVar33);
        auVar58._8_4_ = -(uint)(0.0 <= fVar36);
        auVar58._12_4_ = 0xffffffff;
        auVar65._0_4_ = -(uint)(0.0 <= fVar45);
        auVar65._4_4_ = -(uint)(0.0 <= fVar50);
        auVar65._8_4_ = -(uint)(0.0 <= fVar52);
        auVar65._12_4_ = 0xffffffff;
        auVar8[0xb] = 0xbf;
        auVar8._0_11_ = ZEXT811(0xbf000000bf000000);
        auVar8._12_3_ = 0;
        auVar8[0xf] = 0xbf;
        auVar59[0xb] = 0xbf;
        auVar59._0_11_ = ZEXT811(0xbf000000bf000000);
        auVar59._12_3_ = 0;
        auVar59[0xf] = 0xbf;
        auVar59 = auVar59 ^ (auVar8 ^ auVar41) & auVar58;
        auVar9[0xb] = 0xbf;
        auVar9._0_11_ = ZEXT811(0xbf000000bf000000);
        auVar9._12_3_ = 0;
        auVar9[0xf] = 0xbf;
        auVar41 = auVar41 ^ (auVar41 ^ auVar9) & ~auVar65;
        iVar10 = -(uint)(fVar25 == 0.0);
        iVar11 = -(uint)(fVar33 == 0.0);
        iVar12 = -(uint)(fVar36 == 0.0);
        auVar60._0_4_ = (int)(auVar59._0_4_ + fVar25 * 0.15915494);
        auVar60._4_4_ = (int)(auVar59._4_4_ + fVar33 * 0.15915494);
        auVar60._8_4_ = (int)(auVar59._8_4_ + fVar36 * 0.15915494);
        auVar60._12_4_ = (int)(auVar59._12_4_ + 0.0);
        auVar42._0_4_ = (int)(auVar41._0_4_ + fVar45 * 0.15915494);
        auVar42._4_4_ = (int)(auVar41._4_4_ + fVar50 * 0.15915494);
        auVar42._8_4_ = (int)(auVar41._8_4_ + fVar52 * 0.15915494);
        auVar42._12_4_ = (int)(auVar41._12_4_ + 0.25);
        auVar55 = NEON_scvtf(auVar60,4);
        auVar43 = NEON_scvtf(auVar42,4);
        fVar74 = fVar25 - auVar55._0_4_ * 6.2831855;
        fVar76 = fVar33 - auVar55._4_4_ * 6.2831855;
        fVar78 = fVar36 - auVar55._8_4_ * 6.2831855;
        fVar80 = 0.0 - auVar55._12_4_ * 6.2831855;
        fVar46 = fVar45 - auVar43._0_4_ * 6.2831855;
        fVar51 = fVar50 - auVar43._4_4_ * 6.2831855;
        fVar53 = fVar52 - auVar43._8_4_ * 6.2831855;
        fVar54 = 1.5707964 - auVar43._12_4_ * 6.2831855;
        fVar74 = (float)((uint)fVar74 ^
                        ((uint)fVar74 ^ (uint)(-3.1415927 - fVar74)) & -(uint)(fVar74 < -1.5707964))
        ;
        fVar76 = (float)((uint)fVar76 ^
                        ((uint)fVar76 ^ (uint)(-3.1415927 - fVar76)) & -(uint)(fVar76 < -1.5707964))
        ;
        fVar78 = (float)((uint)fVar78 ^
                        ((uint)fVar78 ^ (uint)(-3.1415927 - fVar78)) & -(uint)(fVar78 < -1.5707964))
        ;
        fVar80 = (float)((uint)fVar80 ^
                        ((uint)fVar80 ^ (uint)(-3.1415927 - fVar80)) & -(uint)(fVar80 < -1.5707964))
        ;
        fVar46 = (float)((uint)(-3.1415927 - fVar46) ^
                        ((uint)(-3.1415927 - fVar46) ^ (uint)fVar46) & ~-(uint)(fVar46 < -1.5707964)
                        );
        fVar51 = (float)((uint)(-3.1415927 - fVar51) ^
                        ((uint)(-3.1415927 - fVar51) ^ (uint)fVar51) & ~-(uint)(fVar51 < -1.5707964)
                        );
        fVar53 = (float)((uint)(-3.1415927 - fVar53) ^
                        ((uint)(-3.1415927 - fVar53) ^ (uint)fVar53) & ~-(uint)(fVar53 < -1.5707964)
                        );
        fVar54 = (float)((uint)(-3.1415927 - fVar54) ^
                        ((uint)(-3.1415927 - fVar54) ^ (uint)fVar54) & ~-(uint)(fVar54 < -1.5707964)
                        );
        fVar46 = (float)((uint)fVar46 ^
                        ((uint)fVar46 ^ (uint)(3.1415927 - fVar46)) & -(uint)(1.5707964 < fVar46));
        fVar51 = (float)((uint)fVar51 ^
                        ((uint)fVar51 ^ (uint)(3.1415927 - fVar51)) & -(uint)(1.5707964 < fVar51));
        fVar53 = (float)((uint)fVar53 ^
                        ((uint)fVar53 ^ (uint)(3.1415927 - fVar53)) & -(uint)(1.5707964 < fVar53));
        fVar54 = (float)((uint)fVar54 ^
                        ((uint)fVar54 ^ (uint)(3.1415927 - fVar54)) & -(uint)(1.5707964 < fVar54));
        fVar74 = (float)((uint)fVar74 ^
                        ((uint)fVar74 ^ (uint)(3.1415927 - fVar74)) & -(uint)(1.5707964 < fVar74));
        fVar76 = (float)((uint)fVar76 ^
                        ((uint)fVar76 ^ (uint)(3.1415927 - fVar76)) & -(uint)(1.5707964 < fVar76));
        fVar78 = (float)((uint)fVar78 ^
                        ((uint)fVar78 ^ (uint)(3.1415927 - fVar78)) & -(uint)(1.5707964 < fVar78));
        fVar80 = (float)((uint)fVar80 ^
                        ((uint)fVar80 ^ (uint)(3.1415927 - fVar80)) & -(uint)(1.5707964 < fVar80));
        auVar43 = NEON_fmov(0x3f800000,4);
        fVar75 = fVar46 * fVar46;
        fVar77 = fVar51 * fVar51;
        fVar79 = fVar53 * fVar53;
        fVar81 = fVar54 * fVar54;
        fVar70 = fVar74 * fVar74;
        fVar71 = fVar76 * fVar76;
        fVar72 = fVar78 * fVar78;
        fVar73 = fVar80 * fVar80;
        auVar28._8_4_ = 0x7fc00000;
        auVar28._0_8_ = 0x7fc000007fc00000;
        auVar28._12_4_ = 0x7fc00000;
        iVar64 = -(uint)(ABS(fVar45) == INFINITY);
        iVar68 = -(uint)(ABS(fVar50) == INFINITY);
        iVar69 = -(uint)(ABS(fVar52) == INFINITY);
        iVar26 = -(uint)(ABS(fVar25) == INFINITY);
        iVar34 = -(uint)(ABS(fVar33) == INFINITY);
        iVar35 = -(uint)(ABS(fVar36) == INFINITY);
        auVar27[0] = ~(byte)iVar26;
        auVar27[1] = ~(byte)((uint)iVar26 >> 8);
        auVar27[2] = ~(byte)((uint)iVar26 >> 0x10);
        auVar27[3] = ~(byte)((uint)iVar26 >> 0x18);
        auVar27[4] = ~(byte)iVar34;
        auVar27[5] = ~(byte)((uint)iVar34 >> 8);
        auVar27[6] = ~(byte)((uint)iVar34 >> 0x10);
        auVar27[7] = ~(byte)((uint)iVar34 >> 0x18);
        auVar27[8] = ~(byte)iVar35;
        auVar27[9] = ~(byte)((uint)iVar35 >> 8);
        auVar27[10] = ~(byte)((uint)iVar35 >> 0x10);
        auVar27[0xb] = ~(byte)((uint)iVar35 >> 0x18);
        auVar27[0xc] = 0xff;
        auVar27[0xd] = 0xff;
        auVar27[0xe] = 0xff;
        auVar27[0xf] = 0xff;
        auVar44._0_4_ =
             fVar46 * (auVar43._0_4_ +
                      fVar75 * (fVar75 * (fVar75 * (fVar75 * (fVar75 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar44._4_4_ =
             fVar51 * (auVar43._4_4_ +
                      fVar77 * (fVar77 * (fVar77 * (fVar77 * (fVar77 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar44._8_4_ =
             fVar53 * (auVar43._8_4_ +
                      fVar79 * (fVar79 * (fVar79 * (fVar79 * (fVar79 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar44._12_4_ =
             fVar54 * (auVar43._12_4_ +
                      fVar81 * (fVar81 * (fVar81 * (fVar81 * (fVar81 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar47[0] = ~(byte)iVar64;
        auVar47[1] = ~(byte)((uint)iVar64 >> 8);
        auVar47[2] = ~(byte)((uint)iVar64 >> 0x10);
        auVar47[3] = ~(byte)((uint)iVar64 >> 0x18);
        auVar47[4] = ~(byte)iVar68;
        auVar47[5] = ~(byte)((uint)iVar68 >> 8);
        auVar47[6] = ~(byte)((uint)iVar68 >> 0x10);
        auVar47[7] = ~(byte)((uint)iVar68 >> 0x18);
        auVar47[8] = ~(byte)iVar69;
        auVar47[9] = ~(byte)((uint)iVar69 >> 8);
        auVar47[10] = ~(byte)((uint)iVar69 >> 0x10);
        auVar47[0xb] = ~(byte)((uint)iVar69 >> 0x18);
        auVar47[0xc] = 0xff;
        auVar47[0xd] = 0xff;
        auVar47[0xe] = 0xff;
        auVar47[0xf] = 0xff;
        auVar44 = auVar44 ^ (auVar44 ^ auVar28) & ~auVar47;
        auVar48[0] = ~(byte)iVar10;
        auVar48[1] = ~(byte)((uint)iVar10 >> 8);
        auVar48[2] = ~(byte)((uint)iVar10 >> 0x10);
        auVar48[3] = ~(byte)((uint)iVar10 >> 0x18);
        auVar48[4] = ~(byte)iVar11;
        auVar48[5] = ~(byte)((uint)iVar11 >> 8);
        auVar48[6] = ~(byte)((uint)iVar11 >> 0x10);
        auVar48[7] = ~(byte)((uint)iVar11 >> 0x18);
        auVar48[8] = ~(byte)iVar12;
        auVar48[9] = ~(byte)((uint)iVar12 >> 8);
        auVar48[10] = ~(byte)((uint)iVar12 >> 0x10);
        auVar48[0xb] = ~(byte)((uint)iVar12 >> 0x18);
        auVar48._12_4_ = 0;
        auVar37._0_4_ =
             fVar74 * (auVar43._0_4_ +
                      fVar70 * (fVar70 * (fVar70 * (fVar70 * (fVar70 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar37._4_4_ =
             fVar76 * (auVar43._4_4_ +
                      fVar71 * (fVar71 * (fVar71 * (fVar71 * (fVar71 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar37._8_4_ =
             fVar78 * (auVar43._8_4_ +
                      fVar72 * (fVar72 * (fVar72 * (fVar72 * (fVar72 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar37._12_4_ =
             fVar80 * (auVar43._12_4_ +
                      fVar73 * (fVar73 * (fVar73 * (fVar73 * (fVar73 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar37 = auVar37 ^ (auVar37 ^ auVar28) & ~auVar27;
        auVar28 = auVar28 ^ (auVar28 ^ auVar44 ^ (auVar44 ^ auVar43) & ~auVar48) & auVar27;
        fVar74 = auVar37._0_4_;
        fVar25 = auVar28._0_4_;
        fVar33 = auVar28._4_4_;
        fVar76 = auVar37._4_4_;
        fVar36 = auVar28._8_4_;
        local_d0[0] = 2;
        fVar78 = auVar37._8_4_;
        local_a0 = CONCAT44(fVar78 * fVar25 * fVar33 + fVar36 * fVar76 * fVar74 * fVar62,
                            fVar36 * fVar25 * fVar76 +
                            fVar78 * fVar33 * fVar74 * (float)_DAT_03cab3a0);
        uStack_98 = CONCAT44(fVar36 * fVar25 * fVar33 + fVar78 * fVar76 * fVar74 * fVar63,
                             fVar36 * fVar74 * fVar33 +
                             fVar78 * fVar76 * fVar25 * (float)_UNK_03cab3a8);
        uVar17 = FUN_00e813ac(param_1,local_d0);
        if ((local_88 == (long *)0x0) || (local_88[1] == 0)) goto LAB_00e80f64;
        plVar1 = local_88 + 2;
        do {
          bVar16 = *plVar1 + -1 == 0;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          plVar18 = local_88;
        } while (cVar5 != '\0');
      }
      else if (cVar5 == '\x01') {
        if (uVar6 < 7) {
          piVar20 = (int *)0x0;
        }
        else {
          piVar20 = (int *)0x0;
          if ((ulong)puVar19[3] != 0) {
            puVar2 = (uint *)((long)param_2 + (ulong)puVar19[3]);
            piVar20 = (int *)((long)puVar2 + (ulong)*puVar2);
          }
        }
        puVar19 = (ushort *)((long)piVar20 - (long)*piVar20);
        local_40 = 0;
        auVar24 = ZEXT816(0);
        if (4 < *puVar19) {
          if ((piVar20 != (int *)0x0) && (puVar19[2] != 0)) {
            auVar24._12_4_ = 0;
            auVar24._0_12_ = *(undefined1 (*) [12])((long)piVar20 + (ulong)puVar19[2]);
          }
          if ((6 < *puVar19) && ((ulong)puVar19[3] != 0)) {
            local_40 = *(undefined4 *)((long)piVar20 + (ulong)puVar19[3]);
          }
        }
        local_80[0] = 1;
        local_38 = (long *)0x0;
        uStack_68 = auVar24._8_8_;
        local_70 = auVar24._0_8_;
        uVar17 = FUN_00e813ac(param_1,local_80);
        if ((local_38 == (long *)0x0) || (local_38[1] == 0)) goto LAB_00e80f64;
        plVar1 = local_38 + 2;
        do {
          bVar16 = *plVar1 + -1 == 0;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          plVar18 = local_38;
        } while (cVar5 != '\0');
      }
      else {
        if (cVar5 != '\x03') goto LAB_00e8131c;
        if (uVar6 < 7) {
          piVar20 = (int *)0x0;
        }
        else {
          piVar20 = (int *)0x0;
          if ((ulong)puVar19[3] != 0) {
            puVar2 = (uint *)((long)param_2 + (ulong)puVar19[3]);
            piVar20 = (int *)((long)puVar2 + (ulong)*puVar2);
          }
        }
        puVar19 = (ushort *)((long)piVar20 - (long)*piVar20);
        local_110 = 0;
        uStack_108 = 0;
        if ((4 < *puVar19) && (uStack_108 = 0, piVar20 != (int *)0x0)) {
          uStack_108 = 0;
          if (puVar19[2] != 0) {
            puVar4 = (undefined8 *)((long)piVar20 + (ulong)puVar19[2]);
            local_110 = *puVar4;
            uStack_108 = (ulong)*(uint *)(puVar4 + 1);
          }
        }
        pfVar3 = (float *)((long)piVar20 + (ulong)puVar19[5]);
        fVar25 = *(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390;
        fVar33 = fVar25 * pfVar3[2] * 0.5;
        fVar36 = fVar25 * *pfVar3 * 0.5;
        fVar25 = pfVar3[1] * fVar25 * 0.5;
        iVar10 = -(uint)(fVar33 == 0.0);
        iVar11 = -(uint)(fVar36 == 0.0);
        iVar12 = -(uint)(fVar25 == 0.0);
        auVar56._0_4_ =
             (int)((float)(-(uint)(0.0 <= fVar33) & 0x80000000 ^ 0xbf000000) + fVar33 * 0.15915494);
        auVar56._4_4_ =
             (int)((float)(-(uint)(0.0 <= fVar36) & 0x80000000 ^ 0xbf000000) + fVar36 * 0.15915494);
        auVar56._8_4_ =
             (int)((float)(-(uint)(0.0 <= fVar25) & 0x80000000 ^ 0xbf000000) + fVar25 * 0.15915494);
        auVar56._12_4_ = 0;
        auVar43 = NEON_scvtf(auVar56,4);
        iVar26 = -(uint)(ABS(fVar33) == INFINITY);
        iVar34 = -(uint)(ABS(fVar36) == INFINITY);
        iVar35 = -(uint)(ABS(fVar25) == INFINITY);
        auVar22[0] = ~(byte)iVar26;
        auVar22[1] = ~(byte)((uint)iVar26 >> 8);
        auVar22[2] = ~(byte)((uint)iVar26 >> 0x10);
        auVar22[3] = ~(byte)((uint)iVar26 >> 0x18);
        auVar22[4] = ~(byte)iVar34;
        auVar22[5] = ~(byte)((uint)iVar34 >> 8);
        auVar22[6] = ~(byte)((uint)iVar34 >> 0x10);
        auVar22[7] = ~(byte)((uint)iVar34 >> 0x18);
        auVar22[8] = ~(byte)iVar35;
        auVar22[9] = ~(byte)((uint)iVar35 >> 8);
        auVar22[10] = ~(byte)((uint)iVar35 >> 0x10);
        auVar22[0xb] = ~(byte)((uint)iVar35 >> 0x18);
        auVar22[0xc] = 0xff;
        auVar22[0xd] = 0xff;
        auVar22[0xe] = 0xff;
        auVar22[0xf] = 0xff;
        fVar74 = fVar33 + 1.5707964;
        fVar76 = fVar36 + 1.5707964;
        fVar78 = fVar25 + 1.5707964;
        auVar61._0_4_ = fVar33 - auVar43._0_4_ * 6.2831855;
        auVar61._4_4_ = fVar36 - auVar43._4_4_ * 6.2831855;
        auVar61._8_4_ = fVar25 - auVar43._8_4_ * 6.2831855;
        auVar61._12_4_ = 0.0 - auVar43._12_4_ * 6.2831855;
        auVar66._0_4_ = -(uint)(auVar61._0_4_ < -1.5707964);
        auVar66._4_4_ = -(uint)(auVar61._4_4_ < -1.5707964);
        auVar66._8_4_ = -(uint)(auVar61._8_4_ < -1.5707964);
        auVar66._12_4_ = -(uint)(auVar61._12_4_ < -1.5707964);
        iVar26 = -(uint)(ABS(fVar74) == INFINITY);
        iVar34 = -(uint)(ABS(fVar76) == INFINITY);
        iVar35 = -(uint)(ABS(fVar78) == INFINITY);
        auVar38[0] = ~(byte)iVar26;
        auVar38[1] = ~(byte)((uint)iVar26 >> 8);
        auVar38[2] = ~(byte)((uint)iVar26 >> 0x10);
        auVar38[3] = ~(byte)((uint)iVar26 >> 0x18);
        auVar38[4] = ~(byte)iVar34;
        auVar38[5] = ~(byte)((uint)iVar34 >> 8);
        auVar38[6] = ~(byte)((uint)iVar34 >> 0x10);
        auVar38[7] = ~(byte)((uint)iVar34 >> 0x18);
        auVar38[8] = ~(byte)iVar35;
        auVar38[9] = ~(byte)((uint)iVar35 >> 8);
        auVar38[10] = ~(byte)((uint)iVar35 >> 0x10);
        auVar38[0xb] = ~(byte)((uint)iVar35 >> 0x18);
        auVar38[0xc] = 0xff;
        auVar38[0xd] = 0xff;
        auVar38[0xe] = 0xff;
        auVar38[0xf] = 0xff;
        auVar14._4_4_ = -3.1415927 - auVar61._4_4_;
        auVar14._0_4_ = -3.1415927 - auVar61._0_4_;
        auVar14._8_4_ = -3.1415927 - auVar61._8_4_;
        auVar14._12_4_ = -3.1415927 - auVar61._12_4_;
        auVar61 = auVar61 ^ (auVar61 ^ auVar14) & auVar66;
        auVar67._0_4_ = -(uint)(1.5707964 < auVar61._0_4_);
        auVar67._4_4_ = -(uint)(1.5707964 < auVar61._4_4_);
        auVar67._8_4_ = -(uint)(1.5707964 < auVar61._8_4_);
        auVar67._12_4_ = -(uint)(1.5707964 < auVar61._12_4_);
        auVar29._0_4_ =
             (int)((float)(~-(uint)(0.0 <= fVar74) & 0x80000000 ^ 0x3f000000) + fVar74 * 0.15915494)
        ;
        auVar29._4_4_ =
             (int)((float)(~-(uint)(0.0 <= fVar76) & 0x80000000 ^ 0x3f000000) + fVar76 * 0.15915494)
        ;
        auVar29._8_4_ =
             (int)((float)(~-(uint)(0.0 <= fVar78) & 0x80000000 ^ 0x3f000000) + fVar78 * 0.15915494)
        ;
        auVar29._12_4_ = 0;
        auVar43 = NEON_scvtf(auVar29,4);
        fVar74 = fVar74 - auVar43._0_4_ * 6.2831855;
        fVar76 = fVar76 - auVar43._4_4_ * 6.2831855;
        fVar78 = fVar78 - auVar43._8_4_ * 6.2831855;
        fVar25 = 1.5707964 - auVar43._12_4_ * 6.2831855;
        auVar15._4_4_ = 3.1415927 - auVar61._4_4_;
        auVar15._0_4_ = 3.1415927 - auVar61._0_4_;
        auVar15._8_4_ = 3.1415927 - auVar61._8_4_;
        auVar15._12_4_ = 3.1415927 - auVar61._12_4_;
        auVar61 = auVar61 ^ (auVar61 ^ auVar15) & auVar67;
        fVar51 = auVar61._0_4_;
        fVar50 = fVar51 * fVar51;
        fVar53 = auVar61._4_4_;
        fVar52 = fVar53 * fVar53;
        fVar54 = auVar61._8_4_;
        fVar70 = fVar54 * fVar54;
        fVar45 = auVar61._12_4_;
        fVar71 = fVar45 * fVar45;
        auVar30._0_4_ = -(uint)(fVar74 < -1.5707964);
        auVar30._4_4_ = -(uint)(fVar76 < -1.5707964);
        auVar30._8_4_ = -(uint)(fVar78 < -1.5707964);
        auVar30._12_4_ = -(uint)(fVar25 < -1.5707964);
        auVar57._0_4_ = -3.1415927 - fVar74;
        auVar57._4_4_ = -3.1415927 - fVar76;
        auVar57._8_4_ = -3.1415927 - fVar78;
        auVar57._12_4_ = -3.1415927 - fVar25;
        auVar13._4_4_ = fVar76;
        auVar13._0_4_ = fVar74;
        auVar13._8_4_ = fVar78;
        auVar13._12_4_ = fVar25;
        auVar31._4_4_ = fVar76;
        auVar31._0_4_ = fVar74;
        auVar31._8_4_ = fVar78;
        auVar31._12_4_ = fVar25;
        auVar31 = auVar31 ^ (auVar13 ^ auVar57) & auVar30;
        auVar23._8_4_ = 0x7fc00000;
        auVar23._0_8_ = 0x7fc000007fc00000;
        auVar23._12_4_ = 0x7fc00000;
        auVar49._0_4_ = -(uint)(1.5707964 < auVar31._0_4_);
        auVar49._4_4_ = -(uint)(1.5707964 < auVar31._4_4_);
        auVar49._8_4_ = -(uint)(1.5707964 < auVar31._8_4_);
        auVar49._12_4_ = -(uint)(1.5707964 < auVar31._12_4_);
        fVar25 = 3.1415927 - auVar31._4_4_;
        fVar33 = 3.1415927 - auVar31._8_4_;
        fVar36 = 3.1415927 - auVar31._12_4_;
        auVar43[4] = SUB41(fVar25,0);
        auVar43._0_4_ = 3.1415927 - auVar31._0_4_;
        auVar43[5] = (char)((uint)fVar25 >> 8);
        auVar43[6] = (char)((uint)fVar25 >> 0x10);
        auVar43[7] = (char)((uint)fVar25 >> 0x18);
        auVar43[8] = SUB41(fVar33,0);
        auVar43[9] = (char)((uint)fVar33 >> 8);
        auVar43[10] = (char)((uint)fVar33 >> 0x10);
        auVar43[0xb] = (char)((uint)fVar33 >> 0x18);
        auVar43[0xc] = SUB41(fVar36,0);
        auVar43[0xd] = (char)((uint)fVar36 >> 8);
        auVar43[0xe] = (char)((uint)fVar36 >> 0x10);
        auVar43[0xf] = (char)((uint)fVar36 >> 0x18);
        auVar31 = auVar31 ^ (auVar31 ^ auVar43) & auVar49;
        auVar43 = NEON_fmov(0x3f800000,4);
        fVar76 = auVar31._0_4_;
        fVar25 = fVar76 * fVar76;
        fVar78 = auVar31._4_4_;
        fVar33 = fVar78 * fVar78;
        fVar80 = auVar31._8_4_;
        fVar36 = fVar80 * fVar80;
        fVar46 = auVar31._12_4_;
        fVar74 = fVar46 * fVar46;
        auVar32._0_4_ =
             fVar76 * (auVar43._0_4_ +
                      fVar25 * (fVar25 * (fVar25 * (fVar25 * (fVar25 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar32._4_4_ =
             fVar78 * (auVar43._4_4_ +
                      fVar33 * (fVar33 * (fVar33 * (fVar33 * (fVar33 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar32._8_4_ =
             fVar80 * (auVar43._8_4_ +
                      fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar32._12_4_ =
             fVar46 * (auVar43._12_4_ +
                      fVar74 * (fVar74 * (fVar74 * (fVar74 * (fVar74 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar32 = auVar32 ^ (auVar32 ^ auVar23) & ~auVar38;
        auVar55[1] = ~(byte)((uint)iVar10 >> 8);
        auVar55[0] = ~(byte)iVar10;
        auVar55[2] = ~(byte)((uint)iVar10 >> 0x10);
        auVar55[3] = ~(byte)((uint)iVar10 >> 0x18);
        auVar55[4] = ~(byte)iVar11;
        auVar55[5] = ~(byte)((uint)iVar11 >> 8);
        auVar55[6] = ~(byte)((uint)iVar11 >> 0x10);
        auVar55[7] = ~(byte)((uint)iVar11 >> 0x18);
        auVar55[8] = ~(byte)iVar12;
        auVar55[9] = ~(byte)((uint)iVar12 >> 8);
        auVar55[10] = ~(byte)((uint)iVar12 >> 0x10);
        auVar55[0xb] = ~(byte)((uint)iVar12 >> 0x18);
        auVar55._12_4_ = 0;
        auVar39._0_4_ =
             fVar51 * (auVar43._0_4_ +
                      fVar50 * (fVar50 * (fVar50 * (fVar50 * (fVar50 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar39._4_4_ =
             fVar53 * (auVar43._4_4_ +
                      fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar39._8_4_ =
             fVar54 * (auVar43._8_4_ +
                      fVar70 * (fVar70 * (fVar70 * (fVar70 * (fVar70 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar39._12_4_ =
             fVar45 * (auVar43._12_4_ +
                      fVar71 * (fVar71 * (fVar71 * (fVar71 * (fVar71 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar39 = auVar39 ^ (auVar39 ^ auVar23) & ~auVar22;
        fVar74 = auVar39._0_4_;
        auVar23 = auVar23 ^ (auVar23 ^ auVar32 ^ (auVar32 ^ auVar43) & ~auVar55) & auVar22;
        fVar25 = auVar23._0_4_;
        fVar33 = auVar23._4_4_;
        fVar76 = auVar39._4_4_;
        fVar36 = auVar23._8_4_;
        fVar78 = auVar39._8_4_;
        uStack_dc = 0;
        local_e0 = 0;
        if ((ulong)puVar19[3] != 0) {
          local_e0 = *(undefined4 *)((long)piVar20 + (ulong)puVar19[3]);
        }
        auVar40._0_8_ =
             CONCAT44(fVar78 * fVar25 * fVar33 + fVar36 * fVar76 * fVar74 * fVar62,
                      fVar36 * fVar25 * fVar76 + fVar78 * fVar33 * fVar74 * (float)_DAT_03cab3a0);
        auVar40._8_4_ = fVar36 * fVar74 * fVar33 + fVar78 * fVar76 * fVar25 * (float)_UNK_03cab3a8;
        auVar40._12_4_ = fVar36 * fVar25 * fVar33 + fVar78 * fVar76 * fVar74 * fVar63;
        if ((ulong)puVar19[4] != 0) {
          uStack_dc = *(undefined4 *)((long)piVar20 + (ulong)puVar19[4]);
        }
        local_120[0] = 3;
        local_d8 = (long *)0x0;
        uStack_e8 = auVar40._8_8_;
        local_f0 = auVar40._0_8_;
        uVar17 = FUN_00e813ac(param_1,local_120);
        if ((local_d8 == (long *)0x0) || (local_d8[1] == 0)) goto LAB_00e80f64;
        plVar1 = local_d8 + 2;
        do {
          bVar16 = *plVar1 + -1 == 0;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          plVar18 = local_d8;
        } while (cVar5 != '\0');
      }
      if (bVar16) {
        (**(code **)(*plVar18 + 0x18))();
      }
      goto LAB_00e80f64;
    }
  }
LAB_00e8131c:
  uVar17 = 0;
LAB_00e80f64:
  return uVar17 & 1;
}


