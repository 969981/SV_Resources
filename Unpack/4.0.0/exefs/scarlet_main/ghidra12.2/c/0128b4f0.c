/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0128b4f0; name: FUN_0128b4f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0128b4f0(long *param_1)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  int iVar21;
  size_t sVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  uint *puVar27;
  int *piVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 *puVar31;
  long lVar32;
  byte *pbVar33;
  long lVar34;
  ulong uVar35;
  ushort *puVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  long lVar40;
  long *plVar41;
  long *plVar42;
  undefined8 *puVar43;
  long lVar44;
  long lVar45;
  undefined8 uVar46;
  ulong uVar47;
  long *plVar48;
  char *pcVar49;
  uint *puVar50;
  ulong uVar51;
  ulong uVar52;
  float fVar53;
  float fVar56;
  float fVar57;
  undefined1 auVar54 [16];
  float fVar58;
  undefined1 auVar55 [16];
  int iVar59;
  int iVar62;
  int iVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  float fVar69;
  float fVar70;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar72;
  float fVar74;
  float fVar75;
  undefined1 auVar73 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  ulong local_218;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  long local_d0;
  int *local_b8;
  char *pcStack_b0;
  size_t local_a8;
  long *local_a0;
  long *local_98;
  char *pcStack_90;
  size_t local_88;
  long *local_80;
  long *local_78;
  
  auVar77 = FUN_00cf8cd8();
  uVar37 = auVar77._0_8_;
  local_218 = uVar37 >> 0x28;
  if ((uVar37 >> 0x20 & 0xff) == 0) {
    uVar37 = 0;
  }
  else {
    if (auVar77._8_4_ == 0) {
      auVar77 = (**(code **)(*param_1 + 0x80))(param_1);
      local_218 = auVar77._0_8_ >> 0x28;
      uVar37 = auVar77._0_8_ >> 0x20;
      FUN_00cf8c04(param_1);
      uVar38 = uVar37;
    }
    else {
      uVar37 = uVar37 >> 0x20;
      uVar38 = 1;
    }
    if ((auVar77._8_4_ == 0) && ((uVar38 & 0xff) != 0)) {
      puVar50 = (uint *)param_1[0x3e];
      lVar44 = param_1[0x43];
      uVar7 = *puVar50;
      piVar1 = (int *)((long)puVar50 + (ulong)uVar7);
      puVar27 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      uVar38 = (ulong)*(uint *)((long)puVar27 + (ulong)*puVar27);
      lVar25 = param_1[0x42];
      lVar34 = lVar44 - lVar25 >> 4;
      if ((ulong)(lVar34 * -0x70a3d70a3d70a3d7) < uVar38) {
        uVar35 = uVar38 + lVar34 * 0x70a3d70a3d70a3d7;
        if ((ulong)((param_1[0x44] - lVar44 >> 4) * -0x70a3d70a3d70a3d7) < uVar35) {
          uVar35 = param_1[0x46];
          if (0x7ffffffffffffffe < uVar35) {
            uVar35 = 0x7fffffffffffffff;
          }
          if (uVar35 < uVar38) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar44 = param_1[0x44] - lVar25 >> 4;
          uVar30 = lVar44 * 0x1eb851eb851eb852;
          uVar52 = uVar38;
          if (uVar38 <= uVar30) {
            uVar52 = uVar30;
          }
          plVar23 = param_1 + 0x45;
          if (uVar35 >> 1 <= (ulong)(lVar44 * -0x70a3d70a3d70a3d7)) {
            uVar52 = uVar35;
          }
          if (uVar52 == 0) {
            lVar44 = 0;
          }
          else {
            lVar44 = (**(code **)(*(long *)*plVar23 + 0x10))((long *)*plVar23,uVar52 * 400,0x10);
            if (lVar44 == 0) {
              (**(code **)(*(long *)*plVar23 + 0xe8))();
            }
          }
          lVar32 = lVar44 + lVar34 * 0x10;
          lVar34 = uVar38 * 400 + lVar34 * -0x10;
          lVar25 = lVar32;
          do {
            FUN_0128cb20(plVar23,lVar25);
            lVar25 = lVar25 + 400;
            lVar34 = lVar34 + -400;
          } while (lVar34 != 0);
          lVar25 = param_1[0x42];
          lVar34 = param_1[0x43];
          if (lVar34 == lVar25) {
            lVar34 = lVar25;
          }
          else {
            do {
              lVar32 = lVar32 + -400;
              lVar34 = lVar34 + -400;
              FUN_0128d4a8(plVar23,lVar32,lVar34);
            } while (lVar25 != lVar34);
            lVar34 = param_1[0x42];
            lVar25 = param_1[0x43];
          }
          param_1[0x43] = lVar44 + uVar38 * 400;
          lVar40 = param_1[0x44];
          param_1[0x42] = lVar32;
          param_1[0x44] = lVar44 + uVar52 * 400;
          if ((lVar25 != lVar34) && (FUN_00faf2d8(lVar25 + -400), lVar25 + -400 != lVar34)) {
            do {
              FUN_00faf2d8(lVar25 + -800);
              lVar25 = lVar25 + -400;
            } while (lVar34 + 400 != lVar25);
          }
          if (lVar34 != 0) {
            plVar23 = (long *)*plVar23;
            uVar38 = (**(code **)(*plVar23 + 0xf8))(plVar23);
            if (((uVar38 & 1) == 0) || (lVar44 = FUN_00c4e600(), *(int *)(lVar44 + 0x12c8) < 1)) {
              (**(code **)(*plVar23 + 0x18))(plVar23,lVar34,lVar40 - lVar34,0x10);
            }
            else {
              FUN_00c48fe8(plVar23,lVar34,lVar40 - lVar34,0x10);
            }
          }
        }
        else {
          lVar25 = lVar44;
          if (uVar35 != 0) {
            lVar25 = lVar44 + uVar35 * 400;
            lVar34 = lVar34 * -0x10 + uVar38 * 400;
            do {
              FUN_0128cb20(param_1 + 0x45,lVar44);
              lVar44 = lVar44 + 400;
              lVar34 = lVar34 + -400;
            } while (lVar34 != 0);
          }
          param_1[0x43] = lVar25;
        }
      }
      else if (lVar34 * -0x70a3d70a3d70a3d7 != uVar38) {
        lVar25 = lVar25 + uVar38 * 400;
        while (lVar25 != lVar44) {
          lVar44 = lVar44 + -400;
          FUN_00faf2d8(lVar44);
        }
        param_1[0x43] = lVar25;
      }
      puVar27 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      uVar38 = (ulong)*(uint *)((long)puVar27 + (ulong)*puVar27);
      lVar44 = param_1[0x4a] - param_1[0x49] >> 3;
      uVar35 = lVar44 * 0x6db6db6db6db6db7;
      if (uVar35 < uVar38) {
        FUN_00f2e644(param_1 + 0x49,uVar38 + lVar44 * -0x6db6db6db6db6db7);
      }
      else if (uVar35 != uVar38) {
        plVar41 = (long *)(param_1[0x49] + uVar38 * 0x38);
        plVar23 = (long *)param_1[0x4a];
        while (plVar48 = plVar23, plVar41 != plVar48) {
          plVar23 = plVar48 + -7;
          lVar44 = *plVar23;
          if (lVar44 != 0) {
            lVar25 = plVar48[-6];
            if (lVar25 == lVar44) {
              lVar25 = lVar44;
            }
            else {
              do {
                lVar25 = lVar25 + -0x40;
                FUN_00faeeac(lVar25);
              } while (lVar44 != lVar25);
              lVar25 = *plVar23;
            }
            lVar34 = plVar48[-5];
            plVar42 = (long *)plVar48[-4];
            plVar48[-6] = lVar44;
            uVar38 = (**(code **)(*plVar42 + 0xf8))(plVar42);
            if (((uVar38 & 1) == 0) || (lVar44 = FUN_00c4e600(), *(int *)(lVar44 + 0x12c8) < 1)) {
              (**(code **)(*plVar42 + 0x18))(plVar42,lVar25,lVar34 - lVar25,8);
            }
            else {
              FUN_00c48fe8(plVar42,lVar25,lVar34 - lVar25,8);
            }
          }
        }
        param_1[0x4a] = (long)plVar41;
      }
      uVar19 = _UNK_03cab3a8;
      uVar18 = _DAT_03cab3a0;
      puVar39 = (undefined8 *)param_1[0x42];
      puVar26 = (undefined8 *)param_1[0x43];
      if (puVar39 != puVar26) {
        lVar44 = (long)puVar50 + (ulong)uVar7 + 0xd;
        lVar25 = 0;
        auVar54 = NEON_fmov(0x3f800000,4);
        do {
          uVar38 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1));
          puVar27 = (uint *)((long)piVar1 + uVar38);
          uVar35 = (ulong)*puVar27;
          puVar27 = (uint *)((long)puVar27 + lVar25 * 4 + uVar35 + 4);
          uVar52 = (ulong)*puVar27;
          lVar34 = param_1[0x49];
          piVar2 = (int *)((long)puVar27 + uVar52);
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
             (uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar30 == 0)) {
            lVar32 = 0;
          }
          else {
            puVar27 = (uint *)((long)piVar2 + uVar30);
            lVar32 = (long)puVar27 + (ulong)*puVar27;
          }
          sVar22 = strlen((char *)(lVar32 + 4));
          bVar8 = *(byte *)(lVar32 + 4);
          puVar31 = &DAT_cbf29ce484222645;
          if (bVar8 != 0) {
            puVar31 = &DAT_cbf29ce484222645;
            pbVar33 = (byte *)(lVar32 + 5);
            do {
              puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar33;
              pbVar33 = pbVar33 + 1;
            } while (bVar8 != 0);
          }
          puVar39[2] = sVar22;
          plVar23 = (long *)puVar39[3];
          puVar39[3] = 0;
          *puVar39 = puVar31;
          puVar39[1] = (char *)(lVar32 + 4);
          if (plVar23 != (long *)0x0) {
            (**(code **)(*plVar23 + 0x20))();
          }
          puVar39[3] = 0;
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
             (uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar30 == 0)) {
            lVar32 = 0;
          }
          else {
            puVar27 = (uint *)((long)piVar2 + uVar30);
            lVar32 = (long)puVar27 + (ulong)*puVar27;
          }
          sVar22 = strlen((char *)(lVar32 + 4));
          bVar8 = *(byte *)(lVar32 + 4);
          puVar31 = &DAT_cbf29ce484222645;
          if (bVar8 != 0) {
            puVar31 = &DAT_cbf29ce484222645;
            pbVar33 = (byte *)(lVar32 + 5);
            do {
              puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar8) * 0x100000001b3);
              bVar8 = *pbVar33;
              pbVar33 = pbVar33 + 1;
            } while (bVar8 != 0);
          }
          puVar39[6] = sVar22;
          plVar23 = (long *)puVar39[7];
          puVar39[7] = 0;
          puVar39[4] = puVar31;
          puVar39[5] = (char *)(lVar32 + 4);
          if (plVar23 != (long *)0x0) {
            (**(code **)(*plVar23 + 0x20))();
          }
          puVar39[7] = 0;
          lVar32 = (long)*piVar2;
          puVar36 = (ushort *)((long)piVar2 - lVar32);
          uVar9 = *puVar36;
          if (uVar9 < 9) {
LAB_0128c024:
            puVar27 = (uint *)0x0;
          }
          else {
            uVar10 = puVar36[4];
            puVar27 = (uint *)((long)piVar2 + (ulong)uVar10);
            if ((ulong)uVar10 == 0) {
              lVar40 = 0;
            }
            else {
              lVar40 = (long)puVar27 + (ulong)*puVar27;
            }
            if (uVar9 < 0x11) goto LAB_0128c008;
            bVar20 = false;
            if ((ulong)puVar36[8] == 0) {
LAB_0128b9e8:
              if ((lVar40 != 0) || (bVar20)) goto LAB_0128b9f8;
            }
            else {
              puVar50 = (uint *)((long)piVar2 + (ulong)puVar36[8]);
              piVar28 = (int *)((long)puVar50 + (ulong)*puVar50);
              puVar36 = (ushort *)((long)piVar28 - (long)*piVar28);
              uVar11 = *puVar36;
              if (uVar11 < 5) {
LAB_0128c008:
                bVar20 = false;
                goto LAB_0128b9e8;
              }
              if (puVar36[2] == 0) {
                if (6 < uVar11) {
                  if (puVar36[3] != 0) goto LAB_0128b9f8;
                  if (8 < uVar11) {
                    bVar20 = puVar36[4] != 0;
                    goto LAB_0128b9e8;
                  }
                }
                goto LAB_0128c008;
              }
LAB_0128b9f8:
              if (uVar10 != 0) {
                piVar28 = (int *)((long)puVar27 + (ulong)*puVar27);
                auVar14 = *(undefined1 (*) [12])
                           ((long)piVar28 + (ulong)*(ushort *)((long)piVar28 + (4 - (long)*piVar28))
                           );
                puVar39[9] = (ulong)auVar14._8_4_;
                puVar39[8] = auVar14._0_8_;
                if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
                  piVar28 = (int *)0x0;
                }
                else {
                  uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
                  piVar28 = (int *)0x0;
                  if (uVar30 != 0) {
                    puVar27 = (uint *)((long)piVar2 + uVar30);
                    piVar28 = (int *)((long)puVar27 + (ulong)*puVar27);
                  }
                }
                pfVar3 = (float *)((long)piVar28 +
                                  (ulong)*(ushort *)((long)piVar28 + (6 - (long)*piVar28)));
                auVar61._8_4_ = 0x7fc00000;
                auVar61._0_8_ = 0x7fc000007fc00000;
                auVar61._12_4_ = 0x7fc00000;
                auVar17._8_4_ = 0x7fc00000;
                auVar17._0_8_ = 0x7fc000007fc00000;
                auVar17._12_4_ = 0x7fc00000;
                auVar68._8_4_ = 0x7fc00000;
                auVar68._0_8_ = 0x7fc000007fc00000;
                auVar68._12_4_ = 0x7fc00000;
                auVar16._8_4_ = 0x7fc00000;
                auVar16._0_8_ = 0x7fc000007fc00000;
                auVar16._12_4_ = 0x7fc00000;
                auVar15._8_4_ = 0x7fc00000;
                auVar15._0_8_ = 0x7fc000007fc00000;
                auVar15._12_4_ = 0x7fc00000;
                fVar53 = pfVar3[2] * 0.5;
                fVar56 = *pfVar3 * 0.5;
                fVar57 = pfVar3[1] * 0.5;
                iVar21 = -(uint)(fVar53 == 0.0);
                iVar12 = -(uint)(fVar56 == 0.0);
                iVar13 = -(uint)(fVar57 == 0.0);
                fVar72 = fVar53 + 1.5707964;
                fVar74 = fVar56 + 1.5707964;
                fVar75 = fVar57 + 1.5707964;
                iVar59 = -(uint)(ABS(fVar53) == INFINITY);
                iVar62 = -(uint)(ABS(fVar56) == INFINITY);
                iVar63 = -(uint)(ABS(fVar57) == INFINITY);
                auVar60[0] = ~(byte)iVar59;
                auVar60[1] = ~(byte)((uint)iVar59 >> 8);
                auVar60[2] = ~(byte)((uint)iVar59 >> 0x10);
                auVar60[3] = ~(byte)((uint)iVar59 >> 0x18);
                auVar60[4] = ~(byte)iVar62;
                auVar60[5] = ~(byte)((uint)iVar62 >> 8);
                auVar60[6] = ~(byte)((uint)iVar62 >> 0x10);
                auVar60[7] = ~(byte)((uint)iVar62 >> 0x18);
                auVar60[8] = ~(byte)iVar63;
                auVar60[9] = ~(byte)((uint)iVar63 >> 8);
                auVar60[10] = ~(byte)((uint)iVar63 >> 0x10);
                auVar60[0xb] = ~(byte)((uint)iVar63 >> 0x18);
                auVar60[0xc] = 0xff;
                auVar60[0xd] = 0xff;
                auVar60[0xe] = 0xff;
                auVar60[0xf] = 0xff;
                auVar65._0_4_ =
                     (int)((float)(-(uint)(0.0 <= fVar53) & 0x80000000 ^ 0xbf000000) +
                          fVar53 * 0.15915494);
                auVar65._4_4_ =
                     (int)((float)(-(uint)(0.0 <= fVar56) & 0x80000000 ^ 0xbf000000) +
                          fVar56 * 0.15915494);
                auVar65._8_4_ =
                     (int)((float)(-(uint)(0.0 <= fVar57) & 0x80000000 ^ 0xbf000000) +
                          fVar57 * 0.15915494);
                auVar65._12_4_ = 0;
                auVar66 = NEON_scvtf(auVar65,4);
                fVar53 = fVar53 - auVar66._0_4_ * 6.2831855;
                fVar56 = fVar56 - auVar66._4_4_ * 6.2831855;
                fVar57 = fVar57 - auVar66._8_4_ * 6.2831855;
                fVar58 = 0.0 - auVar66._12_4_ * 6.2831855;
                fVar53 = (float)((uint)fVar53 ^
                                ((uint)fVar53 ^ (uint)(-3.1415927 - fVar53)) &
                                -(uint)(fVar53 < -1.5707964));
                fVar56 = (float)((uint)fVar56 ^
                                ((uint)fVar56 ^ (uint)(-3.1415927 - fVar56)) &
                                -(uint)(fVar56 < -1.5707964));
                fVar57 = (float)((uint)fVar57 ^
                                ((uint)fVar57 ^ (uint)(-3.1415927 - fVar57)) &
                                -(uint)(fVar57 < -1.5707964));
                fVar58 = (float)((uint)fVar58 ^
                                ((uint)fVar58 ^ (uint)(-3.1415927 - fVar58)) &
                                -(uint)(fVar58 < -1.5707964));
                fVar53 = (float)((uint)fVar53 ^
                                ((uint)fVar53 ^ (uint)(3.1415927 - fVar53)) &
                                -(uint)(1.5707964 < fVar53));
                fVar56 = (float)((uint)fVar56 ^
                                ((uint)fVar56 ^ (uint)(3.1415927 - fVar56)) &
                                -(uint)(1.5707964 < fVar56));
                fVar57 = (float)((uint)fVar57 ^
                                ((uint)fVar57 ^ (uint)(3.1415927 - fVar57)) &
                                -(uint)(1.5707964 < fVar57));
                fVar58 = (float)((uint)fVar58 ^
                                ((uint)fVar58 ^ (uint)(3.1415927 - fVar58)) &
                                -(uint)(1.5707964 < fVar58));
                fVar64 = fVar53 * fVar53;
                fVar69 = fVar56 * fVar56;
                fVar70 = fVar57 * fVar57;
                fVar71 = fVar58 * fVar58;
                iVar59 = -(uint)(ABS(fVar72) == INFINITY);
                iVar62 = -(uint)(ABS(fVar74) == INFINITY);
                iVar63 = -(uint)(ABS(fVar75) == INFINITY);
                auVar67[0] = ~(byte)iVar59;
                auVar67[1] = ~(byte)((uint)iVar59 >> 8);
                auVar67[2] = ~(byte)((uint)iVar59 >> 0x10);
                auVar67[3] = ~(byte)((uint)iVar59 >> 0x18);
                auVar67[4] = ~(byte)iVar62;
                auVar67[5] = ~(byte)((uint)iVar62 >> 8);
                auVar67[6] = ~(byte)((uint)iVar62 >> 0x10);
                auVar67[7] = ~(byte)((uint)iVar62 >> 0x18);
                auVar67[8] = ~(byte)iVar63;
                auVar67[9] = ~(byte)((uint)iVar63 >> 8);
                auVar67[10] = ~(byte)((uint)iVar63 >> 0x10);
                auVar67[0xb] = ~(byte)((uint)iVar63 >> 0x18);
                auVar67[0xc] = 0xff;
                auVar67[0xd] = 0xff;
                auVar67[0xe] = 0xff;
                auVar67[0xf] = 0xff;
                auVar55._0_4_ =
                     fVar53 * (auVar54._0_4_ +
                              fVar64 * (fVar64 * (fVar64 * (fVar64 * (fVar64 * -2.5052108e-08 +
                                                                     2.7557319e-06) + -0.0001984127)
                                                 + 0.008333334) + -0.16666667));
                auVar55._4_4_ =
                     fVar56 * (auVar54._4_4_ +
                              fVar69 * (fVar69 * (fVar69 * (fVar69 * (fVar69 * -2.5052108e-08 +
                                                                     2.7557319e-06) + -0.0001984127)
                                                 + 0.008333334) + -0.16666667));
                auVar55._8_4_ =
                     fVar57 * (auVar54._8_4_ +
                              fVar70 * (fVar70 * (fVar70 * (fVar70 * (fVar70 * -2.5052108e-08 +
                                                                     2.7557319e-06) + -0.0001984127)
                                                 + 0.008333334) + -0.16666667));
                auVar55._12_4_ =
                     fVar58 * (auVar54._12_4_ +
                              fVar71 * (fVar71 * (fVar71 * (fVar71 * (fVar71 * -2.5052108e-08 +
                                                                     2.7557319e-06) + -0.0001984127)
                                                 + 0.008333334) + -0.16666667));
                auVar55 = auVar55 ^ (auVar55 ^ auVar15) & ~auVar60;
                auVar76._0_4_ =
                     (int)((float)(-(uint)(0.0 <= fVar72) & 0x80000000 ^ 0xbf000000) +
                          fVar72 * 0.15915494);
                auVar76._4_4_ =
                     (int)((float)(-(uint)(0.0 <= fVar74) & 0x80000000 ^ 0xbf000000) +
                          fVar74 * 0.15915494);
                auVar76._8_4_ =
                     (int)((float)(-(uint)(0.0 <= fVar75) & 0x80000000 ^ 0xbf000000) +
                          fVar75 * 0.15915494);
                auVar76._12_4_ = 0;
                auVar66 = NEON_scvtf(auVar76,4);
                fVar72 = fVar72 - auVar66._0_4_ * 6.2831855;
                fVar74 = fVar74 - auVar66._4_4_ * 6.2831855;
                fVar75 = fVar75 - auVar66._8_4_ * 6.2831855;
                fVar56 = 1.5707964 - auVar66._12_4_ * 6.2831855;
                fVar72 = (float)((uint)fVar72 ^
                                ((uint)fVar72 ^ (uint)(-3.1415927 - fVar72)) &
                                -(uint)(fVar72 < -1.5707964));
                fVar74 = (float)((uint)fVar74 ^
                                ((uint)fVar74 ^ (uint)(-3.1415927 - fVar74)) &
                                -(uint)(fVar74 < -1.5707964));
                fVar75 = (float)((uint)fVar75 ^
                                ((uint)fVar75 ^ (uint)(-3.1415927 - fVar75)) &
                                -(uint)(fVar75 < -1.5707964));
                fVar56 = (float)((uint)fVar56 ^
                                ((uint)fVar56 ^ (uint)(-3.1415927 - fVar56)) &
                                -(uint)(fVar56 < -1.5707964));
                fVar72 = (float)((uint)fVar72 ^
                                ((uint)fVar72 ^ (uint)(3.1415927 - fVar72)) &
                                -(uint)(1.5707964 < fVar72));
                fVar74 = (float)((uint)fVar74 ^
                                ((uint)fVar74 ^ (uint)(3.1415927 - fVar74)) &
                                -(uint)(1.5707964 < fVar74));
                fVar75 = (float)((uint)fVar75 ^
                                ((uint)fVar75 ^ (uint)(3.1415927 - fVar75)) &
                                -(uint)(1.5707964 < fVar75));
                fVar56 = (float)((uint)fVar56 ^
                                ((uint)fVar56 ^ (uint)(3.1415927 - fVar56)) &
                                -(uint)(1.5707964 < fVar56));
                fVar57 = fVar72 * fVar72;
                fVar58 = fVar74 * fVar74;
                fVar64 = fVar75 * fVar75;
                fVar69 = fVar56 * fVar56;
                fVar53 = auVar55._0_4_;
                auVar73._0_4_ =
                     fVar72 * (auVar54._0_4_ +
                              fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * -2.5052108e-08 +
                                                                     2.7557319e-06) + -0.0001984127)
                                                 + 0.008333334) + -0.16666667));
                auVar73._4_4_ =
                     fVar74 * (auVar54._4_4_ +
                              fVar58 * (fVar58 * (fVar58 * (fVar58 * (fVar58 * -2.5052108e-08 +
                                                                     2.7557319e-06) + -0.0001984127)
                                                 + 0.008333334) + -0.16666667));
                auVar73._8_4_ =
                     fVar75 * (auVar54._8_4_ +
                              fVar64 * (fVar64 * (fVar64 * (fVar64 * (fVar64 * -2.5052108e-08 +
                                                                     2.7557319e-06) + -0.0001984127)
                                                 + 0.008333334) + -0.16666667));
                auVar73._12_4_ =
                     fVar56 * (auVar54._12_4_ +
                              fVar69 * (fVar69 * (fVar69 * (fVar69 * (fVar69 * -2.5052108e-08 +
                                                                     2.7557319e-06) + -0.0001984127)
                                                 + 0.008333334) + -0.16666667));
                fVar56 = auVar55._4_4_;
                auVar68 = auVar68 ^ (auVar16 ^ auVar73) & auVar67;
                auVar66[1] = ~(byte)((uint)iVar21 >> 8);
                auVar66[0] = ~(byte)iVar21;
                auVar66[2] = ~(byte)((uint)iVar21 >> 0x10);
                auVar66[3] = ~(byte)((uint)iVar21 >> 0x18);
                auVar66[4] = ~(byte)iVar12;
                auVar66[5] = ~(byte)((uint)iVar12 >> 8);
                auVar66[6] = ~(byte)((uint)iVar12 >> 0x10);
                auVar66[7] = ~(byte)((uint)iVar12 >> 0x18);
                auVar66[8] = ~(byte)iVar13;
                auVar66[9] = ~(byte)((uint)iVar13 >> 8);
                auVar66[10] = ~(byte)((uint)iVar13 >> 0x10);
                auVar66[0xb] = ~(byte)((uint)iVar13 >> 0x18);
                auVar66._12_4_ = 0;
                auVar61 = auVar61 ^ (auVar17 ^ auVar68 ^ (auVar68 ^ auVar54) & ~auVar66) & auVar60;
                fVar58 = auVar61._0_4_;
                fVar64 = auVar61._4_4_;
                fVar69 = auVar61._8_4_;
                fVar57 = auVar55._8_4_;
                local_200 = (float)uVar18;
                fStack_1fc = (float)((ulong)uVar18 >> 0x20);
                fStack_1f8 = (float)uVar19;
                fStack_1f4 = (float)((ulong)uVar19 >> 0x20);
                *(float *)(puVar39 + 0xb) =
                     fVar69 * fVar53 * fVar64 + fVar57 * fVar56 * fVar58 * fStack_1f8;
                *(float *)((long)puVar39 + 0x5c) =
                     fVar69 * fVar58 * fVar64 + fVar57 * fVar56 * fVar53 * fStack_1f4;
                *(float *)(puVar39 + 10) =
                     fVar69 * fVar58 * fVar56 + fVar57 * fVar64 * fVar53 * local_200;
                *(float *)((long)puVar39 + 0x54) =
                     fVar57 * fVar58 * fVar64 + fVar69 * fVar56 * fVar53 * fStack_1fc;
                puVar27 = (uint *)((long)piVar2 +
                                  (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
                piVar28 = (int *)((long)puVar27 + (ulong)*puVar27);
                puVar6 = (undefined8 *)
                         ((long)piVar28 + (ulong)*(ushort *)((long)piVar28 + (8 - (long)*piVar28)));
                uVar46 = *puVar6;
                *(undefined4 *)(puVar39 + 0xd) = *(undefined4 *)(puVar6 + 1);
                *(undefined4 *)((long)puVar39 + 0x6c) = 0;
                puVar39[0xc] = uVar46;
              }
              *(undefined1 *)(puVar39 + 0xe) = 1;
              lVar32 = (long)*piVar2;
              uVar9 = *(ushort *)((long)piVar2 - lVar32);
            }
            if ((uVar9 < 0xf) ||
               (uVar30 = (ulong)*(ushort *)((long)piVar2 + (0xe - lVar32)), uVar30 == 0))
            goto LAB_0128c024;
            puVar27 = (uint *)((long)piVar2 + uVar30);
            puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27);
          }
          plVar23 = puVar39 + 0x1e;
          lVar32 = *plVar23;
          uVar30 = (ulong)*puVar27;
          lVar40 = puVar39[0x1f];
          uVar47 = lVar40 - lVar32 >> 5;
          if (uVar47 < uVar30) {
            if ((ulong)(puVar39[0x20] - lVar40 >> 5) < uVar30 - uVar47) {
              uVar51 = puVar39[0x22];
              if (0x7ffffffffffffffe < uVar51) {
                uVar51 = 0x7fffffffffffffff;
              }
              if (uVar51 < uVar30) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar32 = puVar39[0x20] - lVar32;
              uVar29 = lVar32 >> 4;
              uVar5 = uVar30;
              if (uVar30 <= uVar29) {
                uVar5 = uVar29;
              }
              puVar6 = puVar39 + 0x21;
              if (uVar51 >> 1 <= (ulong)(lVar32 >> 5)) {
                uVar5 = uVar51;
              }
              if (uVar5 == 0) {
                lVar32 = 0;
              }
              else {
                lVar32 = (**(code **)(*(long *)*puVar6 + 0x10))((long *)*puVar6,uVar5 << 5,8);
                if (lVar32 == 0) {
                  (**(code **)(*(long *)*puVar6 + 0xe8))();
                }
              }
              local_d0 = lVar32 + uVar47 * 0x20;
              puVar43 = (undefined8 *)(local_d0 + 0x10);
              lVar40 = uVar30 * 0x20 + uVar47 * -0x20;
              do {
                uVar46 = *puVar6;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar21 = __cxa_guard_acquire(&DAT_04865a38), iVar21 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar24 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar24 == 0) {
                  puVar43[1] = 0;
                  puVar43[-2] = &DAT_cbf29ce484222645;
                  puVar43[-1] = &DAT_03c886bc;
                  *puVar43 = 0;
                }
                else {
                  if (0xf < *(ulong *)(lVar24 + 0x80)) goto LAB_0128ca88;
                  *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar46;
                  *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
                  puVar43[-2] = &DAT_cbf29ce484222645;
                  puVar43[-1] = &DAT_03c886bc;
                  *puVar43 = 0;
                  puVar43[1] = 0;
                  *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
                }
                puVar43 = puVar43 + 4;
                lVar40 = lVar40 + -0x20;
              } while (lVar40 != 0);
              lVar40 = puVar39[0x1e];
              lVar24 = puVar39[0x1f];
              if (lVar24 == lVar40) {
                lVar24 = lVar40;
              }
              else {
                do {
                  lVar24 = lVar24 + -0x20;
                  local_d0 = local_d0 + -0x20;
                  FUN_0128d28c(puVar6,local_d0,lVar24);
                } while (lVar40 != lVar24);
                lVar24 = puVar39[0x1e];
                lVar40 = puVar39[0x1f];
              }
              puVar39[0x1e] = local_d0;
              puVar39[0x1f] = lVar32 + uVar30 * 0x20;
              lVar45 = puVar39[0x20];
              puVar39[0x20] = lVar32 + uVar5 * 0x20;
              if (lVar40 != lVar24) {
                if (*(long **)(lVar40 + -8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar40 + -8) + 0x20))();
                }
                if (lVar40 + -0x20 != lVar24) {
                  do {
                    if (*(long **)(lVar40 + -0x28) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar40 + -0x28) + 0x20))();
                    }
                    lVar40 = lVar40 + -0x20;
                  } while (lVar24 + 0x20 != lVar40);
                }
              }
              if (lVar24 != 0) {
                plVar41 = (long *)*puVar6;
                uVar30 = (**(code **)(*plVar41 + 0xf8))(plVar41);
                if (((uVar30 & 1) == 0) || (lVar32 = FUN_00c4e600(), *(int *)(lVar32 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar41 + 0x18))(plVar41,lVar24,lVar45 - lVar24,8);
                }
                else {
                  FUN_00c48fe8(plVar41,lVar24,lVar45 - lVar24,8);
                }
              }
            }
            else {
              FUN_0128d37c(plVar23);
            }
          }
          else if (uVar30 < uVar47) {
            lVar32 = lVar32 + uVar30 * 0x20;
            if (lVar32 != lVar40) {
              if (*(long **)(lVar40 + -8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar40 + -8) + 0x20))();
              }
              if (lVar40 + -0x20 != lVar32) {
                if (*(long **)(lVar40 + -0x28) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar40 + -0x28) + 0x20))();
                }
                if (lVar40 + -0x40 != lVar32) {
                  do {
                    if (*(long **)(lVar40 + -0x48) != (long *)0x0) {
                      (**(code **)(**(long **)(lVar40 + -0x48) + 0x20))();
                    }
                    lVar40 = lVar40 + -0x20;
                  } while (lVar32 + 0x40 != lVar40);
                }
              }
            }
            puVar39[0x1f] = lVar32;
          }
          plVar48 = (long *)(lVar34 + lVar25 * 0x38);
          uVar30 = (ulong)*puVar27;
          plVar41 = (long *)(lVar34 + lVar25 * 0x38 + 8);
          lVar34 = *plVar41;
          uVar47 = lVar34 - *plVar48 >> 6;
          if (uVar47 < uVar30) {
            FUN_00f2e130(plVar48,uVar30 - uVar47);
          }
          else if (uVar47 != uVar30) {
            lVar32 = *plVar48 + uVar30 * 0x40;
            while (lVar32 != lVar34) {
              lVar34 = lVar34 + -0x40;
              FUN_00faeeac(lVar34);
            }
            *plVar41 = lVar32;
          }
          puVar50 = puVar27 + 1;
          if (*puVar27 != 0) {
            puVar27 = puVar50 + *puVar27;
            lVar34 = 0;
            do {
              piVar28 = (int *)((long)puVar50 + (ulong)*puVar50);
              lVar32 = *plVar23;
              if ((*(ushort *)((long)piVar28 - (long)*piVar28) < 5) ||
                 (uVar30 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[2], uVar30 == 0)) {
                lVar40 = 0;
              }
              else {
                puVar4 = (uint *)((long)piVar28 + uVar30);
                lVar40 = (long)puVar4 + (ulong)*puVar4;
              }
              sVar22 = strlen((char *)(lVar40 + 4));
              bVar8 = *(byte *)(lVar40 + 4);
              puVar31 = &DAT_cbf29ce484222645;
              if (bVar8 != 0) {
                puVar31 = &DAT_cbf29ce484222645;
                pbVar33 = (byte *)(lVar40 + 5);
                do {
                  puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar8) * 0x100000001b3);
                  bVar8 = *pbVar33;
                  pbVar33 = pbVar33 + 1;
                } while (bVar8 != 0);
              }
              puVar6 = (undefined8 *)(lVar32 + lVar34 * 0x20);
              *puVar6 = puVar31;
              puVar6[1] = (char *)(lVar40 + 4);
              puVar6[2] = sVar22;
              plVar42 = puVar6 + 3;
              plVar41 = (long *)*plVar42;
              *plVar42 = 0;
              if (plVar41 != (long *)0x0) {
                (**(code **)(*plVar41 + 0x20))();
              }
              *plVar42 = 0;
              if ((*(ushort *)((long)piVar28 - (long)*piVar28) < 7) ||
                 (uVar30 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[3], uVar30 == 0)) {
                lVar32 = 0;
              }
              else {
                puVar4 = (uint *)((long)piVar28 + uVar30);
                lVar32 = (long)puVar4 + (ulong)*puVar4;
              }
              local_a8 = strlen((char *)(lVar32 + 4));
              bVar8 = *(byte *)(lVar32 + 4);
              local_b8 = (int *)&DAT_cbf29ce484222645;
              if (bVar8 != 0) {
                local_b8 = (int *)&DAT_cbf29ce484222645;
                pbVar33 = (byte *)(lVar32 + 5);
                do {
                  local_b8 = (int *)(((ulong)local_b8 ^ (ulong)bVar8) * 0x100000001b3);
                  bVar8 = *pbVar33;
                  pbVar33 = pbVar33 + 1;
                } while (bVar8 != 0);
              }
              local_a0 = (long *)0x0;
              pcStack_b0 = (char *)(lVar32 + 4);
              FUN_00f2b7b8(&local_98,param_1 + 8,&local_b8,&DAT_03c886bc);
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              lVar32 = param_1[0x2d];
              if (lVar32 == 0) {
                lVar32 = param_1[1];
              }
              FUN_00f2babc(*plVar48 + lVar34 * 0x40,0,&local_98,0,lVar32);
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              lVar34 = lVar34 + 1;
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x20))();
              }
              puVar50 = puVar50 + 1;
            } while (puVar50 != puVar27);
          }
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) ||
             (uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar30 == 0)) {
            puVar27 = (uint *)0x0;
          }
          else {
            puVar27 = (uint *)((long)piVar2 + uVar30);
            puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27);
          }
          FUN_00f2b504(puVar39 + 0x10,*puVar27);
          if (*puVar27 != 0) {
            uVar30 = 0;
            do {
              piVar28 = (int *)((long)(puVar27 + uVar30 + 1) + (ulong)puVar27[uVar30 + 1]);
              if ((*(ushort *)((long)piVar28 - (long)*piVar28) < 5) ||
                 (uVar47 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[2], uVar47 == 0)) {
                lVar34 = 0;
              }
              else {
                puVar50 = (uint *)((long)piVar28 + uVar47);
                lVar34 = (long)puVar50 + (ulong)*puVar50;
              }
              pcVar49 = (char *)(lVar34 + 4);
              sVar22 = strlen(pcVar49);
              bVar8 = *(byte *)(lVar34 + 4);
              plVar23 = (long *)&DAT_cbf29ce484222645;
              if (bVar8 != 0) {
                plVar23 = (long *)&DAT_cbf29ce484222645;
                pbVar33 = (byte *)(lVar34 + 5);
                do {
                  plVar23 = (long *)(((ulong)plVar23 ^ (ulong)bVar8) * 0x100000001b3);
                  bVar8 = *pbVar33;
                  pbVar33 = pbVar33 + 1;
                } while (bVar8 != 0);
              }
              local_80 = (long *)0x0;
              puVar6 = (undefined8 *)puVar39[0x11];
              local_98 = plVar23;
              pcStack_90 = pcVar49;
              local_88 = sVar22;
              if (puVar6 < (undefined8 *)puVar39[0x12]) {
                uVar46 = puVar39[0x13];
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar21 = __cxa_guard_acquire(&DAT_04865a38), iVar21 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar34 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar34 == 0) {
                  plVar41 = (long *)0x0;
                }
                else {
                  if (0xf < *(ulong *)(lVar34 + 0x80)) goto LAB_0128ca88;
                  *(undefined8 *)(lVar34 + *(ulong *)(lVar34 + 0x80) * 8) = uVar46;
                  *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + 1;
                  plVar41 = local_80;
                  plVar23 = local_98;
                  pcVar49 = pcStack_90;
                  sVar22 = local_88;
                }
                *puVar6 = plVar23;
                puVar6[1] = pcVar49;
                puVar6[2] = sVar22;
                local_80 = (long *)0x0;
                puVar6[3] = plVar41;
                if (lVar34 != 0) {
                  *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + -1;
                }
                puVar39[0x11] = puVar6 + 4;
              }
              else {
                FUN_0128d884(puVar39 + 0x10,&local_98);
                if (local_80 != (long *)0x0) {
                  (**(code **)(*local_80 + 0x20))();
                }
              }
              uVar30 = uVar30 + 1;
            } while (uVar30 < *puVar27);
          }
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) ||
             (uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6], uVar30 == 0)) {
            puVar27 = (uint *)0x0;
          }
          else {
            puVar27 = (uint *)((long)piVar2 + uVar30);
            puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27);
          }
          FUN_00f2b504(puVar39 + 0x17,*puVar27);
          if (*puVar27 != 0) {
            uVar30 = 0;
            do {
              piVar28 = (int *)((long)(puVar27 + uVar30 + 1) + (ulong)puVar27[uVar30 + 1]);
              if ((*(ushort *)((long)piVar28 - (long)*piVar28) < 5) ||
                 (uVar47 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[2], uVar47 == 0)) {
                lVar34 = 0;
              }
              else {
                puVar50 = (uint *)((long)piVar28 + uVar47);
                lVar34 = (long)puVar50 + (ulong)*puVar50;
              }
              pcVar49 = (char *)(lVar34 + 4);
              sVar22 = strlen(pcVar49);
              bVar8 = *(byte *)(lVar34 + 4);
              plVar23 = (long *)&DAT_cbf29ce484222645;
              if (bVar8 != 0) {
                plVar23 = (long *)&DAT_cbf29ce484222645;
                pbVar33 = (byte *)(lVar34 + 5);
                do {
                  plVar23 = (long *)(((ulong)plVar23 ^ (ulong)bVar8) * 0x100000001b3);
                  bVar8 = *pbVar33;
                  pbVar33 = pbVar33 + 1;
                } while (bVar8 != 0);
              }
              local_80 = (long *)0x0;
              puVar6 = (undefined8 *)puVar39[0x18];
              local_98 = plVar23;
              pcStack_90 = pcVar49;
              local_88 = sVar22;
              if (puVar6 < (undefined8 *)puVar39[0x19]) {
                uVar46 = puVar39[0x1a];
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar21 = __cxa_guard_acquire(&DAT_04865a38), iVar21 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar34 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar34 == 0) {
                  plVar41 = (long *)0x0;
                }
                else {
                  if (0xf < *(ulong *)(lVar34 + 0x80)) {
LAB_0128ca88:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(undefined8 *)(lVar34 + *(ulong *)(lVar34 + 0x80) * 8) = uVar46;
                  *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + 1;
                  plVar41 = local_80;
                  plVar23 = local_98;
                  pcVar49 = pcStack_90;
                  sVar22 = local_88;
                }
                *puVar6 = plVar23;
                puVar6[1] = pcVar49;
                puVar6[2] = sVar22;
                local_80 = (long *)0x0;
                puVar6[3] = plVar41;
                if (lVar34 != 0) {
                  *(long *)(lVar34 + 0x80) = *(long *)(lVar34 + 0x80) + -1;
                }
                puVar39[0x18] = puVar6 + 4;
              }
              else {
                FUN_0128d884(puVar39 + 0x17,&local_98);
                if (local_80 != (long *)0x0) {
                  (**(code **)(*local_80 + 0x20))();
                }
              }
              uVar30 = uVar30 + 1;
            } while (uVar30 < *puVar27);
          }
          if ((0x12 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
             (uVar30 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar30 != 0)) {
            uVar47 = (ulong)*(uint *)((long)piVar2 + uVar30);
            puVar27 = (uint *)((long)((long)piVar2 + uVar30) + uVar47);
            if (*puVar27 != 0) {
              uVar51 = 0;
              lVar34 = lVar44 + uVar47 + uVar30 + uVar52 + uVar35 + uVar38;
              do {
                uVar38 = (ulong)puVar27[uVar51 + 1];
                local_b8 = (int *)((long)(puVar27 + uVar51 + 1) + uVar38);
                if ((*(ushort *)((long)local_b8 - (long)*local_b8) < 5) ||
                   (uVar35 = (ulong)((ushort *)((long)local_b8 - (long)*local_b8))[2], uVar35 == 0))
                {
                  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                     (iVar21 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar21 != 0)) {
                    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3e28);
                  }
                  local_98 = *(long **)PTR_DAT_047d3e30;
                  pcStack_90 = *(char **)(PTR_DAT_047d3e30 + 8);
                  local_88 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
                  local_80 = *(long **)(PTR_DAT_047d3e30 + 0x18);
                  if (local_80 != (long *)0x0) {
                    (**(code **)(*local_80 + 0x18))();
                  }
                }
                else {
                  puVar50 = (uint *)((long)local_b8 + uVar35);
                  uVar52 = (ulong)*puVar50;
                  pcVar49 = (char *)((long)puVar50 + uVar52 + 4);
                  local_88 = strlen(pcVar49);
                  bVar8 = *(byte *)((long)puVar50 + uVar52 + 4);
                  local_98 = (long *)&DAT_cbf29ce484222645;
                  if (bVar8 != 0) {
                    local_98 = (long *)&DAT_cbf29ce484222645;
                    pbVar33 = (byte *)(lVar34 + uVar52 + uVar35 + uVar38);
                    do {
                      local_98 = (long *)(((ulong)local_98 ^ (ulong)bVar8) * 0x100000001b3);
                      bVar8 = *pbVar33;
                      pbVar33 = pbVar33 + 1;
                    } while (bVar8 != 0);
                  }
                  local_80 = (long *)0x0;
                  pcStack_90 = pcVar49;
                }
                FUN_0128d684(puVar39 + 0x25,&local_98,&local_b8);
                if (local_80 != (long *)0x0) {
                  (**(code **)(*local_80 + 0x20))();
                }
                uVar51 = uVar51 + 1;
                lVar34 = lVar34 + 4;
              } while (uVar51 < *puVar27);
            }
          }
          puVar39[0xf] = piVar2;
          puVar39 = puVar39 + 0x32;
          lVar25 = lVar25 + 1;
          lVar44 = lVar44 + 4;
        } while (puVar39 != puVar26);
      }
    }
  }
  auVar54._0_8_ = local_218 << 0x28 | auVar77._0_8_ & 0xffffffff | (uVar37 & 0xff) << 0x20;
  auVar54._8_8_ = auVar77._8_8_ & 0xffffffff;
  return auVar54;
}


