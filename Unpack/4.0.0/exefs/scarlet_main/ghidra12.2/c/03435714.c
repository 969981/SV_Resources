/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03435714; name: FUN_03435714
 */


undefined8
FUN_03435714(long param_1,float *param_2,undefined4 param_3,undefined1 (*param_4) [16],
            undefined8 *param_5,undefined8 param_6,long *param_7,uint param_8,undefined8 param_9,
            long *param_10)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  void *__dest;
  uint uVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  size_t __n;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  float fVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar28;
  undefined1 auVar27 [16];
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  void *local_180;
  float local_130;
  float fStack_12c;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined **local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  void *local_a8;
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_78;
  float local_70;
  
  iVar6 = FUN_03435054(param_9);
  uVar18 = *(uint *)(param_7 + 4);
  if (uVar18 != 0) {
    uVar17 = (uint)param_2;
    uVar11 = (uint)((ulong)param_2 >> 0x20);
    uVar11 = (((((((iVar6 * 0x1000193 ^ uVar17 & 0xff) * 0x1000193 ^ uVar17 >> 8 & 0xff) * 0x1000193
                 ^ uVar17 >> 0x10 & 0xff) * 0x1000193 ^ uVar17 >> 0x18) * 0x1000193 ^ uVar11 & 0xff)
               * 0x1000193 ^ uVar11 >> 8 & 0xff) * 0x1000193 ^
             (ushort)((ulong)param_2 >> 0x30) & 0xff) * 0x1000193 ^
             (uint)(byte)((ulong)param_2 >> 0x38);
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = uVar11 / uVar18;
    }
    for (plVar12 = *(long **)(param_7[3] + (ulong)(uVar11 - uVar17 * uVar18) * 8);
        plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
      if (*(uint *)(plVar12 + 1) == uVar11) {
        return 1;
      }
    }
  }
  local_78 = 0;
  local_70 = 0.0;
  local_e0 = (undefined **)*param_5;
  local_d8 = *(undefined4 *)(param_5 + 1);
  uVar8 = FUN_0341a340(param_2,param_6,&local_e0,&local_78);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  auVar24 = NEON_fmov(0x3f800000,4);
  uVar13 = *(undefined8 *)(*param_4 + 8);
  auVar27 = *param_4;
  auVar25._0_8_ = CONCAT44(*(undefined4 *)((ulong)&local_78 | 4),(float)local_78);
  auVar25._12_4_ = auVar24._12_4_;
  auVar25._8_4_ = local_70;
  uVar18 = *(uint *)(param_7 + 1);
  uVar11 = *(uint *)((long)param_7 + 0xc);
  local_130 = (float)*(undefined8 *)*param_4;
  fStack_12c = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
  auVar24 = auVar25;
  if (uVar11 <= uVar18) {
    uVar8 = FUN_034361ec(param_7);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    auVar24._8_8_ = auVar25._8_8_;
    auVar24._0_8_ = auVar25._0_8_;
    uVar11 = *(uint *)((long)param_7 + 0xc);
  }
  if (uVar11 <= uVar18) {
    return 0;
  }
  uVar8 = (ulong)*(uint *)(param_7 + 1);
  lVar16 = *param_7;
  *(uint *)(param_7 + 1) = *(uint *)(param_7 + 1) + 1;
  if (lVar16 == 0) {
    return 0;
  }
  lVar21 = lVar16 + uVar8 * 0x50;
  puVar9 = (undefined8 *)(lVar16 + uVar8 * 0x50);
  auVar26._0_8_ = CONCAT44(auVar24._4_4_ - fStack_12c,auVar24._0_4_ - local_130);
  auVar26._8_4_ = auVar24._8_4_ - (float)uVar13;
  auVar26._12_4_ = auVar24._12_4_ - (float)((ulong)uVar13 >> 0x20);
  *puVar9 = &PTR_FUN_047bf6c0;
  *(undefined4 *)(lVar21 + 0x48) = 0;
  *(undefined8 *)(lVar21 + 0x30) = 0;
  plVar12 = (long *)(lVar21 + 0x38);
  *plVar12 = 0;
  puVar20 = (uint *)(lVar21 + 0x40);
  puVar20[0] = 0;
  puVar20[1] = 0;
  FUN_03436090(puVar9,param_9);
  *(long *)(lVar21 + 0x28) = auVar26._8_8_;
  *(undefined8 *)*(undefined1 (*) [16])(lVar21 + 0x20) = auVar26._0_8_;
  *(long *)(lVar21 + 0x18) = auVar27._8_8_;
  *(undefined8 *)(lVar21 + 0x10) = auVar27._0_8_;
  uVar11 = *puVar20;
  uVar18 = *(uint *)(lVar21 + 0x44);
  if (uVar11 < uVar18) {
LAB_03435958:
    if (uVar11 < uVar18) {
      uVar18 = *puVar20;
      *puVar20 = uVar18 + 1;
      if (*plVar12 != 0) {
        puVar1 = (undefined4 *)(*plVar12 + (ulong)uVar18 * 0x20);
        *(undefined8 *)(puVar1 + 4) = 0;
        *(float **)(puVar1 + 6) = param_2;
        *puVar1 = param_3;
      }
    }
  }
  else {
    uVar18 = uVar18 + 1;
    lVar10 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))(0xb,*plVar12,(ulong)uVar18 << 5,0x10);
    if (lVar10 != 0) {
      *plVar12 = lVar10;
      *(uint *)(lVar21 + 0x44) = uVar18;
      goto LAB_03435958;
    }
  }
  uVar7 = FUN_03435054(puVar9);
  FUN_03435348(param_7,uVar7);
  if (*(char *)(param_1 + 0x20) == '\0') {
    return 1;
  }
  if (*(uint *)(param_1 + 0x14) <= param_8) {
    return 1;
  }
  uVar13 = *(undefined8 *)(lVar21 + 0x30);
  auVar24 = *(undefined1 (*) [16])(lVar21 + 0x20);
  uVar31 = *(undefined8 *)(lVar21 + 0x18);
  uVar30 = *(undefined8 *)(lVar21 + 0x10);
  uVar28 = auVar24._8_8_;
  uVar23 = auVar24._0_8_;
  uVar7 = *(undefined4 *)(lVar16 + uVar8 * 0x50 + 0x48);
  local_130 = (float)*puVar20;
  uVar19 = (ulong)(uint)local_130;
  if (local_130 == -NAN) {
    local_180 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0xb,0,0x1fffffffe0,0x10);
    if (local_180 == (void *)0x0) {
      local_130 = 0.0;
      uVar19 = 0xffffffff;
    }
    else {
      uVar19 = 0xffffffff;
LAB_03435a64:
      uVar14 = uVar19 & 3;
      if (uVar19 - 1 < 3) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        puVar9 = (undefined8 *)((long)local_180 + 0x50);
        do {
          uVar15 = uVar15 + 4;
          puVar9[-8] = 0;
          puVar9[-7] = 0;
          puVar9[-4] = 0;
          puVar9[-3] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9 = puVar9 + 0x10;
        } while ((uVar19 & 0xfffffffc) != uVar15);
      }
      if (uVar14 != 0) {
        uVar15 = uVar15 << 5 | 0x10;
        do {
          puVar9 = (undefined8 *)((long)local_180 + uVar15);
          uVar14 = uVar14 - 1;
          uVar15 = uVar15 + 0x20;
          *puVar9 = 0;
          puVar9[1] = 0;
        } while (uVar14 != 0);
      }
    }
  }
  else {
    local_180 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))
                                  (0xb,(ulong)((int)local_130 + 1) << 5,0x10);
    if (local_180 == (void *)0x0) {
      local_130 = 0.0;
      goto LAB_03435b04;
    }
    if (local_130 != 0.0) goto LAB_03435a64;
    uVar19 = 0;
    local_130 = 0.0;
  }
  memcpy(local_180,*(void **)(lVar16 + uVar8 * 0x50 + 0x38),uVar19 << 5);
