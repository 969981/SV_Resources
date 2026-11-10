/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0082eb78; name: FUN_0082eb78
 */


void FUN_0082eb78(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,undefined8 *param_7,byte param_8,long param_9)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  undefined *puVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  int iVar17;
  ulong uVar18;
  float *pfVar19;
  float *pfVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined1 auVar37 [12];
  undefined1 auVar38 [16];
  undefined8 local_26d0;
  float fStack_26c8;
  float fStack_26c4;
  float local_26c0;
  float fStack_26bc;
  float fStack_26b8;
  float fStack_26b4;
  undefined8 local_26b0;
  undefined8 local_26a8;
  undefined8 local_26a0;
  undefined8 uStack_2698;
  undefined8 local_2690;
  undefined8 uStack_2688;
  long local_2680;
  undefined1 local_2678;
  undefined8 local_2670;
  undefined8 uStack_2668;
  undefined8 local_2660;
  undefined8 uStack_2658;
  undefined8 local_2650;
  undefined8 uStack_2648;
  undefined4 local_2640;
  undefined8 local_263c;
  int local_2630;
  uint uStack_262c;
  undefined8 local_2628;
  undefined8 uStack_2620;
  long local_2618;
  undefined4 *puStack_2610;
  long local_2608;
  long lStack_2600;
  long local_25f8;
  undefined8 uStack_25f0;
  undefined8 local_25e8;
  undefined8 local_25e0;
  undefined8 uStack_25d8;
  undefined8 local_25d0;
  undefined8 uStack_25c8;
  undefined8 local_25c0;
  undefined8 uStack_25b8;
  undefined8 local_25b0;
  undefined8 uStack_25a8;
  byte local_25a0;
  long local_2598;
  float local_2590;
  float fStack_258c;
  float fStack_2588;
  float fStack_2584;
  float local_2580;
  float fStack_257c;
  float fStack_2578;
  float fStack_2574;
  float local_2570;
  float fStack_256c;
  float fStack_2568;
  float fStack_2564;
  undefined8 local_2560;
  undefined8 uStack_2558;
  undefined1 auStack_2550 [56];
  undefined8 local_2518;
  undefined8 local_2510;
  undefined8 uStack_2508;
  undefined8 uStack_2500;
  undefined8 uStack_24f8;
  undefined1 local_24f0 [8];
  float local_24e8 [754];
  undefined4 local_1920 [2];
  undefined1 *local_1918;
  undefined8 local_1910;
  undefined8 local_1908;
  undefined8 local_1900;
  undefined8 local_18e0;
  undefined8 uStack_18d8;
  undefined8 local_18d0;
  undefined8 uStack_18c8;
  undefined8 local_18c0;
  undefined8 uStack_18b8;
  undefined8 local_18b0;
  undefined8 uStack_18a8;
  undefined8 local_18a0;
  undefined8 uStack_1898;
  undefined8 local_1890;
  undefined4 local_1888;
  undefined8 local_1880;
  undefined8 uStack_1878;
  float local_1870;
  float fStack_186c;
  float fStack_1868;
  float fStack_1864;
  float local_1860;
  float fStack_185c;
  float fStack_1858;
  float fStack_1854;
  undefined8 local_1850;
  undefined8 uStack_1848;
  
  param_8 = param_8 & 1;
  lVar22 = 0;
  if ((*(ushort *)(*(long *)(param_2 + 0x38) + 0x1a) & 1) != 0) {
    lVar22 = *(long *)(param_2 + 0x38);
  }
  plVar21 = (long *)(param_4 + 0x48);
  local_1918 = (undefined1 *)0x0;
  local_1910 = 0;
  local_1908 = 0;
  local_1900 = 0;
  local_1920[0] = 7;
  lVar4 = 0;
  if (*plVar21 != 0) {
    lVar4 = *plVar21 + (long)plVar21;
  }
  lVar2 = lVar4 + 0x20;
  iVar17 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar22 + 0x18) * 0x200 + 0xa8))
                     (lVar22,local_1920,local_24f0,local_1920);
  if ((-1 < iVar17) && (*(char *)(param_3 + 0x30) != '\0')) {
    uVar18 = local_1910 & 0xffffffff;
    if (0 < (int)local_1910) {
      fVar23 = *(float *)(param_3 + 0x40);
      fVar29 = *(float *)(param_3 + 0x44);
      fVar24 = *(float *)(param_3 + 0x48);
      auVar38 = *(undefined1 (*) [16])(param_3 + 0x50);
      pfVar19 = local_24e8;
      pfVar20 = (float *)(local_1918 + 8);
      do {
        uVar18 = uVar18 - 1;
        fVar36 = *pfVar20;
        *(ulong *)(pfVar19 + -2) =
             CONCAT44(auVar38._4_4_ + fVar29 * (float)((ulong)*(undefined8 *)(pfVar20 + -2) >> 0x20)
                      ,auVar38._0_4_ + fVar23 * (float)*(undefined8 *)(pfVar20 + -2));
        *pfVar19 = auVar38._8_4_ + fVar24 * fVar36;
        pfVar19 = pfVar19 + 3;
        pfVar20 = pfVar20 + 3;
      } while (uVar18 != 0);
    }
    local_1918 = local_24f0;
    local_1910 = CONCAT44(*(undefined4 *)(param_3 + 0x38),(int)local_1910);
    local_1908 = 0;
    local_1900 = 0;
  }
  bVar5 = *(byte *)(param_9 + 8);
  uStack_262c = bVar5 & 4;
  lVar22 = 0;
  if (*plVar21 != 0) {
    lVar22 = *plVar21 + (long)plVar21;
  }
  cVar6 = *(char *)(lVar22 + 0x108);
  local_2680 = lVar2;
  uStack_2620 = param_1;
  local_2618 = param_2;
  local_2608 = param_3;
  lStack_2600 = param_4;
  local_25f8 = param_6;
  uStack_25f0 = param_5;
  local_25a0 = param_8;
  if (cVar6 == '\0' && *(char *)(param_6 + 0x30) != '\0') {
    local_2690 = 0;
    uStack_2688 = 0;
    local_26a0 = 0;
    uStack_2698 = 0;
    local_26d0 = PTR_DAT_047d1a90 + 0x10;
    local_2628 = *(undefined8 *)(param_6 + 0x28);
    if ((bVar5 & 4) == 0) {
      local_2678 = *(undefined1 *)(lVar4 + 0x5c);
    }
    else {
      local_2678 = 0;
    }
    local_2670 = 0;
    uStack_2668 = 0;
    local_2640 = 0;
    local_2660 = 0;
    uStack_2658 = 0;
    local_2650 = 0;
    uStack_2648 = 0;
    local_263c = 0xffffffffffffffff;
    local_26c0 = *(float *)(lVar4 + 0x30);
    fStack_26bc = *(float *)(lVar4 + 0x34);
    fStack_26b8 = *(float *)(lVar4 + 0x38);
    fStack_26b4 = *(float *)(lVar4 + 0x3c);
    local_26a8 = CONCAT44((*(float *)(lVar4 + 0x4c) - fStack_26b4) *
                          (float)((ulong)*(undefined8 *)(PTR_DAT_047d1a48 + 8) >> 0x20),
                          (*(float *)(lVar4 + 0x48) - fStack_26b8) *
                          (float)*(undefined8 *)(PTR_DAT_047d1a48 + 8));
    local_26b0 = CONCAT44((*(float *)(lVar4 + 0x44) - fStack_26bc) *
                          (float)((ulong)*(undefined8 *)PTR_DAT_047d1a48 >> 0x20),
                          (*(float *)(lVar4 + 0x40) - local_26c0) *
                          (float)*(undefined8 *)PTR_DAT_047d1a48);
    puStack_2610 = local_1920;
    local_2630 = 0x20 - *(int *)(lVar4 + 0x54);
    local_25e0 = *param_7;
    uStack_25d8 = param_7[1];
    local_25d0 = param_7[2];
    uStack_25c8 = param_7[3];
    local_25c0 = param_7[4];
    uStack_25b8 = param_7[5];
    local_25b0 = param_7[6];
    uStack_25a8 = param_7[7];
    local_2598 = param_9;
    pfVar19 = *(float **)(param_3 + 0x20);
    fVar23 = *(float *)(param_3 + 0x40);
    fStack_1864 = *(float *)(param_3 + 0x44);
    fStack_1854 = *(float *)(param_3 + 0x48);
    uStack_1878 = CONCAT44(pfVar19[3] * fVar23,pfVar19[2] * fVar23);
    local_1880 = (float *)CONCAT44(pfVar19[1] * fVar23,*pfVar19 * fVar23);
    local_1870 = pfVar19[4] * fStack_1864;
    fStack_186c = pfVar19[5] * fStack_1864;
    fStack_1868 = pfVar19[6] * fStack_1864;
    fStack_1864 = pfVar19[7] * fStack_1864;
    local_1860 = pfVar19[8] * fStack_1854;
    fStack_185c = pfVar19[9] * fStack_1854;
    fStack_1858 = pfVar19[10] * fStack_1854;
    fStack_1854 = pfVar19[0xb] * fStack_1854;
    auVar38 = *(undefined1 (*) [16])(param_3 + 0x50);
    auVar26._0_8_ = CONCAT44(pfVar19[0xd] + auVar38._4_4_,pfVar19[0xc] + auVar38._0_4_);
    auVar26._8_4_ = pfVar19[0xe] + auVar38._8_4_;
    auVar26._12_4_ = pfVar19[0xf] + auVar38._12_4_;
    uStack_1848 = auVar26._8_8_;
    local_1850 = auVar26._0_8_;
    (**(code **)(*(long *)PTR_DAT_047d19f0 +
                 (ulong)*(byte *)(*(long *)(param_2 + 0x38) + 0x18) * 0x200 + 0x18))
              (*(long *)(param_2 + 0x38),&local_1880,auStack_2550);
    pfVar19 = *(float **)(param_6 + 0x20);
    fStack_2584 = *(float *)(param_6 + 0x40);
    fStack_2574 = *(float *)(param_6 + 0x44);
    fStack_2564 = *(float *)(param_6 + 0x48);
    local_2590 = *pfVar19 * fStack_2584;
    fStack_258c = pfVar19[1] * fStack_2584;
    fStack_2588 = pfVar19[2] * fStack_2584;
    fStack_2584 = pfVar19[3] * fStack_2584;
    local_2580 = pfVar19[4] * fStack_2574;
    fStack_257c = pfVar19[5] * fStack_2574;
    fStack_2578 = pfVar19[6] * fStack_2574;
    fStack_2574 = pfVar19[7] * fStack_2574;
    local_2570 = pfVar19[8] * fStack_2564;
    fStack_256c = pfVar19[9] * fStack_2564;
    fStack_2568 = pfVar19[10] * fStack_2564;
    fStack_2564 = pfVar19[0xb] * fStack_2564;
    auVar38 = *(undefined1 (*) [16])(param_6 + 0x50);
    local_1880 = &local_1870;
    auVar27._0_8_ = CONCAT44(pfVar19[0xd] + auVar38._4_4_,pfVar19[0xc] + auVar38._0_4_);
    auVar27._8_4_ = pfVar19[0xe] + auVar38._8_4_;
    auVar27._12_4_ = pfVar19[0xf] + auVar38._12_4_;
    uStack_2558 = auVar27._8_8_;
    uStack_1878 = -0x7fffff8000000000;
    local_2560 = auVar27._0_8_;
    FUN_0083ed48(lVar2,&local_1880,&local_26d0);
    uVar16 = uStack_1878._4_4_;
  }
  else {
    lVar22 = *(long *)(param_2 + 0x38);
    if (*(char *)(param_3 + 0x30) == '\0') {
      auVar38 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x60);
      if (*(char *)(param_6 + 0x30) == '\0') {
        uStack_18d8 = auVar38._8_8_;
        local_18e0 = auVar38._0_8_;
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar22 + 0x18) * 0x200 + 0x18))
                  (lVar22,param_7,&local_26d0);
        auVar37 = auVar38._0_12_;
      }
      else {
        fVar23 = auVar38._0_4_ / *(float *)(param_6 + 0x40);
        fVar29 = auVar38._4_4_ / *(float *)(param_6 + 0x44);
        fVar24 = auVar38._8_4_ / *(float *)(param_6 + 0x48);
        fVar36 = auVar38._12_4_ / *(float *)(param_6 + 0x4c);
        uStack_18d8 = CONCAT44(fVar36,fVar24);
        local_18e0 = (undefined8 *)CONCAT44(fVar29,fVar23);
        fVar23 = ABS(fVar23);
        fVar29 = ABS(fVar29);
        auVar38._0_8_ = CONCAT44(fVar29,fVar23);
        auVar38._8_4_ = ABS(fVar24);
        auVar38._12_4_ = ABS(fVar36);
        if ((lVar22 == 0) || ((*(ushort *)(lVar22 + 0x1a) & 1) == 0)) {
          (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar22 + 0x18) * 0x200 + 0x18))
                    (lVar22,param_7,&local_26d0);
          local_26d0._0_4_ = (float)local_26d0 * (float)local_18e0;
          local_26d0._4_4_ = local_26d0._4_4_ * local_18e0._4_4_;
          fStack_26c8 = fStack_26c8 * (float)uStack_18d8;
          fStack_26c4 = fStack_26c4 * uStack_18d8._4_4_;
          auVar13._8_8_ = auVar38._8_8_;
          auVar13._0_8_ = auVar38._0_8_;
          auVar37 = auVar13._0_12_;
          fVar23 = (float)local_18e0 * local_26c0;
          fVar29 = local_18e0._4_4_ * fStack_26bc;
          fVar24 = (float)uStack_18d8 * fStack_26b8;
          fVar36 = uStack_18d8._4_4_ * fStack_26b4;
          local_26c0 = (float)((uint)fVar23 ^
                              ((uint)fVar23 ^ (uint)(float)local_26d0) &
                              -(uint)((float)local_18e0 < 0.0));
          fStack_26bc = (float)((uint)fVar29 ^
                               ((uint)fVar29 ^ (uint)local_26d0._4_4_) &
                               -(uint)(local_18e0._4_4_ < 0.0));
          fStack_26b8 = (float)((uint)fVar24 ^
                               ((uint)fVar24 ^ (uint)fStack_26c8) &
                               -(uint)((float)uStack_18d8 < 0.0));
          fStack_26b4 = (float)((uint)fVar36 ^
                               ((uint)fVar36 ^ (uint)fStack_26c4) & -(uint)(uStack_18d8._4_4_ < 0.0)
                               );
          local_26d0._0_4_ =
               (float)((uint)(float)local_26d0 ^
                      ((uint)(float)local_26d0 ^ (uint)fVar23) & -(uint)((float)local_18e0 < 0.0));
          local_26d0._4_4_ =
               (float)((uint)local_26d0._4_4_ ^
                      ((uint)local_26d0._4_4_ ^ (uint)fVar29) & -(uint)(local_18e0._4_4_ < 0.0));
          fStack_26c8 = (float)((uint)fStack_26c8 ^
                               ((uint)fStack_26c8 ^ (uint)fVar24) &
                               -(uint)((float)uStack_18d8 < 0.0));
          fStack_26c4 = (float)((uint)fStack_26c4 ^
                               ((uint)fStack_26c4 ^ (uint)fVar36) & -(uint)(uStack_18d8._4_4_ < 0.0)
                               );
        }
        else {
          FUN_02ee5160(lVar22,param_7,&local_26d0);
          auVar11._8_8_ = auVar38._8_8_;
          auVar11._0_8_ = auVar38._0_8_;
          auVar37 = auVar11._0_12_;
          fVar36 = (float)local_18e0 * local_26c0;
          fVar32 = local_18e0._4_4_ * fStack_26bc;
          fVar33 = (float)uStack_18d8 * fStack_26b8;
          fVar34 = uStack_18d8._4_4_ * fStack_26b4;
          local_26d0._0_4_ = (float)local_26d0 * (float)local_18e0;
          local_26d0._4_4_ = local_26d0._4_4_ * local_18e0._4_4_;
          fStack_26c8 = fStack_26c8 * (float)uStack_18d8;
          fStack_26c4 = fStack_26c4 * uStack_18d8._4_4_;
          fVar24 = *(float *)(lVar22 + 0x20);
          uVar30 = CONCAT44(fVar29 * fVar24,fVar23 * fVar24);
          uVar30 = NEON_fmaxp(uVar30,uVar30,4);
          uVar30 = NEON_fmax(CONCAT44(auVar38._8_4_ * fVar24,auVar38._8_4_ * fVar24),uVar30,4);
          fVar23 = (float)uVar30;
          local_26c0 = (float)((uint)fVar36 ^
                              ((uint)fVar36 ^ (uint)(float)local_26d0) &
                              -(uint)((float)local_18e0 < 0.0)) + fVar23;
          fVar29 = (float)((ulong)uVar30 >> 0x20);
          fStack_26bc = (float)((uint)fVar32 ^
                               ((uint)fVar32 ^ (uint)local_26d0._4_4_) &
                               -(uint)(local_18e0._4_4_ < 0.0)) + fVar29;
          fStack_26b8 = (float)((uint)fVar33 ^
                               ((uint)fVar33 ^ (uint)fStack_26c8) &
                               -(uint)((float)uStack_18d8 < 0.0)) + fVar23;
          fStack_26b4 = (float)((uint)fVar34 ^
                               ((uint)fVar34 ^ (uint)fStack_26c4) & -(uint)(uStack_18d8._4_4_ < 0.0)
                               ) + fVar29;
          local_26d0._0_4_ =
               (float)((uint)(float)local_26d0 ^
                      ((uint)(float)local_26d0 ^ (uint)fVar36) & -(uint)((float)local_18e0 < 0.0)) -
               fVar23;
          local_26d0._4_4_ =
               (float)((uint)local_26d0._4_4_ ^
                      ((uint)local_26d0._4_4_ ^ (uint)fVar32) & -(uint)(local_18e0._4_4_ < 0.0)) -
               fVar29;
          fStack_26c8 = (float)((uint)fStack_26c8 ^
                               ((uint)fStack_26c8 ^ (uint)fVar33) &
                               -(uint)((float)uStack_18d8 < 0.0)) - fVar23;
          fStack_26c4 = (float)((uint)fStack_26c4 ^
                               ((uint)fStack_26c4 ^ (uint)fVar34) & -(uint)(uStack_18d8._4_4_ < 0.0)
                               ) - fVar29;
        }
      }
    }
    else {
      FUN_02ec99d0(param_3,param_6,&local_1880,&local_18e0);
      fVar23 = ABS((float)local_18e0);
      fVar29 = ABS(local_18e0._4_4_);
      auVar25._0_8_ = CONCAT44(fVar29,fVar23);
      auVar25._8_4_ = ABS((float)uStack_18d8);
      auVar25._12_4_ = ABS(uStack_18d8._4_4_);
      if ((lVar22 == 0) || ((*(ushort *)(lVar22 + 0x1a) & 1) == 0)) {
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar22 + 0x18) * 0x200 + 0x18))
                  (lVar22,&local_1880,&local_26d0);
        auVar12._8_8_ = auVar25._8_8_;
        auVar12._0_8_ = auVar25._0_8_;
        auVar37 = auVar12._0_12_;
      }
      else {
        FUN_02ee5160(lVar22,&local_1880,&local_26d0);
        fVar24 = *(float *)(param_3 + 0x38);
        auVar10._8_8_ = auVar25._8_8_;
        auVar10._0_8_ = auVar25._0_8_;
        auVar37 = auVar10._0_12_;
        uVar30 = CONCAT44(fVar29 * fVar24,fVar23 * fVar24);
        uVar30 = NEON_fmaxp(uVar30,uVar30,4);
        uVar30 = NEON_fmax(CONCAT44(auVar25._8_4_ * fVar24,auVar25._8_4_ * fVar24),uVar30,4);
        fVar23 = (float)uVar30;
        local_26c0 = local_26c0 + fVar23;
        fVar29 = (float)((ulong)uVar30 >> 0x20);
        fStack_26bc = fStack_26bc + fVar29;
        fStack_26b8 = fStack_26b8 + fVar23;
        fStack_26b4 = fStack_26b4 + fVar29;
        local_26d0._0_4_ = (float)local_26d0 - fVar23;
        local_26d0._4_4_ = local_26d0._4_4_ - fVar29;
        fStack_26c8 = fStack_26c8 - fVar23;
        fStack_26c4 = fStack_26c4 - fVar29;
      }
    }
    local_2510 = CONCAT44(local_26d0._4_4_,(float)local_26d0);
    auVar14._8_4_ = fStack_26c8;
    auVar14._0_8_ = local_2510;
    auVar14._12_4_ = fStack_26c4;
    uStack_2500 = CONCAT44(fStack_26bc,local_26c0);
    auVar15._8_4_ = fStack_26b8;
    auVar15._0_8_ = uStack_2500;
    auVar15._12_4_ = fStack_26b4;
    uStack_2508 = auVar14._8_8_;
    uStack_24f8 = auVar15._8_8_;
    uVar30 = NEON_fmaxp(auVar37._0_8_,auVar37._0_8_,4);
    local_2690 = 0;
    uStack_2688 = 0;
    local_25e8 = NEON_fmax(CONCAT44(auVar37._8_4_,auVar37._8_4_),uVar30,4);
    local_26a0 = 0;
    uStack_2698 = 0;
    puVar3 = PTR_DAT_047d1a98 + 0x10;
    local_2628 = *(undefined8 *)(param_6 + 0x28);
    if ((bVar5 & 4) == 0) {
      local_2678 = *(undefined1 *)(lVar4 + 0x5c);
    }
    else {
      local_2678 = 0;
    }
    local_2670 = 0;
    uStack_2668 = 0;
    local_2640 = 0;
    local_2660 = 0;
    uStack_2658 = 0;
    local_2650 = 0;
    uStack_2648 = 0;
    local_263c = 0xffffffffffffffff;
    fVar23 = *(float *)(lVar4 + 0x30);
    fVar29 = *(float *)(lVar4 + 0x34);
    fVar24 = *(float *)(lVar4 + 0x38);
    fVar36 = *(float *)(lVar4 + 0x3c);
    local_26a8 = CONCAT44((*(float *)(lVar4 + 0x4c) - fVar36) *
                          (float)((ulong)*(undefined8 *)(PTR_DAT_047d1a48 + 8) >> 0x20),
                          (*(float *)(lVar4 + 0x48) - fVar24) *
                          (float)*(undefined8 *)(PTR_DAT_047d1a48 + 8));
    local_26b0 = CONCAT44((*(float *)(lVar4 + 0x44) - fVar29) *
                          (float)((ulong)*(undefined8 *)PTR_DAT_047d1a48 >> 0x20),
                          (*(float *)(lVar4 + 0x40) - fVar23) *
                          (float)*(undefined8 *)PTR_DAT_047d1a48);
    puStack_2610 = local_1920;
    local_2630 = 0x20 - *(int *)(lVar4 + 0x54);
    local_25e0 = *param_7;
    uStack_25d8 = param_7[1];
    local_25d0 = param_7[2];
    uStack_25c8 = param_7[3];
    local_25c0 = param_7[4];
    uStack_25b8 = param_7[5];
    local_25b0 = param_7[6];
    uStack_25a8 = param_7[7];
    local_2598 = param_9;
    uVar30 = NEON_fmax(*(undefined8 *)(PTR_DAT_047d19b0 + 0x50),*(undefined8 *)(param_9 + 0x10),4);
    fVar32 = (float)local_25e8 * (float)uVar30;
    fVar33 = (float)((ulong)local_25e8 >> 0x20) * (float)((ulong)uVar30 >> 0x20);
    local_2518 = NEON_fmin(*(undefined8 *)(PTR_DAT_047d19b0 + 0x240),
                           CONCAT44(fVar33 * fVar33,fVar32 * fVar32),4);
    local_26d0 = puVar3;
    if (cVar6 != '\0') {
      lVar22 = 0;
      if (*plVar21 != 0) {
        lVar22 = *plVar21 + (long)plVar21;
      }
      if ((*(byte *)(param_9 + 8) & 0x41) == 0) {
        local_26c0 = fVar23;
        fStack_26bc = fVar29;
        fStack_26b8 = fVar24;
        fStack_26b4 = fVar36;
        FUN_0083096c(lVar22 + 0xc0,&local_2510,&local_2518,&local_26d0,1);
        return;
      }
      local_26c0 = fVar23;
      fStack_26bc = fVar29;
      fStack_26b8 = fVar24;
      fStack_26b4 = fVar36;
      FUN_0082f248();
      return;
    }
    pauVar1 = (undefined1 (*) [12])(PTR_DAT_047d19b0 + 0x150);
    uVar35 = (undefined4)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x158) >> 0x20);
    local_1888 = 0;
    auVar7._12_4_ = uVar35;
    auVar7._0_12_ = *pauVar1;
    auVar8._12_4_ = uVar35;
    auVar8._0_12_ = *pauVar1;
    auVar38 = NEON_ext(auVar7,auVar8,8,1);
    auVar9._12_4_ = uVar35;
    auVar9._0_12_ = *pauVar1;
    auVar38 = NEON_ext(auVar38,auVar9,8,1);
    local_18e0 = &local_26d0;
    auVar31._0_8_ =
         CONCAT44((local_26d0._4_4_ + fStack_26bc) * auVar38._4_4_,
                  ((float)local_26d0 + local_26c0) * auVar38._0_4_);
    auVar31._8_4_ = (fStack_26c8 + fStack_26b8) * auVar38._8_4_;
    auVar31._12_4_ = (fStack_26c4 + fStack_26b4) * auVar38._12_4_;
    auVar28._0_8_ =
         CONCAT44((fStack_26bc - local_26d0._4_4_) * auVar38._4_4_,
                  (local_26c0 - (float)local_26d0) * auVar38._0_4_);
    auVar28._8_4_ = (fStack_26b8 - fStack_26c8) * auVar38._8_4_;
    auVar28._12_4_ = (fStack_26b4 - fStack_26c4) * auVar38._12_4_;
    local_1880 = &local_1870;
    uStack_18a8 = auVar31._8_8_;
    uStack_1898 = auVar28._8_8_;
    uStack_1878 = -0x7fffff8000000000;
    local_26c0 = fVar23;
    fStack_26bc = fVar29;
    fStack_26b8 = fVar24;
    fStack_26b4 = fVar36;
    local_18d0 = local_2510;
    uStack_18c8 = uStack_2508;
    local_18c0 = uStack_2500;
    uStack_18b8 = uStack_24f8;
    local_18b0 = auVar31._0_8_;
    local_18a0 = auVar28._0_8_;
    local_1890 = local_2518;
    FUN_0083d070(lVar2,&local_1880,&local_18e0);
    uVar16 = uStack_1878._4_4_;
  }
  if (-1 < uStack_1878) {
    uStack_1878 = (ulong)uVar16 << 0x20;
    if (local_1880 != (float *)0x0) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_1880,(ulong)uVar16 * 0x30);
    }
  }
  return;
}


