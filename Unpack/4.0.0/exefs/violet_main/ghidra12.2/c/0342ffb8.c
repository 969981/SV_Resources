/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342ffb8; name: FUN_0342ffb8
 */


undefined8
FUN_0342ffb8(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],long param_4,
            void *param_5,undefined4 *param_6,long *param_7)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  ulong *puVar3;
  undefined1 (*pauVar4) [16];
  ushort uVar5;
  int iVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  float *pfVar29;
  uint uVar30;
  float *pfVar31;
  float *pfVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float local_294;
  float local_27c;
  float *local_230;
  long local_218;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  ulong auStack_1d8 [15];
  long alStack_160 [8];
  float afStack_120 [8];
  undefined8 local_100;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  ulong uStack_e8;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  
  puVar19 = PTR_DAT_047e2fd0;
  uStack_e8 = SUB168(*param_3,8);
  local_f0 = SUB168(*param_3,0);
  if (*(int *)(param_4 + 0x40) == 0) {
    return 1;
  }
  lVar25 = 0;
  uVar26 = 0;
  uVar30 = 0;
  uVar21 = 0;
  lVar24 = 0;
  do {
    uVar13 = FUN_034387a4(*(long *)(param_4 + 0x38) + lVar25,param_3,param_2,&local_f0,&local_1e0);
    if ((uVar13 & 1) == 0) goto LAB_034300d4;
    lVar14 = lVar24;
    uVar22 = uVar30;
    if (uVar21 < uVar30) {
LAB_03430088:
      lVar24 = lVar14;
      uVar30 = uVar22;
      if (uVar21 < uVar22) {
        if (lVar14 != 0) {
          puVar7 = (undefined8 *)(lVar14 + (ulong)uVar21 * 0x10);
          puVar7[1] = auStack_1d8[0];
          *puVar7 = local_1e0;
        }
        uVar21 = uVar21 + 1;
      }
    }
    else {
      uVar22 = uVar30 + 8;
      lVar14 = (**(code **)(puVar19 + 0x28))(0xb,lVar24,(ulong)uVar22 << 4,0x10);
      if (lVar14 != 0) goto LAB_03430088;
    }
    uStack_e8 = auStack_1d8[0];
    local_f0 = local_1e0;
    uVar26 = uVar26 + 1;
    lVar25 = lVar25 + 0x20;
  } while (uVar26 < *(uint *)(param_4 + 0x40));
  uVar30 = uVar21 - 1;
  if (uVar30 < 7) {
    local_100 = 0x3f80000000000000;
    local_f8 = uVar21;
    memset(&local_1e0,0,0xe0);
    auVar34 = *param_2;
    local_218 = 0;
    uStack_1f8 = auVar34._8_8_;
    local_200 = auVar34._0_8_;
    pfVar20 = (float *)0x0;
    uVar26 = (ulong)uVar21;
    pfVar31 = (float *)0x0;
    uVar22 = uVar30;
    local_1f0 = local_200;
    uStack_1e8 = uStack_1f8;
LAB_03430130:
    uVar28 = uVar26 - 1;
    uVar13 = uVar28 & 0xffffffff;
    lVar25 = *(long *)(param_4 + 0x38) + uVar13 * 0x20;
    plVar16 = (long *)(lVar25 + 0x18);
    iVar6 = uVar21 - (int)uVar26;
    if (*plVar16 == 0) {
      pfVar2 = (float *)(lVar24 + (uVar28 & 0xffffffff) * 0x10);
      lVar14 = (long)iVar6;
      pfVar32 = *(float **)(lVar25 + 0x10);
      auVar36._0_8_ =
           CONCAT44((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) - auVar34._4_4_,
                    (float)*(undefined8 *)pfVar2 - auVar34._0_4_);
      auVar36._8_4_ = (float)*(undefined8 *)(pfVar2 + 2) - auVar34._8_4_;
      auVar36._12_4_ = (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20) - auVar34._12_4_;
      pauVar1 = (undefined1 (*) [16])(auStack_1d8 + (long)iVar6 * 2 + -1);
      lVar25 = FUN_0341cbd0(pfVar32 + 4,&local_1f0,pauVar1);
      if ((lVar25 != 0) &&
         (auVar34._8_8_ = auVar36._8_8_, auVar34._0_8_ = auVar36._0_8_,
         lVar23 = FUN_0341cbd0(auVar34,pfVar32 + 8,&local_1f0,pauVar1), lVar23 == 0)) {
        lVar23 = *(long *)(lVar25 + 0x30);
        puVar19 = PTR_DAT_047e6eb0;
        if ((lVar23 != 0) &&
           (uVar5 = *(ushort *)
                     (*(long *)(lVar23 + 8) +
                      (ulong)(ushort)((uint)((int)lVar25 - *(int *)(lVar23 + 0x20)) >> 6) * 8 + 6),
           uVar5 < *(ushort *)(lVar23 + 0x34))) {
          puVar19 = (undefined *)(*(long *)(lVar23 + 0x18) + (ulong)uVar5 * 0x10);
        }
        local_230 = (float *)0x0;
        alStack_160[lVar14] = (long)puVar19;
LAB_0343086c:
        uVar26 = FUN_03430f64(param_1,pauVar1,&local_1f0,0,pfVar32,local_230,local_218,pfVar31,
                              pfVar20);
        if ((uVar26 & 1) != 0) goto LAB_03430988;
        if (local_218 != 0) {
          uVar26 = FUN_03431400(local_218,&local_200,pauVar1,auStack_1d8 + (lVar14 + -1) * 2 + -1,
                                afStack_120 + lVar14 + -1);
          if ((uVar26 & 1) != 0) {
            fVar33 = (float)local_100 + afStack_120[lVar14 + -1];
            uVar37 = NEON_fminnm(fVar33,0x3f800000);
            local_100 = CONCAT44(local_100._4_4_,uVar37);
            if (fVar33 <= 1.0) goto LAB_034308f4;
          }
          goto LAB_03430988;
        }
LAB_034308f4:
        auVar34 = *pauVar1;
        local_218 = 0;
        uStack_1e8 = auVar34._8_8_;
        local_1f0 = auVar34._0_8_;
LAB_03430908:
        uVar22 = uVar22 - 1;
        pfVar20 = local_230;
        uVar26 = uVar28;
        pfVar31 = pfVar32;
        if ((int)uVar22 < 0) goto code_r0x03430914;
        goto LAB_03430130;
      }
      plVar16 = alStack_160 + lVar14;
      *plVar16 = 0;
      pauVar4 = (undefined1 (*) [16])(lVar24 + (ulong)((int)uVar26 - 2) * 0x10);
      if ((long)uVar28 < 1) {
        pauVar4 = param_3;
      }
      uVar27 = *(undefined8 *)*pauVar4;
      local_b8 = local_1f0;
      local_b0 = (float)uStack_1e8;
      fVar33 = pfVar32[0xe];
      if (fVar33 == 0.0) {
        local_230 = (float *)0x0;
        local_294 = 1.0;
        local_27c = 0.0;
      }
      else {
        lVar25 = lVar24 + uVar13 * 0x10;
        fVar54 = pfVar32[2];
        fVar52 = (float)((ulong)uVar27 >> 0x20);
        fVar8 = (float)*(undefined8 *)(*pauVar4 + 8);
        local_230 = (float *)0x0;
        uVar26 = 0;
        fVar46 = *pfVar32;
        fVar53 = pfVar32[1];
        local_294 = 1.0;
        local_27c = 0.0;
        do {
          pfVar29 = *(float **)(*(long *)(pfVar32 + 0xc) + uVar26 * 8);
          if ((pfVar31 != (float *)0x0) && (pfVar31[0xe] != 0.0)) {
            lVar23 = (ulong)(uint)pfVar31[0xe] << 3;
            plVar17 = *(long **)(pfVar31 + 0xc);
            do {
              if ((float *)*plVar17 == pfVar29) goto LAB_03430628;
              lVar23 = lVar23 + -8;
              plVar17 = plVar17 + 1;
            } while (lVar23 != 0);
          }
          fVar38 = fVar52 - pfVar29[1];
          fVar44 = pfVar29[6];
          fVar45 = pfVar29[7];
          fVar40 = (float)uVar27;
          fVar39 = fVar40 - *pfVar29;
          fVar41 = fVar8 - pfVar29[2];
          fVar47 = pfVar29[8];
          fVar43 = (float)local_b8 - *pfVar29;
          fVar42 = local_b8._4_4_ - pfVar29[1];
          fVar48 = local_b0 - pfVar29[2];
          if (fVar44 * fVar39 + fVar38 * fVar45 + fVar41 * fVar47 <= 0.0) {
LAB_0343045c:
            fVar44 = pfVar29[9];
            fVar45 = pfVar29[10];
            fVar47 = pfVar29[0xb];
            if (0.0 < fVar44 * fVar39 + fVar38 * fVar45 + fVar41 * fVar47) {
              fVar49 = ABS(ABS(fVar44 * fVar46 + fVar53 * fVar45 + fVar54 * fVar47) + -1.0);
              bVar10 = false;
              bVar11 = false;
              if (0.0 < fVar44 * fVar43 + fVar42 * fVar45 + fVar48 * fVar47) {
                bVar10 = false;
                bVar11 = true;
                if (!NAN(fVar49)) {
                  bVar10 = fVar49 < 0.001;
                  bVar11 = false;
                }
              }
              if (bVar10 != bVar11) {
                fVar49 = pfVar29[5] * fVar45 - pfVar29[4] * fVar47;
                lVar23 = *(long *)(pfVar29 + 0x1c);
                fVar51 = pfVar29[4] * fVar44 - pfVar29[3] * fVar45;
                fVar50 = pfVar29[3] * fVar47 - pfVar29[5] * fVar44;
                goto LAB_034304f8;
              }
            }
          }
          else {
            fVar49 = ABS(ABS(fVar44 * fVar46 + fVar53 * fVar45 + fVar54 * fVar47) + -1.0);
            bVar10 = false;
            bVar11 = false;
            if (0.0 < fVar44 * fVar43 + fVar42 * fVar45 + fVar48 * fVar47) {
              bVar10 = false;
              bVar11 = true;
              if (!NAN(fVar49)) {
                bVar10 = fVar49 < 0.001;
                bVar11 = false;
              }
            }
            if (bVar10 == bVar11) goto LAB_0343045c;
            fVar49 = pfVar29[4] * fVar47 - pfVar29[5] * fVar45;
            fVar50 = pfVar29[5] * fVar44 - pfVar29[3] * fVar47;
            fVar51 = pfVar29[3] * fVar45 - pfVar29[4] * fVar44;
            lVar23 = *(long *)(pfVar29 + 0x1a);
LAB_034304f8:
            lVar18 = *(long *)(lVar23 + 0x30);
            if (lVar18 == 0) {
              uVar15 = 0xffff;
            }
            else {
              uVar15 = (uint)*(ushort *)
                              (*(long *)(lVar18 + 8) +
                               (ulong)(ushort)((uint)((int)lVar23 - *(int *)(lVar18 + 0x20)) >> 6) *
                               8 + 6);
            }
            fVar38 = fVar49 * fVar39 + fVar38 * fVar50 + fVar41 * fVar51;
            fVar39 = fVar49 * fVar43 + fVar42 * fVar50 + fVar48 * fVar51;
            if ((0.0 <= fVar38) || (0.0 <= fVar39)) {
              local_c8 = 0;
              local_c0 = 0.0;
              local_d8 = *pfVar2 - (float)local_b8;
              fStack_d4 = *(float *)(lVar25 + 4) - local_b8._4_4_;
              local_d0 = *(float *)(lVar25 + 8) - local_b0;
              uVar13 = FUN_0341a340(pfVar29,&local_b8,&local_d8,&local_c8);
              uVar9 = local_c8;
              if ((uVar13 & 1) != 0) {
                fVar49 = fVar52 - local_c8._4_4_;
                fVar42 = (float)local_b8 - (float)local_c8;
                fVar40 = fVar40 - (float)local_c8;
                fVar41 = local_b8._4_4_ - local_c8._4_4_;
                fVar43 = local_b0 - local_c0;
                fVar50 = fVar8 - local_c0;
                fVar48 = SQRT(fVar42 * fVar42 + fVar41 * fVar41 + fVar43 * fVar43);
                fVar51 = SQRT(fVar40 * fVar40 + fVar49 * fVar49 + fVar50 * fVar50);
                bVar10 = false;
                bVar11 = true;
                bVar12 = false;
                if (0.001 < fVar48) {
                  bVar10 = false;
                  bVar11 = false;
                  bVar12 = true;
                  if (!NAN(fVar51)) {
                    bVar10 = fVar51 < 0.001;
                    bVar11 = fVar51 == 0.001;
                    bVar12 = false;
                  }
                }
                if (!bVar11 && bVar10 == bVar12) {
                  uVar13 = (ulong)(uint)local_c0;
                  fVar41 = (float)NEON_fminnm((fVar42 * fVar44 + fVar45 * fVar41 + fVar47 * fVar43)
                                              / fVar48,0x3f800000);
                  if (fVar41 <= -1.0) {
                    fVar41 = -1.0;
                  }
                  fVar41 = acosf(fVar41);
                  fVar40 = (float)NEON_fminnm((fVar40 * fVar44 + fVar45 * fVar49 + fVar47 * fVar50)
                                              / fVar51,0x3f800000);
                  if (fVar40 <= -1.0) {
                    fVar40 = -1.0;
                  }
                  fVar42 = acosf(fVar40);
                  fVar38 = fVar38 * fVar39;
                  fVar39 = fVar42 + fVar41;
                  fVar40 = fVar41 + 1.5707964;
                  if (fVar38 < 0.0) {
                    fVar39 = fVar42 - fVar41;
                    fVar40 = 1.5707964 - fVar41;
                  }
                  fVar43 = fVar42 + fVar41;
                  fVar44 = fVar42 + 1.5707964;
                  if (fVar38 < 0.0) {
                    fVar43 = fVar41 - fVar42;
                    fVar44 = 1.5707964 - fVar42;
                  }
                  if (fVar42 < fVar41) {
                    fVar39 = fVar43;
                    fVar40 = fVar44;
                  }
                  fVar38 = 1.0 - (fVar39 / fVar40) * (fVar39 / fVar40);
                  if (local_27c < fVar38) {
                    auStack_1d8[(long)iVar6 * 2] = uVar13;
                    *(undefined8 *)*pauVar1 = uVar9;
                    puVar19 = PTR_DAT_047e6eb0;
                    if (uVar15 < *(ushort *)(*(long *)(pfVar29 + 0xc) + 0x34)) {
                      puVar19 = (undefined *)
                                (*(long *)(*(long *)(pfVar29 + 0xc) + 0x18) + (ulong)uVar15 * 0x10);
                    }
                    local_294 = fVar39 * 0.31830987;
                    *plVar16 = (long)puVar19;
                    local_27c = fVar38;
                    local_230 = pfVar29;
                  }
                  goto LAB_03430628;
                }
              }
            }
          }
LAB_03430628:
          uVar26 = uVar26 + 1;
        } while (uVar26 != (uint)fVar33);
      }
      local_100 = CONCAT44(local_100._4_4_ * local_27c,(float)local_100);
      afStack_120[lVar14] = local_294;
      if (local_230 != (float *)0x0) {
        local_294 = (float)local_100 + local_294;
        uVar37 = NEON_fminnm(local_294,0x3f800000);
        local_100 = CONCAT44(local_100._4_4_,uVar37);
        uVar27 = 1;
        puVar19 = PTR_DAT_047e2fd0;
        if ((0.001 < local_100._4_4_) && (local_294 <= 1.0)) {
          if (*plVar16 != 0) goto LAB_0343086c;
          goto LAB_03430988;
        }
        goto joined_r0x03430994;
      }
    }
    else if (*(char *)(param_1 + 0x20) != '\0') {
      local_b8 = 0;
      local_b0 = 0.0;
      local_c8 = *(undefined8 *)*param_3;
      local_c0 = *(float *)(*param_3 + 8);
      local_d8 = *(float *)*param_2 - *(float *)*param_3;
      fStack_d4 = *(float *)(*param_2 + 4) - *(float *)(*param_3 + 4);
      local_d0 = *(float *)(*param_2 + 8) - local_c0;
      uVar26 = FUN_0341a340(*plVar16,&local_c8,&local_d8,&local_b8);
      if ((uVar26 & 1) != 0) {
        auVar34 = NEON_fmov(0x3f800000,4);
        auVar35._0_8_ = CONCAT44(*(undefined4 *)((ulong)&local_b8 | 4),(float)local_b8);
        pauVar1 = (undefined1 (*) [16])(auStack_1d8 + (long)iVar6 * 2 + -1);
        auVar35._12_4_ = auVar34._12_4_;
        auVar35._8_4_ = local_b0;
        auStack_1d8[(long)iVar6 * 2] = auVar35._8_8_;
        *(undefined8 *)*pauVar1 = auVar35._0_8_;
        uVar26 = FUN_03430f64(param_1,pauVar1,&local_1f0,
                              *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar13 * 0x20 + 0x18),0,0,
                              local_218,pfVar31,pfVar20);
        if ((uVar26 & 1) == 0) {
          if (local_218 == 0) {
LAB_03430284:
            local_230 = (float *)0x0;
            auVar34 = *pauVar1;
            pfVar32 = (float *)0x0;
            uStack_1f8 = uStack_1e8;
            local_200 = local_1f0;
            uStack_1e8 = auVar34._8_8_;
            local_1f0 = auVar34._0_8_;
            local_218 = *(long *)(*(long *)(param_4 + 0x38) + uVar13 * 0x20 + 0x18);
            goto LAB_03430908;
          }
          uVar26 = FUN_03431400(local_218,&local_200,pauVar1,
                                auStack_1d8 + ((long)iVar6 + -1) * 2 + -1,
                                afStack_120 + (long)iVar6 + -1);
          if ((uVar26 & 1) != 0) {
            fVar33 = (float)local_100 + afStack_120[(long)iVar6 + -1];
            uVar37 = NEON_fminnm(fVar33,0x3f800000);
            local_100 = CONCAT44(local_100._4_4_,uVar37);
            if (fVar33 <= 1.0) goto LAB_03430284;
          }
        }
      }
    }
