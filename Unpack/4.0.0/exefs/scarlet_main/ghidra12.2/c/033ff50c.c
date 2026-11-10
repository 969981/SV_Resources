/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033ff50c; name: FUN_033ff50c
 */


/* WARNING: Removing unreachable block (ram,0x033ff5d4) */

void FUN_033ff50c(long *param_1,long *param_2,float *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
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
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  
  if (*(int *)((long)param_2 + 0xc) != 0x11) {
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    uVar10 = (ulong)*(ushort *)((long)param_2 + 0x12);
    goto LAB_033ff674;
  }
  uVar12 = *(uint *)(param_1 + 3);
  uVar9 = *(uint *)(param_1 + 8);
  if (uVar12 == 0xffffffff) {
LAB_033ff578:
    *(uint *)(param_1 + 3) = uVar9;
    uVar12 = uVar9;
LAB_033ff584:
    *(uint *)((long)param_1 + 0x1c) = uVar9;
  }
  else {
    if (uVar12 == 0) {
      if (*(short *)((long)param_2 + 0x12) == 0) {
        uVar10 = 0;
        goto LAB_033ff674;
      }
      goto LAB_033ff578;
    }
    if (*(short *)((long)param_2 + 0x12) != 0) goto LAB_033ff578;
    if (*(uint *)((long)param_1 + 0x1c) < uVar9) {
      uVar12 = (uVar12 + uVar9) - *(uint *)((long)param_1 + 0x1c);
      *(uint *)(param_1 + 3) = uVar12;
      goto LAB_033ff584;
    }
  }
  uVar9 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((long)param_2 + 0x12);
  iVar2 = 0;
  if (uVar9 <= uVar12) {
    iVar2 = uVar12 - uVar9;
  }
  *(int *)(param_1 + 3) = iVar2;
  uVar5 = *(ushort *)((long)param_2 + 0x12);
  uVar10 = (ulong)uVar5;
  uVar6 = *(ushort *)(param_2 + 2);
  uVar11 = (ulong)uVar6;
  uVar12 = (uint)uVar5;
  if ((uint)uVar6 <= (uint)uVar5) {
    uVar12 = (uint)uVar6;
  }
  uVar19 = (ulong)uVar12;
  if (uVar6 - uVar12 != 0) {
    bVar4 = *(byte *)(param_2 + 1);
    if (bVar4 != 0) {
      uVar10 = (ulong)((uVar6 - uVar12) * 4);
      if (bVar4 == 1) {
        lVar13 = 0;
      }
      else {
        lVar20 = -((ulong)bVar4 & 0xfe);
        lVar15 = 4;
        do {
          lVar13 = lVar15;
          memset((void *)(*param_2 + (lVar13 + -4) * uVar11 + uVar19 * 4),0,uVar10);
          memset((void *)(*param_2 + lVar13 * (ulong)*(ushort *)(param_2 + 2) + uVar19 * 4),0,uVar10
                );
          uVar11 = (ulong)*(ushort *)(param_2 + 2);
          lVar20 = lVar20 + 2;
          lVar15 = lVar13 + 8;
        } while (lVar20 != 0);
        lVar13 = lVar13 + 4;
        if ((bVar4 & 1) == 0) goto LAB_033ff660;
      }
      memset((void *)(*param_2 + lVar13 * uVar11 + uVar19 * 4),0,uVar10);
      uVar11 = (ulong)*(ushort *)(param_2 + 2);
    }
LAB_033ff660:
    *(short *)((long)param_2 + 0x12) = (short)uVar11;
    iVar2 = (int)param_1[3];
    uVar10 = uVar11;
  }
  if (iVar2 != 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0x2d;
  }
LAB_033ff674:
  if (*(char *)(param_3 + 3) == '\0') {
    *param_3 = 0.0;
  }
  if ((int)param_1[7] == 0) {
    uVar12 = 0;
  }
  else {
    uVar9 = (uint)uVar10;
    if (uVar9 == 0) {
      uVar12 = *(uint *)((long)param_1 + 0xc);
    }
    else {
      fVar34 = 1.0 / (float)uVar10;
      auVar30 = NEON_fmov(0x3f800000,4);
      uVar10 = 0;
      do {
        uVar14 = 0;
        fVar55 = *(float *)((long)param_1 + 0x24);
        fVar36 = *(float *)(param_1 + 5);
        fVar41 = (param_3[2] - fVar36) * fVar34;
        fVar43 = fVar41 + fVar36;
        fVar45 = fVar43 + fVar41;
        fVar35 = fVar41 * 4.0;
        fVar41 = fVar45 + fVar41;
        fVar46 = *(float *)(param_1 + 4);
        puVar16 = (undefined8 *)(*param_2 + uVar10 * *(ushort *)(param_2 + 2) * 4);
        uVar3 = *(uint *)(param_1 + 1);
        uVar12 = *(uint *)((long)param_1 + 0xc);
        fVar44 = (param_3[1] - fVar55) * fVar34;
        fVar42 = (*param_3 - fVar46) * fVar34;
        fVar60 = fVar42 + fVar46;
        fVar61 = fVar60 + fVar42;
        fVar47 = fVar42 * 4.0;
        fVar42 = fVar61 + fVar42;
        fVar48 = fVar44 + fVar55;
        fVar49 = fVar48 + fVar44;
        fVar50 = fVar49 + fVar44;
        fVar44 = fVar44 * 4.0;
        fVar29 = auVar30._0_4_;
        fVar51 = fVar29 - fVar55;
        fVar31 = auVar30._4_4_;
        fVar52 = fVar31 - fVar48;
        fVar32 = auVar30._8_4_;
        fVar53 = fVar32 - fVar49;
        fVar33 = auVar30._12_4_;
        fVar54 = fVar33 - fVar50;
        fVar62 = fVar55;
        fVar63 = fVar48;
        fVar64 = fVar49;
        fVar65 = fVar50;
        fVar66 = fVar46;
        fVar67 = fVar60;
        fVar68 = fVar61;
        fVar69 = fVar42;
        fVar37 = fVar36;
        fVar38 = fVar43;
        fVar39 = fVar45;
        fVar40 = fVar41;
        do {
          uVar8 = uVar3 - uVar12;
          if (uVar9 - uVar14 <= uVar8) {
            uVar8 = uVar9 - uVar14;
          }
          uVar7 = uVar8 >> 2;
          if (uVar7 == 0) {
LAB_033ff864:
            fVar21 = fVar55;
            fVar22 = fVar48;
            fVar23 = fVar49;
            fVar24 = fVar50;
            fVar25 = fVar46;
            fVar26 = fVar60;
            fVar27 = fVar61;
            fVar28 = fVar42;
          }
          else {
            puVar1 = (undefined8 *)(*(long *)(*param_1 + uVar10 * 8) + (ulong)uVar12 * 4);
            if ((uVar8 >> 2 & 1) == 0) {
              puVar17 = puVar1;
              uVar18 = uVar7;
            }
            else {
              fVar22 = (float)*puVar1;
              fVar56 = fVar22 * fVar55;
              fVar24 = (float)((ulong)*puVar1 >> 0x20);
              fVar57 = fVar24 * fVar48;
              fVar26 = (float)puVar1[1];
              fVar58 = fVar26 * fVar49;
              fVar28 = (float)((ulong)puVar1[1] >> 0x20);
              fVar59 = fVar28 * fVar50;
              fVar70 = (float)*puVar16;
              fVar21 = fVar70 * fVar51;
              fVar71 = (float)((ulong)*puVar16 >> 0x20);
              fVar23 = fVar71 * fVar52;
              fVar72 = (float)puVar16[1];
              fVar25 = fVar72 * fVar53;
              fVar73 = (float)((ulong)puVar16[1] >> 0x20);
              fVar27 = fVar73 * fVar54;
              fVar22 = fVar46 * fVar22;
              fVar24 = fVar60 * fVar24;
              fVar26 = fVar61 * fVar26;
              fVar28 = fVar42 * fVar28;
              fVar55 = fVar62 + fVar44;
              fVar48 = fVar63 + fVar44;
              fVar49 = fVar64 + fVar44;
              fVar50 = fVar65 + fVar44;
              uVar18 = uVar7 - 1;
              fVar36 = fVar36 + fVar35;
              fVar43 = fVar43 + fVar35;
              fVar45 = fVar45 + fVar35;
              fVar41 = fVar41 + fVar35;
              fVar46 = fVar66 + fVar47;
              fVar60 = fVar67 + fVar47;
              fVar61 = fVar68 + fVar47;
              fVar42 = fVar69 + fVar47;
              fVar51 = fVar29 - fVar55;
              fVar52 = fVar31 - fVar48;
              fVar53 = fVar32 - fVar49;
              fVar54 = fVar33 - fVar50;
              puVar16[1] = CONCAT44((fVar59 + fVar27) * fVar40,(fVar58 + fVar25) * fVar39);
              *puVar16 = CONCAT44((fVar57 + fVar23) * fVar38,(fVar56 + fVar21) * fVar37);
              puVar17 = puVar1 + 2;
              puVar1[1] = CONCAT44(fVar73 + fVar28,fVar72 + fVar26);
              *puVar1 = CONCAT44(fVar71 + fVar24,fVar70 + fVar22);
              puVar16 = puVar16 + 2;
              fVar62 = fVar55;
              fVar63 = fVar48;
              fVar64 = fVar49;
              fVar65 = fVar50;
              fVar66 = fVar46;
              fVar67 = fVar60;
              fVar68 = fVar61;
              fVar69 = fVar42;
              fVar37 = fVar36;
              fVar38 = fVar43;
              fVar39 = fVar45;
              fVar40 = fVar41;
            }
            fVar21 = fVar62;
            fVar22 = fVar63;
            fVar23 = fVar64;
            fVar24 = fVar65;
            fVar25 = fVar66;
            fVar26 = fVar67;
            fVar27 = fVar68;
            fVar28 = fVar69;
            fVar56 = fVar37;
            fVar57 = fVar38;
            fVar37 = fVar36;
            fVar38 = fVar43;
            fVar58 = fVar39;
            fVar59 = fVar40;
            fVar39 = fVar45;
            fVar40 = fVar41;
            if (uVar7 != 1) {
              do {
                fVar21 = (float)*puVar17;
                fVar22 = (float)((ulong)*puVar17 >> 0x20);
                fVar23 = (float)puVar17[1];
                fVar24 = (float)((ulong)puVar17[1] >> 0x20);
                fVar25 = (float)*puVar16;
                fVar26 = (float)((ulong)*puVar16 >> 0x20);
                fVar27 = (float)puVar16[1];
                fVar28 = (float)((ulong)puVar16[1] >> 0x20);
                fVar62 = fVar62 + fVar44;
                fVar63 = fVar63 + fVar44;
                fVar64 = fVar64 + fVar44;
                fVar65 = fVar65 + fVar44;
                uVar18 = uVar18 - 2;
                puVar16[1] = CONCAT44((fVar24 * fVar50 + fVar28 * fVar54) * fVar59,
                                      (fVar23 * fVar49 + fVar27 * fVar53) * fVar58);
                *puVar16 = CONCAT44((fVar22 * fVar48 + fVar26 * fVar52) * fVar57,
                                    (fVar21 * fVar55 + fVar25 * fVar51) * fVar56);
                fVar37 = (float)puVar17[2];
                fVar38 = (float)((ulong)puVar17[2] >> 0x20);
                fVar39 = (float)puVar17[3];
                fVar40 = (float)((ulong)puVar17[3] >> 0x20);
                puVar17[1] = CONCAT44(fVar28 + fVar42 * fVar24,fVar27 + fVar61 * fVar23);
                *puVar17 = CONCAT44(fVar26 + fVar60 * fVar22,fVar25 + fVar46 * fVar21);
                fVar21 = (float)puVar16[2];
                fVar22 = (float)((ulong)puVar16[2] >> 0x20);
                fVar23 = (float)puVar16[3];
                fVar24 = (float)((ulong)puVar16[3] >> 0x20);
                fVar55 = fVar62 + fVar44;
                fVar48 = fVar63 + fVar44;
                fVar49 = fVar64 + fVar44;
                fVar50 = fVar65 + fVar44;
                fVar46 = fVar66 + fVar47 + fVar47;
                fVar60 = fVar67 + fVar47 + fVar47;
                fVar61 = fVar68 + fVar47 + fVar47;
                fVar42 = fVar69 + fVar47 + fVar47;
                fVar51 = fVar29 - fVar55;
                fVar52 = fVar31 - fVar48;
                fVar53 = fVar32 - fVar49;
                fVar54 = fVar33 - fVar50;
                puVar16[3] = CONCAT44((fVar40 * fVar65 + fVar24 * (fVar33 - fVar65)) *
                                      (fVar41 + fVar35),
                                      (fVar39 * fVar64 + fVar23 * (fVar32 - fVar64)) *
                                      (fVar45 + fVar35));
                puVar16[2] = CONCAT44((fVar38 * fVar63 + fVar22 * (fVar31 - fVar63)) *
                                      (fVar43 + fVar35),
                                      (fVar37 * fVar62 + fVar21 * (fVar29 - fVar62)) *
                                      (fVar36 + fVar35));
                fVar36 = fVar36 + fVar35 + fVar35;
                fVar43 = fVar43 + fVar35 + fVar35;
                fVar45 = fVar45 + fVar35 + fVar35;
                fVar41 = fVar41 + fVar35 + fVar35;
                puVar16 = puVar16 + 4;
                puVar17[3] = CONCAT44(fVar24 + (fVar69 + fVar47) * fVar40,
                                      fVar23 + (fVar68 + fVar47) * fVar39);
                puVar17[2] = CONCAT44(fVar22 + (fVar67 + fVar47) * fVar38,
                                      fVar21 + (fVar66 + fVar47) * fVar37);
                puVar17 = puVar17 + 4;
                fVar62 = fVar55;
                fVar63 = fVar48;
                fVar64 = fVar49;
                fVar65 = fVar50;
                fVar66 = fVar46;
                fVar67 = fVar60;
                fVar68 = fVar61;
                fVar69 = fVar42;
                fVar56 = fVar36;
                fVar57 = fVar43;
                fVar58 = fVar45;
                fVar59 = fVar41;
              } while (uVar18 != 0);
              fVar37 = fVar36;
              fVar38 = fVar43;
              fVar39 = fVar45;
              fVar40 = fVar41;
              goto LAB_033ff864;
            }
          }
          fVar42 = fVar28;
          fVar61 = fVar27;
          fVar60 = fVar26;
          fVar46 = fVar25;
          fVar50 = fVar24;
          fVar49 = fVar23;
          fVar48 = fVar22;
          fVar55 = fVar21;
          uVar7 = uVar8 + uVar12;
          uVar14 = uVar8 + uVar14;
          uVar12 = 0;
          if (uVar7 != uVar3) {
            uVar12 = uVar7;
          }
        } while (uVar14 < uVar9);
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 7));
    }
  }
  *(uint *)((long)param_1 + 0xc) = uVar12;
  lVar20 = *(long *)param_3;
  lVar15 = *(long *)(param_3 + 4);
  param_1[5] = *(long *)(param_3 + 2);
  param_1[6] = lVar15;
  param_1[4] = lVar20;
  return;
}