LAB_03435b04:
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar18 = (int)local_130 + 1;
    uVar11 = 0;
    __n = (ulong)(uint)local_130 << 5;
    do {
      (**(code **)(*param_10 + 0x20))(&local_88,param_10);
      fVar22 = *(float *)(param_1 + 0x18);
      local_88 = local_88 * fVar22;
      fStack_84 = fStack_84 * fVar22;
      local_80 = local_80 * fVar22;
      fVar37 = (local_78._4_4_ + fStack_84) - param_2[1];
      fVar32 = *(float *)*param_4 - *param_2;
      fVar22 = *(float *)(*param_4 + 4) - param_2[1];
      fVar33 = param_2[6];
      fVar34 = param_2[7];
      fVar29 = *(float *)(*param_4 + 8) - param_2[2];
      fVar35 = param_2[8];
      fVar41 = fVar33 * fVar32 + fVar22 * fVar34 + fVar29 * fVar35;
      fVar42 = param_2[9] * fVar32 + fVar22 * param_2[10] + fVar29 * param_2[0xb];
      fVar38 = ((float)local_78 + local_88) - *param_2;
      fVar36 = (local_70 + local_80) - param_2[2];
      fVar39 = fVar33 * fVar38 + fVar37 * fVar34 + fVar36 * fVar35;
      fVar40 = param_2[9] * fVar38 + fVar37 * param_2[10] + fVar36 * param_2[0xb];
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      if (0.0001 < fVar42) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar41)) {
          bVar3 = fVar41 < 0.0001;
          bVar4 = fVar41 == 0.0001;
          bVar5 = false;
        }
      }
      iVar6 = -2;
      if (!bVar4 && bVar3 == bVar5) {
        iVar6 = -1;
      }
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      if (fVar41 < 0.0001) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar42)) {
          bVar3 = fVar42 < -0.0001;
          bVar4 = fVar42 == -0.0001;
          bVar5 = false;
        }
      }
      iVar2 = 1;
      if (bVar4 || bVar3 != bVar5) {
        iVar2 = iVar6;
      }
      bVar3 = false;
      bVar4 = false;
      if (-0.0001 < fVar41) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar42)) {
          bVar3 = fVar42 < 0.0001;
          bVar4 = false;
        }
      }
      iVar6 = 0;
      if (bVar3 == bVar4) {
        iVar6 = iVar2;
      }
      bVar3 = false;
      bVar4 = false;
      if (-0.0001 < fVar39) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar40)) {
          bVar3 = fVar40 < 0.0001;
          bVar4 = false;
        }
      }
      if (bVar3 == bVar4) {
        bVar3 = false;
        bVar4 = true;
        bVar5 = false;
        if (fVar39 < 0.0001) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar40)) {
            bVar3 = fVar40 < -0.0001;
            bVar4 = fVar40 == -0.0001;
            bVar5 = false;
          }
        }
        if ((!bVar4 && bVar3 == bVar5) && iVar6 == 0) {
          fVar41 = param_2[4];
          fVar40 = param_2[5];
          fVar42 = param_2[3];
          fVar39 = fVar42 * fVar35 - fVar40 * fVar33;
          fVar35 = fVar40 * fVar34 - fVar41 * fVar35;
          fVar33 = fVar41 * fVar33 - fVar42 * fVar34;
          fVar34 = fVar40 * fVar29 + fVar22 * fVar41 + fVar32 * fVar42;
          fVar32 = fVar32 - fVar42 * fVar34;
          fVar22 = fVar22 - fVar41 * fVar34;
          fVar29 = fVar29 - fVar40 * fVar34;
          fVar34 = fVar40 * fVar36 + fVar37 * fVar41 + fVar38 * fVar42;
          fVar38 = fVar38 - fVar42 * fVar34;
          fVar37 = fVar37 - fVar41 * fVar34;
          fVar36 = fVar36 - fVar40 * fVar34;
          if ((-(fVar29 * fVar33) - (fVar32 * fVar35 + fVar39 * fVar22)) /
              SQRT(fVar32 * fVar32 + fVar22 * fVar22 + fVar29 * fVar29) <
              (fVar38 * fVar35 + fVar39 * fVar37 + fVar33 * fVar36) /
              SQRT(fVar38 * fVar38 + fVar37 * fVar37 + fVar36 * fVar36)) {
LAB_03435da4:
            local_e0 = &PTR_FUN_047bf6c0;
            local_a8 = (void *)0x0;
            local_a0 = 0;
            local_9c = 0;
            local_d0 = uVar30;
            uStack_c8 = uVar31;
            uStack_c0 = uVar23;
            uStack_b8 = uVar28;
            local_b0 = uVar13;
            local_98 = uVar7;
            if (uVar18 == 0) {
              __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0xb,0,__n,0x10);
              if (__dest != (void *)0x0) {
                local_9c = (uint)local_130;
                local_a8 = __dest;
LAB_03435e3c:
                *(undefined8 *)((long)local_a8 + 0x10) = 0;
                *(undefined8 *)((long)local_a8 + 0x18) = 0;
                if (local_130 != 1.4013e-45) {
                  puVar9 = (undefined8 *)((long)local_a8 + 0x30);
                  lVar16 = (ulong)(uint)local_130 - 1;
                  do {
                    lVar16 = lVar16 + -1;
                    *puVar9 = 0;
                    puVar9[1] = 0;
                    puVar9 = puVar9 + 4;
                  } while (lVar16 != 0);
                }
                goto LAB_03435e64;
              }
LAB_03435e6c:
              memcpy(__dest,local_180,__n);
            }
            else {
              __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0xb,(ulong)uVar18 << 5,0x10);
              local_a8 = __dest;
              if (__dest != (void *)0x0) {
                local_9c = uVar18;
                if (local_130 != 0.0) goto LAB_03435e3c;
LAB_03435e64:
                local_a0 = (uint)local_130;
                __dest = local_a8;
                goto LAB_03435e6c;
              }
            }
            auVar27._0_8_ = CONCAT44(*(undefined4 *)((ulong)&local_78 | 4),(float)local_78);
            local_100 = CONCAT44(*(undefined4 *)((ulong)&local_88 | 4),local_88);
            auVar27._8_4_ = local_70;
            auVar27._12_4_ = auVar25._12_4_;
            uStack_f8 = (ulong)(uint)local_80;
            uStack_e8 = auVar27._8_8_;
            local_f0 = auVar27._0_8_;
            FUN_03431d2c(param_1,&local_f0,&local_100,param_6,param_7,param_8 + 1,&local_e0,param_10
                        );
            local_e0 = &PTR_FUN_047bf6c0;
            if (__dest != (void *)0x0) {
              local_a0 = 0;
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb,__dest);
              local_a8 = (void *)0x0;
              local_9c = 0;
            }
          }
        }
      }
      else if (iVar6 == 1) {
        fVar41 = param_2[4];
        fVar40 = param_2[5];
        fVar42 = param_2[3];
        fVar39 = fVar42 * fVar35 - fVar40 * fVar33;
        fVar35 = fVar40 * fVar34 - fVar41 * fVar35;
        fVar33 = fVar41 * fVar33 - fVar42 * fVar34;
        fVar34 = fVar40 * fVar36 + fVar37 * fVar41 + fVar38 * fVar42;
        fVar38 = fVar38 - fVar42 * fVar34;
        fVar37 = fVar37 - fVar41 * fVar34;
        fVar36 = fVar36 - fVar40 * fVar34;
        fVar34 = fVar40 * fVar29 + fVar22 * fVar41 + fVar32 * fVar42;
        fVar32 = fVar32 - fVar42 * fVar34;
        fVar29 = fVar29 - fVar40 * fVar34;
        fVar22 = fVar22 - fVar41 * fVar34;
        if ((-(fVar36 * fVar33) - (fVar38 * fVar35 + fVar39 * fVar37)) /
            SQRT(fVar38 * fVar38 + fVar37 * fVar37 + fVar36 * fVar36) <
            (fVar32 * fVar35 + fVar39 * fVar22 + fVar33 * fVar29) /
            SQRT(fVar32 * fVar32 + fVar22 * fVar22 + fVar29 * fVar29)) goto LAB_03435da4;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x1c));
  }
  if (local_180 != (void *)0x0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb);
  }
  return 1;
}