LAB_03430988:
    uVar27 = 1;
    puVar19 = PTR_DAT_047e2fd0;
    goto joined_r0x03430994;
  }
LAB_034300d4:
  uVar27 = 1;
  goto joined_r0x03430994;
code_r0x03430914:
  puVar3 = auStack_1d8 + (ulong)uVar30 * 2 + -1;
  uVar13 = (ulong)uVar30;
  uVar26 = FUN_03430f64(param_1,param_3,puVar3,0,0,0,local_218,pfVar32,local_230);
  if ((uVar26 & 1) != 0) {
    if (param_6 != (undefined4 *)0x0) {
      uVar37 = *(undefined4 *)((long)auStack_1d8 + uVar13 * 0x10 + -4);
      uVar26 = auStack_1d8[uVar13 * 2];
      *param_6 = (int)*puVar3;
      param_6[1] = uVar37;
      param_6[2] = (int)uVar26;
      if (param_7 != (long *)0x0) {
        *param_7 = (long)pfVar32;
      }
    }
    uVar27 = 3;
    puVar19 = PTR_DAT_047e2fd0;
    goto joined_r0x03430994;
  }
  if (local_218 == 0) {
LAB_03430a30:
    uVar21 = *(uint *)(param_4 + 0x40);
    local_f4 = 0x811c9dc5;
    if (0 < (int)uVar21) {
      lVar25 = (ulong)uVar21 + 1;
      do {
        uVar21 = uVar21 - 1;
        lVar14 = *(long *)(param_4 + 0x38) + (ulong)uVar21 * 0x20;
        lVar23 = *(long *)(lVar14 + 0x10);
        if (lVar23 == 0) {
          lVar23 = *(long *)(lVar14 + 0x18);
        }
        uVar22 = (uint)lVar23;
        uVar30 = (uint)((ulong)lVar23 >> 0x20);
        lVar25 = lVar25 + -1;
        local_f4 = (((((((uVar22 & 0xff ^ local_f4 * 0x1000193) * 0x1000193 ^ uVar22 >> 8 & 0xff) *
                        0x1000193 ^ uVar22 >> 0x10 & 0xff) * 0x1000193 ^ uVar22 >> 0x18) * 0x1000193
                     ^ uVar30 & 0xff) * 0x1000193 ^ uVar30 >> 8 & 0xff) * 0x1000193 ^
                   (ushort)((ulong)lVar23 >> 0x30) & 0xff) * 0x1000193 ^
                   (uint)(byte)((ulong)lVar23 >> 0x38);
      } while (1 < lVar25);
    }
    memcpy(param_5,&local_1e0,0xf0);
    uVar27 = 0;
    puVar19 = PTR_DAT_047e2fd0;
  }
  else {
    uVar26 = FUN_03431400(local_218,&local_200,param_3,puVar3,afStack_120 + uVar13);
    if ((uVar26 & 1) != 0) {
      fVar33 = (float)local_100 + afStack_120[uVar13];
      uVar37 = NEON_fminnm(fVar33,0x3f800000);
      local_100 = CONCAT44(local_100._4_4_,uVar37);
      if (fVar33 <= 1.0) goto LAB_03430a30;
    }
    uVar27 = 2;
    puVar19 = PTR_DAT_047e2fd0;
  }
joined_r0x03430994:
  if (lVar24 != 0) {
    (**(code **)(puVar19 + 0x30))(0xb,lVar24);
  }
  return uVar27;
}


