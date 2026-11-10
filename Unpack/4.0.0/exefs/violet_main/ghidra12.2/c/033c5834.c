/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c5834; name: FUN_033c5834
 */


undefined8 FUN_033c5834(long param_1,uint param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  char cVar10;
  undefined8 *puVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
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
  float fVar35;
  undefined8 uVar34;
  float fVar36;
  float fVar37;
  float fVar39;
  undefined8 uVar38;
  float fVar40;
  float fVar42;
  undefined8 uVar41;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar52;
  undefined8 uVar51;
  float fVar53;
  float fVar55;
  undefined8 uVar54;
  float fVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  
  if (*(uint *)(param_1 + 0x28) < 4) {
    *(undefined **)(param_1 + 0x20) = (&PTR_DAT_047b8cb8)[(int)*(uint *)(param_1 + 0x28)];
  }
  if (*(uint *)(param_1 + 0x68) < 4) {
    *(undefined **)(param_1 + 0x60) = (&PTR_DAT_047b8cb8)[(int)*(uint *)(param_1 + 0x68)];
  }
  if ((*(long *)(param_1 + 0x20) == 0) || (*(long *)(param_1 + 0x60) == 0)) {
    uVar14 = 0;
  }
  else {
    uVar5 = param_2;
    if (*(char *)(param_1 + 0x14) != '\0') {
      uVar5 = param_2 << 2;
    }
    uVar21 = (ulong)uVar5;
    lVar16 = param_4 + uVar21 * 4;
    lVar19 = lVar16 + uVar21 * 4;
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(float *)(param_1 + 0xb8) == 0.0) {
        bVar12 = *(float *)(param_1 + 0xb4) != 0.0;
      }
      else {
        bVar12 = true;
      }
    }
    else {
      bVar12 = false;
    }
    fVar26 = *(float *)(param_1 + 0x4c);
    bVar13 = *(float *)(param_1 + 0x50) == fVar26;
    pcVar6 = FUN_033c6248;
    if (bVar13 && fVar26 == 50.0) {
      pcVar6 = FUN_033c5f28;
    }
    pcVar7 = FUN_033c6410;
    if (bVar13 && fVar26 == 50.0) {
      pcVar7 = FUN_033c6074;
    }
    if (!bVar12) {
      pcVar7 = pcVar6;
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      if (*(float *)(param_1 + 0xb8) == 0.0) {
        bVar12 = *(float *)(param_1 + 0xb4) != 0.0;
      }
      else {
        bVar12 = true;
      }
    }
    else {
      bVar12 = false;
    }
    fVar26 = *(float *)(param_1 + 0x8c);
    bVar13 = *(float *)(param_1 + 0x90) == fVar26;
    pcVar6 = FUN_033c6248;
    if (bVar13 && fVar26 == 50.0) {
      pcVar6 = FUN_033c5f28;
    }
    pcVar8 = FUN_033c6410;
    if (bVar13 && fVar26 == 50.0) {
      pcVar8 = FUN_033c6074;
    }
    if (!bVar12) {
      pcVar8 = pcVar6;
    }
    (*pcVar8)(*(undefined4 *)(param_1 + 0x390),param_1,uVar21,(int *)(param_1 + 0x58),param_4,0,
              lVar19);
    (*pcVar7)(*(undefined4 *)(param_1 + 0x390),param_1,uVar21,(int *)(param_1 + 0x18),lVar16,param_4
              ,lVar19);
    fVar30 = *(float *)(param_1 + 0x3c);
    fVar28 = fVar30 + *(float *)(param_1 + 0x44);
    fVar46 = *(float *)(param_1 + 0x7c);
    fVar29 = fVar46 + *(float *)(param_1 + 0x84);
    fVar56 = fVar29 + fVar46;
    fVar43 = fVar28 + fVar30;
    fVar26 = fVar30 * 4.0;
    fVar27 = fVar46 * 4.0;
    cVar10 = *(char *)(param_1 + 0x14);
    lVar9 = param_3;
    if (cVar10 != '\0') {
      lVar9 = lVar19;
    }
    fVar36 = fVar43 + fVar30;
    fVar49 = fVar56 + fVar46;
    if (*(char *)(param_1 + 0x15) == '\0') {
      if (uVar5 != 0) {
        fVar46 = fVar49 + fVar46;
        fVar30 = fVar36 + fVar30;
        uVar17 = 0;
        do {
          lVar19 = uVar17 * 4;
          lVar20 = (ulong)((int)uVar17 + 4) * 4;
          fVar31 = fVar28 + fVar26;
          fVar32 = fVar43 + fVar26;
          fVar33 = fVar36 + fVar26;
          fVar35 = fVar30 + fVar26;
          uVar41 = ((undefined8 *)(lVar16 + lVar19))[1];
          uVar38 = *(undefined8 *)(lVar16 + lVar19);
          uVar15 = (int)uVar17 + 8;
          uVar17 = (ulong)uVar15;
          uVar45 = ((undefined8 *)(lVar16 + lVar20))[1];
          uVar44 = *(undefined8 *)(lVar16 + lVar20);
          uVar48 = ((undefined8 *)(param_4 + lVar20))[1];
          uVar47 = *(undefined8 *)(param_4 + lVar20);
          fVar37 = fVar29 + fVar27;
          fVar39 = fVar56 + fVar27;
          fVar40 = fVar49 + fVar27;
          fVar42 = fVar46 + fVar27;
          fVar22 = fVar29 * fVar28;
          fVar23 = fVar56 * fVar43;
          fVar24 = fVar49 * fVar36;
          fVar25 = fVar46 * fVar30;
          uVar34 = ((undefined8 *)(param_4 + lVar19))[1];
          uVar14 = *(undefined8 *)(param_4 + lVar19);
          fVar28 = fVar31 + fVar26;
          fVar43 = fVar32 + fVar26;
          fVar36 = fVar33 + fVar26;
          fVar30 = fVar35 + fVar26;
          fVar29 = fVar37 + fVar27;
          fVar56 = fVar39 + fVar27;
          fVar49 = fVar40 + fVar27;
          fVar46 = fVar42 + fVar27;
          ((undefined8 *)(lVar9 + lVar19))[1] =
               CONCAT44(fVar25 * (float)((ulong)uVar41 >> 0x20) * (float)((ulong)uVar34 >> 0x20),
                        fVar24 * (float)uVar41 * (float)uVar34);
          *(undefined8 *)(lVar9 + lVar19) =
               CONCAT44(fVar23 * (float)((ulong)uVar38 >> 0x20) * (float)((ulong)uVar14 >> 0x20),
                        fVar22 * (float)uVar38 * (float)uVar14);
          ((undefined8 *)(lVar9 + lVar20))[1] =
               CONCAT44(fVar42 * fVar35 *
                        (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar48 >> 0x20),
                        fVar40 * fVar33 * (float)uVar45 * (float)uVar48);
          *(undefined8 *)(lVar9 + lVar20) =
               CONCAT44(fVar39 * fVar32 *
                        (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar47 >> 0x20),
                        fVar37 * fVar31 * (float)uVar44 * (float)uVar47);
        } while (uVar15 < uVar5);
      }
    }
    else if (uVar5 != 0) {
      fVar46 = fVar49 + fVar46;
      fVar30 = fVar36 + fVar30;
      uVar17 = 0;
      do {
        lVar19 = uVar17 * 4;
        lVar20 = (ulong)((int)uVar17 + 4) * 4;
        fVar50 = fVar28 + fVar26;
        fVar52 = fVar43 + fVar26;
        fVar53 = fVar36 + fVar26;
        fVar55 = fVar30 + fVar26;
        uVar34 = ((undefined8 *)(lVar16 + lVar19))[1];
        uVar14 = *(undefined8 *)(lVar16 + lVar19);
        uVar15 = (int)uVar17 + 8;
        uVar17 = (ulong)uVar15;
        uVar45 = ((undefined8 *)(lVar16 + lVar20))[1];
        uVar44 = *(undefined8 *)(lVar16 + lVar20);
        uVar41 = ((undefined8 *)(param_4 + lVar19))[1];
        uVar38 = *(undefined8 *)(param_4 + lVar19);
        uVar48 = ((undefined8 *)(param_4 + lVar20))[1];
        uVar47 = *(undefined8 *)(param_4 + lVar20);
        fVar31 = fVar29 + fVar27;
        fVar32 = fVar56 + fVar27;
        fVar33 = fVar49 + fVar27;
        fVar35 = fVar46 + fVar27;
        fVar37 = (float)uVar14 * fVar28;
        fVar39 = (float)((ulong)uVar14 >> 0x20) * fVar43;
        fVar40 = (float)uVar34 * fVar36;
        fVar42 = (float)((ulong)uVar34 >> 0x20) * fVar30;
        fVar22 = fVar29 * (float)uVar38;
        fVar23 = fVar56 * (float)((ulong)uVar38 >> 0x20);
        fVar24 = fVar49 * (float)uVar41;
        fVar25 = fVar46 * (float)((ulong)uVar41 >> 0x20);
        fVar29 = fVar31 + fVar27;
        fVar56 = fVar32 + fVar27;
        fVar49 = fVar33 + fVar27;
        fVar46 = fVar35 + fVar27;
        fVar28 = fVar50 + fVar26;
        fVar43 = fVar52 + fVar26;
        fVar36 = fVar53 + fVar26;
        fVar30 = fVar55 + fVar26;
        ((undefined8 *)(lVar9 + lVar19))[1] = CONCAT44(fVar42 + fVar25,fVar40 + fVar24);
        *(undefined8 *)(lVar9 + lVar19) = CONCAT44(fVar39 + fVar23,fVar37 + fVar22);
        ((undefined8 *)(lVar9 + lVar20))[1] =
             CONCAT44((float)((ulong)uVar45 >> 0x20) * fVar55 +
                      fVar35 * (float)((ulong)uVar48 >> 0x20),
                      (float)uVar45 * fVar53 + fVar33 * (float)uVar48);
        *(undefined8 *)(lVar9 + lVar20) =
             CONCAT44((float)((ulong)uVar44 >> 0x20) * fVar52 +
                      fVar32 * (float)((ulong)uVar47 >> 0x20),
                      (float)uVar44 * fVar50 + fVar31 * (float)uVar47);
      } while (uVar15 < uVar5);
    }
    if (cVar10 != '\0') {
      uVar4 = uVar5 & 3;
      uVar15 = uVar5;
      if ((uVar5 & 3) != 0) {
        memset((void *)(lVar9 + uVar21 * 4),0,(ulong)((4 - uVar4) * 4));
        uVar15 = (4 - uVar4) + uVar5;
      }
      fVar26 = *(float *)(param_1 + 0xc0);
      fVar27 = *(float *)(param_1 + 0xc4);
      fVar28 = *(float *)(param_1 + 200);
      fVar43 = *(float *)(param_1 + 0xcc);
      if (uVar15 != 0) {
        uVar34 = *(undefined8 *)(param_1 + 0xd8);
        uVar14 = *(undefined8 *)(param_1 + 0xd0);
        uVar41 = *(undefined8 *)(param_1 + 0xe8);
        uVar38 = *(undefined8 *)(param_1 + 0xe0);
        uVar45 = *(undefined8 *)(param_1 + 0xf8);
        uVar44 = *(undefined8 *)(param_1 + 0xf0);
        uVar48 = *(undefined8 *)(param_1 + 0x108);
        uVar47 = *(undefined8 *)(param_1 + 0x100);
        uVar54 = *(undefined8 *)(param_1 + 0x118);
        uVar51 = *(undefined8 *)(param_1 + 0x110);
        uVar58 = *(undefined8 *)(param_1 + 0x128);
        uVar57 = *(undefined8 *)(param_1 + 0x120);
        uVar60 = *(undefined8 *)(param_1 + 0x138);
        uVar59 = *(undefined8 *)(param_1 + 0x130);
        uVar62 = *(undefined8 *)(param_1 + 0x148);
        uVar61 = *(undefined8 *)(param_1 + 0x140);
        uVar17 = 0;
        fVar30 = fVar26;
        fVar29 = fVar27;
        do {
          uVar2 = (int)uVar17 + 4;
          puVar11 = (undefined8 *)(lVar9 + uVar17 * 4);
          uVar64 = puVar11[1];
          uVar63 = *puVar11;
          fVar23 = (float)uVar63;
          fVar24 = (float)((ulong)uVar63 >> 0x20);
          fVar27 = (float)uVar64;
          fVar26 = (float)((ulong)uVar64 >> 0x20);
          fVar56 = (float)uVar59 * fVar28;
          fVar36 = (float)((ulong)uVar59 >> 0x20) * fVar28;
          fVar46 = (float)uVar61 * fVar43;
          fVar49 = (float)((ulong)uVar61 >> 0x20) * fVar43;
          fVar22 = (float)((ulong)uVar62 >> 0x20) * fVar43;
          fVar43 = fVar27 * (float)uVar34 + (float)uVar54 * fVar30 + (float)uVar58 * fVar29 +
                   (float)uVar41 * fVar27 + (float)uVar45 * fVar24 + (float)uVar48 * fVar23 +
                   (float)uVar60 * fVar28 + (float)uVar62 * fVar43;
          fVar28 = fVar26 * (float)((ulong)uVar34 >> 0x20) + (float)((ulong)uVar54 >> 0x20) * fVar30
                   + (float)((ulong)uVar58 >> 0x20) * fVar29 +
                   (float)((ulong)uVar41 >> 0x20) * fVar27 + (float)((ulong)uVar45 >> 0x20) * fVar24
                   + (float)((ulong)uVar48 >> 0x20) * fVar23 +
                   (float)((ulong)uVar60 >> 0x20) * fVar28 + fVar22;
          puVar11 = (undefined8 *)(lVar9 + uVar17 * 4);
          puVar11[1] = CONCAT44(fVar28,fVar43);
          *puVar11 = CONCAT44(fVar24 * (float)((ulong)uVar14 >> 0x20) +
                              (float)((ulong)uVar51 >> 0x20) * fVar30 +
                              (float)((ulong)uVar57 >> 0x20) * fVar29 +
                              (float)((ulong)uVar38 >> 0x20) * fVar27 +
                              (float)((ulong)uVar44 >> 0x20) * fVar24 +
                              (float)((ulong)uVar47 >> 0x20) * fVar23 + fVar36 + fVar49,
                              fVar23 * (float)uVar14 + (float)uVar51 * fVar30 +
                              (float)uVar57 * fVar29 + (float)uVar38 * fVar27 +
                              (float)uVar44 * fVar24 + (float)uVar47 * fVar23 + fVar56 + fVar46);
          uVar17 = (ulong)uVar2;
          fVar30 = fVar26;
          fVar29 = fVar27;
        } while (uVar2 < uVar15);
      }
      *(ulong *)(param_1 + 0xc0) = CONCAT44(fVar27,fVar26);
      *(ulong *)(param_1 + 200) = CONCAT44(fVar43,fVar28);
      uVar15 = uVar5;
      if (uVar4 != 0) {
        memset((void *)(lVar9 + uVar21 * 4),0,(ulong)((4 - uVar4) * 4));
        uVar15 = (4 - uVar4) + uVar5;
      }
      fVar26 = *(float *)(param_1 + 0x150);
      fVar27 = *(float *)(param_1 + 0x154);
      fVar28 = *(float *)(param_1 + 0x158);
      fVar43 = *(float *)(param_1 + 0x15c);
      if (uVar15 != 0) {
        uVar34 = *(undefined8 *)(param_1 + 0x168);
        uVar14 = *(undefined8 *)(param_1 + 0x160);
        uVar41 = *(undefined8 *)(param_1 + 0x178);
        uVar38 = *(undefined8 *)(param_1 + 0x170);
        uVar45 = *(undefined8 *)(param_1 + 0x188);
        uVar44 = *(undefined8 *)(param_1 + 0x180);
        uVar48 = *(undefined8 *)(param_1 + 0x198);
        uVar47 = *(undefined8 *)(param_1 + 400);
        uVar54 = *(undefined8 *)(param_1 + 0x1a8);
        uVar51 = *(undefined8 *)(param_1 + 0x1a0);
        uVar58 = *(undefined8 *)(param_1 + 0x1b8);
        uVar57 = *(undefined8 *)(param_1 + 0x1b0);
        uVar60 = *(undefined8 *)(param_1 + 0x1c8);
        uVar59 = *(undefined8 *)(param_1 + 0x1c0);
        uVar62 = *(undefined8 *)(param_1 + 0x1d8);
        uVar61 = *(undefined8 *)(param_1 + 0x1d0);
        uVar17 = 0;
        fVar30 = fVar26;
        fVar29 = fVar27;
        do {
          uVar2 = (int)uVar17 + 4;
          puVar11 = (undefined8 *)(lVar9 + uVar17 * 4);
          uVar64 = puVar11[1];
          uVar63 = *puVar11;
          fVar23 = (float)uVar63;
          fVar24 = (float)((ulong)uVar63 >> 0x20);
          fVar27 = (float)uVar64;
          fVar26 = (float)((ulong)uVar64 >> 0x20);
          fVar56 = (float)uVar59 * fVar28;
          fVar36 = (float)((ulong)uVar59 >> 0x20) * fVar28;
          fVar46 = (float)uVar61 * fVar43;
          fVar49 = (float)((ulong)uVar61 >> 0x20) * fVar43;
          fVar22 = (float)((ulong)uVar62 >> 0x20) * fVar43;
          fVar43 = fVar27 * (float)uVar34 + (float)uVar54 * fVar30 + (float)uVar58 * fVar29 +
                   (float)uVar41 * fVar27 + (float)uVar45 * fVar24 + (float)uVar48 * fVar23 +
                   (float)uVar60 * fVar28 + (float)uVar62 * fVar43;
          fVar28 = fVar26 * (float)((ulong)uVar34 >> 0x20) + (float)((ulong)uVar54 >> 0x20) * fVar30
                   + (float)((ulong)uVar58 >> 0x20) * fVar29 +
                   (float)((ulong)uVar41 >> 0x20) * fVar27 + (float)((ulong)uVar45 >> 0x20) * fVar24
                   + (float)((ulong)uVar48 >> 0x20) * fVar23 +
                   (float)((ulong)uVar60 >> 0x20) * fVar28 + fVar22;
          puVar11 = (undefined8 *)(lVar9 + uVar17 * 4);
          puVar11[1] = CONCAT44(fVar28,fVar43);
          *puVar11 = CONCAT44(fVar24 * (float)((ulong)uVar14 >> 0x20) +
                              (float)((ulong)uVar51 >> 0x20) * fVar30 +
                              (float)((ulong)uVar57 >> 0x20) * fVar29 +
                              (float)((ulong)uVar38 >> 0x20) * fVar27 +
                              (float)((ulong)uVar44 >> 0x20) * fVar24 +
                              (float)((ulong)uVar47 >> 0x20) * fVar23 + fVar36 + fVar49,
                              fVar23 * (float)uVar14 + (float)uVar51 * fVar30 +
                              (float)uVar57 * fVar29 + (float)uVar38 * fVar27 +
                              (float)uVar44 * fVar24 + (float)uVar47 * fVar23 + fVar56 + fVar46);
          uVar17 = (ulong)uVar2;
          fVar30 = fVar26;
          fVar29 = fVar27;
        } while (uVar2 < uVar15);
      }
      *(ulong *)(param_1 + 0x150) = CONCAT44(fVar27,fVar26);
      *(ulong *)(param_1 + 0x158) = CONCAT44(fVar43,fVar28);
      uVar15 = uVar5;
      if (uVar4 != 0) {
        memset((void *)(lVar9 + uVar21 * 4),0,(ulong)((4 - uVar4) * 4));
        uVar15 = (4 - uVar4) + uVar5;
      }
      fVar26 = *(float *)(param_1 + 0x1e0);
      fVar27 = *(float *)(param_1 + 0x1e4);
      fVar28 = *(float *)(param_1 + 0x1e8);
      fVar43 = *(float *)(param_1 + 0x1ec);
      if (uVar15 != 0) {
        uVar34 = *(undefined8 *)(param_1 + 0x1f8);
        uVar14 = *(undefined8 *)(param_1 + 0x1f0);
        uVar41 = *(undefined8 *)(param_1 + 0x208);
        uVar38 = *(undefined8 *)(param_1 + 0x200);
        uVar45 = *(undefined8 *)(param_1 + 0x218);
        uVar44 = *(undefined8 *)(param_1 + 0x210);
        uVar48 = *(undefined8 *)(param_1 + 0x228);
        uVar47 = *(undefined8 *)(param_1 + 0x220);
        uVar54 = *(undefined8 *)(param_1 + 0x238);
        uVar51 = *(undefined8 *)(param_1 + 0x230);
        uVar58 = *(undefined8 *)(param_1 + 0x248);
        uVar57 = *(undefined8 *)(param_1 + 0x240);
        uVar60 = *(undefined8 *)(param_1 + 600);
        uVar59 = *(undefined8 *)(param_1 + 0x250);
        uVar62 = *(undefined8 *)(param_1 + 0x268);
        uVar61 = *(undefined8 *)(param_1 + 0x260);
        uVar21 = 0;
        fVar30 = fVar26;
        fVar29 = fVar27;
        do {
          uVar4 = (int)uVar21 + 4;
          puVar11 = (undefined8 *)(lVar9 + uVar21 * 4);
          uVar64 = puVar11[1];
          uVar63 = *puVar11;
          fVar23 = (float)uVar63;
          fVar24 = (float)((ulong)uVar63 >> 0x20);
          fVar27 = (float)uVar64;
          fVar26 = (float)((ulong)uVar64 >> 0x20);
          fVar56 = (float)uVar59 * fVar28;
          fVar36 = (float)((ulong)uVar59 >> 0x20) * fVar28;
          fVar46 = (float)uVar61 * fVar43;
          fVar49 = (float)((ulong)uVar61 >> 0x20) * fVar43;
          fVar22 = (float)((ulong)uVar62 >> 0x20) * fVar43;
          fVar43 = fVar27 * (float)uVar34 + (float)uVar54 * fVar30 + (float)uVar58 * fVar29 +
                   (float)uVar41 * fVar27 + (float)uVar45 * fVar24 + (float)uVar48 * fVar23 +
                   (float)uVar60 * fVar28 + (float)uVar62 * fVar43;
          fVar28 = fVar26 * (float)((ulong)uVar34 >> 0x20) + (float)((ulong)uVar54 >> 0x20) * fVar30
                   + (float)((ulong)uVar58 >> 0x20) * fVar29 +
                   (float)((ulong)uVar41 >> 0x20) * fVar27 + (float)((ulong)uVar45 >> 0x20) * fVar24
                   + (float)((ulong)uVar48 >> 0x20) * fVar23 +
                   (float)((ulong)uVar60 >> 0x20) * fVar28 + fVar22;
          puVar11 = (undefined8 *)(lVar9 + uVar21 * 4);
          puVar11[1] = CONCAT44(fVar28,fVar43);
          *puVar11 = CONCAT44(fVar24 * (float)((ulong)uVar14 >> 0x20) +
                              (float)((ulong)uVar51 >> 0x20) * fVar30 +
                              (float)((ulong)uVar57 >> 0x20) * fVar29 +
                              (float)((ulong)uVar38 >> 0x20) * fVar27 +
                              (float)((ulong)uVar44 >> 0x20) * fVar24 +
                              (float)((ulong)uVar47 >> 0x20) * fVar23 + fVar36 + fVar49,
                              fVar23 * (float)uVar14 + (float)uVar51 * fVar30 +
                              (float)uVar57 * fVar29 + (float)uVar38 * fVar27 +
                              (float)uVar44 * fVar24 + (float)uVar47 * fVar23 + fVar56 + fVar46);
          uVar21 = (ulong)uVar4;
          fVar30 = fVar26;
          fVar29 = fVar27;
        } while (uVar4 < uVar15);
      }
      *(ulong *)(param_1 + 0x1e0) = CONCAT44(fVar27,fVar26);
      *(ulong *)(param_1 + 0x1e8) = CONCAT44(fVar43,fVar28);
      if (uVar5 != 0) {
        lVar16 = 0;
        puVar18 = (undefined4 *)(lVar9 + 0x2c);
        do {
          puVar3 = (undefined4 *)(param_3 + lVar16);
          lVar16 = lVar16 + 0x10;
          *puVar3 = puVar18[-8];
          puVar3[1] = puVar18[-4];
          puVar3[2] = *puVar18;
          puVar1 = puVar18 + 4;
          puVar18 = puVar18 + 0x10;
          puVar3[3] = *puVar1;
        } while ((uint)lVar16 < uVar5);
      }
    }
    FUN_033c6a10(param_1,param_2,param_3,param_4);
    uVar14 = 1;
  }
  return uVar14;
}


