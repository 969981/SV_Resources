/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030119a0; name: FUN_030119a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030119a0(long *param_1,float *param_2,long param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  long *plVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  undefined4 local_480 [256];
  undefined8 *local_80;
  
  uVar13 = _UNK_03cab278;
  uVar12 = _DAT_03cab270;
  uVar17 = 1;
  local_80 = (undefined8 *)((ulong)local_480 | 4);
  lVar3 = 0;
  if (*param_1 != 0) {
    lVar3 = *param_1 + (long)param_1;
  }
  puVar14 = PTR_DAT_047d1aa0;
  puVar15 = PTR_DAT_047d1aa8;
  local_480[0] = param_4;
  do {
    puVar16 = (undefined8 *)((long)local_80 - 4);
    puVar1 = (undefined8 *)(lVar3 + (ulong)*(uint *)((long)local_80 - 4) * 0x80);
    bVar53 = (byte)uVar12;
    bVar54 = (byte)((ulong)uVar12 >> 8);
    bVar55 = (byte)((ulong)uVar12 >> 0x10);
    bVar56 = (byte)((ulong)uVar12 >> 0x18);
    bVar57 = (byte)((ulong)uVar12 >> 0x20);
    bVar58 = (byte)((ulong)uVar12 >> 0x28);
    bVar59 = (byte)((ulong)uVar12 >> 0x30);
    bVar60 = (byte)((ulong)uVar12 >> 0x38);
    bVar61 = (byte)uVar13;
    bVar62 = (byte)((ulong)uVar13 >> 8);
    bVar63 = (byte)((ulong)uVar13 >> 0x10);
    bVar64 = (byte)((ulong)uVar13 >> 0x18);
    bVar65 = (byte)((ulong)uVar13 >> 0x20);
    bVar66 = (byte)((ulong)uVar13 >> 0x28);
    bVar67 = (byte)((ulong)uVar13 >> 0x30);
    bVar68 = (byte)((ulong)uVar13 >> 0x38);
    if ((int)uVar17 < 2) {
      iVar24 = -(uint)(*param_2 <= (float)puVar1[2]);
      iVar34 = -(uint)(param_2[1] <= (float)((ulong)puVar1[2] >> 0x20));
      iVar35 = -(uint)(param_2[2] <= (float)puVar1[3]);
      iVar36 = -(uint)(param_2[3] <= (float)((ulong)puVar1[3] >> 0x20));
      iVar22 = -(uint)((float)*puVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar7 = -(uint)((float)((ulong)*puVar1 >> 0x20) <=
                     (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar8 = -(uint)((float)puVar1[1] <= (float)*(undefined8 *)(param_2 + 6));
      iVar10 = -(uint)((float)((ulong)puVar1[1] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar37 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)puVar1[6]);
      iVar38 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)puVar1[6] >> 0x20));
      iVar39 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)puVar1[7]);
      iVar40 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)puVar1[7] >> 0x20));
      iVar41 = -(uint)((float)puVar1[4] <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar42 = -(uint)((float)((ulong)puVar1[4] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar43 = -(uint)((float)puVar1[5] <= (float)*(undefined8 *)(param_2 + 0xe));
      iVar44 = -(uint)((float)((ulong)puVar1[5] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar45 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <= (float)puVar1[10]);
      iVar46 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)puVar1[10] >> 0x20));
      iVar47 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <= (float)puVar1[0xb]);
      iVar48 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)puVar1[0xb] >> 0x20));
      iVar49 = -(uint)((float)puVar1[8] <= (float)*(undefined8 *)(param_2 + 0x14));
      iVar50 = -(uint)((float)((ulong)puVar1[8] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar51 = -(uint)((float)puVar1[9] <= (float)*(undefined8 *)(param_2 + 0x16));
      iVar52 = -(uint)((float)((ulong)puVar1[9] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar22 = CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                        (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar41 >> 0x18) &
                        (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar49 >> 0x18) & bVar56,
                        CONCAT12((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                                 (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar41 >> 0x10) &
                                 (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar49 >> 0x10) &
                                 bVar55,CONCAT11((byte)((uint)iVar22 >> 8) &
                                                 (byte)((uint)iVar24 >> 8) &
                                                 (byte)((uint)iVar37 >> 8) &
                                                 (byte)((uint)iVar41 >> 8) &
                                                 (byte)((uint)iVar45 >> 8) &
                                                 (byte)((uint)iVar49 >> 8) & bVar54,
                                                 (byte)iVar22 & (byte)iVar24 & (byte)iVar37 &
                                                 (byte)iVar41 & (byte)iVar45 & (byte)iVar49 & bVar53
                                                )));
      auVar28._0_8_ =
           CONCAT17((byte)((uint)iVar7 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                    (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar42 >> 0x18) &
                    (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar50 >> 0x18) & bVar60,
                    CONCAT16((byte)((uint)iVar7 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                             (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar42 >> 0x10) &
                             (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar50 >> 0x10) & bVar59,
                             CONCAT15((byte)((uint)iVar7 >> 8) & (byte)((uint)iVar34 >> 8) &
                                      (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar42 >> 8) &
                                      (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar50 >> 8) & bVar58
                                      ,CONCAT14((byte)iVar7 & (byte)iVar34 & (byte)iVar38 &
                                                (byte)iVar42 & (byte)iVar46 & (byte)iVar50 & bVar57,
                                                iVar22))));
      auVar28[8] = (byte)iVar8 & (byte)iVar35 & (byte)iVar39 & (byte)iVar43 & (byte)iVar47 &
                   (byte)iVar51 & bVar61;
      auVar28[9] = (byte)((uint)iVar8 >> 8) & (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar39 >> 8)
                   & (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar47 >> 8) &
                   (byte)((uint)iVar51 >> 8) & bVar62;
      auVar28[10] = (byte)((uint)iVar8 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                    (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar43 >> 0x10) &
                    (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar51 >> 0x10) & bVar63;
      auVar28[0xb] = (byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                     (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar43 >> 0x18) &
                     (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar51 >> 0x18) & bVar64;
      auVar32[0xc] = (byte)iVar10 & (byte)iVar36 & (byte)iVar40 & (byte)iVar44 & (byte)iVar48 &
                     (byte)iVar52 & bVar65;
      auVar32._0_12_ = auVar28;
      auVar32[0xd] = (byte)((uint)iVar10 >> 8) & (byte)((uint)iVar36 >> 8) &
                     (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar44 >> 8) &
                     (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar52 >> 8) & bVar66;
      auVar32[0xe] = (byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                     (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar44 >> 0x10) &
                     (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar52 >> 0x10) & bVar67;
      auVar32[0xf] = (byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                     (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar44 >> 0x18) &
                     (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar52 >> 0x18) & bVar68;
      uVar26 = iVar22 + (int)((ulong)auVar28._0_8_ >> 0x20) + auVar28._8_4_ + auVar32._12_4_;
      uVar9 = puVar1[0xd];
      uVar4 = *(uint *)(puVar15 + (ulong)uVar26 * 4);
      lVar23 = (long)(int)uVar4;
      auVar31[9] = (char)((ulong)uVar9 >> 8);
      auVar31._0_9_ = *(unkbyte9 *)(puVar1 + 0xc);
      auVar31[10] = (char)((ulong)uVar9 >> 0x10);
      auVar31[0xb] = (char)((ulong)uVar9 >> 0x18);
      auVar31[0xc] = (char)((ulong)uVar9 >> 0x20);
      auVar31[0xd] = (char)((ulong)uVar9 >> 0x28);
      auVar31[0xe] = (char)((ulong)uVar9 >> 0x30);
      auVar31[0xf] = (char)((ulong)uVar9 >> 0x38);
      auVar31 = a64_TBL(ZEXT816(0),auVar31,*(undefined1 (*) [16])(puVar14 + (ulong)uVar26 * 0x10));
      if (*(char *)(puVar1 + 0xe) == '\0') {
        *(long *)((long)local_80 + 4) = auVar31._8_8_;
        *puVar16 = auVar31._0_8_;
        local_80 = puVar16;
        goto LAB_03011de0;
      }
      plVar21 = *(long **)(param_3 + 8);
      lVar11 = plVar21[1];
      lVar23 = (int)lVar11 + lVar23;
      iVar22 = (int)lVar23;
      local_80 = puVar16;
      if ((int)(*(uint *)((long)plVar21 + 0xc) & 0x7fffffff) < iVar22) {
        FUN_02efada0(plVar21,PTR_PTR_047d1a50,lVar23);
        puVar14 = PTR_DAT_047d1aa0;
        puVar15 = PTR_DAT_047d1aa8;
      }
      *(int *)(plVar21 + 1) = iVar22;
      if (uVar26 != 0) {
        puVar19 = (undefined4 *)(*plVar21 + (long)(int)lVar11 * 4);
        uVar26 = uVar4 & 3;
        if (uVar4 - 1 < 3) {
          iVar22 = 0;
        }
        else {
          iVar22 = 0;
          puVar18 = puVar19;
          do {
            puVar19 = puVar18 + 4;
            uVar2 = auVar31._4_4_;
            uVar20 = auVar31._0_4_;
            if (iVar22 != 0) {
              uVar20 = 0;
              uVar2 = 0;
            }
            *puVar18 = uVar20;
            puVar18[1] = uVar2;
            uVar2 = auVar31._12_4_;
            uVar20 = auVar31._8_4_;
            if (iVar22 != 0) {
              uVar20 = 0;
              uVar2 = 0;
            }
            puVar18[2] = uVar20;
            puVar18[3] = uVar2;
            iVar22 = iVar22 + -4;
            puVar18 = puVar19;
          } while (-(uVar4 & 0xfffffffc) != iVar22);
          iVar22 = -iVar22;
        }
        for (; uVar26 != 0; uVar26 = uVar26 - 1) {
          switch(iVar22) {
          case 0:
            uVar20 = auVar31._0_4_;
            break;
          case 1:
            uVar20 = auVar31._4_4_;
            break;
          case 2:
            uVar20 = auVar31._8_4_;
            break;
          case 3:
            uVar20 = auVar31._12_4_;
            break;
          default:
            uVar20 = 0;
          }
          iVar22 = iVar22 + 1;
          *puVar19 = uVar20;
          puVar19 = puVar19 + 1;
        }
      }
    }
    else {
      puVar16 = local_80 + -1;
      uVar4 = *(uint *)(local_80 + -1);
      iVar24 = -(uint)(*param_2 <= (float)puVar1[2]);
      iVar34 = -(uint)(param_2[1] <= (float)((ulong)puVar1[2] >> 0x20));
      iVar35 = -(uint)(param_2[2] <= (float)puVar1[3]);
      iVar36 = -(uint)(param_2[3] <= (float)((ulong)puVar1[3] >> 0x20));
      iVar22 = -(uint)((float)*puVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar7 = -(uint)((float)((ulong)*puVar1 >> 0x20) <=
                     (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar8 = -(uint)((float)puVar1[1] <= (float)*(undefined8 *)(param_2 + 6));
      iVar10 = -(uint)((float)((ulong)puVar1[1] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar37 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)puVar1[6]);
      iVar38 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)puVar1[6] >> 0x20));
      iVar39 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)puVar1[7]);
      iVar40 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)puVar1[7] >> 0x20));
      iVar41 = -(uint)((float)puVar1[4] <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar42 = -(uint)((float)((ulong)puVar1[4] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar43 = -(uint)((float)puVar1[5] <= (float)*(undefined8 *)(param_2 + 0xe));
      iVar44 = -(uint)((float)((ulong)puVar1[5] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar45 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <= (float)puVar1[10]);
      iVar46 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)puVar1[10] >> 0x20));
      iVar47 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <= (float)puVar1[0xb]);
      iVar48 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)puVar1[0xb] >> 0x20));
      iVar49 = -(uint)((float)puVar1[8] <= (float)*(undefined8 *)(param_2 + 0x14));
      iVar50 = -(uint)((float)((ulong)puVar1[8] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar51 = -(uint)((float)puVar1[9] <= (float)*(undefined8 *)(param_2 + 0x16));
      iVar52 = -(uint)((float)((ulong)puVar1[9] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar22 = CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                        (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar41 >> 0x18) &
                        (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar49 >> 0x18) & bVar56,
                        CONCAT12((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                                 (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar41 >> 0x10) &
                                 (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar49 >> 0x10) &
                                 bVar55,CONCAT11((byte)((uint)iVar22 >> 8) &
                                                 (byte)((uint)iVar24 >> 8) &
                                                 (byte)((uint)iVar37 >> 8) &
                                                 (byte)((uint)iVar41 >> 8) &
                                                 (byte)((uint)iVar45 >> 8) &
                                                 (byte)((uint)iVar49 >> 8) & bVar54,
                                                 (byte)iVar22 & (byte)iVar24 & (byte)iVar37 &
                                                 (byte)iVar41 & (byte)iVar45 & (byte)iVar49 & bVar53
                                                )));
      auVar27._0_8_ =
           CONCAT17((byte)((uint)iVar7 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                    (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar42 >> 0x18) &
                    (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar50 >> 0x18) & bVar60,
                    CONCAT16((byte)((uint)iVar7 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                             (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar42 >> 0x10) &
                             (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar50 >> 0x10) & bVar59,
                             CONCAT15((byte)((uint)iVar7 >> 8) & (byte)((uint)iVar34 >> 8) &
                                      (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar42 >> 8) &
                                      (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar50 >> 8) & bVar58
                                      ,CONCAT14((byte)iVar7 & (byte)iVar34 & (byte)iVar38 &
                                                (byte)iVar42 & (byte)iVar46 & (byte)iVar50 & bVar57,
                                                iVar22))));
      auVar27[8] = (byte)iVar8 & (byte)iVar35 & (byte)iVar39 & (byte)iVar43 & (byte)iVar47 &
                   (byte)iVar51 & bVar61;
      auVar27[9] = (byte)((uint)iVar8 >> 8) & (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar39 >> 8)
                   & (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar47 >> 8) &
                   (byte)((uint)iVar51 >> 8) & bVar62;
      auVar27[10] = (byte)((uint)iVar8 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                    (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar43 >> 0x10) &
                    (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar51 >> 0x10) & bVar63;
      auVar27[0xb] = (byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                     (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar43 >> 0x18) &
                     (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar51 >> 0x18) & bVar64;
      auVar30[0xc] = (byte)iVar10 & (byte)iVar36 & (byte)iVar40 & (byte)iVar44 & (byte)iVar48 &
                     (byte)iVar52 & bVar65;
      auVar30._0_12_ = auVar27;
      auVar30[0xd] = (byte)((uint)iVar10 >> 8) & (byte)((uint)iVar36 >> 8) &
                     (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar44 >> 8) &
                     (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar52 >> 8) & bVar66;
      auVar30[0xe] = (byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                     (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar44 >> 0x10) &
                     (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar52 >> 0x10) & bVar67;
      auVar30[0xf] = (byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                     (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar44 >> 0x18) &
                     (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar52 >> 0x18) & bVar68;
      uVar25 = iVar22 + (int)((ulong)auVar27._0_8_ >> 0x20) + auVar27._8_4_ + auVar30._12_4_;
      uVar9 = puVar1[0xd];
      uVar26 = *(uint *)(puVar15 + (ulong)uVar25 * 4);
      auVar5[9] = (char)((ulong)uVar9 >> 8);
      auVar5._0_9_ = *(unkbyte9 *)(puVar1 + 0xc);
      auVar5[10] = (char)((ulong)uVar9 >> 0x10);
      auVar5[0xb] = (char)((ulong)uVar9 >> 0x18);
      auVar5[0xc] = (char)((ulong)uVar9 >> 0x20);
      auVar5[0xd] = (char)((ulong)uVar9 >> 0x28);
      auVar5[0xe] = (char)((ulong)uVar9 >> 0x30);
      auVar5[0xf] = (char)((ulong)uVar9 >> 0x38);
      auVar31 = a64_TBL(ZEXT816(0),auVar5,*(undefined1 (*) [16])(puVar14 + (ulong)uVar25 * 0x10));
      if (*(char *)(puVar1 + 0xe) == '\0') {
        *local_80 = auVar31._8_8_;
        *puVar16 = auVar31._0_8_;
        local_80 = (undefined8 *)((long)puVar16 + (long)(int)uVar26 * 4);
      }
      else {
        plVar21 = *(long **)(param_3 + 8);
        lVar11 = plVar21[1];
        lVar23 = (long)(int)lVar11 + (long)(int)uVar26;
        iVar22 = (int)lVar23;
        local_80 = puVar16;
        if ((int)(*(uint *)((long)plVar21 + 0xc) & 0x7fffffff) < iVar22) {
          FUN_02efada0(plVar21,PTR_PTR_047d1a50,lVar23);
          puVar14 = PTR_DAT_047d1aa0;
          puVar15 = PTR_DAT_047d1aa8;
        }
        *(int *)(plVar21 + 1) = iVar22;
        if (uVar25 != 0) {
          puVar19 = (undefined4 *)(*plVar21 + (long)(int)lVar11 * 4);
          uVar25 = uVar26 & 3;
          if (uVar26 - 1 < 3) {
            iVar22 = 0;
            puVar18 = puVar19;
          }
          else {
            iVar22 = 0;
            do {
              puVar18 = puVar19 + 4;
              uVar2 = auVar31._4_4_;
              uVar20 = auVar31._0_4_;
              if (iVar22 != 0) {
                uVar20 = 0;
                uVar2 = 0;
              }
              *puVar19 = uVar20;
              puVar19[1] = uVar2;
              uVar2 = auVar31._12_4_;
              uVar20 = auVar31._8_4_;
              if (iVar22 != 0) {
                uVar20 = 0;
                uVar2 = 0;
              }
              puVar19[2] = uVar20;
              puVar19[3] = uVar2;
              iVar22 = iVar22 + -4;
              puVar19 = puVar18;
            } while (-(uVar26 & 0xfffffffc) != iVar22);
            iVar22 = -iVar22;
          }
          for (; uVar25 != 0; uVar25 = uVar25 - 1) {
            switch(iVar22) {
            case 0:
              uVar20 = auVar31._0_4_;
              break;
            case 1:
              uVar20 = auVar31._4_4_;
              break;
            case 2:
              uVar20 = auVar31._8_4_;
              break;
            case 3:
              uVar20 = auVar31._12_4_;
              break;
            default:
              uVar20 = 0;
            }
            iVar22 = iVar22 + 1;
            *puVar18 = uVar20;
            puVar18 = puVar18 + 1;
          }
        }
      }
      puVar1 = (undefined8 *)(lVar3 + (ulong)uVar4 * 0x80);
      iVar24 = -(uint)(*param_2 <= (float)puVar1[2]);
      iVar34 = -(uint)(param_2[1] <= (float)((ulong)puVar1[2] >> 0x20));
      iVar35 = -(uint)(param_2[2] <= (float)puVar1[3]);
      iVar36 = -(uint)(param_2[3] <= (float)((ulong)puVar1[3] >> 0x20));
      iVar22 = -(uint)((float)*puVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar7 = -(uint)((float)((ulong)*puVar1 >> 0x20) <=
                     (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar8 = -(uint)((float)puVar1[1] <= (float)*(undefined8 *)(param_2 + 6));
      iVar10 = -(uint)((float)((ulong)puVar1[1] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar37 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)puVar1[6]);
      iVar38 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)puVar1[6] >> 0x20));
      iVar39 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)puVar1[7]);
      iVar40 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)puVar1[7] >> 0x20));
      iVar41 = -(uint)((float)puVar1[4] <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar42 = -(uint)((float)((ulong)puVar1[4] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar43 = -(uint)((float)puVar1[5] <= (float)*(undefined8 *)(param_2 + 0xe));
      iVar44 = -(uint)((float)((ulong)puVar1[5] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar45 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <= (float)puVar1[10]);
      iVar46 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)puVar1[10] >> 0x20));
      iVar47 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <= (float)puVar1[0xb]);
      iVar48 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)puVar1[0xb] >> 0x20));
      iVar49 = -(uint)((float)puVar1[8] <= (float)*(undefined8 *)(param_2 + 0x14));
      iVar50 = -(uint)((float)((ulong)puVar1[8] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar51 = -(uint)((float)puVar1[9] <= (float)*(undefined8 *)(param_2 + 0x16));
      iVar52 = -(uint)((float)((ulong)puVar1[9] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar22 = CONCAT13((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar24 >> 0x18) &
                        (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar41 >> 0x18) &
                        (byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar49 >> 0x18) & bVar56,
                        CONCAT12((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                                 (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar41 >> 0x10) &
                                 (byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar49 >> 0x10) &
                                 bVar55,CONCAT11((byte)((uint)iVar22 >> 8) &
                                                 (byte)((uint)iVar24 >> 8) &
                                                 (byte)((uint)iVar37 >> 8) &
                                                 (byte)((uint)iVar41 >> 8) &
                                                 (byte)((uint)iVar45 >> 8) &
                                                 (byte)((uint)iVar49 >> 8) & bVar54,
                                                 (byte)iVar22 & (byte)iVar24 & (byte)iVar37 &
                                                 (byte)iVar41 & (byte)iVar45 & (byte)iVar49 & bVar53
                                                )));
      auVar29._0_8_ =
           CONCAT17((byte)((uint)iVar7 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                    (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar42 >> 0x18) &
                    (byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar50 >> 0x18) & bVar60,
                    CONCAT16((byte)((uint)iVar7 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                             (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar42 >> 0x10) &
                             (byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar50 >> 0x10) & bVar59,
                             CONCAT15((byte)((uint)iVar7 >> 8) & (byte)((uint)iVar34 >> 8) &
                                      (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar42 >> 8) &
                                      (byte)((uint)iVar46 >> 8) & (byte)((uint)iVar50 >> 8) & bVar58
                                      ,CONCAT14((byte)iVar7 & (byte)iVar34 & (byte)iVar38 &
                                                (byte)iVar42 & (byte)iVar46 & (byte)iVar50 & bVar57,
                                                iVar22))));
      auVar29[8] = (byte)iVar8 & (byte)iVar35 & (byte)iVar39 & (byte)iVar43 & (byte)iVar47 &
                   (byte)iVar51 & bVar61;
      auVar29[9] = (byte)((uint)iVar8 >> 8) & (byte)((uint)iVar35 >> 8) & (byte)((uint)iVar39 >> 8)
                   & (byte)((uint)iVar43 >> 8) & (byte)((uint)iVar47 >> 8) &
                   (byte)((uint)iVar51 >> 8) & bVar62;
      auVar29[10] = (byte)((uint)iVar8 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                    (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar43 >> 0x10) &
                    (byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar51 >> 0x10) & bVar63;
      auVar29[0xb] = (byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                     (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar43 >> 0x18) &
                     (byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar51 >> 0x18) & bVar64;
      auVar33[0xc] = (byte)iVar10 & (byte)iVar36 & (byte)iVar40 & (byte)iVar44 & (byte)iVar48 &
                     (byte)iVar52 & bVar65;
      auVar33._0_12_ = auVar29;
      auVar33[0xd] = (byte)((uint)iVar10 >> 8) & (byte)((uint)iVar36 >> 8) &
                     (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar44 >> 8) &
                     (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar52 >> 8) & bVar66;
      auVar33[0xe] = (byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar36 >> 0x10) &
                     (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar44 >> 0x10) &
                     (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar52 >> 0x10) & bVar67;
      auVar33[0xf] = (byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar36 >> 0x18) &
                     (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar44 >> 0x18) &
                     (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar52 >> 0x18) & bVar68;
      uVar26 = iVar22 + (int)((ulong)auVar29._0_8_ >> 0x20) + auVar29._8_4_ + auVar33._12_4_;
      uVar9 = puVar1[0xd];
      uVar4 = *(uint *)(puVar15 + (ulong)uVar26 * 4);
      lVar23 = (long)(int)uVar4;
      auVar6[9] = (char)((ulong)uVar9 >> 8);
      auVar6._0_9_ = *(unkbyte9 *)(puVar1 + 0xc);
      auVar6[10] = (char)((ulong)uVar9 >> 0x10);
      auVar6[0xb] = (char)((ulong)uVar9 >> 0x18);
      auVar6[0xc] = (char)((ulong)uVar9 >> 0x20);
      auVar6[0xd] = (char)((ulong)uVar9 >> 0x28);
      auVar6[0xe] = (char)((ulong)uVar9 >> 0x30);
      auVar6[0xf] = (char)((ulong)uVar9 >> 0x38);
      auVar31 = a64_TBL(ZEXT816(0),auVar6,*(undefined1 (*) [16])(puVar14 + (ulong)uVar26 * 0x10));
      if (*(char *)(puVar1 + 0xe) == '\0') {
        local_80[1] = auVar31._8_8_;
        *local_80 = auVar31._0_8_;
LAB_03011de0:
        local_80 = (undefined8 *)((long)local_80 + lVar23 * 4);
      }
      else {
        plVar21 = *(long **)(param_3 + 8);
        lVar11 = plVar21[1];
        lVar23 = (int)lVar11 + lVar23;
        iVar22 = (int)lVar23;
        if ((int)(*(uint *)((long)plVar21 + 0xc) & 0x7fffffff) < iVar22) {
          FUN_02efada0(plVar21,PTR_PTR_047d1a50,lVar23);
          puVar14 = PTR_DAT_047d1aa0;
          puVar15 = PTR_DAT_047d1aa8;
        }
        *(int *)(plVar21 + 1) = iVar22;
        if (uVar26 != 0) {
          puVar19 = (undefined4 *)(*plVar21 + (long)(int)lVar11 * 4);
          uVar26 = uVar4 & 3;
          if (uVar4 - 1 < 3) {
            iVar22 = 0;
            puVar18 = puVar19;
          }
          else {
            iVar22 = 0;
            do {
              puVar18 = puVar19 + 4;
              uVar2 = auVar31._4_4_;
              uVar20 = auVar31._0_4_;
              if (iVar22 != 0) {
                uVar20 = 0;
                uVar2 = 0;
              }
              *puVar19 = uVar20;
              puVar19[1] = uVar2;
              uVar2 = auVar31._12_4_;
              uVar20 = auVar31._8_4_;
              if (iVar22 != 0) {
                uVar20 = 0;
                uVar2 = 0;
              }
              puVar19[2] = uVar20;
              puVar19[3] = uVar2;
              iVar22 = iVar22 + -4;
              puVar19 = puVar18;
            } while (-(uVar4 & 0xfffffffc) != iVar22);
            iVar22 = -iVar22;
          }
          for (; uVar26 != 0; uVar26 = uVar26 - 1) {
            switch(iVar22) {
            case 0:
              uVar20 = auVar31._0_4_;
              break;
            case 1:
              uVar20 = auVar31._4_4_;
              break;
            case 2:
              uVar20 = auVar31._8_4_;
              break;
            case 3:
              uVar20 = auVar31._12_4_;
              break;
            default:
              uVar20 = 0;
            }
            iVar22 = iVar22 + 1;
            *puVar18 = uVar20;
            puVar18 = puVar18 + 1;
          }
        }
      }
    }
    uVar17 = (ulong)((long)local_80 - (long)local_480) >> 2;
    if ((int)uVar17 == 0) {
      return;
    }
  } while( true );
}


