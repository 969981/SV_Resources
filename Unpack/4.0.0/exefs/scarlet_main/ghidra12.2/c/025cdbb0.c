/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025cdbb0; name: FUN_025cdbb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025cdbb0(ulong param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar13;
  byte bVar17;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  ulong uVar18;
  float fVar22;
  float fVar23;
  float fVar24;
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
  
  uVar13 = DAT_03cab620;
  *(undefined8 *)(param_2 + 0xa8) = DAT_03cab628;
  *(undefined8 *)(param_2 + 0xa0) = uVar13;
  uVar11 = _UNK_03cabe68;
  uVar10 = _DAT_03cabe60;
  uVar9 = _UNK_03caa5b8;
  uVar13 = _DAT_03caa5b0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xb8) = uVar11;
  *(undefined8 *)(param_2 + 0xb0) = uVar10;
  *(undefined8 *)(param_2 + 200) = uVar9;
  *(undefined8 *)(param_2 + 0xc0) = uVar13;
  uVar13 = *param_3;
  *(undefined8 *)(param_2 + 0xd8) = param_3[1];
  *(undefined8 *)(param_2 + 0xd0) = uVar13;
  memcpy((void *)(param_2 + 0x60),(undefined8 *)(param_2 + 0xa0),0x30);
  fVar31 = (float)param_1;
  uVar18 = param_1 & 0xffffffff;
  bVar12 = (byte)param_1;
  bVar14 = (byte)(param_1 >> 8);
  bVar15 = (byte)(param_1 >> 0x10);
  bVar16 = (byte)(param_1 >> 0x18);
  fVar25 = (float)CONCAT13(bVar16 & (byte)((ulong)_DAT_03cabbf0 >> 0x18),
                           CONCAT12(bVar15 & (byte)((ulong)_DAT_03cabbf0 >> 0x10),
                                    CONCAT11(bVar14 & (byte)((ulong)_DAT_03cabbf0 >> 8),
                                             bVar12 & (byte)_DAT_03cabbf0)));
  uVar1 = (ulong)_DAT_03cabbf0 >> 0x20;
  uVar2 = (ulong)_DAT_03cabbf0 >> 0x28;
  uVar3 = (ulong)_DAT_03cabbf0 >> 0x30;
  uVar4 = (ulong)_DAT_03cabbf0 >> 0x38;
  bVar17 = (byte)uVar18;
  bVar19 = (byte)(uVar18 >> 8);
  bVar20 = (byte)(uVar18 >> 0x10);
  bVar21 = (byte)(uVar18 >> 0x18);
  fVar29 = (float)CONCAT13(bVar21 & (byte)((ulong)_UNK_03cabbf8 >> 0x18),
                           CONCAT12(bVar20 & (byte)((ulong)_UNK_03cabbf8 >> 0x10),
                                    CONCAT11(bVar19 & (byte)((ulong)_UNK_03cabbf8 >> 8),
                                             bVar17 & (byte)_UNK_03cabbf8)));
  fVar22 = (float)CONCAT13(bVar16 & (byte)((ulong)_DAT_03caad60 >> 0x18),
                           CONCAT12(bVar15 & (byte)((ulong)_DAT_03caad60 >> 0x10),
                                    CONCAT11(bVar14 & (byte)((ulong)_DAT_03caad60 >> 8),
                                             bVar12 & (byte)_DAT_03caad60)));
  uVar5 = (ulong)_DAT_03caad60 >> 0x20;
  uVar6 = (ulong)_DAT_03caad60 >> 0x28;
  uVar7 = (ulong)_DAT_03caad60 >> 0x30;
  uVar8 = (ulong)_DAT_03caad60 >> 0x38;
  fVar24 = (float)CONCAT13(bVar21 & (byte)((ulong)_UNK_03caad68 >> 0x18),
                           CONCAT12(bVar20 & (byte)((ulong)_UNK_03caad68 >> 0x10),
                                    CONCAT11(bVar19 & (byte)((ulong)_UNK_03caad68 >> 8),
                                             bVar17 & (byte)_UNK_03caad68)));
  *(ulong *)(param_2 + 0xf8) = uVar18;
  *(ulong *)(param_2 + 0xf0) = CONCAT44(fVar31,fVar31);
  uVar9 = _UNK_03cab9a8;
  uVar13 = _DAT_03cab9a0;
  fVar35 = (float)*(undefined8 *)(param_2 + 0x60);
  fVar23 = (float)(CONCAT17(bVar16 & (byte)uVar8,
                            CONCAT16(bVar15 & (byte)uVar7,
                                     CONCAT15(bVar14 & (byte)uVar6,
                                              CONCAT14(bVar12 & (byte)uVar5,fVar22)))) >> 0x20);
  fVar38 = (float)*(undefined8 *)(param_2 + 0x70);
  fVar32 = (float)*(undefined8 *)(param_2 + 0x80);
  fVar36 = (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
  fVar27 = (float)(CONCAT17(bVar16 & (byte)uVar4,
                            CONCAT16(bVar15 & (byte)uVar3,
                                     CONCAT15(bVar14 & (byte)uVar2,
                                              CONCAT14(bVar12 & (byte)uVar1,fVar25)))) >> 0x20);
  fVar39 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
  fVar33 = (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
  *(undefined4 *)(param_2 + 0x18) = 1;
  *(undefined8 *)(param_2 + 0x98) = 0x7fc000007fc00000;
  *(undefined8 *)(param_2 + 0x90) = 0x7fc000007fc00000;
  fVar26 = (float)CONCAT13(bVar16 & (byte)((ulong)uVar13 >> 0x18),
                           CONCAT12(bVar15 & (byte)((ulong)uVar13 >> 0x10),
                                    CONCAT11(bVar14 & (byte)((ulong)uVar13 >> 8),
                                             bVar12 & (byte)uVar13)));
  fVar30 = (float)CONCAT13(bVar21 & (byte)((ulong)uVar9 >> 0x18),
                           CONCAT12(bVar20 & (byte)((ulong)uVar9 >> 0x10),
                                    CONCAT11(bVar19 & (byte)((ulong)uVar9 >> 8),bVar17 & (byte)uVar9
                                            )));
  fVar37 = (float)*(undefined8 *)(param_2 + 0x68);
  fVar28 = (float)(CONCAT17(bVar16 & (byte)((ulong)uVar13 >> 0x38),
                            CONCAT16(bVar15 & (byte)((ulong)uVar13 >> 0x30),
                                     CONCAT15(bVar14 & (byte)((ulong)uVar13 >> 0x28),
                                              CONCAT14(bVar12 & (byte)((ulong)uVar13 >> 0x20),fVar26
                                                      )))) >> 0x20);
  fVar40 = (float)*(undefined8 *)(param_2 + 0x78);
  fVar34 = (float)*(undefined8 *)(param_2 + 0x88);
  *(ulong *)(param_2 + 0x148) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x128) >> 0x20) * 0.0,
                fVar31 * (float)*(undefined8 *)(param_2 + 0x128));
  *(ulong *)(param_2 + 0x140) =
       CONCAT44(fVar31 * (float)((ulong)*(undefined8 *)(param_2 + 0x120) >> 0x20),
                fVar31 * (float)*(undefined8 *)(param_2 + 0x120));
  *(ulong *)(param_2 + 0x68) =
       CONCAT44(fVar35 * 0.0 + fVar36 * 0.0 + fVar37 * 0.0,
                fVar24 * fVar35 + fVar29 * fVar36 + fVar30 * fVar37);
  *(ulong *)(param_2 + 0x60) =
       CONCAT44(fVar23 * fVar35 + fVar27 * fVar36 + fVar28 * fVar37,
                fVar22 * fVar35 + fVar25 * fVar36 + fVar26 * fVar37);
  *(ulong *)(param_2 + 0x78) =
       CONCAT44(fVar38 * 0.0 + fVar39 * 0.0 + fVar40 * 0.0,
                fVar24 * fVar38 + fVar29 * fVar39 + fVar30 * fVar40);
  *(ulong *)(param_2 + 0x70) =
       CONCAT44(fVar23 * fVar38 + fVar27 * fVar39 + fVar28 * fVar40,
                fVar22 * fVar38 + fVar25 * fVar39 + fVar26 * fVar40);
  *(ulong *)(param_2 + 0x88) =
       CONCAT44(fVar32 * 0.0 + fVar33 * 0.0 + fVar34 * 0.0,
                fVar24 * fVar32 + fVar29 * fVar33 + fVar30 * fVar34);
  *(ulong *)(param_2 + 0x80) =
       CONCAT44(fVar23 * fVar32 + fVar27 * fVar33 + fVar28 * fVar34,
                fVar22 * fVar32 + fVar25 * fVar33 + fVar26 * fVar34);
  return;
}


