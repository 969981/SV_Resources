/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ee9378; name: FUN_02ee9378
 */


void FUN_02ee9378(long param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12])

{
  uint *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 (*pauVar5) [12];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined *puVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [12];
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  iVar4 = *(int *)(param_1 + 0x40);
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 0x40;
  puVar18 = PTR_DAT_047d19e0;
  puVar1 = (uint *)0x0;
  if (iVar4 != 0) {
    puVar1 = (uint *)((long)iVar4 + param_1 + 0x40);
  }
  if (param_3 == (undefined1 (*) [12])0x0) {
    uVar16 = *(uint *)(*param_2 + 4);
    uVar17 = *(uint *)(*param_2 + 8);
    uVar19 = *(uint *)(param_2[1] + 8);
    uVar11 = *(uint *)param_2[2];
    uVar14 = *(uint *)(param_2[1] + 8);
    uVar15 = *(uint *)param_2[2];
    uVar12 = *(uint *)(PTR_DAT_047d19e0 + 4);
    uVar13 = *(uint *)(PTR_DAT_047d19e0 + 8);
    *puVar1 = *(uint *)(param_2[1] + 4) ^
              (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)PTR_DAT_047d19e0;
    puVar1[1] = uVar19 ^ (uVar14 ^ uVar16) & uVar12;
    puVar1[2] = uVar11 ^ (uVar15 ^ uVar17) & uVar13;
    uVar12 = *(uint *)(puVar18 + 0x14);
    uVar13 = *(uint *)(puVar18 + 0x18);
    uVar16 = *(uint *)(*param_2 + 4);
    uVar17 = *(uint *)(*param_2 + 8);
    uVar19 = *(uint *)(param_2[1] + 8);
    uVar11 = *(uint *)param_2[2];
    uVar14 = *(uint *)(param_2[1] + 8);
    uVar15 = *(uint *)param_2[2];
    puVar1[3] = *(uint *)(param_2[1] + 4) ^
                (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x10);
    puVar1[4] = uVar19 ^ (uVar14 ^ uVar16) & uVar12;
    puVar1[5] = uVar11 ^ (uVar15 ^ uVar17) & uVar13;
    uVar12 = *(uint *)(puVar18 + 0x24);
    uVar13 = *(uint *)(puVar18 + 0x28);
    uVar16 = *(uint *)(*param_2 + 4);
    uVar17 = *(uint *)(*param_2 + 8);
    uVar19 = *(uint *)(param_2[1] + 8);
    uVar11 = *(uint *)param_2[2];
    uVar14 = *(uint *)(param_2[1] + 8);
    uVar15 = *(uint *)param_2[2];
    puVar1[6] = *(uint *)(param_2[1] + 4) ^
                (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x20);
    puVar1[7] = uVar19 ^ (uVar14 ^ uVar16) & uVar12;
    puVar1[8] = uVar11 ^ (uVar15 ^ uVar17) & uVar13;
    uVar12 = *(uint *)(puVar18 + 0x34);
    uVar13 = *(uint *)(puVar18 + 0x38);
    uVar16 = *(uint *)(*param_2 + 4);
    uVar17 = *(uint *)(*param_2 + 8);
    uVar19 = *(uint *)(param_2[1] + 8);
    uVar11 = *(uint *)param_2[2];
    uVar14 = *(uint *)(param_2[1] + 8);
    uVar15 = *(uint *)param_2[2];
    puVar1[9] = *(uint *)(param_2[1] + 4) ^
                (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x30);
    puVar1[10] = uVar19 ^ (uVar14 ^ uVar16) & uVar12;
    puVar1[0xb] = uVar11 ^ (uVar15 ^ uVar17) & uVar13;
    uVar12 = *(uint *)(puVar18 + 0x44);
    uVar13 = *(uint *)(puVar18 + 0x48);
    uVar16 = *(uint *)(*param_2 + 4);
    uVar17 = *(uint *)(*param_2 + 8);
    uVar19 = *(uint *)(param_2[1] + 8);
    uVar11 = *(uint *)param_2[2];
    uVar14 = *(uint *)(param_2[1] + 8);
    uVar15 = *(uint *)param_2[2];
    puVar1[0xc] = *(uint *)(param_2[1] + 4) ^
                  (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x40);
    puVar1[0xd] = uVar19 ^ (uVar14 ^ uVar16) & uVar12;
    puVar1[0xe] = uVar11 ^ (uVar15 ^ uVar17) & uVar13;
    uVar12 = *(uint *)(puVar18 + 0x54);
    uVar13 = *(uint *)(puVar18 + 0x58);
    uVar16 = *(uint *)(*param_2 + 4);
    uVar17 = *(uint *)(*param_2 + 8);
    uVar19 = *(uint *)(param_2[1] + 8);
    uVar11 = *(uint *)param_2[2];
    uVar14 = *(uint *)(param_2[1] + 8);
    uVar15 = *(uint *)param_2[2];
    puVar1[0xf] = *(uint *)(param_2[1] + 4) ^
                  (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x50);
    puVar1[0x10] = uVar19 ^ (uVar14 ^ uVar16) & uVar12;
    puVar1[0x11] = uVar11 ^ (uVar15 ^ uVar17) & uVar13;
    uVar12 = *(uint *)(puVar18 + 100);
    uVar13 = *(uint *)(puVar18 + 0x68);
    uVar16 = *(uint *)(*param_2 + 4);
    uVar17 = *(uint *)(*param_2 + 8);
    uVar19 = *(uint *)(param_2[1] + 8);
    uVar11 = *(uint *)param_2[2];
    uVar14 = *(uint *)(param_2[1] + 8);
    uVar15 = *(uint *)param_2[2];
    puVar1[0x12] = *(uint *)(param_2[1] + 4) ^
                   (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x60);
    puVar1[0x13] = uVar19 ^ (uVar14 ^ uVar16) & uVar12;
    puVar1[0x14] = uVar11 ^ (uVar15 ^ uVar17) & uVar13;
    auVar22 = *(undefined1 (*) [12])(param_2[1] + 4) ^
              (*(undefined1 (*) [12])(param_2[1] + 4) ^ *param_2) &
              SUB1612(*(undefined1 (*) [16])(puVar18 + 0x70),0);
  }
  else {
    fVar20 = (float)(*(uint *)(param_2[1] + 4) ^
                    (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)PTR_DAT_047d19e0);
    fVar23 = (float)(*(uint *)(param_2[1] + 8) ^
                    (*(uint *)(param_2[1] + 8) ^ *(uint *)(*param_2 + 4)) &
                    *(uint *)(PTR_DAT_047d19e0 + 4));
    fVar24 = (float)(*(uint *)param_2[2] ^
                    (*(uint *)param_2[2] ^ *(uint *)(*param_2 + 8)) &
                    *(uint *)(PTR_DAT_047d19e0 + 8));
    uVar6 = *(undefined8 *)(*param_3 + 8);
    uVar7 = *(undefined8 *)param_3[2];
    uVar10 = *(undefined8 *)(param_3[3] + 4);
    uVar36 = *(undefined8 *)(param_3[4] + 8);
    *(ulong *)puVar1 =
         CONCAT44((float)((ulong)*(undefined8 *)param_3[4] >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar24 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar20 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar23,
                  (float)*(undefined8 *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar24 +
                  (float)*(undefined8 *)*param_3 * fVar20 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar23);
    puVar1[2] = (uint)((float)uVar36 +
                      (float)uVar10 * fVar24 + (float)uVar6 * fVar20 + (float)uVar7 * fVar23);
    fVar20 = (float)(*(uint *)(param_2[1] + 4) ^
                    (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x10));
    fVar23 = (float)(*(uint *)(param_2[1] + 8) ^
                    (*(uint *)(param_2[1] + 8) ^ *(uint *)(*param_2 + 4)) &
                    *(uint *)(puVar18 + 0x14));
    fVar24 = (float)(*(uint *)param_2[2] ^
                    (*(uint *)param_2[2] ^ *(uint *)(*param_2 + 8)) & *(uint *)(puVar18 + 0x18));
    uVar6 = *(undefined8 *)(*param_3 + 8);
    uVar7 = *(undefined8 *)param_3[2];
    uVar10 = *(undefined8 *)(param_3[3] + 4);
    uVar36 = *(undefined8 *)(param_3[4] + 8);
    *(ulong *)(puVar1 + 3) =
         CONCAT44((float)((ulong)*(undefined8 *)param_3[4] >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar24 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar20 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar23,
                  (float)*(undefined8 *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar24 +
                  (float)*(undefined8 *)*param_3 * fVar20 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar23);
    puVar1[5] = (uint)((float)uVar36 +
                      (float)uVar10 * fVar24 + (float)uVar6 * fVar20 + (float)uVar7 * fVar23);
    fVar20 = (float)(*(uint *)(param_2[1] + 4) ^
                    (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x20));
    fVar23 = (float)(*(uint *)(param_2[1] + 8) ^
                    (*(uint *)(param_2[1] + 8) ^ *(uint *)(*param_2 + 4)) &
                    *(uint *)(puVar18 + 0x24));
    fVar24 = (float)(*(uint *)param_2[2] ^
                    (*(uint *)param_2[2] ^ *(uint *)(*param_2 + 8)) & *(uint *)(puVar18 + 0x28));
    uVar6 = *(undefined8 *)(*param_3 + 8);
    uVar7 = *(undefined8 *)param_3[2];
    uVar10 = *(undefined8 *)(param_3[3] + 4);
    uVar36 = *(undefined8 *)(param_3[4] + 8);
    *(ulong *)(puVar1 + 6) =
         CONCAT44((float)((ulong)*(undefined8 *)param_3[4] >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar24 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar20 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar23,
                  (float)*(undefined8 *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar24 +
                  (float)*(undefined8 *)*param_3 * fVar20 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar23);
    puVar1[8] = (uint)((float)uVar36 +
                      (float)uVar10 * fVar24 + (float)uVar6 * fVar20 + (float)uVar7 * fVar23);
    fVar20 = (float)(*(uint *)(param_2[1] + 4) ^
                    (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x30));
    fVar23 = (float)(*(uint *)(param_2[1] + 8) ^
                    (*(uint *)(param_2[1] + 8) ^ *(uint *)(*param_2 + 4)) &
                    *(uint *)(puVar18 + 0x34));
    fVar24 = (float)(*(uint *)param_2[2] ^
                    (*(uint *)param_2[2] ^ *(uint *)(*param_2 + 8)) & *(uint *)(puVar18 + 0x38));
    uVar6 = *(undefined8 *)(*param_3 + 8);
    uVar7 = *(undefined8 *)param_3[2];
    uVar10 = *(undefined8 *)(param_3[3] + 4);
    uVar36 = *(undefined8 *)(param_3[4] + 8);
    *(ulong *)(puVar1 + 9) =
         CONCAT44((float)((ulong)*(undefined8 *)param_3[4] >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar24 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar20 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar23,
                  (float)*(undefined8 *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar24 +
                  (float)*(undefined8 *)*param_3 * fVar20 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar23);
    puVar1[0xb] = (uint)((float)uVar36 +
                        (float)uVar10 * fVar24 + (float)uVar6 * fVar20 + (float)uVar7 * fVar23);
    fVar20 = (float)(*(uint *)(param_2[1] + 4) ^
                    (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x40));
    fVar23 = (float)(*(uint *)(param_2[1] + 8) ^
                    (*(uint *)(param_2[1] + 8) ^ *(uint *)(*param_2 + 4)) &
                    *(uint *)(puVar18 + 0x44));
    fVar24 = (float)(*(uint *)param_2[2] ^
                    (*(uint *)param_2[2] ^ *(uint *)(*param_2 + 8)) & *(uint *)(puVar18 + 0x48));
    uVar6 = *(undefined8 *)(*param_3 + 8);
    uVar7 = *(undefined8 *)param_3[2];
    uVar10 = *(undefined8 *)(param_3[3] + 4);
    uVar36 = *(undefined8 *)(param_3[4] + 8);
    *(ulong *)(puVar1 + 0xc) =
         CONCAT44((float)((ulong)*(undefined8 *)param_3[4] >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar24 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar20 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar23,
                  (float)*(undefined8 *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar24 +
                  (float)*(undefined8 *)*param_3 * fVar20 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar23);
    puVar1[0xe] = (uint)((float)uVar36 +
                        (float)uVar10 * fVar24 + (float)uVar6 * fVar20 + (float)uVar7 * fVar23);
    fVar20 = (float)(*(uint *)(param_2[1] + 4) ^
                    (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x50));
    fVar23 = (float)(*(uint *)(param_2[1] + 8) ^
                    (*(uint *)(param_2[1] + 8) ^ *(uint *)(*param_2 + 4)) &
                    *(uint *)(puVar18 + 0x54));
    fVar24 = (float)(*(uint *)param_2[2] ^
                    (*(uint *)param_2[2] ^ *(uint *)(*param_2 + 8)) & *(uint *)(puVar18 + 0x58));
    uVar6 = *(undefined8 *)(*param_3 + 8);
    uVar7 = *(undefined8 *)param_3[2];
    uVar10 = *(undefined8 *)(param_3[3] + 4);
    uVar36 = *(undefined8 *)(param_3[4] + 8);
    *(ulong *)(puVar1 + 0xf) =
         CONCAT44((float)((ulong)*(undefined8 *)param_3[4] >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar24 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar20 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar23,
                  (float)*(undefined8 *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar24 +
                  (float)*(undefined8 *)*param_3 * fVar20 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar23);
    puVar1[0x11] = (uint)((float)uVar36 +
                         (float)uVar10 * fVar24 + (float)uVar6 * fVar20 + (float)uVar7 * fVar23);
    fVar20 = (float)(*(uint *)(param_2[1] + 4) ^
                    (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x60));
    fVar23 = (float)(*(uint *)(param_2[1] + 8) ^
                    (*(uint *)(param_2[1] + 8) ^ *(uint *)(*param_2 + 4)) & *(uint *)(puVar18 + 100)
                    );
    fVar24 = (float)(*(uint *)param_2[2] ^
                    (*(uint *)param_2[2] ^ *(uint *)(*param_2 + 8)) & *(uint *)(puVar18 + 0x68));
    uVar6 = *(undefined8 *)(*param_3 + 8);
    uVar7 = *(undefined8 *)param_3[2];
    uVar10 = *(undefined8 *)(param_3[3] + 4);
    uVar36 = *(undefined8 *)(param_3[4] + 8);
    *(ulong *)(puVar1 + 0x12) =
         CONCAT44((float)((ulong)*(undefined8 *)param_3[4] >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar24 +
                  (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar20 +
                  (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar23,
                  (float)*(undefined8 *)param_3[4] +
                  (float)*(undefined8 *)(param_3[2] + 8) * fVar24 +
                  (float)*(undefined8 *)*param_3 * fVar20 +
                  (float)*(undefined8 *)(param_3[1] + 4) * fVar23);
    puVar1[0x14] = (uint)((float)uVar36 +
                         (float)uVar10 * fVar24 + (float)uVar6 * fVar20 + (float)uVar7 * fVar23);
    fVar20 = (float)(*(uint *)(param_2[1] + 4) ^
                    (*(uint *)(param_2[1] + 4) ^ *(uint *)*param_2) & *(uint *)(puVar18 + 0x70));
    fVar23 = (float)(*(uint *)(param_2[1] + 8) ^
                    (*(uint *)(param_2[1] + 8) ^ *(uint *)(*param_2 + 4)) &
                    *(uint *)(puVar18 + 0x74));
    fVar24 = (float)(*(uint *)param_2[2] ^
                    (*(uint *)param_2[2] ^ *(uint *)(*param_2 + 8)) & *(uint *)(puVar18 + 0x78));
    auVar22._0_4_ =
         (float)*(undefined8 *)param_3[4] +
         (float)*(undefined8 *)(param_3[2] + 8) * fVar24 +
         (float)*(undefined8 *)*param_3 * fVar20 + (float)*(undefined8 *)(param_3[1] + 4) * fVar23;
    auVar22._4_4_ =
         (float)((ulong)*(undefined8 *)param_3[4] >> 0x20) +
         (float)((ulong)*(undefined8 *)(param_3[2] + 8) >> 0x20) * fVar24 +
         (float)((ulong)*(undefined8 *)*param_3 >> 0x20) * fVar20 +
         (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) * fVar23;
    auVar22._8_4_ =
         (float)*(undefined8 *)(param_3[4] + 8) +
         (float)*(undefined8 *)(param_3[3] + 4) * fVar24 +
         (float)*(undefined8 *)(*param_3 + 8) * fVar20 + (float)*(undefined8 *)param_3[2] * fVar23;
  }
  *(long *)(puVar1 + 0x15) = auVar22._0_8_;
  puVar1[0x17] = auVar22._8_4_;
  if ((*(ushort *)(param_1 + 0x1a) >> 1 & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x48);
    *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 0x80;
    uVar6 = DAT_03cb56b0;
    fVar23 = DAT_03cb5410._4_4_;
    fVar20 = (float)DAT_03cb5410;
    pfVar2 = (float *)0x0;
    if (iVar4 != 0) {
      pfVar2 = (float *)((long)iVar4 + param_1 + 0x48);
    }
    fVar21 = -*(float *)(param_2[1] + 4);
    fVar24 = 0.0;
    pfVar2[2] = 0.0;
    pfVar2[3] = fVar21;
    *pfVar2 = fVar20;
    pfVar2[1] = fVar23;
    *(ulong *)(pfVar2 + 6) = (ulong)*(uint *)*param_2 << 0x20;
    *(undefined8 *)(pfVar2 + 4) = uVar6;
    uVar6 = DAT_03cb5600;
    *(ulong *)(pfVar2 + 10) = (ulong)(uint)-*(float *)(param_2[1] + 8) << 0x20;
    *(undefined8 *)(pfVar2 + 8) = uVar6;
    uVar6 = DAT_03cb5690;
    *(ulong *)(pfVar2 + 0xe) = (ulong)*(uint *)(*param_2 + 4) << 0x20;
    *(undefined8 *)(pfVar2 + 0xc) = uVar6;
    *(ulong *)(pfVar2 + 0x12) = CONCAT44(-*(float *)param_2[2],0x3f800000);
    pfVar2[0x10] = 0.0;
    pfVar2[0x11] = 0.0;
    *(ulong *)(pfVar2 + 0x16) = CONCAT44(*(undefined4 *)(*param_2 + 8),0xbf800000);
    pfVar2[0x14] = 0.0;
    pfVar2[0x15] = 0.0;
    if (param_3 != (undefined1 (*) [12])0x0) {
      uVar6 = *(undefined8 *)(*param_3 + 8);
      uVar27 = (undefined4)((ulong)uVar6 >> 0x20);
      fVar25 = (float)*(undefined8 *)*param_3;
      fVar26 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
      pauVar5 = (undefined1 (*) [12])(param_3[1] + 4);
      uVar7 = *(undefined8 *)param_3[2];
      uVar30 = (undefined4)((ulong)uVar7 >> 0x20);
      fVar28 = (float)*(undefined8 *)*pauVar5;
      fVar29 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
      auVar39._12_4_ = uVar30;
      auVar39._0_12_ = *pauVar5;
      auVar41._12_4_ = uVar30;
      auVar41._0_12_ = *pauVar5;
      auVar39 = NEON_ext(auVar39,auVar41,8,1);
      auVar37._12_4_ = uVar27;
      auVar37._0_12_ = *param_3;
      auVar40._12_4_ = uVar27;
      auVar40._0_12_ = *param_3;
      auVar37 = NEON_ext(auVar37,auVar40,8,1);
      pauVar5 = (undefined1 (*) [12])(param_3[2] + 8);
      uVar10 = *(undefined8 *)(param_3[3] + 4);
      uVar27 = (undefined4)((ulong)uVar10 >> 0x20);
      fVar31 = (float)*(undefined8 *)*pauVar5;
      fVar32 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
      auVar8._12_4_ = uVar27;
      auVar8._0_12_ = *pauVar5;
      auVar9._12_4_ = uVar27;
      auVar9._0_12_ = *pauVar5;
      auVar40 = NEON_ext(auVar8,auVar9,8,1);
      fVar33 = -(float)*(undefined8 *)param_3[4];
      fVar34 = -(float)((ulong)*(undefined8 *)param_3[4] >> 0x20);
      fVar35 = -(float)*(undefined8 *)(param_3[4] + 8);
      uVar19 = 6;
      while( true ) {
        auVar38._0_4_ = (auVar37._0_4_ * fVar35 + fVar25 * fVar33 + fVar26 * fVar34) * fVar20;
        auVar38._4_4_ = (auVar39._0_4_ * fVar35 + fVar28 * fVar33 + fVar29 * fVar34) * fVar23;
        auVar38._8_4_ = (auVar40._0_4_ * fVar35 + fVar31 * fVar33 + fVar32 * fVar34) * fVar24;
        auVar38._12_4_ =
             (auVar40._4_4_ * fVar35 + fVar32 * fVar33 + auVar40._4_4_ * fVar34) * fVar21;
        auVar41 = NEON_ext(auVar38,auVar38,8,1);
        pfVar2[2] = (float)uVar10 * fVar24 + (float)uVar6 * fVar20 + (float)uVar7 * fVar23;
        pfVar2[3] = auVar38._0_4_ + auVar38._4_4_ + auVar41._0_4_ + fVar21;
        *pfVar2 = fVar31 * fVar24 + fVar25 * fVar20 + fVar28 * fVar23;
        pfVar2[1] = fVar32 * fVar24 + fVar26 * fVar20 + fVar29 * fVar23;
        if (uVar19 < 2) break;
        fVar20 = pfVar2[4];
        fVar23 = pfVar2[5];
        fVar24 = pfVar2[6];
        fVar21 = pfVar2[7];
        uVar19 = uVar19 - 1;
        pfVar2 = pfVar2 + 4;
      }
    }
    iVar4 = *(int *)(param_1 + 0x50);
    puVar3 = (undefined8 *)0x0;
    if (iVar4 != 0) {
      puVar3 = (undefined8 *)((long)iVar4 + param_1 + 0x50);
    }
    *puVar3 = 0x8004000480040000;
    puVar3[1] = 0x8004000c80040008;
    puVar3[2] = 0x8004001480040010;
    iVar4 = *(int *)(param_1 + 0x58);
    puVar3 = (undefined8 *)0x0;
    if (iVar4 != 0) {
      puVar3 = (undefined8 *)((long)iVar4 + param_1 + 0x58);
    }
    *puVar3 = 0x307050100040602;
    puVar3[1] = 0x302060705040001;
    puVar3[2] = 0x604050701000203;
  }
  return;
}


