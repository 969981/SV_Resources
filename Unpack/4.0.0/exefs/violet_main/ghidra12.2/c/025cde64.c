/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025cde64; name: FUN_025cde64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025cde64(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar8;
  float fVar4;
  byte bVar6;
  byte bVar7;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  undefined8 uVar5;
  byte bVar13;
  float fVar10;
  byte bVar14;
  byte bVar19;
  float fVar15;
  byte bVar17;
  byte bVar18;
  byte bVar20;
  byte bVar22;
  byte bVar23;
  undefined8 uVar16;
  byte bVar24;
  float fVar21;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
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
  
  uVar5 = DAT_03cab620;
  *(undefined8 *)(param_1 + 0xa8) = DAT_03cab628;
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  uVar2 = _UNK_03cabe68;
  uVar1 = _DAT_03cabe60;
  uVar16 = _UNK_03caa5b8;
  uVar5 = _DAT_03caa5b0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 200) = uVar16;
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0xd8) = param_2[1];
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  memcpy((void *)(param_1 + 0x60),(undefined8 *)(param_1 + 0xa0),0x40);
  uVar16 = param_3[1];
  uVar5 = *param_3;
  bVar3 = (byte)uVar5;
  bVar6 = (byte)((ulong)uVar5 >> 8);
  bVar7 = (byte)((ulong)uVar5 >> 0x10);
  bVar8 = (byte)((ulong)uVar5 >> 0x18);
  fVar31 = (float)CONCAT13(bVar8 & (byte)((ulong)_DAT_03caad60 >> 0x18),
                           CONCAT12(bVar7 & (byte)((ulong)_DAT_03caad60 >> 0x10),
                                    CONCAT11(bVar6 & (byte)((ulong)_DAT_03caad60 >> 8),
                                             bVar3 & (byte)_DAT_03caad60)));
  bVar9 = (byte)((ulong)uVar5 >> 0x20);
  bVar11 = (byte)((ulong)uVar5 >> 0x28);
  bVar12 = (byte)((ulong)uVar5 >> 0x30);
  bVar13 = (byte)((ulong)uVar5 >> 0x38);
  bVar14 = (byte)uVar16;
  bVar17 = (byte)((ulong)uVar16 >> 8);
  bVar18 = (byte)((ulong)uVar16 >> 0x10);
  bVar19 = (byte)((ulong)uVar16 >> 0x18);
  fVar33 = (float)CONCAT13(bVar19 & (byte)((ulong)_UNK_03caad68 >> 0x18),
                           CONCAT12(bVar18 & (byte)((ulong)_UNK_03caad68 >> 0x10),
                                    CONCAT11(bVar17 & (byte)((ulong)_UNK_03caad68 >> 8),
                                             bVar14 & (byte)_UNK_03caad68)));
  bVar20 = (byte)((ulong)uVar16 >> 0x20);
  bVar22 = (byte)((ulong)uVar16 >> 0x28);
  bVar23 = (byte)((ulong)uVar16 >> 0x30);
  bVar24 = (byte)((ulong)uVar16 >> 0x38);
  fVar25 = (float)*(undefined8 *)(param_1 + 0x60);
  fVar32 = (float)(CONCAT17(bVar13 & (byte)((ulong)_DAT_03caad60 >> 0x38),
                            CONCAT16(bVar12 & (byte)((ulong)_DAT_03caad60 >> 0x30),
                                     CONCAT15(bVar11 & (byte)((ulong)_DAT_03caad60 >> 0x28),
                                              CONCAT14(bVar9 & (byte)((ulong)_DAT_03caad60 >> 0x20),
                                                       fVar31)))) >> 0x20);
  fVar34 = (float)(CONCAT17(bVar24 & (byte)((ulong)_UNK_03caad68 >> 0x38),
                            CONCAT16(bVar23 & (byte)((ulong)_UNK_03caad68 >> 0x30),
                                     CONCAT15(bVar22 & (byte)((ulong)_UNK_03caad68 >> 0x28),
                                              CONCAT14(bVar20 & (byte)((ulong)_UNK_03caad68 >> 0x20)
                                                       ,fVar33)))) >> 0x20);
  *(undefined8 *)(param_1 + 0x98) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 0x90) = 0x7fc000007fc00000;
  fVar28 = (float)*(undefined8 *)(param_1 + 0x70);
  fVar39 = (float)*(undefined8 *)(param_1 + 0x80);
  fVar35 = (float)CONCAT13(bVar8 & (byte)((ulong)_DAT_03cabbf0 >> 0x18),
                           CONCAT12(bVar7 & (byte)((ulong)_DAT_03cabbf0 >> 0x10),
                                    CONCAT11(bVar6 & (byte)((ulong)_DAT_03cabbf0 >> 8),
                                             bVar3 & (byte)_DAT_03cabbf0)));
  fVar37 = (float)CONCAT13(bVar19 & (byte)((ulong)_UNK_03cabbf8 >> 0x18),
                           CONCAT12(bVar18 & (byte)((ulong)_UNK_03cabbf8 >> 0x10),
                                    CONCAT11(bVar17 & (byte)((ulong)_UNK_03cabbf8 >> 8),
                                             bVar14 & (byte)_UNK_03cabbf8)));
  fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  fVar36 = (float)(CONCAT17(bVar13 & (byte)((ulong)_DAT_03cabbf0 >> 0x38),
                            CONCAT16(bVar12 & (byte)((ulong)_DAT_03cabbf0 >> 0x30),
                                     CONCAT15(bVar11 & (byte)((ulong)_DAT_03cabbf0 >> 0x28),
                                              CONCAT14(bVar9 & (byte)((ulong)_DAT_03cabbf0 >> 0x20),
                                                       fVar35)))) >> 0x20);
  fVar38 = (float)(CONCAT17(bVar24 & (byte)((ulong)_UNK_03cabbf8 >> 0x38),
                            CONCAT16(bVar23 & (byte)((ulong)_UNK_03cabbf8 >> 0x30),
                                     CONCAT15(bVar22 & (byte)((ulong)_UNK_03cabbf8 >> 0x28),
                                              CONCAT14(bVar20 & (byte)((ulong)_UNK_03cabbf8 >> 0x20)
                                                       ,fVar37)))) >> 0x20);
  fVar29 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  fVar4 = (float)CONCAT13(bVar8 & (byte)((ulong)_DAT_03cab9a0 >> 0x18),
                          CONCAT12(bVar7 & (byte)((ulong)_DAT_03cab9a0 >> 0x10),
                                   CONCAT11(bVar6 & (byte)((ulong)_DAT_03cab9a0 >> 8),
                                            bVar3 & (byte)_DAT_03cab9a0)));
  fVar15 = (float)CONCAT13(bVar19 & (byte)((ulong)_UNK_03cab9a8 >> 0x18),
                           CONCAT12(bVar18 & (byte)((ulong)_UNK_03cab9a8 >> 0x10),
                                    CONCAT11(bVar17 & (byte)((ulong)_UNK_03cab9a8 >> 8),
                                             bVar14 & (byte)_UNK_03cab9a8)));
  fVar27 = (float)*(undefined8 *)(param_1 + 0x68);
  fVar10 = (float)(CONCAT17(bVar13 & (byte)((ulong)_DAT_03cab9a0 >> 0x38),
                            CONCAT16(bVar12 & (byte)((ulong)_DAT_03cab9a0 >> 0x30),
                                     CONCAT15(bVar11 & (byte)((ulong)_DAT_03cab9a0 >> 0x28),
                                              CONCAT14(bVar9 & (byte)((ulong)_DAT_03cab9a0 >> 0x20),
                                                       fVar4)))) >> 0x20);
  fVar21 = (float)(CONCAT17(bVar24 & (byte)((ulong)_UNK_03cab9a8 >> 0x38),
                            CONCAT16(bVar23 & (byte)((ulong)_UNK_03cab9a8 >> 0x30),
                                     CONCAT15(bVar22 & (byte)((ulong)_UNK_03cab9a8 >> 0x28),
                                              CONCAT14(bVar20 & (byte)((ulong)_UNK_03cab9a8 >> 0x20)
                                                       ,fVar15)))) >> 0x20);
  fVar30 = (float)*(undefined8 *)(param_1 + 0x78);
  fVar41 = (float)*(undefined8 *)(param_1 + 0x88);
  *(ulong *)(param_1 + 0x68) =
       CONCAT44(fVar34 * fVar25 + fVar38 * fVar26 + fVar21 * fVar27,
                fVar33 * fVar25 + fVar37 * fVar26 + fVar15 * fVar27);
  *(ulong *)(param_1 + 0x60) =
       CONCAT44(fVar32 * fVar25 + fVar36 * fVar26 + fVar10 * fVar27,
                fVar31 * fVar25 + fVar35 * fVar26 + fVar4 * fVar27);
  *(ulong *)(param_1 + 0x78) =
       CONCAT44(fVar34 * fVar28 + fVar38 * fVar29 + fVar21 * fVar30,
                fVar33 * fVar28 + fVar37 * fVar29 + fVar15 * fVar30);
  *(ulong *)(param_1 + 0x70) =
       CONCAT44(fVar32 * fVar28 + fVar36 * fVar29 + fVar10 * fVar30,
                fVar31 * fVar28 + fVar35 * fVar29 + fVar4 * fVar30);
  *(ulong *)(param_1 + 0x88) =
       CONCAT44(fVar34 * fVar39 + fVar38 * fVar40 + fVar21 * fVar41,
                fVar33 * fVar39 + fVar37 * fVar40 + fVar15 * fVar41);
  *(ulong *)(param_1 + 0x80) =
       CONCAT44(fVar32 * fVar39 + fVar36 * fVar40 + fVar10 * fVar41,
                fVar31 * fVar39 + fVar35 * fVar40 + fVar4 * fVar41);
  *(undefined8 *)(param_1 + 0xf8) = param_3[1];
  *(undefined8 *)(param_1 + 0xf0) = *param_3;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(ulong *)(param_1 + 0x148) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x128) >> 0x20) *
                (float)((ulong)*(undefined8 *)(param_1 + 0xf8) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x128) * (float)*(undefined8 *)(param_1 + 0xf8));
  *(ulong *)(param_1 + 0x140) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x120) >> 0x20) *
                (float)((ulong)*(undefined8 *)(param_1 + 0xf0) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x120) * (float)*(undefined8 *)(param_1 + 0xf0));
  return;
}


