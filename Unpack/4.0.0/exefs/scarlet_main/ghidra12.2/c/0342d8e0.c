/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342d8e0; name: FUN_0342d8e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0342d8e0(long param_1,long *param_2)

{
  undefined1 (*pauVar1) [12];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined8 uVar12;
  undefined1 auVar13 [12];
  ulong uVar14;
  byte bVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  ulong uVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uStack_424;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  long local_360 [5];
  undefined8 uStack_338;
  undefined8 uStack_330;
  ulong uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined1 local_260 [16];
  int local_250;
  float local_218;
  byte local_214;
  long local_210;
  ulong local_208;
  uint local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined2 local_1f0;
  undefined4 local_1ec;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int local_120;
  float local_e8;
  byte local_e4;
  undefined4 local_d4;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  lVar28 = *(long *)(param_1 + 0x30);
  lVar21 = *(long *)(*(long *)(param_1 + 8) + 0x58);
  plVar23 = param_2 + 0xf;
  local_360[2] = *plVar23;
  uVar6 = *(uint *)(param_2 + 1);
  if (uVar6 != 0) {
    uVar8 = 0;
    uVar24 = (uint)*(long *)(lVar21 + 0x68);
    if (uVar6 != 0) {
      uVar8 = uVar24 / uVar6;
    }
    for (local_360[0] = *(long *)(*param_2 + (ulong)(uVar24 - uVar8 * uVar6) * 8); local_360[0] != 0
        ; local_360[0] = *(long *)(local_360[0] + 0x78)) {
      if (*(long *)(local_360[0] + 0x70) == *(long *)(lVar21 + 0x68)) {
        local_360[2] = *(long *)(local_360[0] + 0xa8);
        goto LAB_0342d968;
      }
    }
  }
  local_360[0] = 0;
LAB_0342d968:
  if (*(long *)(lVar21 + 0x58) != -1) {
    if (uVar6 != 0) {
      uVar8 = 0;
      uVar24 = (uint)*(long *)(lVar21 + 0x80);
      if (uVar6 != 0) {
        uVar8 = uVar24 / uVar6;
      }
      for (local_360[1] = *(long *)(*param_2 + (ulong)(uVar24 - uVar8 * uVar6) * 8);
          local_360[1] != 0; local_360[1] = *(long *)(local_360[1] + 0x78)) {
        if (*(long *)(local_360[1] + 0x70) == *(long *)(lVar21 + 0x80)) {
          if (*(long *)(local_360[1] + 0xa8) == local_360[2]) goto LAB_0342d9a8;
          lVar21 = 2;
          local_360[3] = *(long *)(local_360[1] + 0xa8);
          goto LAB_0342d9ac;
        }
      }
    }
    local_360[1] = 0;
  }
LAB_0342d9a8:
  lVar21 = 1;
LAB_0342d9ac:
  lVar19 = *(long *)(*(long *)(param_1 + 8) + 0x28);
  uVar7 = *(ushort *)(lVar19 + 0x38);
  if ((ulong)uVar7 != 0) {
    auVar35 = NEON_fmov(0x3f800000,4);
    uVar29 = 0;
    uStack_424 = auVar35._12_4_;
    do {
      puVar17 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar29 * 0x90);
      *(undefined4 *)(puVar17 + 8) = 0xffffffff;
      *(undefined4 *)(puVar17 + 7) = 0;
      *(undefined8 *)((long)puVar17 + 0x14) = 0;
      (**(code **)*puVar17)();
      lVar19 = *(long *)(param_1 + 8);
      lVar26 = *(long *)(lVar19 + 0x58);
      if (*(int *)(lVar26 + 0xb0) < 1) {
        if (*(int *)(lVar26 + 0xac) < 1) {
          lVar19 = *(long *)(*(long *)(lVar19 + 0x28) + 0x20) + uVar29 * 0x28;
          fVar34 = *(float *)(lVar19 + 0x18);
          fVar2 = *(float *)(lVar19 + 0x1c);
          fVar4 = *(float *)(lVar19 + 0x20);
          lVar19 = *(long *)(*(long *)(lVar28 + 8) + 0x40);
          fVar40 = *(float *)(lVar19 + 0x78);
          fVar3 = *(float *)(lVar19 + 0x7c);
          fVar5 = *(float *)(lVar19 + 0x80);
          if (*(char *)(lVar26 + 200) == '\0') {
            fVar42 = *(float *)(lVar26 + 0xb4);
          }
          else {
            fVar42 = 0.0;
            for (lVar19 = *(long *)(lVar26 + 0xa0); lVar19 != 0; lVar19 = *(long *)(lVar19 + 0x10))
            {
              fVar42 = (float)FUN_034cd368(lVar19);
            }
            if (fVar42 < *(float *)(lVar26 + 0xb4)) {
              *(undefined4 *)(lVar26 + 0xc0) = 1;
              *(undefined4 *)(lVar26 + 0xb8) = *(undefined4 *)(lVar26 + 0xb8);
            }
            *(float *)(lVar26 + 0xb4) = fVar42;
            *(undefined1 *)(lVar26 + 200) = 0;
          }
          fVar42 = *(float *)(param_1 + 0x74) +
                   fVar42 * *(float *)(*(long *)(*(long *)(lVar26 + 8) + 0x28) + 0x50);
          fVar43 = fVar40 - fVar34;
          fVar44 = fVar3 - fVar2;
          fVar33 = fVar5 - fVar4;
          lVar19 = *(long *)(param_1 + 0x20);
          if (fVar42 * fVar42 <= fVar43 * fVar43 + fVar44 * fVar44 + fVar33 * fVar33) {
            lVar19 = lVar19 + uVar29 * 0x90;
            *(undefined2 *)(lVar19 + 0x1a) = 1;
            *(undefined4 *)(lVar19 + 0x14) = 0;
            goto LAB_0342e5b8;
          }
          pfVar20 = (float *)(**(code **)(*(long *)(lVar19 + uVar29 * 0x90) + 8))();
          if (pfVar20 != (float *)0x0) {
            pfVar20[0x1b] = fVar34;
            pfVar20[0x1c] = fVar2;
            pfVar20[0x1d] = fVar4;
            pfVar20[0x1e] = 0.0;
            *pfVar20 = fVar40;
            pfVar20[1] = fVar3;
            pfVar20[2] = fVar5;
            *(undefined1 *)(lVar19 + uVar29 * 0x90 + 0x19) = 1;
          }
          lVar19 = lVar19 + uVar29 * 0x90;
          *(undefined2 *)(lVar19 + 0x1a) = 0;
          *(undefined4 *)(lVar19 + 0x14) = 0;
        }
        else {
          lVar32 = *(long *)(*(long *)(lVar28 + 8) + 0x58);
          uVar6 = *(uint *)(param_2 + 1);
          if (uVar6 == 0) {
            lVar30 = 0;
            lVar25 = 0;
          }
          else {
            lVar25 = *(long *)(lVar32 + 0x68);
            uVar8 = 0;
            uVar24 = (uint)lVar25;
            if (uVar6 != 0) {
              uVar8 = uVar24 / uVar6;
            }
            for (lVar30 = *(long *)(*param_2 + (ulong)(uVar24 - uVar8 * uVar6) * 8);
                (lVar30 != 0 && (*(long *)(lVar30 + 0x70) != lVar25));
                lVar30 = *(long *)(lVar30 + 0x78)) {
            }
            uVar8 = 0;
            uVar24 = (uint)*(long *)(lVar26 + 0x68);
            if (uVar6 != 0) {
              uVar8 = uVar24 / uVar6;
            }
            for (lVar25 = *(long *)(*param_2 + (ulong)(uVar24 - uVar8 * uVar6) * 8);
                (lVar25 != 0 && (*(long *)(lVar25 + 0x70) != *(long *)(lVar26 + 0x68)));
                lVar25 = *(long *)(lVar25 + 0x78)) {
            }
          }
          plVar31 = plVar23;
          if (lVar25 != 0) {
            plVar31 = (long *)(lVar25 + 0xa8);
          }
          lVar22 = *plVar31;
          lVar27 = *(long *)(*(long *)(lVar19 + 0x28) + 0x20) + uVar29 * 0x28;
          fVar34 = *(float *)(lVar27 + 0x18);
          fVar2 = *(float *)(lVar27 + 0x1c);
          lVar19 = *(long *)(lVar27 + 0x18);
          fVar4 = *(float *)(lVar27 + 0x20);
          lVar27 = *(long *)(*(long *)(lVar28 + 8) + 0x40);
          fVar40 = *(float *)(lVar27 + 0x78);
          fVar3 = *(float *)(lVar27 + 0x7c);
          uVar12 = *(undefined8 *)(lVar27 + 0x78);
          fVar5 = *(float *)(lVar27 + 0x80);
          fVar42 = fVar40 - fVar34;
          fVar43 = fVar3 - fVar2;
          if (*(char *)(lVar26 + 200) == '\0') {
            fVar44 = *(float *)(lVar26 + 0xb4);
          }
          else {
            fVar44 = 0.0;
            for (lVar27 = *(long *)(lVar26 + 0xa0); lVar27 != 0; lVar27 = *(long *)(lVar27 + 0x10))
            {
              fVar44 = (float)FUN_034cd368(lVar27);
            }
            if (fVar44 < *(float *)(lVar26 + 0xb4)) {
              *(undefined4 *)(lVar26 + 0xc0) = 1;
              *(undefined4 *)(lVar26 + 0xb8) = *(undefined4 *)(lVar26 + 0xb8);
            }
            *(float *)(lVar26 + 0xb4) = fVar44;
            *(undefined1 *)(lVar26 + 200) = 0;
          }
          fVar44 = *(float *)(param_1 + 0x74) +
                   fVar44 * *(float *)(*(long *)(*(long *)(lVar26 + 8) + 0x28) + 0x50);
          lVar27 = *(long *)(param_1 + 0x20);
          if (fVar44 * fVar44 <=
              fVar42 * fVar42 + fVar43 * fVar43 + (fVar5 - fVar4) * (fVar5 - fVar4)) {
            lVar27 = lVar27 + uVar29 * 0x90;
            goto LAB_0342e06c;
          }
          plVar31 = (long *)(lVar27 + uVar29 * 0x90);
          if (*(long *)(lVar32 + 0x68) != *(long *)(lVar26 + 0x68)) {
            if (lVar25 != 0) {
              pfVar20 = (float *)(lVar27 + uVar29 * 0x90 + 0x14);
              if (*pfVar20 < *(float *)(lVar25 + 0x9c)) {
                *pfVar20 = *(float *)(lVar25 + 0x9c);
                *(undefined1 *)(lVar27 + uVar29 * 0x90 + 0x18) = 1;
              }
            }
            if (lVar30 != 0) {
              pfVar20 = (float *)(lVar27 + uVar29 * 0x90 + 0x14);
              if (*pfVar20 < *(float *)(lVar30 + 0x9c)) {
                *pfVar20 = *(float *)(lVar30 + 0x9c);
                *(undefined1 *)(lVar27 + uVar29 * 0x90 + 0x18) = 1;
              }
            }
          }
          if ((*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0xb0) < 1) ||
             (*(float *)(lVar27 + uVar29 * 0x90 + 0x14) < 1.0)) {
            local_208 = CONCAT44(local_208._4_4_,fVar4);
            uStack_338 = CONCAT44(uStack_338._4_4_,fVar5);
            if (lVar30 == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(undefined8 *)(lVar30 + 0xa8);
            }
            local_360[4] = uVar12;
            local_210 = lVar19;
            FUN_0342cbe0(&local_210,local_360 + 4,lVar22,uVar18,plVar31);
          }
          pfVar20 = (float *)(**(code **)(*plVar31 + 8))(plVar31);
          if (pfVar20 != (float *)0x0) {
            pfVar20[0x1b] = fVar34;
            pfVar20[0x1c] = fVar2;
            pfVar20[0x1d] = fVar4;
            pfVar20[0x1e] = 0.0;
            *pfVar20 = fVar40;
            pfVar20[1] = fVar3;
            pfVar20[2] = fVar5;
            *(undefined1 *)((long)plVar31 + 0x19) = 1;
          }
          *(undefined1 *)((long)plVar31 + 0x1a) = 0;
        }
LAB_0342e374:
        lVar19 = *(long *)(*(long *)(param_1 + 8) + 0x58);
        if ((((*(int *)(PTR_DAT_047e6e68 + 0xc) != 0) && (0.0 < *(float *)(lVar19 + 100))) &&
            ((0 < *(int *)(lVar19 + 0xa8) || (*(int *)(lVar19 + 0x60) != 0)))) ||
           (0 < *(int *)(lVar19 + 0xac))) {
          if (lVar28 == 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x40) =
                 *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x38);
          }
          else {
            lVar19 = 0;
            do {
              if ((int)lVar19 == 1) {
                lVar26 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x80);
LAB_0342e3e8:
                if (lVar26 != *(long *)(*(long *)(*(long *)(lVar28 + 8) + 0x58) + 0x68))
                goto LAB_0342e470;
                local_210 = 0;
                local_208 = 0;
                local_1ec = 0x447a0000;
                local_1f4 = *(undefined4 *)PTR_DAT_047e6e78;
                local_200 = *(uint *)(PTR_DAT_047e6e68 + 0xc);
                local_1f8 = *(undefined4 *)(PTR_DAT_047e6e68 + 0x10);
                if (3 < local_200) {
                  local_200 = 4;
                }
                local_1fc = 1;
                local_1f0 = *(undefined2 *)(PTR_DAT_047e6e68 + 0x18);
                FUN_03432404(&local_210,lVar28,param_1,uVar29 & 0xffffffff,local_360[lVar19 + 2] + 8
                            );
              }
              else {
                if ((int)lVar19 == 0) {
                  lVar26 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x68);
                  goto LAB_0342e3e8;
                }
LAB_0342e470:
                if (local_360[lVar19] != 0) {
                  local_208 = 0;
                  local_210 = 0;
                  FUN_0342025c(local_360[lVar19],param_1,uVar29 & 0xffffffff,lVar28,&local_210);
                  lVar26 = *(long *)(*(long *)(lVar28 + 8) + 0x40);
                  local_370 = *(undefined4 *)(lVar26 + 0x78);
                  uStack_36c = *(undefined4 *)(lVar26 + 0x7c);
                  local_368 = *(undefined4 *)(lVar26 + 0x80);
                  lVar26 = *(long *)(param_1 + 0x20);
                  lVar32 = lVar26 + uVar29 * 0x90;
                  lVar30 = *(long *)(*(long *)(param_1 + 8) + 0x58);
                  if (*(char *)(lVar30 + 200) == '\0') {
                    fVar34 = *(float *)(lVar30 + 0xb4);
                  }
                  else {
                    fVar34 = 0.0;
                    for (lVar26 = *(long *)(lVar30 + 0xa0); lVar26 != 0;
                        lVar26 = *(long *)(lVar26 + 0x10)) {
                      fVar34 = (float)FUN_034cd368(lVar26);
                    }
                    if (fVar34 < *(float *)(lVar30 + 0xb4)) {
                      *(undefined4 *)(lVar30 + 0xc0) = 1;
                      *(undefined4 *)(lVar30 + 0xb8) = *(undefined4 *)(lVar30 + 0xb8);
                    }
                    *(float *)(lVar30 + 0xb4) = fVar34;
                    *(undefined1 *)(lVar30 + 200) = 0;
                    lVar26 = *(long *)(param_1 + 0x20);
                  }
                  fVar40 = *(float *)(*(long *)(*(long *)(lVar30 + 8) + 0x28) + 0x50);
                  FUN_03428424(*(float *)(param_1 + 0x74) + fVar34 * fVar40,fVar40,
                               *(float *)(param_1 + 0x74),&local_210,&local_370,lVar28 + 0x88,
                               lVar32 + 0x80,lVar26 + uVar29 * 0x90 + 0x30);
                  if (local_210 != 0) {
                    local_208 = local_208 & 0xffffffff00000000;
                    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
                    local_210 = 0;
                    local_208 = local_208 & 0xffffffff;
                  }
                }
              }
              if (lVar19 == 0) {
                *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x40) =
                     *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x38);
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 != lVar21);
          }
        }
      }
      else {
        lVar32 = *(long *)(*(long *)(lVar28 + 8) + 0x58);
        uVar6 = *(uint *)(param_2 + 1);
        if (uVar6 == 0) {
          lVar30 = 0;
          lVar25 = 0;
        }
        else {
          lVar25 = *(long *)(lVar32 + 0x68);
          uVar8 = 0;
          uVar24 = (uint)lVar25;
          if (uVar6 != 0) {
            uVar8 = uVar24 / uVar6;
          }
          for (lVar30 = *(long *)(*param_2 + (ulong)(uVar24 - uVar8 * uVar6) * 8);
              (lVar30 != 0 && (*(long *)(lVar30 + 0x70) != lVar25));
              lVar30 = *(long *)(lVar30 + 0x78)) {
          }
          uVar8 = 0;
          uVar24 = (uint)*(long *)(lVar26 + 0x68);
          if (uVar6 != 0) {
            uVar8 = uVar24 / uVar6;
          }
          for (lVar25 = *(long *)(*param_2 + (ulong)(uVar24 - uVar8 * uVar6) * 8);
              (lVar25 != 0 && (*(long *)(lVar25 + 0x70) != *(long *)(lVar26 + 0x68)));
              lVar25 = *(long *)(lVar25 + 0x78)) {
          }
        }
        plVar31 = plVar23;
        if (lVar25 != 0) {
          plVar31 = (long *)(lVar25 + 0xa8);
        }
        lVar22 = *plVar31;
        lVar19 = *(long *)(*(long *)(lVar19 + 0x28) + 0x20) + uVar29 * 0x28;
        pauVar1 = (undefined1 (*) [12])(lVar19 + 0x18);
        fVar34 = *(float *)*pauVar1;
        fVar2 = *(float *)(lVar19 + 0x1c);
        uVar14 = *(ulong *)*pauVar1;
        uVar12 = *(undefined8 *)*pauVar1;
        fVar4 = *(float *)(lVar19 + 0x20);
        auVar13 = *pauVar1;
        auVar11 = *pauVar1;
        lVar19 = *(long *)(*(long *)(lVar28 + 8) + 0x40);
        fVar40 = *(float *)(lVar19 + 0x78);
        fVar3 = *(float *)(lVar19 + 0x7c);
        fVar5 = *(float *)(lVar19 + 0x80);
        fVar42 = fVar40 - fVar34;
        fVar43 = fVar3 - fVar2;
        fVar44 = fVar5 - fVar4;
        if (*(char *)(lVar26 + 200) == '\0') {
          fVar33 = *(float *)(lVar26 + 0xb4);
        }
        else {
          fVar33 = 0.0;
          for (lVar19 = *(long *)(lVar26 + 0xa0); lVar19 != 0; lVar19 = *(long *)(lVar19 + 0x10)) {
            fVar33 = (float)FUN_034cd368(lVar19);
          }
          if (fVar33 < *(float *)(lVar26 + 0xb4)) {
            *(undefined4 *)(lVar26 + 0xc0) = 1;
            *(undefined4 *)(lVar26 + 0xb8) = *(undefined4 *)(lVar26 + 0xb8);
          }
          *(float *)(lVar26 + 0xb4) = fVar33;
          *(undefined1 *)(lVar26 + 200) = 0;
        }
        fVar33 = *(float *)(param_1 + 0x74) +
                 fVar33 * *(float *)(*(long *)(*(long *)(lVar26 + 8) + 0x28) + 0x50);
        lVar27 = *(long *)(param_1 + 0x20);
        if (fVar42 * fVar42 + fVar43 * fVar43 + fVar44 * fVar44 < fVar33 * fVar33) {
          plVar31 = (long *)(lVar27 + uVar29 * 0x90);
          if (*(long *)(lVar32 + 0x68) != *(long *)(lVar26 + 0x68)) {
            if (lVar25 != 0) {
              pfVar20 = (float *)(lVar27 + uVar29 * 0x90 + 0x14);
              if (*pfVar20 < *(float *)(lVar25 + 0x9c)) {
                *pfVar20 = *(float *)(lVar25 + 0x9c);
                *(undefined1 *)(lVar27 + uVar29 * 0x90 + 0x18) = 1;
              }
            }
            if (lVar30 != 0) {
              pfVar20 = (float *)(lVar27 + uVar29 * 0x90 + 0x14);
              if (*pfVar20 < *(float *)(lVar30 + 0x9c)) {
                *pfVar20 = *(float *)(lVar30 + 0x9c);
                *(undefined1 *)(lVar27 + uVar29 * 0x90 + 0x18) = 1;
              }
            }
          }
          if ((*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0xb0) < 1) ||
             (*(float *)(lVar27 + uVar29 * 0x90 + 0x14) < 1.0)) {
            lVar19 = 0;
            if (lVar30 != 0) {
              lVar19 = *(long *)(lVar30 + 0xa8);
            }
            if (PTR_DAT_047e6e68[0x19] != '\0') {
              uVar18 = CONCAT44(fVar43,fVar42);
              uVar39 = (ulong)(uint)fVar44;
              memset(&local_210,0,0xc0);
              auVar36._12_4_ = uStack_424;
              auVar36._0_12_ = auVar11;
              local_120 = 0;
              local_e8 = 0.0;
              local_e4 = 0;
              uStack_148 = auVar36._8_8_;
              local_150 = auVar11._0_8_;
              uStack_138 = (ulong)(uint)fVar44;
              uStack_140 = uVar18;
              if (*(long *)(lVar22 + 0x10) != 0) {
                if (((DAT_048af610 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_048af610), iVar16 != 0)) {
                  _DAT_048af600 = auVar35._0_8_;
                  uRam00000000048af608 = auVar35._8_8_;
                  __cxa_guard_release(&DAT_048af610);
                }
                auVar41._8_4_ = fVar44;
                auVar41._0_8_ = uVar18;
                auVar41._12_4_ = 0;
                uStack_338 = CONCAT44(uStack_424,fVar4);
                auVar36 = NEON_frecpe(auVar41,4);
                auVar41 = NEON_frecps(auVar41,auVar36,4);
                local_d0 = local_d0 & 0xffffffff00000000;
                auVar37._0_8_ =
                     CONCAT44(auVar36._4_4_ * (float)((ulong)_DAT_048af600 >> 0x20) * auVar41._4_4_,
                              auVar36._0_4_ * (float)_DAT_048af600 * auVar41._0_4_);
                auVar37._8_4_ = auVar36._8_4_ * (float)uRam00000000048af608 * auVar41._8_4_;
                auVar37._12_4_ =
                     auVar36._12_4_ * (float)((ulong)uRam00000000048af608 >> 0x20) * auVar41._12_4_;
                uStack_318 = auVar37._8_8_;
                local_360[4] = uVar12;
                uStack_330 = uVar18;
                uStack_328 = uVar39;
                local_320 = auVar37._0_8_;
                FUN_0342f824(*(undefined8 *)(lVar22 + 0x10),local_360 + 4,&local_d0,&local_210);
                if (local_120 != 0) {
                  bVar15 = FUN_0342fb58(&local_210);
                  local_e4 = bVar15 & 1 | local_e4 != 0;
                  local_120 = 0;
                }
                if (local_e4 != 0) {
                  lVar26 = lVar27 + uVar29 * 0x90;
                  *(undefined4 *)(lVar26 + 8) = local_130;
                  *(undefined4 *)(lVar26 + 0xc) = uStack_12c;
                  *(undefined4 *)(lVar26 + 0x10) = uStack_128;
                  *(undefined1 *)(lVar26 + 0x1b) = 1;
                }
              }
              fVar42 = local_e8;
              if ((lVar19 != 0) && (lVar19 != lVar22)) {
                memset(local_360 + 4,0,0xc0);
                auVar10._12_4_ = uStack_424;
                auVar10._0_12_ = auVar13;
                local_250 = 0;
                local_218 = 0.0;
                local_214 = 0;
                uStack_278 = auVar10._8_8_;
                local_280 = auVar13._0_8_;
                uStack_270 = uVar18;
                uStack_268 = uVar39;
                if (*(long *)(lVar19 + 0x10) != 0) {
                  if (((DAT_048af610 & 1) == 0) &&
                     (iVar16 = __cxa_guard_acquire(&DAT_048af610), iVar16 != 0)) {
                    _DAT_048af600 = auVar35._0_8_;
                    uRam00000000048af608 = auVar35._8_8_;
                    __cxa_guard_release(&DAT_048af610);
                  }
                  auVar9._8_4_ = fVar44;
                  auVar9._0_8_ = uVar18;
                  auVar9._12_4_ = 0;
                  uStack_c8 = CONCAT44(uStack_424,fVar4);
                  auVar36 = NEON_frecpe(auVar9,4);
                  auVar41 = NEON_frecps(auVar9,auVar36,4);
                  local_d4 = 0;
                  auVar38._0_8_ =
                       CONCAT44(auVar36._4_4_ * (float)((ulong)_DAT_048af600 >> 0x20) *
                                auVar41._4_4_,auVar36._0_4_ * (float)_DAT_048af600 * auVar41._0_4_);
                  auVar38._8_4_ = auVar36._8_4_ * (float)uRam00000000048af608 * auVar41._8_4_;
                  auVar38._12_4_ =
                       auVar36._12_4_ * (float)((ulong)uRam00000000048af608 >> 0x20) *
                       auVar41._12_4_;
                  uStack_a8 = auVar38._8_8_;
                  local_d0 = uVar14;
                  uStack_c0 = uVar18;
                  uStack_b8 = uVar39;
                  local_b0 = auVar38._0_8_;
                  FUN_0342f824(*(undefined8 *)(lVar19 + 0x10),&local_d0,&local_d4,local_360 + 4);
                  if (local_250 != 0) {
                    bVar15 = FUN_0342fb58(local_360 + 4);
                    local_214 = bVar15 & 1 | local_214 != 0;
                    local_250 = 0;
                  }
                }
                if (fVar42 < local_218) {
                  if (local_214 != 0) {
                    lVar19 = lVar27 + uVar29 * 0x90;
                    *(long *)(lVar19 + 8) = local_260._0_8_;
                    *(int *)(lVar19 + 0x10) = local_260._8_4_;
                    *(undefined1 *)(lVar19 + 0x1b) = 1;
                  }
                  fVar42 = local_218;
                }
              }
              pfVar20 = (float *)(lVar27 + uVar29 * 0x90 + 0x14);
              if (*pfVar20 < fVar42) {
                *pfVar20 = fVar42;
                *(undefined1 *)(lVar27 + uVar29 * 0x90 + 0x18) = 2;
              }
              if (local_120 != 0) {
                bVar15 = FUN_0342fb58(&local_210);
                local_e4 = bVar15 & 1 | local_e4 != 0;
                local_120 = 0;
              }
            }
          }
          pfVar20 = (float *)(**(code **)(*plVar31 + 8))(plVar31);
          if (pfVar20 != (float *)0x0) {
            pfVar20[0x1b] = fVar34;
            pfVar20[0x1c] = fVar2;
            pfVar20[0x1d] = fVar4;
            pfVar20[0x1e] = 0.0;
            *pfVar20 = fVar40;
            pfVar20[1] = fVar3;
            pfVar20[2] = fVar5;
            *(undefined1 *)((long)plVar31 + 0x19) = 1;
          }
          *(undefined1 *)((long)plVar31 + 0x1a) = 0;
          goto LAB_0342e374;
        }
        lVar27 = lVar27 + uVar29 * 0x90;
LAB_0342e06c:
        *(undefined1 *)(lVar27 + 0x1a) = 1;
      }
LAB_0342e5b8:
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar7);
    lVar19 = *(long *)(*(long *)(param_1 + 8) + 0x28);
  }
  *(byte *)(lVar19 + 0x54) = *(byte *)(lVar19 + 0x54) | 1;
  return;
}


