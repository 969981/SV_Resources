/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a9930; name: FUN_003a9930
 */


undefined8
FUN_003a9930(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4,void *param_5,
            long param_6,ulong param_7,void *param_8,size_t param_9,char param_10)

{
  ulong uVar1;
  byte bVar3;
  byte bVar2;
  size_t __n;
  ulong uVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  code *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  size_t __n_00;
  ulong uVar13;
  ulong uVar14;
  size_t __n_01;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  size_t __n_02;
  ulong uVar23;
  code *local_330;
  uint local_310 [32];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined5 uStack_250;
  undefined3 local_24b;
  undefined5 uStack_248;
  undefined1 auStack_243 [115];
  ulong local_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong local_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  byte abStack_150 [24];
  undefined1 auStack_138 [216];
  
  if (param_7 >> 0x14 != 0) {
    return 0;
  }
  FUN_0043b770();
  iVar8 = FUN_0043b710();
  switch(iVar8) {
  case 0x2a0:
    iVar8 = FUN_004741d0(auStack_138);
    if (iVar8 < 1) {
      return 0;
    }
    uVar23 = 0x20;
    break;
  case 0x2a1:
    iVar8 = FUN_00475310(auStack_138);
    if (iVar8 < 1) {
      return 0;
    }
    uVar23 = 0x30;
    goto LAB_003a9a80;
  case 0x2a2:
    iVar8 = FUN_00475350(auStack_138);
    if (iVar8 < 1) {
      return 0;
    }
    uVar23 = 0x40;
LAB_003a9a80:
    bVar7 = false;
    bVar5 = false;
    __n_02 = 0x80;
    __n_00 = 0x28;
    __n_01 = 0x10;
    pcVar10 = (code *)&LAB_003aa440;
    local_330 = (code *)PTR_LAB_047cd090;
    goto LAB_003a9b28;
  case 0x2a3:
    iVar8 = FUN_00474190(auStack_138);
    if (iVar8 < 1) {
      return 0;
    }
    uVar23 = 0x1c;
    break;
  default:
    if (iVar8 == 0x40) {
      iVar8 = FUN_00474150(auStack_138);
      if (iVar8 < 1) {
        return 0;
      }
      local_330 = (code *)PTR_LAB_047cd098;
      bVar5 = false;
      uVar23 = 0x14;
      __n_02 = 0x40;
      __n_00 = 0x28;
      bVar7 = true;
      __n_01 = 8;
      pcVar10 = (code *)&LAB_003aa250;
    }
    else {
      if (iVar8 != 4) {
        if (param_3 == (ulong *)0x0) {
          return 0;
        }
        *param_3 = 0;
        return 0;
      }
      iVar8 = FUN_004528e0(auStack_138);
      if (iVar8 < 1) {
        return 0;
      }
      local_330 = (code *)PTR_LAB_047cd088;
      bVar5 = true;
      uVar23 = 0x10;
      __n_02 = 0x40;
      __n_00 = 0x30;
      __n_01 = 8;
      bVar7 = true;
      pcVar10 = (code *)&LAB_003aa1b0;
    }
    goto LAB_003a9b28;
  }
  bVar7 = true;
  bVar5 = false;
  __n_02 = 0x40;
  __n_00 = 0x28;
  __n_01 = 8;
  pcVar10 = FUN_003aa310;
  local_330 = (code *)PTR_FUN_047cd080;
LAB_003a9b28:
  uVar1 = 0xd;
  if (param_10 == '\0') {
    uVar21 = 0;
    if (__n_02 != 0) {
      uVar21 = ((__n_02 + (uVar23 | 0x100)) - 1) / __n_02;
    }
    uVar21 = uVar21 + 1;
  }
  else {
    uVar21 = 2;
    uVar1 = param_9 + __n_00 + 0xb;
  }
  lVar15 = __n_01 - 1;
  uVar4 = 0;
  if (__n_02 != 0) {
    uVar4 = (((lVar15 + __n_02) - uVar23) + uVar1 + param_7) / __n_02;
  }
  uVar13 = uVar4 - uVar21;
  uVar14 = uVar13 * __n_02;
  uVar19 = (uVar1 + param_6) - uVar23;
  uVar22 = uVar21;
  if (param_10 != '\0') {
    uVar22 = uVar21 + 1;
  }
  if (uVar4 <= uVar22) {
    uVar13 = 0;
    uVar14 = 0;
  }
  iVar8 = (int)uVar19 * 8;
  if (param_10 == '\0') {
    memset(&local_1d0,0,__n_02);
    if (0x80 < param_9) {
      return 0;
    }
    iVar8 = iVar8 + (int)__n_02 * 8;
    memcpy(&local_1d0,param_8,param_9);
    uStack_1c0 = uStack_1c0 ^ 0x3636363636363636;
    uStack_1b8 = uStack_1b8 ^ 0x3636363636363636;
    local_1d0 = local_1d0 ^ 0x3636363636363636;
    uStack_1c8 = uStack_1c8 ^ 0x3636363636363636;
    uStack_1a0 = uStack_1a0 ^ 0x3636363636363636;
    uStack_198 = uStack_198 ^ 0x3636363636363636;
    uStack_1a8 = uStack_1a8 ^ 0x3636363636363636;
    local_1b0 = local_1b0 ^ 0x3636363636363636;
    if (!bVar7) {
      uStack_180 = uStack_180 ^ 0x3636363636363636;
      uStack_178 = uStack_178 ^ 0x3636363636363636;
      local_190 = local_190 ^ 0x3636363636363636;
      uStack_188 = uStack_188 ^ 0x3636363636363636;
      local_170 = local_170 ^ 0x3636363636363636;
      uStack_168 = uStack_168 ^ 0x3636363636363636;
      uStack_160 = uStack_160 ^ 0x3636363636363636;
      uStack_158 = uStack_158 ^ 0x3636363636363636;
    }
    (*local_330)(auStack_138,&local_1d0);
  }
  bVar2 = (byte)((uint)iVar8 >> 0x10);
  bVar3 = (byte)((uint)iVar8 >> 0x18);
  bVar18 = (byte)((uint)iVar8 >> 8);
  if (bVar5) {
    memset(abStack_150 + 8,0,__n_01);
    lVar15 = __n_01 - 8;
    abStack_150[__n_01 + 3] = bVar3;
    abStack_150[__n_01 + 2] = bVar2;
    abStack_150[__n_01 + 1] = bVar18;
  }
  else {
    memset(abStack_150 + 8,0,__n_01 - 4);
    abStack_150[__n_01 + 4] = bVar3;
    abStack_150[__n_01 + 5] = bVar2;
    abStack_150[__n_01 + 6] = bVar18;
  }
  abStack_150[lVar15 + 8] = (byte)iVar8;
  if (uVar14 != 0) {
    if (param_10 == '\0') {
      uStack_248 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 5) >> 0x18);
      uStack_250 = (undefined5)*param_4;
      local_24b = (undefined3)((ulong)*param_4 >> 0x28);
      memcpy(auStack_243,param_5,__n_02 - 0xd);
      (*local_330)(auStack_138,&uStack_250);
      uVar4 = 0;
      if (__n_02 != 0) {
        uVar4 = uVar14 / __n_02;
      }
      if (1 < uVar4) {
        lVar15 = (long)param_5 + (__n_02 - 0xd);
        uVar22 = 1;
        do {
          (*local_330)(auStack_138,lVar15);
          uVar22 = uVar22 + 1;
          lVar15 = lVar15 + __n_02;
        } while (uVar22 != uVar4);
      }
    }
    else {
      __n = uVar1 - __n_02;
      if (uVar1 < __n_02 || __n == 0) {
        return 0;
      }
      (*local_330)(auStack_138,param_4);
      memcpy(&uStack_250,(void *)((long)param_4 + __n_02),__n);
      memcpy(auStack_243 + (__n - 0xd),param_5,__n_02 - __n);
      (*local_330)(auStack_138,&uStack_250);
      uVar4 = 0;
      if (__n_02 != 0) {
        uVar4 = uVar14 / __n_02;
      }
      if (1 < uVar4 - 1) {
        lVar15 = (long)param_5 + (__n_02 * 2 - uVar1);
        uVar22 = 1;
        do {
          (*local_330)(auStack_138,lVar15);
          uVar22 = uVar22 + 1;
          lVar15 = lVar15 + __n_02;
        } while (uVar22 != uVar4 - 1);
      }
    }
  }
  uVar4 = uVar13 + uVar21;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_278 = 0;
  local_280 = 0;
  if (!CARRY8(uVar13,uVar21)) {
    uVar21 = 0;
    if (__n_02 != 0) {
      uVar21 = uVar19 / __n_02;
    }
    uVar16 = uVar23 & 0x70;
    uVar20 = uVar19 - uVar21 * __n_02;
    uVar22 = 0;
    if (__n_02 != 0) {
      uVar22 = (uVar19 + __n_01) / __n_02;
    }
    do {
      bVar2 = (char)((byte)((uVar13 ^ uVar22) - 1 >> 0x38) &
                    ((byte)((uVar13 ^ uVar22) >> 0x38) ^ 0x80)) >> 7;
      uVar19 = 0;
      bVar3 = (char)((byte)((uVar13 ^ uVar21) - 1 >> 0x38) &
                    ((byte)((uVar13 ^ uVar21) >> 0x38) ^ 0x80)) >> 7;
      uVar17 = uVar14;
      do {
        if (uVar14 + uVar19 < uVar1) {
          pbVar11 = (byte *)((long)param_4 + uVar19 + uVar14);
LAB_003a9f9c:
          bVar18 = *pbVar11;
        }
        else {
          if (uVar14 + uVar19 < uVar1 + param_7) {
            pbVar11 = (byte *)((long)param_5 + (uVar17 - uVar1));
            goto LAB_003a9f9c;
          }
          bVar18 = 0;
        }
        bVar6 = bVar3 & ((byte)((long)(uVar19 - uVar20) >> 0x3f) ^ 0xff);
        uVar17 = uVar17 + 1;
        bVar18 = ((byte)((long)(uVar19 + ~uVar20) >> 0x3f) | ~bVar3) & (bVar3 | bVar2 ^ 0xff) &
                 (~bVar6 & bVar18 | bVar6 & 0x80);
        if (__n_02 - __n_01 <= uVar19) {
          bVar18 = ~bVar2 & bVar18 | bVar2 & abStack_150[uVar19 + (__n_01 - __n_02) + 8];
        }
        *(byte *)((long)local_310 + uVar19) = bVar18;
        uVar19 = uVar19 + 1;
      } while (__n_02 != uVar19);
      (*local_330)(auStack_138,local_310);
      (*pcVar10)(auStack_138,local_310);
      uStack_288 = CONCAT17((byte)((ulong)uStack_288 >> 0x38) | local_310[3]._3_1_ & bVar2,
                            CONCAT16((byte)((ulong)uStack_288 >> 0x30) | local_310[3]._2_1_ & bVar2,
                                     CONCAT15((byte)((ulong)uStack_288 >> 0x28) |
                                              local_310[3]._1_1_ & bVar2,
                                              CONCAT14((byte)((ulong)uStack_288 >> 0x20) |
                                                       (byte)local_310[3] & bVar2,
                                                       CONCAT13((byte)((ulong)uStack_288 >> 0x18) |
                                                                local_310[2]._3_1_ & bVar2,
                                                                CONCAT12((byte)((ulong)uStack_288 >>
                                                                               0x10) |
                                                                         local_310[2]._2_1_ & bVar2,
                                                                         CONCAT11((byte)((ulong)
                                                  uStack_288 >> 8) | local_310[2]._1_1_ & bVar2,
                                                  (byte)uStack_288 | (byte)local_310[2] & bVar2)))))
                                    ));
      local_290 = CONCAT17((byte)((ulong)local_290 >> 0x38) | (byte)(local_310[1] >> 0x18) & bVar2,
                           CONCAT16((byte)((ulong)local_290 >> 0x30) |
                                    (byte)(local_310[1] >> 0x10) & bVar2,
                                    CONCAT15((byte)((ulong)local_290 >> 0x28) |
                                             (byte)(local_310[1] >> 8) & bVar2,
                                             CONCAT14((byte)((ulong)local_290 >> 0x20) |
                                                      (byte)local_310[1] & bVar2,
                                                      CONCAT13((byte)((ulong)local_290 >> 0x18) |
                                                               (byte)(local_310[0] >> 0x18) & bVar2,
                                                               CONCAT12((byte)((ulong)local_290 >>
                                                                              0x10) |
                                                                        (byte)(local_310[0] >> 0x10)
                                                                        & bVar2,CONCAT11((byte)((
                                                  ulong)local_290 >> 8) |
                                                  (byte)(local_310[0] >> 8) & bVar2,
                                                  (byte)local_290 | (byte)local_310[0] & bVar2))))))
                          );
      if (uVar16 != 0x10) {
        uStack_278 = CONCAT17((byte)((ulong)uStack_278 >> 0x38) | local_310[7]._3_1_ & bVar2,
                              CONCAT16((byte)((ulong)uStack_278 >> 0x30) |
                                       local_310[7]._2_1_ & bVar2,
                                       CONCAT15((byte)((ulong)uStack_278 >> 0x28) |
                                                local_310[7]._1_1_ & bVar2,
                                                CONCAT14((byte)((ulong)uStack_278 >> 0x20) |
                                                         (byte)local_310[7] & bVar2,
                                                         CONCAT13((byte)((ulong)uStack_278 >> 0x18)
                                                                  | local_310[6]._3_1_ & bVar2,
                                                                  CONCAT12((byte)((ulong)uStack_278
                                                                                 >> 0x10) |
                                                                           local_310[6]._2_1_ &
                                                                           bVar2,CONCAT11((byte)((
                                                  ulong)uStack_278 >> 8) |
                                                  local_310[6]._1_1_ & bVar2,
                                                  (byte)uStack_278 | (byte)local_310[6] & bVar2)))))
                                      ));
        local_280 = CONCAT17((byte)((ulong)local_280 >> 0x38) | local_310[5]._3_1_ & bVar2,
                             CONCAT16((byte)((ulong)local_280 >> 0x30) | local_310[5]._2_1_ & bVar2,
                                      CONCAT15((byte)((ulong)local_280 >> 0x28) |
                                               local_310[5]._1_1_ & bVar2,
                                               CONCAT14((byte)((ulong)local_280 >> 0x20) |
                                                        (byte)local_310[5] & bVar2,
                                                        CONCAT13((byte)((ulong)local_280 >> 0x18) |
                                                                 local_310[4]._3_1_ & bVar2,
                                                                 CONCAT12((byte)((ulong)local_280 >>
                                                                                0x10) |
                                                                          local_310[4]._2_1_ & bVar2
                                                                          ,CONCAT11((byte)((ulong)
                                                  local_280 >> 8) | local_310[4]._1_1_ & bVar2,
                                                  (byte)local_280 | (byte)local_310[4] & bVar2))))))
                            );
        if (uVar16 != 0x20) {
          uStack_268 = CONCAT17((byte)((ulong)uStack_268 >> 0x38) | local_310[0xb]._3_1_ & bVar2,
                                CONCAT16((byte)((ulong)uStack_268 >> 0x30) |
                                         local_310[0xb]._2_1_ & bVar2,
                                         CONCAT15((byte)((ulong)uStack_268 >> 0x28) |
                                                  local_310[0xb]._1_1_ & bVar2,
                                                  CONCAT14((byte)((ulong)uStack_268 >> 0x20) |
                                                           (byte)local_310[0xb] & bVar2,
                                                           CONCAT13((byte)((ulong)uStack_268 >> 0x18
                                                                          ) | local_310[10]._3_1_ &
                                                                              bVar2,
                                                                    CONCAT12((byte)((ulong)
                                                  uStack_268 >> 0x10) | local_310[10]._2_1_ & bVar2,
                                                  CONCAT11((byte)((ulong)uStack_268 >> 8) |
                                                           local_310[10]._1_1_ & bVar2,
                                                           (byte)uStack_268 |
                                                           (byte)local_310[10] & bVar2)))))));
          local_270 = CONCAT17((byte)((ulong)local_270 >> 0x38) | local_310[9]._3_1_ & bVar2,
                               CONCAT16((byte)((ulong)local_270 >> 0x30) |
                                        local_310[9]._2_1_ & bVar2,
                                        CONCAT15((byte)((ulong)local_270 >> 0x28) |
                                                 local_310[9]._1_1_ & bVar2,
                                                 CONCAT14((byte)((ulong)local_270 >> 0x20) |
                                                          (byte)local_310[9] & bVar2,
                                                          CONCAT13((byte)((ulong)local_270 >> 0x18)
                                                                   | local_310[8]._3_1_ & bVar2,
                                                                   CONCAT12((byte)((ulong)local_270
                                                                                  >> 0x10) |
                                                                            local_310[8]._2_1_ &
                                                                            bVar2,CONCAT11((byte)((
                                                  ulong)local_270 >> 8) | local_310[8]._1_1_ & bVar2
                                                  ,(byte)local_270 | (byte)local_310[8] & bVar2)))))
                                       ));
          if (uVar16 != 0x30) {
            uStack_258 = CONCAT17((byte)((ulong)uStack_258 >> 0x38) | local_310[0xf]._3_1_ & bVar2,
                                  CONCAT16((byte)((ulong)uStack_258 >> 0x30) |
                                           local_310[0xf]._2_1_ & bVar2,
                                           CONCAT15((byte)((ulong)uStack_258 >> 0x28) |
                                                    local_310[0xf]._1_1_ & bVar2,
                                                    CONCAT14((byte)((ulong)uStack_258 >> 0x20) |
                                                             (byte)local_310[0xf] & bVar2,
                                                             CONCAT13((byte)((ulong)uStack_258 >>
                                                                            0x18) |
                                                                      local_310[0xe]._3_1_ & bVar2,
                                                                      CONCAT12((byte)((ulong)
                                                  uStack_258 >> 0x10) | local_310[0xe]._2_1_ & bVar2
                                                  ,CONCAT11((byte)((ulong)uStack_258 >> 8) |
                                                            local_310[0xe]._1_1_ & bVar2,
                                                            (byte)uStack_258 |
                                                            (byte)local_310[0xe] & bVar2)))))));
            local_260 = CONCAT17((byte)((ulong)local_260 >> 0x38) | local_310[0xd]._3_1_ & bVar2,
                                 CONCAT16((byte)((ulong)local_260 >> 0x30) |
                                          local_310[0xd]._2_1_ & bVar2,
                                          CONCAT15((byte)((ulong)local_260 >> 0x28) |
                                                   local_310[0xd]._1_1_ & bVar2,
                                                   CONCAT14((byte)((ulong)local_260 >> 0x20) |
                                                            (byte)local_310[0xd] & bVar2,
                                                            CONCAT13((byte)((ulong)local_260 >> 0x18
                                                                           ) | local_310[0xc]._3_1_
                                                                               & bVar2,
                                                                     CONCAT12((byte)((ulong)
                                                  local_260 >> 0x10) | local_310[0xc]._2_1_ & bVar2,
                                                  CONCAT11((byte)((ulong)local_260 >> 8) |
                                                           local_310[0xc]._1_1_ & bVar2,
                                                           (byte)local_260 |
                                                           (byte)local_310[0xc] & bVar2)))))));
          }
        }
      }
      uVar14 = uVar14 + uVar19;
      if (uVar23 != uVar16) {
        pbVar11 = (byte *)((long)local_310 + uVar16);
        pbVar12 = (byte *)((long)local_310 + uVar16 + 0x80);
        uVar19 = uVar23 & 0xf;
        do {
          uVar19 = uVar19 - 1;
          *pbVar12 = *pbVar12 | *pbVar11 & bVar2;
          pbVar11 = pbVar11 + 1;
          pbVar12 = pbVar12 + 1;
        } while (uVar19 != 0);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 <= uVar4);
  }
  lVar15 = FUN_0042bbc0();
  if (lVar15 != 0) {
    uVar9 = FUN_0043b770(param_1);
    iVar8 = FUN_0042bc40(lVar15,uVar9,0);
    if (0 < iVar8) {
      if (param_10 == '\0') {
        uStack_1c0 = uStack_1c0 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_1b8 = uStack_1b8 ^ 0x6a6a6a6a6a6a6a6a;
        local_1d0 = local_1d0 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_1c8 = uStack_1c8 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_1a0 = uStack_1a0 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_198 = uStack_198 ^ 0x6a6a6a6a6a6a6a6a;
        uStack_1a8 = uStack_1a8 ^ 0x6a6a6a6a6a6a6a6a;
        local_1b0 = local_1b0 ^ 0x6a6a6a6a6a6a6a6a;
        if (!bVar7) {
          uStack_180 = uStack_180 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_178 = uStack_178 ^ 0x6a6a6a6a6a6a6a6a;
          local_190 = local_190 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_188 = uStack_188 ^ 0x6a6a6a6a6a6a6a6a;
          local_170 = local_170 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_168 = uStack_168 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_160 = uStack_160 ^ 0x6a6a6a6a6a6a6a6a;
          uStack_158 = uStack_158 ^ 0x6a6a6a6a6a6a6a6a;
        }
      }
      else {
        memset(&local_1d0,0x5c,__n_00);
        iVar8 = FUN_0042bd60(lVar15,param_8,param_9);
        if (iVar8 < 1) goto LAB_003aa17c;
        __n_02 = __n_00;
      }
      iVar8 = FUN_0042bd60(lVar15,&local_1d0,__n_02);
      if ((0 < iVar8) && (iVar8 = FUN_0042bd60(lVar15,&local_290,uVar23), 0 < iVar8)) {
        iVar8 = FUN_0042bd80(lVar15,param_2,local_310);
        if ((param_3 != (ulong *)0x0) && (iVar8 != 0)) {
          *param_3 = (ulong)local_310[0];
        }
        FUN_0042bbe0(lVar15);
        return 1;
      }
    }
  }
LAB_003aa17c:
  FUN_0042bbe0(lVar15);
  return 0;
}


