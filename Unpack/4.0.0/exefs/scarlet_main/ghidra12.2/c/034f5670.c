/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f5670; name: FUN_034f5670
 */


/* WARNING: Removing unreachable block (ram,0x034f584c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_034f5670(float param_1,float param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  ushort uVar6;
  bool bVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
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
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [16];
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  
  uVar10 = (ulong)*(ushort *)(param_3 + 2);
  bVar3 = *(byte *)(param_4 + 1);
  uVar6 = *(ushort *)(param_3 + 2) >> 2;
  if (param_1 == param_2) {
    if ((bVar3 != 0) && (uVar6 != 0)) {
      uVar4 = uVar6 - 1;
      uVar1 = (uVar4 >> 1) + 1;
      uVar2 = uVar1 & 3;
      uVar8 = 0;
      while( true ) {
        puVar11 = (undefined8 *)(*param_3 + uVar8 * 4 * uVar10);
        puVar12 = (undefined8 *)(*param_4 + uVar8 * 4 * (ulong)*(ushort *)(param_4 + 2));
        if (5 < uVar4) {
          iVar13 = -(uVar1 & 0xfffffffc);
          do {
            uVar15 = *puVar11;
            uVar24 = puVar11[3];
            uVar21 = puVar11[2];
            iVar13 = iVar13 + 4;
            puVar12[1] = CONCAT44((float)((ulong)puVar11[1] >> 0x20) * param_1,
                                  (float)puVar11[1] * param_1);
            *puVar12 = CONCAT44((float)((ulong)uVar15 >> 0x20) * param_1,(float)uVar15 * param_1);
            puVar12[3] = CONCAT44((float)((ulong)uVar24 >> 0x20) * param_1,(float)uVar24 * param_1);
            puVar12[2] = CONCAT44((float)((ulong)uVar21 >> 0x20) * param_1,(float)uVar21 * param_1);
            uVar15 = puVar11[4];
            uVar24 = puVar11[7];
            uVar21 = puVar11[6];
            puVar12[5] = CONCAT44((float)((ulong)puVar11[5] >> 0x20) * param_1,
                                  (float)puVar11[5] * param_1);
            puVar12[4] = CONCAT44((float)((ulong)uVar15 >> 0x20) * param_1,(float)uVar15 * param_1);
            puVar12[7] = CONCAT44((float)((ulong)uVar24 >> 0x20) * param_1,(float)uVar24 * param_1);
            puVar12[6] = CONCAT44((float)((ulong)uVar21 >> 0x20) * param_1,(float)uVar21 * param_1);
            uVar15 = puVar11[8];
            uVar24 = puVar11[0xb];
            uVar21 = puVar11[10];
            puVar12[9] = CONCAT44((float)((ulong)puVar11[9] >> 0x20) * param_1,
                                  (float)puVar11[9] * param_1);
            puVar12[8] = CONCAT44((float)((ulong)uVar15 >> 0x20) * param_1,(float)uVar15 * param_1);
            puVar12[0xb] = CONCAT44((float)((ulong)uVar24 >> 0x20) * param_1,(float)uVar24 * param_1
                                   );
            puVar12[10] = CONCAT44((float)((ulong)uVar21 >> 0x20) * param_1,(float)uVar21 * param_1)
            ;
            puVar5 = puVar11 + 0xd;
            uVar15 = puVar11[0xc];
            uVar24 = puVar11[0xf];
            uVar21 = puVar11[0xe];
            puVar11 = puVar11 + 0x10;
            puVar12[0xd] = CONCAT44((float)((ulong)*puVar5 >> 0x20) * param_1,
                                    (float)*puVar5 * param_1);
            puVar12[0xc] = CONCAT44((float)((ulong)uVar15 >> 0x20) * param_1,(float)uVar15 * param_1
                                   );
            puVar12[0xf] = CONCAT44((float)((ulong)uVar24 >> 0x20) * param_1,(float)uVar24 * param_1
                                   );
            puVar12[0xe] = CONCAT44((float)((ulong)uVar21 >> 0x20) * param_1,(float)uVar21 * param_1
                                   );
            puVar12 = puVar12 + 0x10;
          } while (iVar13 != 0);
        }
        if (uVar2 != 0) {
          iVar13 = -uVar2;
          do {
            uVar15 = *puVar11;
            uVar24 = puVar11[3];
            uVar21 = puVar11[2];
            bVar7 = iVar13 != -1;
            iVar13 = iVar13 + 1;
            puVar12[1] = CONCAT44((float)((ulong)puVar11[1] >> 0x20) * param_1,
                                  (float)puVar11[1] * param_1);
            *puVar12 = CONCAT44((float)((ulong)uVar15 >> 0x20) * param_1,(float)uVar15 * param_1);
            puVar12[3] = CONCAT44((float)((ulong)uVar24 >> 0x20) * param_1,(float)uVar24 * param_1);
            puVar12[2] = CONCAT44((float)((ulong)uVar21 >> 0x20) * param_1,(float)uVar21 * param_1);
            puVar11 = puVar11 + 4;
            puVar12 = puVar12 + 4;
          } while (bVar7);
        }
        uVar8 = uVar8 + 1;
        if (uVar8 == bVar3) break;
        uVar10 = (ulong)*(ushort *)(param_3 + 2);
      }
    }
  }
  else if ((bVar3 != 0) && (uVar6 != 0)) {
    fVar19 = (param_2 - param_1) / (float)uVar10;
    fVar25 = param_1 + (float)_DAT_03caaf10 * fVar19;
    fVar26 = param_1 + (float)((ulong)_DAT_03caaf10 >> 0x20) * fVar19;
    fVar27 = param_1 + (float)_UNK_03caaf18 * fVar19;
    param_1 = param_1 + (float)((ulong)_UNK_03caaf18 >> 0x20) * fVar19;
    fVar14 = fVar19 * 8.0;
    fVar16 = fVar19 * 8.0;
    fVar17 = fVar19 * 8.0;
    fVar18 = fVar19 * 8.0;
    auVar38 = NEON_fmov(0x40800000,4);
    fVar20 = fVar25 + auVar38._0_4_ * fVar19;
    fVar22 = fVar26 + auVar38._4_4_ * fVar19;
    fVar23 = fVar27 + auVar38._8_4_ * fVar19;
    fVar19 = param_1 + auVar38._12_4_ * fVar19;
    uVar2 = uVar6 - 1 >> 1;
    uVar1 = uVar2 + 1;
    uVar8 = 0;
    do {
      puVar11 = (undefined8 *)(*param_3 + uVar8 * 4 * uVar10);
      pfVar9 = (float *)(*param_4 + uVar8 * 4 * (ulong)*(ushort *)(param_4 + 2));
      if (uVar2 == 0) {
        fVar29 = fVar20;
        fVar31 = fVar22;
        fVar33 = fVar23;
        fVar35 = fVar19;
        fVar37 = fVar25;
        fVar40 = fVar26;
        fVar42 = fVar27;
        fVar44 = param_1;
LAB_034f581c:
        uVar21 = puVar11[1];
        uVar15 = *puVar11;
        uVar45 = puVar11[3];
        uVar24 = puVar11[2];
        pfVar9[2] = (float)uVar21 * fVar42;
        pfVar9[3] = (float)((ulong)uVar21 >> 0x20) * fVar44;
        *pfVar9 = (float)uVar15 * fVar37;
        pfVar9[1] = (float)((ulong)uVar15 >> 0x20) * fVar40;
        *(ulong *)(pfVar9 + 6) =
             CONCAT44((float)((ulong)uVar45 >> 0x20) * fVar35,(float)uVar45 * fVar33);
        *(ulong *)(pfVar9 + 4) =
             CONCAT44((float)((ulong)uVar24 >> 0x20) * fVar31,(float)uVar24 * fVar29);
      }
      else {
        iVar13 = -(uVar1 & 0xfffffffe);
        fVar29 = fVar20;
        fVar31 = fVar22;
        fVar33 = fVar23;
        fVar35 = fVar19;
        fVar37 = fVar25;
        fVar40 = fVar26;
        fVar42 = fVar27;
        fVar44 = param_1;
        do {
          uVar15 = *puVar11;
          uVar24 = puVar11[3];
          uVar21 = puVar11[2];
          iVar13 = iVar13 + 2;
          fVar36 = fVar37 + fVar14;
          fVar39 = fVar40 + fVar16;
          fVar41 = fVar42 + fVar17;
          fVar43 = fVar44 + fVar18;
          fVar28 = fVar29 + fVar14;
          fVar30 = fVar31 + fVar16;
          fVar32 = fVar33 + fVar17;
          fVar34 = fVar35 + fVar18;
          *(ulong *)(pfVar9 + 2) =
               CONCAT44((float)((ulong)puVar11[1] >> 0x20) * fVar44,(float)puVar11[1] * fVar42);
          *(ulong *)pfVar9 =
               CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar40,(float)uVar15 * fVar37);
          *(ulong *)(pfVar9 + 6) =
               CONCAT44((float)((ulong)uVar24 >> 0x20) * fVar35,(float)uVar24 * fVar33);
          *(ulong *)(pfVar9 + 4) =
               CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar31,(float)uVar21 * fVar29);
          puVar12 = puVar11 + 5;
          uVar15 = puVar11[4];
          uVar24 = puVar11[7];
          uVar21 = puVar11[6];
          puVar11 = puVar11 + 8;
          fVar29 = fVar28 + fVar14;
          fVar31 = fVar30 + fVar16;
          fVar33 = fVar32 + fVar17;
          fVar35 = fVar34 + fVar18;
          fVar37 = fVar36 + fVar14;
          fVar40 = fVar39 + fVar16;
          fVar42 = fVar41 + fVar17;
          fVar44 = fVar43 + fVar18;
          *(ulong *)(pfVar9 + 10) =
               CONCAT44((float)((ulong)*puVar12 >> 0x20) * fVar43,(float)*puVar12 * fVar41);
          *(ulong *)(pfVar9 + 8) =
               CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar39,(float)uVar15 * fVar36);
          *(ulong *)(pfVar9 + 0xe) =
               CONCAT44((float)((ulong)uVar24 >> 0x20) * fVar34,(float)uVar24 * fVar32);
          *(ulong *)(pfVar9 + 0xc) =
               CONCAT44((float)((ulong)uVar21 >> 0x20) * fVar30,(float)uVar21 * fVar28);
          pfVar9 = pfVar9 + 0x10;
        } while (iVar13 != 0);
        if ((uVar1 & 1) != 0) goto LAB_034f581c;
      }
      uVar8 = uVar8 + 1;
      if (uVar8 == bVar3) {
        return;
      }
      uVar10 = (ulong)*(ushort *)(param_3 + 2);
    } while( true );
  }
  return;
}


