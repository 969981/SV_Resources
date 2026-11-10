/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040a970; name: FUN_0040a970
 */


bool FUN_0040a970(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  uint *__s;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint *puVar23;
  undefined1 (*pauVar24) [16];
  uint *puVar25;
  ulong uVar26;
  uint *puVar27;
  ulong uVar28;
  long lVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  ulong uVar33;
  ulong uVar34;
  byte bVar35;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined8 uVar36;
  undefined8 uVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  uint uVar73;
  uint uVar77;
  uint uVar78;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  uint uVar79;
  undefined1 auVar76 [16];
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  FUN_003ed410(param_4);
  lVar15 = FUN_003ed5c0(param_4);
  if (lVar15 != 0) {
    do {
      iVar13 = FUN_003eb2b0(param_3);
      iVar13 = FUN_003ff560(lVar15,iVar13 + -1,0xffffffff,0);
      if (iVar13 == 0) goto LAB_0040aa64;
      iVar13 = FUN_003eb480(lVar15);
    } while (iVar13 != 0);
    iVar13 = FUN_0040a7d0(param_1,param_2,lVar15,param_3,param_4);
    if (iVar13 != 0) {
      FUN_003ed410(param_4);
      local_70 = (undefined8 *)FUN_003ed5c0(param_4);
      local_78 = (undefined8 *)FUN_003ed5c0(param_4);
      puVar16 = (undefined8 *)FUN_003ed5c0(param_4);
      local_68 = (undefined8 *)FUN_003ed5c0(param_4);
      if ((((local_68 != (undefined8 *)0x0) &&
           (iVar13 = FUN_00409ef0(puVar16,param_1,param_3), iVar13 != 0)) &&
          (iVar13 = FUN_003eb480(puVar16), iVar13 == 0)) &&
         (lVar17 = FUN_003eb8f0(local_68,param_3), lVar17 != 0)) {
        iVar13 = FUN_003eb2b0(puVar16);
        iVar14 = FUN_003eb2b0(local_68);
        uVar2 = *(uint *)(param_3 + 1);
        uVar33 = (ulong)uVar2;
        lVar17 = FUN_003eb9a0(puVar16,uVar33);
        if (lVar17 != 0) {
          uVar3 = *(uint *)(puVar16 + 1);
          puVar30 = (uint *)*puVar16;
          if ((int)uVar3 < (int)uVar2) {
            memset(puVar30 + (int)uVar3,0,(ulong)(uVar2 + ~uVar3) * 4 + 4);
          }
          *(uint *)(puVar16 + 1) = uVar2;
          lVar17 = FUN_003eb9a0(local_70,uVar2);
          if (lVar17 != 0) {
            puVar31 = (uint *)*local_70;
            *puVar31 = 1;
            if (1 < (int)uVar2) {
              memset(puVar31 + 1,0,(ulong)(uVar2 - 1) << 2);
            }
            *(uint *)(local_70 + 1) = uVar2;
            lVar17 = FUN_003eb9a0(local_78,uVar2);
            if (lVar17 != 0) {
              __s = (uint *)*local_78;
              if (0 < (int)uVar2) {
                memset(__s,0,uVar33 << 2);
              }
              *(uint *)(local_78 + 1) = uVar2;
              puVar32 = (uint *)*local_68;
              uVar3 = uVar2 - 1;
              uVar34 = (ulong)uVar3;
              lVar17 = uVar34 + 1;
              uVar19 = uVar34 & 0xfffffffc;
              uVar20 = uVar33 & 0xfffffff8;
LAB_0040abdc:
              uVar22 = *puVar30;
              if (iVar13 != 0) {
                if ((int)uVar2 < 2) {
                  do {
                    if ((uVar22 & 1) != 0) goto LAB_0040ae94;
                    iVar13 = iVar13 + -1;
                    uVar73 = *puVar31;
                    uVar4 = *(uint *)*param_3;
                    *puVar30 = uVar22 >> 1;
                    *puVar31 = (uVar4 & -(uVar73 & 1) ^ uVar73) >> 1;
                    uVar22 = *puVar30;
                  } while (iVar13 != 0);
                }
                else {
                  do {
                    if ((uVar22 & 1) != 0) goto LAB_0040ae94;
                    puVar27 = (uint *)*param_3;
                    uVar4 = -(*puVar31 & 1);
                    uVar73 = *puVar27 & uVar4 ^ *puVar31;
                    uVar26 = (ulong)uVar73;
                    if (uVar3 < 4) {
                      uVar21 = 0;
LAB_0040adc4:
                      uVar28 = uVar21;
                      uVar73 = uVar22;
                      if ((uVar3 & 1) != 0) {
                        uVar28 = uVar21 | 1;
                        uVar73 = puVar30[uVar28];
                        puVar30[uVar21] = (uint)(CONCAT44(uVar73,uVar22) >> 1);
                        uVar22 = puVar27[uVar28] & uVar4 ^ puVar31[uVar28];
                        uVar1 = (ulong)uVar22 << 0x20 | uVar26;
                        uVar26 = (ulong)uVar22;
                        puVar31[uVar21] = (uint)(uVar1 >> 1);
                      }
                      uVar22 = uVar73;
                      if (~uVar21 != -uVar34) {
                        lVar29 = uVar34 - uVar28;
                        puVar18 = puVar30 + 1 + uVar28;
                        puVar23 = puVar31 + 1 + uVar28;
                        puVar27 = puVar27 + uVar28;
                        do {
                          uVar77 = *puVar18;
                          puVar18[-1] = (uint)(CONCAT44(uVar77,uVar22) >> 1);
                          uVar73 = puVar27[1] & uVar4 ^ *puVar23;
                          puVar23[-1] = (uint)(((ulong)uVar73 << 0x20 | uVar26) >> 1);
                          uVar22 = puVar18[1];
                          lVar29 = lVar29 + -2;
                          *puVar18 = (uint)(CONCAT44(uVar22,uVar77) >> 1);
                          uVar77 = puVar27[2] & uVar4 ^ puVar23[1];
                          uVar26 = (ulong)uVar77;
                          *puVar23 = (uint)(CONCAT44(uVar77,uVar73) >> 1);
                          puVar18 = puVar18 + 2;
                          puVar23 = puVar23 + 2;
                          puVar27 = puVar27 + 2;
                        } while (lVar29 != 0);
                      }
                    }
                    else {
                      uVar21 = 0;
                      if ((puVar30 < puVar31 + lVar17 && puVar31 < puVar30 + lVar17 ||
                           puVar30 < puVar27 + lVar17 && puVar27 + 1 < puVar30 + lVar17) ||
                         (puVar31 < puVar27 + lVar17 && puVar27 + 1 < puVar31 + lVar17))
                      goto LAB_0040adc4;
                      bVar41 = (byte)uVar73;
                      bVar42 = (byte)(uVar73 >> 8);
                      bVar43 = (byte)(uVar73 >> 0x10);
                      bVar44 = (byte)(uVar73 >> 0x18);
                      uVar57 = (undefined1)uVar22;
                      uVar58 = (undefined1)(uVar22 >> 8);
                      uVar59 = (undefined1)(uVar22 >> 0x10);
                      uVar60 = (undefined1)(uVar22 >> 0x18);
                      uVar26 = uVar19;
                      puVar25 = puVar27 + 1;
                      puVar23 = puVar31 + 1;
                      puVar18 = puVar30 + 1;
                      bVar45 = bVar41;
                      bVar46 = bVar42;
                      bVar47 = bVar43;
                      bVar48 = bVar44;
                      bVar49 = bVar41;
                      bVar50 = bVar42;
                      bVar51 = bVar43;
                      bVar52 = bVar44;
                      bVar53 = bVar41;
                      bVar54 = bVar42;
                      bVar55 = bVar43;
                      bVar56 = bVar44;
                      uVar61 = uVar57;
                      uVar62 = uVar58;
                      uVar63 = uVar59;
                      uVar64 = uVar60;
                      uVar65 = uVar57;
                      uVar66 = uVar58;
                      uVar67 = uVar59;
                      uVar68 = uVar60;
                      uVar69 = uVar57;
                      uVar70 = uVar58;
                      uVar71 = uVar59;
                      uVar72 = uVar60;
                      do {
                        auVar74[9] = uVar66;
                        auVar74[8] = uVar65;
                        auVar74[10] = uVar67;
                        auVar74[0xb] = uVar68;
                        auVar74[0xc] = uVar69;
                        auVar74[0xd] = uVar70;
                        auVar74[0xe] = uVar71;
                        auVar74[0xf] = uVar72;
                        auVar74[1] = uVar58;
                        auVar74[0] = uVar57;
                        auVar74[2] = uVar59;
                        auVar74[3] = uVar60;
                        auVar74[4] = uVar61;
                        auVar74[5] = uVar62;
                        auVar74[6] = uVar63;
                        auVar74[7] = uVar64;
                        uVar81 = *(undefined8 *)(puVar18 + 2);
                        uVar65 = (undefined1)uVar81;
                        uVar66 = (undefined1)((ulong)uVar81 >> 8);
                        uVar67 = (undefined1)((ulong)uVar81 >> 0x10);
                        uVar68 = (undefined1)((ulong)uVar81 >> 0x18);
                        uVar69 = (undefined1)((ulong)uVar81 >> 0x20);
                        uVar70 = (undefined1)((ulong)uVar81 >> 0x28);
                        uVar71 = (undefined1)((ulong)uVar81 >> 0x30);
                        uVar72 = (undefined1)((ulong)uVar81 >> 0x38);
                        uVar80 = *(undefined8 *)puVar18;
                        uVar57 = (undefined1)uVar80;
                        uVar58 = (undefined1)((ulong)uVar80 >> 8);
                        uVar59 = (undefined1)((ulong)uVar80 >> 0x10);
                        uVar60 = (undefined1)((ulong)uVar80 >> 0x18);
                        uVar61 = (undefined1)((ulong)uVar80 >> 0x20);
                        uVar62 = (undefined1)((ulong)uVar80 >> 0x28);
                        uVar63 = (undefined1)((ulong)uVar80 >> 0x30);
                        uVar64 = (undefined1)((ulong)uVar80 >> 0x38);
                        auVar5[9] = uVar66;
                        auVar5._0_9_ = *(unkbyte9 *)puVar18;
                        auVar5[10] = uVar67;
                        auVar5[0xb] = uVar68;
                        auVar5[0xc] = uVar69;
                        auVar5[0xd] = uVar70;
                        auVar5[0xe] = uVar71;
                        auVar5[0xf] = uVar72;
                        auVar75 = NEON_ext(auVar74,auVar5,0xc,1);
                        uVar22 = (uint)((ulong)uVar81 >> 0x20);
                        uVar73 = auVar75._0_4_ >> 1;
                        uVar77 = auVar75._4_4_ >> 1;
                        uVar78 = auVar75._8_4_ >> 1;
                        uVar79 = auVar75._12_4_ >> 1;
                        *(char *)(puVar18 + 1) = (char)uVar78;
                        *(char *)((long)puVar18 + 5) = (char)(uVar78 >> 8);
                        *(char *)((long)puVar18 + 6) = (char)(uVar78 >> 0x10);
                        *(byte *)((long)puVar18 + 7) =
                             (byte)((uint)((int)uVar81 << 0x1f) >> 0x18) | auVar75[0xb] >> 1;
                        *(char *)(puVar18 + 2) = (char)uVar79;
                        *(char *)((long)puVar18 + 9) = (char)(uVar79 >> 8);
                        *(char *)((long)puVar18 + 10) = (char)((uint3)(auVar75._13_3_ >> 1) >> 8);
                        *(byte *)((long)puVar18 + 0xb) =
                             (byte)((uVar22 << 0x1f) >> 0x18) | auVar75[0xf] >> 1;
                        *(char *)(puVar18 + -1) = (char)uVar73;
                        *(char *)((long)puVar18 + -3) = (char)(uVar73 >> 8);
                        *(char *)((long)puVar18 + -2) = (char)(uVar73 >> 0x10);
                        *(byte *)((long)puVar18 + -1) =
                             (byte)((uint)((int)uVar80 << 0x1f) >> 0x18) | auVar75[3] >> 1;
                        *(char *)puVar18 = (char)uVar77;
                        *(char *)((long)puVar18 + 1) = (char)(uVar77 >> 8);
                        *(char *)((long)puVar18 + 2) = (char)(uVar77 >> 0x10);
                        *(byte *)((long)puVar18 + 3) =
                             (byte)((uint)((int)((ulong)uVar80 >> 0x20) << 0x1f) >> 0x18) |
                             auVar75[7] >> 1;
                        uVar81 = *(undefined8 *)(puVar25 + 2);
                        uVar80 = *(undefined8 *)puVar25;
                        bVar35 = (byte)uVar4;
                        bVar37 = (byte)(uVar4 >> 8);
                        bVar38 = (byte)(uVar4 >> 0x10);
                        bVar39 = (byte)(uVar4 >> 0x18);
                        auVar8[9] = bVar50;
                        auVar8[8] = bVar49;
                        auVar8[10] = bVar51;
                        auVar8[0xb] = bVar52;
                        auVar8[0xc] = bVar53;
                        auVar8[0xd] = bVar54;
                        auVar8[0xe] = bVar55;
                        auVar8[0xf] = bVar56;
                        auVar8[1] = bVar42;
                        auVar8[0] = bVar41;
                        auVar8[2] = bVar43;
                        auVar8[3] = bVar44;
                        auVar8[4] = bVar45;
                        auVar8[5] = bVar46;
                        auVar8[6] = bVar47;
                        auVar8[7] = bVar48;
                        bVar41 = (byte)uVar80 & bVar35 ^ (byte)*puVar23;
                        bVar42 = (byte)((ulong)uVar80 >> 8) & bVar37 ^ *(byte *)((long)puVar23 + 1);
                        bVar43 = (byte)((ulong)uVar80 >> 0x10) & bVar38 ^
                                 *(byte *)((long)puVar23 + 2);
                        bVar44 = (byte)((ulong)uVar80 >> 0x18) & bVar39 ^
                                 *(byte *)((long)puVar23 + 3);
                        bVar45 = (byte)((ulong)uVar80 >> 0x20) & bVar35 ^ (byte)puVar23[1];
                        bVar46 = (byte)((ulong)uVar80 >> 0x28) & bVar37 ^
                                 *(byte *)((long)puVar23 + 5);
                        bVar47 = (byte)((ulong)uVar80 >> 0x30) & bVar38 ^
                                 *(byte *)((long)puVar23 + 6);
                        bVar48 = (byte)((ulong)uVar80 >> 0x38) & bVar39 ^
                                 *(byte *)((long)puVar23 + 7);
                        bVar49 = (byte)uVar81 & bVar35 ^ (byte)puVar23[2];
                        bVar50 = (byte)((ulong)uVar81 >> 8) & bVar37 ^ *(byte *)((long)puVar23 + 9);
                        bVar51 = (byte)((ulong)uVar81 >> 0x10) & bVar38 ^
                                 *(byte *)((long)puVar23 + 10);
                        bVar52 = (byte)((ulong)uVar81 >> 0x18) & bVar39 ^
                                 *(byte *)((long)puVar23 + 0xb);
                        bVar53 = (byte)((ulong)uVar81 >> 0x20) & bVar35 ^ (byte)puVar23[3];
                        bVar54 = (byte)((ulong)uVar81 >> 0x28) & bVar37 ^
                                 *(byte *)((long)puVar23 + 0xd);
                        bVar55 = (byte)((ulong)uVar81 >> 0x30) & bVar38 ^
                                 *(byte *)((long)puVar23 + 0xe);
                        bVar56 = (byte)((ulong)uVar81 >> 0x38) & bVar39 ^
                                 *(byte *)((long)puVar23 + 0xf);
                        auVar75[1] = bVar42;
                        auVar75[0] = bVar41;
                        auVar75[2] = bVar43;
                        auVar75[3] = bVar44;
                        auVar75[4] = bVar45;
                        auVar75[5] = bVar46;
                        auVar75[6] = bVar47;
                        auVar75[7] = bVar48;
                        auVar75[8] = bVar49;
                        auVar75[9] = bVar50;
                        auVar75[10] = bVar51;
                        auVar75[0xb] = bVar52;
                        auVar75[0xc] = bVar53;
                        auVar75[0xd] = bVar54;
                        auVar75[0xe] = bVar55;
                        auVar75[0xf] = bVar56;
                        auVar75 = NEON_ext(auVar8,auVar75,0xc,1);
                        uVar73 = auVar75._4_4_ >> 1;
                        uVar77 = auVar75._8_4_ >> 1;
                        uVar78 = auVar75._12_4_ >> 1;
                        auVar76._0_8_ =
                             CONCAT17((byte)((uint)(CONCAT13(bVar48,CONCAT12(bVar47,CONCAT11(bVar46,
                                                  bVar45))) << 0x1f) >> 0x18) | auVar75[7] >> 1,
                                      CONCAT16((char)(uVar73 >> 0x10),
                                               CONCAT15((char)(uVar73 >> 8),
                                                        CONCAT14((char)uVar73,
                                                                 CONCAT13((byte)((uint)(CONCAT13(
                                                  bVar44,CONCAT12(bVar43,CONCAT11(bVar42,bVar41)))
                                                  << 0x1f) >> 0x18) | auVar75[3] >> 1,
                                                  (int3)(auVar75._0_4_ >> 1))))));
                        auVar76[8] = (undefined1)uVar77;
                        auVar76[9] = (undefined1)(uVar77 >> 8);
                        auVar76[10] = (undefined1)(uVar77 >> 0x10);
                        auVar76[0xb] = (byte)((uint)(CONCAT13(bVar52,CONCAT12(bVar51,CONCAT11(bVar50
                                                  ,bVar49))) << 0x1f) >> 0x18) | auVar75[0xb] >> 1;
                        auVar76[0xc] = (undefined1)uVar78;
                        auVar76[0xd] = (undefined1)(uVar78 >> 8);
                        auVar76[0xe] = (undefined1)((uint3)(auVar75._13_3_ >> 1) >> 8);
                        auVar76[0xf] = (byte)((uint)(CONCAT13(bVar56,CONCAT12(bVar55,CONCAT11(bVar54
                                                  ,bVar53))) << 0x1f) >> 0x18) | auVar75[0xf] >> 1;
                        *(long *)(puVar23 + 1) = auVar76._8_8_;
                        *(undefined8 *)(puVar23 + -1) = auVar76._0_8_;
                        puVar18 = puVar18 + 4;
                        puVar23 = puVar23 + 4;
                        uVar26 = uVar26 - 4;
                        puVar25 = puVar25 + 4;
                      } while (uVar26 != 0);
                      uVar26 = (ulong)CONCAT13(bVar56,CONCAT12(bVar55,CONCAT11(bVar54,bVar53)));
                      if (uVar19 != uVar34) {
                        uVar21 = uVar19;
                        goto LAB_0040adc4;
                      }
                    }
                    iVar13 = iVar13 + -1;
                    puVar30[uVar34] = uVar22 >> 1;
                    puVar31[uVar34] = (uint)(uVar26 >> 1);
                    uVar22 = *puVar30;
                  } while (iVar13 != 0);
                }
              }
              iVar13 = 0;
              goto LAB_0040ac58;
            }
          }
        }
      }
LAB_0040aa5c:
      FUN_003ed530(param_4);
    }
  }
LAB_0040aa64:
  bVar12 = false;
LAB_0040aa68:
  FUN_003ed530(param_4);
  return bVar12;
LAB_0040ae94:
  if (iVar13 < 0x21) {
LAB_0040ac58:
    if (uVar22 == 0) goto LAB_0040aa5c;
    if (uVar22 == 1) goto LAB_0040b08c;
  }
  puVar27 = __s;
  puVar9 = puVar16;
  puVar10 = local_78;
  iVar11 = iVar14;
  if (iVar13 < iVar14) {
    puVar27 = (uint *)*local_70;
    puVar30 = puVar32;
    puVar31 = __s;
    puVar9 = local_68;
    puVar32 = (uint *)*puVar16;
    puVar10 = local_70;
    local_70 = local_78;
    local_68 = puVar16;
    iVar11 = iVar13;
    iVar13 = iVar14;
  }
  iVar14 = iVar11;
  local_78 = puVar10;
  puVar16 = puVar9;
  __s = puVar27;
  if (0 < (int)uVar2) {
    if (uVar33 < 8) {
      uVar26 = 0;
    }
    else {
      puVar27 = puVar31 + uVar33;
      puVar18 = puVar30 + uVar33;
      uVar26 = 0;
      if (((puVar27 <= puVar30 || puVar18 <= puVar31) &&
          (puVar32 + uVar33 <= puVar30 || puVar18 <= puVar32)) &&
         ((__s + uVar33 <= puVar30 || puVar18 <= __s &&
          ((puVar32 + uVar33 <= puVar31 || puVar27 <= puVar32 &&
           (__s + uVar33 <= puVar31 || puVar27 <= __s)))))) {
        puVar27 = puVar32 + 4;
        puVar18 = puVar30 + 4;
        puVar23 = __s + 4;
        pauVar24 = (undefined1 (*) [16])(puVar31 + 4);
        uVar26 = uVar20;
        do {
          uVar40 = *(undefined8 *)(puVar27 + -2);
          uVar36 = *(undefined8 *)(puVar27 + -4);
          uVar81 = *(undefined8 *)(puVar27 + 2);
          uVar80 = *(undefined8 *)puVar27;
          puVar27 = puVar27 + 8;
          uVar26 = uVar26 - 8;
          uVar7 = *(undefined8 *)(puVar18 + -2);
          uVar6 = *(undefined8 *)(puVar18 + -4);
          *(ulong *)(puVar18 + -2) =
               CONCAT17((byte)((ulong)uVar7 >> 0x38) ^ (byte)((ulong)uVar40 >> 0x38),
                        CONCAT16((byte)((ulong)uVar7 >> 0x30) ^ (byte)((ulong)uVar40 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar7 >> 0x28) ^
                                          (byte)((ulong)uVar40 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar7 >> 0x20) ^
                                                   (byte)((ulong)uVar40 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar7 >> 0x18) ^
                                                            (byte)((ulong)uVar40 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar7 >> 0x10) ^
                                                                     (byte)((ulong)uVar40 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar7 >>
                                                                                    8) ^
                                                                              (byte)((ulong)uVar40
                                                                                    >> 8),
                                                                              (byte)uVar7 ^
                                                                              (byte)uVar40)))))));
          *(ulong *)(puVar18 + -4) =
               CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38),
                        CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)((ulong)uVar36 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                          (byte)((ulong)uVar36 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                   (byte)((ulong)uVar36 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                            (byte)((ulong)uVar36 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar6 >> 0x10) ^
                                                                     (byte)((ulong)uVar36 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar6 >>
                                                                                    8) ^
                                                                              (byte)((ulong)uVar36
                                                                                    >> 8),
                                                                              (byte)uVar6 ^
                                                                              (byte)uVar36)))))));
          *(ulong *)(puVar18 + 2) =
               CONCAT17(*(byte *)((long)puVar18 + 0xf) ^ (byte)((ulong)uVar81 >> 0x38),
                        CONCAT16(*(byte *)((long)puVar18 + 0xe) ^ (byte)((ulong)uVar81 >> 0x30),
                                 CONCAT15(*(byte *)((long)puVar18 + 0xd) ^
                                          (byte)((ulong)uVar81 >> 0x28),
                                          CONCAT14((byte)puVar18[3] ^ (byte)((ulong)uVar81 >> 0x20),
                                                   CONCAT13(*(byte *)((long)puVar18 + 0xb) ^
                                                            (byte)((ulong)uVar81 >> 0x18),
                                                            CONCAT12(*(byte *)((long)puVar18 + 10) ^
                                                                     (byte)((ulong)uVar81 >> 0x10),
                                                                     CONCAT11(*(byte *)((long)
                                                  puVar18 + 9) ^ (byte)((ulong)uVar81 >> 8),
                                                  (byte)puVar18[2] ^ (byte)uVar81)))))));
          *(ulong *)puVar18 =
               CONCAT17(*(byte *)((long)puVar18 + 7) ^ (byte)((ulong)uVar80 >> 0x38),
                        CONCAT16(*(byte *)((long)puVar18 + 6) ^ (byte)((ulong)uVar80 >> 0x30),
                                 CONCAT15(*(byte *)((long)puVar18 + 5) ^
                                          (byte)((ulong)uVar80 >> 0x28),
                                          CONCAT14((byte)puVar18[1] ^ (byte)((ulong)uVar80 >> 0x20),
                                                   CONCAT13(*(byte *)((long)puVar18 + 3) ^
                                                            (byte)((ulong)uVar80 >> 0x18),
                                                            CONCAT12(*(byte *)((long)puVar18 + 2) ^
                                                                     (byte)((ulong)uVar80 >> 0x10),
                                                                     CONCAT11(*(byte *)((long)
                                                  puVar18 + 1) ^ (byte)((ulong)uVar80 >> 8),
                                                  (byte)*puVar18 ^ (byte)uVar80)))))));
          puVar18 = puVar18 + 8;
          uVar40 = *(undefined8 *)(puVar23 + -2);
          uVar36 = *(undefined8 *)(puVar23 + -4);
          uVar81 = *(undefined8 *)(puVar23 + 2);
          uVar80 = *(undefined8 *)puVar23;
          uVar7 = *(undefined8 *)((long)pauVar24[-1] + 8);
          uVar6 = *(undefined8 *)pauVar24[-1];
          auVar75 = *pauVar24;
          puVar23 = puVar23 + 8;
          *(ulong *)((long)pauVar24[-1] + 8) =
               CONCAT17((byte)((ulong)uVar7 >> 0x38) ^ (byte)((ulong)uVar40 >> 0x38),
                        CONCAT16((byte)((ulong)uVar7 >> 0x30) ^ (byte)((ulong)uVar40 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar7 >> 0x28) ^
                                          (byte)((ulong)uVar40 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar7 >> 0x20) ^
                                                   (byte)((ulong)uVar40 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar7 >> 0x18) ^
                                                            (byte)((ulong)uVar40 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar7 >> 0x10) ^
                                                                     (byte)((ulong)uVar40 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar7 >>
                                                                                    8) ^
                                                                              (byte)((ulong)uVar40
                                                                                    >> 8),
                                                                              (byte)uVar7 ^
                                                                              (byte)uVar40)))))));
          *(ulong *)pauVar24[-1] =
               CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38),
                        CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)((ulong)uVar36 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                          (byte)((ulong)uVar36 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                   (byte)((ulong)uVar36 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                            (byte)((ulong)uVar36 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar6 >> 0x10) ^
                                                                     (byte)((ulong)uVar36 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar6 >>
                                                                                    8) ^
                                                                              (byte)((ulong)uVar36
                                                                                    >> 8),
                                                                              (byte)uVar6 ^
                                                                              (byte)uVar36)))))));
          *(ulong *)((long)*pauVar24 + 8) =
               CONCAT17(auVar75[0xf] ^ (byte)((ulong)uVar81 >> 0x38),
                        CONCAT16(auVar75[0xe] ^ (byte)((ulong)uVar81 >> 0x30),
                                 CONCAT15(auVar75[0xd] ^ (byte)((ulong)uVar81 >> 0x28),
                                          CONCAT14(auVar75[0xc] ^ (byte)((ulong)uVar81 >> 0x20),
                                                   CONCAT13(auVar75[0xb] ^
                                                            (byte)((ulong)uVar81 >> 0x18),
                                                            CONCAT12(auVar75[10] ^
                                                                     (byte)((ulong)uVar81 >> 0x10),
                                                                     CONCAT11(auVar75[9] ^
                                                                              (byte)((ulong)uVar81
                                                                                    >> 8),
                                                                              auVar75[8] ^
                                                                              (byte)uVar81)))))));
          *(ulong *)*pauVar24 =
               CONCAT17(auVar75[7] ^ (byte)((ulong)uVar80 >> 0x38),
                        CONCAT16(auVar75[6] ^ (byte)((ulong)uVar80 >> 0x30),
                                 CONCAT15(auVar75[5] ^ (byte)((ulong)uVar80 >> 0x28),
                                          CONCAT14(auVar75[4] ^ (byte)((ulong)uVar80 >> 0x20),
                                                   CONCAT13(auVar75[3] ^
                                                            (byte)((ulong)uVar80 >> 0x18),
                                                            CONCAT12(auVar75[2] ^
                                                                     (byte)((ulong)uVar80 >> 0x10),
                                                                     CONCAT11(auVar75[1] ^
                                                                              (byte)((ulong)uVar80
                                                                                    >> 8),
                                                                              auVar75[0] ^
                                                                              (byte)uVar80)))))));
          pauVar24 = pauVar24 + 2;
        } while (uVar26 != 0);
        uVar26 = uVar20;
        if (uVar33 == uVar20) goto LAB_0040b03c;
      }
    }
    uVar21 = uVar26;
    if ((uVar2 & 1) != 0) {
      puVar30[uVar26] = puVar30[uVar26] ^ puVar32[uVar26];
      puVar31[uVar26] = puVar31[uVar26] ^ __s[uVar26];
      uVar21 = uVar26 | 1;
    }
    if (uVar33 != (uVar26 | 1)) {
      lVar29 = uVar33 - uVar21;
      puVar27 = puVar31 + uVar21 + 1;
      puVar18 = __s + uVar21 + 1;
      puVar23 = puVar30 + uVar21 + 1;
      puVar25 = puVar32 + uVar21 + 1;
      do {
        lVar29 = lVar29 + -2;
        puVar23[-1] = puVar23[-1] ^ puVar25[-1];
        puVar27[-1] = puVar27[-1] ^ puVar18[-1];
        *puVar23 = *puVar23 ^ *puVar25;
        *puVar27 = *puVar27 ^ *puVar18;
        puVar27 = puVar27 + 2;
        puVar18 = puVar18 + 2;
        puVar23 = puVar23 + 2;
        puVar25 = puVar25 + 2;
      } while (lVar29 != 0);
    }
  }
LAB_0040b03c:
  if (iVar13 == iVar14) {
    uVar22 = iVar13 + 0x1e;
    if (-1 < (int)(iVar13 - 1U)) {
      uVar22 = iVar13 - 1U;
    }
    lVar29 = (long)((ulong)uVar22 << 0x20) >> 0x25;
    uVar22 = ~uVar22 & 0xffffffe0;
    do {
      puVar27 = puVar30 + lVar29;
      bVar12 = lVar29 == 0;
      lVar29 = lVar29 + -1;
      uVar22 = uVar22 + 0x20;
      if (bVar12) break;
    } while (*puVar27 == 0);
    iVar13 = FUN_003eb210();
    iVar13 = iVar13 - uVar22;
  }
  goto LAB_0040abdc;
LAB_0040b08c:
  FUN_003ebc30(local_70);
  lVar17 = FUN_003eb8f0(param_1,local_70);
  FUN_003ed530(param_4);
  if (lVar17 != 0) {
    iVar13 = FUN_0040a7d0(param_1,param_1,lVar15,param_3,param_4);
    bVar12 = iVar13 != 0;
    goto LAB_0040aa68;
  }
  goto LAB_0040aa64;
}


