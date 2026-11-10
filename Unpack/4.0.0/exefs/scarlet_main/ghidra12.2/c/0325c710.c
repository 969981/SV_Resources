/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0325c710; name: FUN_0325c710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0325c710(long *param_1,float *param_2,long param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
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
  byte bVar57;
  byte bVar58;
  byte bVar59;
  undefined4 local_460 [256];
  undefined8 *local_60;
  
  puVar13 = PTR_DAT_047d1aa8;
  puVar12 = PTR_DAT_047d1aa0;
  uVar11 = _UNK_03cab278;
  uVar10 = _DAT_03cab270;
  local_60 = (undefined8 *)((ulong)local_460 | 4);
  uVar15 = 1;
  local_460[0] = param_4;
  lVar2 = 0;
  if (*param_1 != 0) {
    lVar2 = *param_1 + (long)param_1;
  }
  do {
    puVar14 = (undefined8 *)((long)local_60 - 4);
    puVar1 = (undefined8 *)(lVar2 + (ulong)*(uint *)((long)local_60 - 4) * 0x80);
    bVar44 = (byte)uVar10;
    bVar45 = (byte)((ulong)uVar10 >> 8);
    bVar46 = (byte)((ulong)uVar10 >> 0x10);
    bVar47 = (byte)((ulong)uVar10 >> 0x18);
    bVar48 = (byte)((ulong)uVar10 >> 0x20);
    bVar49 = (byte)((ulong)uVar10 >> 0x28);
    bVar50 = (byte)((ulong)uVar10 >> 0x30);
    bVar51 = (byte)((ulong)uVar10 >> 0x38);
    bVar52 = (byte)uVar11;
    bVar53 = (byte)((ulong)uVar11 >> 8);
    bVar54 = (byte)((ulong)uVar11 >> 0x10);
    bVar55 = (byte)((ulong)uVar11 >> 0x18);
    bVar56 = (byte)((ulong)uVar11 >> 0x20);
    bVar57 = (byte)((ulong)uVar11 >> 0x28);
    bVar58 = (byte)((ulong)uVar11 >> 0x30);
    bVar59 = (byte)((ulong)uVar11 >> 0x38);
    if ((int)uVar15 < 2) {
      iVar16 = -(uint)(*param_2 <= (float)puVar1[2]);
      iVar25 = -(uint)(param_2[1] <= (float)((ulong)puVar1[2] >> 0x20));
      iVar26 = -(uint)(param_2[2] <= (float)puVar1[3]);
      iVar27 = -(uint)(param_2[3] <= (float)((ulong)puVar1[3] >> 0x20));
      iVar17 = -(uint)((float)*puVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar6 = -(uint)((float)((ulong)*puVar1 >> 0x20) <=
                     (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar7 = -(uint)((float)puVar1[1] <= (float)*(undefined8 *)(param_2 + 6));
      iVar9 = -(uint)((float)((ulong)puVar1[1] >> 0x20) <=
                     (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar28 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)puVar1[6]);
      iVar29 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)puVar1[6] >> 0x20));
      iVar30 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)puVar1[7]);
      iVar31 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)puVar1[7] >> 0x20));
      iVar32 = -(uint)((float)puVar1[4] <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar33 = -(uint)((float)((ulong)puVar1[4] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar34 = -(uint)((float)puVar1[5] <= (float)*(undefined8 *)(param_2 + 0xe));
      iVar35 = -(uint)((float)((ulong)puVar1[5] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar36 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <= (float)puVar1[10]);
      iVar37 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)puVar1[10] >> 0x20));
      iVar38 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <= (float)puVar1[0xb]);
      iVar39 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)puVar1[0xb] >> 0x20));
      iVar40 = -(uint)((float)puVar1[8] <= (float)*(undefined8 *)(param_2 + 0x14));
      iVar41 = -(uint)((float)((ulong)puVar1[8] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar42 = -(uint)((float)puVar1[9] <= (float)*(undefined8 *)(param_2 + 0x16));
      iVar43 = -(uint)((float)((ulong)puVar1[9] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar17 = CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                        (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar32 >> 0x18) &
                        (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar40 >> 0x18) & bVar47,
                        CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                                 (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar32 >> 0x10) &
                                 (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar40 >> 0x10) &
                                 bVar46,CONCAT11((byte)((uint)iVar17 >> 8) &
                                                 (byte)((uint)iVar16 >> 8) &
                                                 (byte)((uint)iVar28 >> 8) &
                                                 (byte)((uint)iVar32 >> 8) &
                                                 (byte)((uint)iVar36 >> 8) &
                                                 (byte)((uint)iVar40 >> 8) & bVar45,
                                                 (byte)iVar17 & (byte)iVar16 & (byte)iVar28 &
                                                 (byte)iVar32 & (byte)iVar36 & (byte)iVar40 & bVar44
                                                )));
      auVar19._0_8_ =
           CONCAT17((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                    (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                    (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar41 >> 0x18) & bVar51,
                    CONCAT16((byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                             (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                             (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar41 >> 0x10) & bVar50,
                             CONCAT15((byte)((uint)iVar6 >> 8) & (byte)((uint)iVar25 >> 8) &
                                      (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar33 >> 8) &
                                      (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar41 >> 8) & bVar49
                                      ,CONCAT14((byte)iVar6 & (byte)iVar25 & (byte)iVar29 &
                                                (byte)iVar33 & (byte)iVar37 & (byte)iVar41 & bVar48,
                                                iVar17))));
      auVar19[8] = (byte)iVar7 & (byte)iVar26 & (byte)iVar30 & (byte)iVar34 & (byte)iVar38 &
                   (byte)iVar42 & bVar52;
      auVar19[9] = (byte)((uint)iVar7 >> 8) & (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar30 >> 8)
                   & (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar38 >> 8) &
                   (byte)((uint)iVar42 >> 8) & bVar53;
      auVar19[10] = (byte)((uint)iVar7 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                    (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                    (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar42 >> 0x10) & bVar54;
      auVar19[0xb] = (byte)((uint)iVar7 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                     (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                     (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar42 >> 0x18) & bVar55;
      auVar23[0xc] = (byte)iVar9 & (byte)iVar27 & (byte)iVar31 & (byte)iVar35 & (byte)iVar39 &
                     (byte)iVar43 & bVar56;
      auVar23._0_12_ = auVar19;
      auVar23[0xd] = (byte)((uint)iVar9 >> 8) & (byte)((uint)iVar27 >> 8) &
                     (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar35 >> 8) &
                     (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar43 >> 8) & bVar57;
      auVar23[0xe] = (byte)((uint)iVar9 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                     (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                     (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar43 >> 0x10) & bVar58;
      auVar23[0xf] = (byte)((uint)iVar9 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                     (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                     (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar43 >> 0x18) & bVar59;
      uVar15 = (ulong)(uint)(iVar17 + (int)((ulong)auVar19._0_8_ >> 0x20) +
                            auVar19._8_4_ + auVar23._12_4_);
      uVar8 = puVar1[0xd];
      iVar17 = *(int *)(puVar13 + uVar15 * 4);
      auVar22[9] = (char)((ulong)uVar8 >> 8);
      auVar22._0_9_ = *(unkbyte9 *)(puVar1 + 0xc);
      auVar22[10] = (char)((ulong)uVar8 >> 0x10);
      auVar22[0xb] = (char)((ulong)uVar8 >> 0x18);
      auVar22[0xc] = (char)((ulong)uVar8 >> 0x20);
      auVar22[0xd] = (char)((ulong)uVar8 >> 0x28);
      auVar22[0xe] = (char)((ulong)uVar8 >> 0x30);
      auVar22[0xf] = (char)((ulong)uVar8 >> 0x38);
      auVar22 = a64_TBL(ZEXT816(0),auVar22,*(undefined1 (*) [16])(puVar12 + uVar15 * 0x10));
      if (*(char *)(puVar1 + 0xe) != '\0') {
        puVar1 = (undefined8 *)(param_3 + (long)*(int *)(param_3 + 0x100) * 4);
        puVar1[1] = auVar22._8_8_;
        *puVar1 = auVar22._0_8_;
        iVar17 = *(int *)(param_3 + 0x100) + iVar17;
        local_60 = puVar14;
        goto LAB_0325c950;
      }
      *(long *)((long)local_60 + 4) = auVar22._8_8_;
      *puVar14 = auVar22._0_8_;
      local_60 = (undefined8 *)((long)puVar14 + (long)iVar17 * 4);
    }
    else {
      puVar14 = local_60 + -1;
      uVar3 = *(uint *)(local_60 + -1);
      iVar16 = -(uint)(*param_2 <= (float)puVar1[2]);
      iVar25 = -(uint)(param_2[1] <= (float)((ulong)puVar1[2] >> 0x20));
      iVar26 = -(uint)(param_2[2] <= (float)puVar1[3]);
      iVar27 = -(uint)(param_2[3] <= (float)((ulong)puVar1[3] >> 0x20));
      iVar17 = -(uint)((float)*puVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar6 = -(uint)((float)((ulong)*puVar1 >> 0x20) <=
                     (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar7 = -(uint)((float)puVar1[1] <= (float)*(undefined8 *)(param_2 + 6));
      iVar9 = -(uint)((float)((ulong)puVar1[1] >> 0x20) <=
                     (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar28 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)puVar1[6]);
      iVar29 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)puVar1[6] >> 0x20));
      iVar30 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)puVar1[7]);
      iVar31 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)puVar1[7] >> 0x20));
      iVar32 = -(uint)((float)puVar1[4] <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar33 = -(uint)((float)((ulong)puVar1[4] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar34 = -(uint)((float)puVar1[5] <= (float)*(undefined8 *)(param_2 + 0xe));
      iVar35 = -(uint)((float)((ulong)puVar1[5] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar36 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <= (float)puVar1[10]);
      iVar37 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)puVar1[10] >> 0x20));
      iVar38 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <= (float)puVar1[0xb]);
      iVar39 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)puVar1[0xb] >> 0x20));
      iVar40 = -(uint)((float)puVar1[8] <= (float)*(undefined8 *)(param_2 + 0x14));
      iVar41 = -(uint)((float)((ulong)puVar1[8] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar42 = -(uint)((float)puVar1[9] <= (float)*(undefined8 *)(param_2 + 0x16));
      iVar43 = -(uint)((float)((ulong)puVar1[9] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar17 = CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                        (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar32 >> 0x18) &
                        (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar40 >> 0x18) & bVar47,
                        CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                                 (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar32 >> 0x10) &
                                 (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar40 >> 0x10) &
                                 bVar46,CONCAT11((byte)((uint)iVar17 >> 8) &
                                                 (byte)((uint)iVar16 >> 8) &
                                                 (byte)((uint)iVar28 >> 8) &
                                                 (byte)((uint)iVar32 >> 8) &
                                                 (byte)((uint)iVar36 >> 8) &
                                                 (byte)((uint)iVar40 >> 8) & bVar45,
                                                 (byte)iVar17 & (byte)iVar16 & (byte)iVar28 &
                                                 (byte)iVar32 & (byte)iVar36 & (byte)iVar40 & bVar44
                                                )));
      auVar18._0_8_ =
           CONCAT17((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                    (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                    (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar41 >> 0x18) & bVar51,
                    CONCAT16((byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                             (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                             (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar41 >> 0x10) & bVar50,
                             CONCAT15((byte)((uint)iVar6 >> 8) & (byte)((uint)iVar25 >> 8) &
                                      (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar33 >> 8) &
                                      (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar41 >> 8) & bVar49
                                      ,CONCAT14((byte)iVar6 & (byte)iVar25 & (byte)iVar29 &
                                                (byte)iVar33 & (byte)iVar37 & (byte)iVar41 & bVar48,
                                                iVar17))));
      auVar18[8] = (byte)iVar7 & (byte)iVar26 & (byte)iVar30 & (byte)iVar34 & (byte)iVar38 &
                   (byte)iVar42 & bVar52;
      auVar18[9] = (byte)((uint)iVar7 >> 8) & (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar30 >> 8)
                   & (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar38 >> 8) &
                   (byte)((uint)iVar42 >> 8) & bVar53;
      auVar18[10] = (byte)((uint)iVar7 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                    (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                    (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar42 >> 0x10) & bVar54;
      auVar18[0xb] = (byte)((uint)iVar7 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                     (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                     (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar42 >> 0x18) & bVar55;
      auVar21[0xc] = (byte)iVar9 & (byte)iVar27 & (byte)iVar31 & (byte)iVar35 & (byte)iVar39 &
                     (byte)iVar43 & bVar56;
      auVar21._0_12_ = auVar18;
      auVar21[0xd] = (byte)((uint)iVar9 >> 8) & (byte)((uint)iVar27 >> 8) &
                     (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar35 >> 8) &
                     (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar43 >> 8) & bVar57;
      auVar21[0xe] = (byte)((uint)iVar9 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                     (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                     (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar43 >> 0x10) & bVar58;
      auVar21[0xf] = (byte)((uint)iVar9 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                     (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                     (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar43 >> 0x18) & bVar59;
      uVar15 = (ulong)(uint)(iVar17 + (int)((ulong)auVar18._0_8_ >> 0x20) +
                            auVar18._8_4_ + auVar21._12_4_);
      uVar8 = puVar1[0xd];
      iVar17 = *(int *)(puVar13 + uVar15 * 4);
      auVar4[9] = (char)((ulong)uVar8 >> 8);
      auVar4._0_9_ = *(unkbyte9 *)(puVar1 + 0xc);
      auVar4[10] = (char)((ulong)uVar8 >> 0x10);
      auVar4[0xb] = (char)((ulong)uVar8 >> 0x18);
      auVar4[0xc] = (char)((ulong)uVar8 >> 0x20);
      auVar4[0xd] = (char)((ulong)uVar8 >> 0x28);
      auVar4[0xe] = (char)((ulong)uVar8 >> 0x30);
      auVar4[0xf] = (char)((ulong)uVar8 >> 0x38);
      auVar22 = a64_TBL(ZEXT816(0),auVar4,*(undefined1 (*) [16])(puVar12 + uVar15 * 0x10));
      if (*(char *)(puVar1 + 0xe) == '\0') {
        *local_60 = auVar22._8_8_;
        *puVar14 = auVar22._0_8_;
        local_60 = (undefined8 *)((long)puVar14 + (long)iVar17 * 4);
      }
      else {
        puVar1 = (undefined8 *)(param_3 + (long)*(int *)(param_3 + 0x100) * 4);
        puVar1[1] = auVar22._8_8_;
        *puVar1 = auVar22._0_8_;
        iVar17 = *(int *)(param_3 + 0x100) + iVar17;
        *(int *)(param_3 + 0x100) = iVar17;
        local_60 = puVar14;
        if (0x3b < iVar17) {
          (**(code **)(**(long **)(param_3 + 0x108) + 0x10))
                    (*(long **)(param_3 + 0x108),param_3,iVar17,*(undefined8 *)(param_3 + 0x110));
          *(undefined4 *)(param_3 + 0x100) = 0;
        }
      }
      puVar1 = (undefined8 *)(lVar2 + (ulong)uVar3 * 0x80);
      iVar16 = -(uint)(*param_2 <= (float)puVar1[2]);
      iVar25 = -(uint)(param_2[1] <= (float)((ulong)puVar1[2] >> 0x20));
      iVar26 = -(uint)(param_2[2] <= (float)puVar1[3]);
      iVar27 = -(uint)(param_2[3] <= (float)((ulong)puVar1[3] >> 0x20));
      iVar17 = -(uint)((float)*puVar1 <= (float)*(undefined8 *)(param_2 + 4));
      iVar6 = -(uint)((float)((ulong)*puVar1 >> 0x20) <=
                     (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20));
      iVar7 = -(uint)((float)puVar1[1] <= (float)*(undefined8 *)(param_2 + 6));
      iVar9 = -(uint)((float)((ulong)puVar1[1] >> 0x20) <=
                     (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20));
      iVar28 = -(uint)((float)*(undefined8 *)(param_2 + 8) <= (float)puVar1[6]);
      iVar29 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) <=
                      (float)((ulong)puVar1[6] >> 0x20));
      iVar30 = -(uint)((float)*(undefined8 *)(param_2 + 10) <= (float)puVar1[7]);
      iVar31 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20) <=
                      (float)((ulong)puVar1[7] >> 0x20));
      iVar32 = -(uint)((float)puVar1[4] <= (float)*(undefined8 *)(param_2 + 0xc));
      iVar33 = -(uint)((float)((ulong)puVar1[4] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20));
      iVar34 = -(uint)((float)puVar1[5] <= (float)*(undefined8 *)(param_2 + 0xe));
      iVar35 = -(uint)((float)((ulong)puVar1[5] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20));
      iVar36 = -(uint)((float)*(undefined8 *)(param_2 + 0x10) <= (float)puVar1[10]);
      iVar37 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <=
                      (float)((ulong)puVar1[10] >> 0x20));
      iVar38 = -(uint)((float)*(undefined8 *)(param_2 + 0x12) <= (float)puVar1[0xb]);
      iVar39 = -(uint)((float)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) <=
                      (float)((ulong)puVar1[0xb] >> 0x20));
      iVar40 = -(uint)((float)puVar1[8] <= (float)*(undefined8 *)(param_2 + 0x14));
      iVar41 = -(uint)((float)((ulong)puVar1[8] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20));
      iVar42 = -(uint)((float)puVar1[9] <= (float)*(undefined8 *)(param_2 + 0x16));
      iVar43 = -(uint)((float)((ulong)puVar1[9] >> 0x20) <=
                      (float)((ulong)*(undefined8 *)(param_2 + 0x16) >> 0x20));
      iVar17 = CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar16 >> 0x18) &
                        (byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar32 >> 0x18) &
                        (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar40 >> 0x18) & bVar47,
                        CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar16 >> 0x10) &
                                 (byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar32 >> 0x10) &
                                 (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar40 >> 0x10) &
                                 bVar46,CONCAT11((byte)((uint)iVar17 >> 8) &
                                                 (byte)((uint)iVar16 >> 8) &
                                                 (byte)((uint)iVar28 >> 8) &
                                                 (byte)((uint)iVar32 >> 8) &
                                                 (byte)((uint)iVar36 >> 8) &
                                                 (byte)((uint)iVar40 >> 8) & bVar45,
                                                 (byte)iVar17 & (byte)iVar16 & (byte)iVar28 &
                                                 (byte)iVar32 & (byte)iVar36 & (byte)iVar40 & bVar44
                                                )));
      auVar20._0_8_ =
           CONCAT17((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                    (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                    (byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar41 >> 0x18) & bVar51,
                    CONCAT16((byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                             (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                             (byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar41 >> 0x10) & bVar50,
                             CONCAT15((byte)((uint)iVar6 >> 8) & (byte)((uint)iVar25 >> 8) &
                                      (byte)((uint)iVar29 >> 8) & (byte)((uint)iVar33 >> 8) &
                                      (byte)((uint)iVar37 >> 8) & (byte)((uint)iVar41 >> 8) & bVar49
                                      ,CONCAT14((byte)iVar6 & (byte)iVar25 & (byte)iVar29 &
                                                (byte)iVar33 & (byte)iVar37 & (byte)iVar41 & bVar48,
                                                iVar17))));
      auVar20[8] = (byte)iVar7 & (byte)iVar26 & (byte)iVar30 & (byte)iVar34 & (byte)iVar38 &
                   (byte)iVar42 & bVar52;
      auVar20[9] = (byte)((uint)iVar7 >> 8) & (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar30 >> 8)
                   & (byte)((uint)iVar34 >> 8) & (byte)((uint)iVar38 >> 8) &
                   (byte)((uint)iVar42 >> 8) & bVar53;
      auVar20[10] = (byte)((uint)iVar7 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                    (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                    (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar42 >> 0x10) & bVar54;
      auVar20[0xb] = (byte)((uint)iVar7 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                     (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                     (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar42 >> 0x18) & bVar55;
      auVar24[0xc] = (byte)iVar9 & (byte)iVar27 & (byte)iVar31 & (byte)iVar35 & (byte)iVar39 &
                     (byte)iVar43 & bVar56;
      auVar24._0_12_ = auVar20;
      auVar24[0xd] = (byte)((uint)iVar9 >> 8) & (byte)((uint)iVar27 >> 8) &
                     (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar35 >> 8) &
                     (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar43 >> 8) & bVar57;
      auVar24[0xe] = (byte)((uint)iVar9 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                     (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                     (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar43 >> 0x10) & bVar58;
      auVar24[0xf] = (byte)((uint)iVar9 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                     (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                     (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar43 >> 0x18) & bVar59;
      uVar15 = (ulong)(uint)(iVar17 + (int)((ulong)auVar20._0_8_ >> 0x20) +
                            auVar20._8_4_ + auVar24._12_4_);
      uVar8 = puVar1[0xd];
      iVar17 = *(int *)(puVar13 + uVar15 * 4);
      auVar5[9] = (char)((ulong)uVar8 >> 8);
      auVar5._0_9_ = *(unkbyte9 *)(puVar1 + 0xc);
      auVar5[10] = (char)((ulong)uVar8 >> 0x10);
      auVar5[0xb] = (char)((ulong)uVar8 >> 0x18);
      auVar5[0xc] = (char)((ulong)uVar8 >> 0x20);
      auVar5[0xd] = (char)((ulong)uVar8 >> 0x28);
      auVar5[0xe] = (char)((ulong)uVar8 >> 0x30);
      auVar5[0xf] = (char)((ulong)uVar8 >> 0x38);
      auVar22 = a64_TBL(ZEXT816(0),auVar5,*(undefined1 (*) [16])(puVar12 + uVar15 * 0x10));
      if (*(char *)(puVar1 + 0xe) == '\0') {
        local_60[1] = auVar22._8_8_;
        *local_60 = auVar22._0_8_;
        local_60 = (undefined8 *)((long)local_60 + (long)iVar17 * 4);
      }
      else {
        puVar1 = (undefined8 *)(param_3 + (long)*(int *)(param_3 + 0x100) * 4);
        puVar1[1] = auVar22._8_8_;
        *puVar1 = auVar22._0_8_;
        iVar17 = *(int *)(param_3 + 0x100) + iVar17;
LAB_0325c950:
        *(int *)(param_3 + 0x100) = iVar17;
        if (0x3b < iVar17) {
          (**(code **)(**(long **)(param_3 + 0x108) + 0x10))
                    (*(long **)(param_3 + 0x108),param_3,iVar17,*(undefined8 *)(param_3 + 0x110));
          *(undefined4 *)(param_3 + 0x100) = 0;
        }
      }
    }
    uVar15 = (ulong)((long)local_60 - (long)local_460) >> 2;
    if ((int)uVar15 == 0) {
      return;
    }
  } while( true );
}


