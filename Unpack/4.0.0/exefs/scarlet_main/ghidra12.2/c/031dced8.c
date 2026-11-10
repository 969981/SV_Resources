/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031dced8; name: FUN_031dced8
 */


void FUN_031dced8(ulong *param_1)

{
  ulong *puVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  short *psVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  byte bVar14;
  
  uVar4 = (uint)*param_1;
  if ((~uVar4 & 0x208000) != 0) {
    return;
  }
  uVar5 = CONCAT44(uVar4,uVar4) & 0x1fffff001fffff;
  puVar1 = param_1 + 2;
  if ((puVar1[(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)) +
                    POPCOUNT((char)(uVar5 >> 0x10)))] & 1) != 0) {
    return;
  }
  puVar9 = param_1;
  if ((*param_1 & 1) == 0) {
    puVar8 = param_1;
    do {
      puVar8 = (ulong *)puVar8[1];
    } while ((*puVar8 & 1) == 0);
    if ((puVar8[2] & 0x1f) == 8) goto LAB_031dcf7c;
    do {
      puVar9 = (ulong *)puVar9[1];
    } while ((*puVar9 & 1) == 0);
  }
  else if ((*puVar1 & 0x1f) == 8) {
LAB_031dcf7c:
    if ((uVar4 >> 1 & 1) == 0) {
      do {
        puVar9 = (ulong *)puVar9[1];
        if (puVar9 == (ulong *)0x0) {
          return;
        }
      } while (((byte)*puVar9 >> 1 & 1) == 0);
    }
    puVar9 = (ulong *)puVar9[3];
    if (puVar9 == (ulong *)0x0) {
      return;
    }
    FUN_031dced8(puVar9);
    uVar5 = 0;
    do {
      uVar4 = (uint)*puVar9;
      if ((uVar4 >> 0x15 & 1) == 0) {
        uVar11 = 0;
      }
      else {
        uVar4 = uVar4 & 0x1fffff;
        uVar11 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8)) +
                                     POPCOUNT((char)(uVar4 >> 0x10))) + 2];
      }
      uVar5 = uVar11 | uVar5;
    } while (((*puVar9 & 1) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
    if ((uVar5 & 1) == 0) {
      return;
    }
    goto LAB_031dd210;
  }
  if ((puVar9[2] & 0x1f) != 7) {
    return;
  }
  puVar8 = (ulong *)param_1[1];
  puVar9 = param_1;
  if (puVar8 != (ulong *)0x0) {
    FUN_031dced8(puVar8);
    uVar5 = 0;
    do {
      uVar4 = (uint)*puVar8;
      if ((uVar4 >> 0x15 & 1) == 0) {
        uVar11 = 0;
      }
      else {
        uVar4 = uVar4 & 0x1fffff;
        uVar11 = puVar8[(ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8)) +
                                     POPCOUNT((char)(uVar4 >> 0x10))) + 2];
      }
      uVar5 = uVar11 | uVar5;
    } while (((*puVar8 & 1) == 0) && (puVar8 = (ulong *)puVar8[1], puVar8 != (ulong *)0x0));
    if ((uVar5 & 1) != 0) {
LAB_031dd210:
      uVar4 = (uint)*param_1 & 0x1fffff;
      bVar14 = POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8)) +
               POPCOUNT((char)(uVar4 >> 0x10));
      if (((uint)*param_1 >> 0x15 & 1) == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = puVar1[bVar14] | 1;
      }
      puVar1[bVar14] = uVar5;
      return;
    }
  }
  while( true ) {
    uVar4 = (uint)*puVar9;
    puVar8 = param_1;
    if ((uVar4 >> 0xe & 1) != 0) break;
    if (((*puVar9 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
    goto LAB_031dd07c;
  }
  if (((puVar9 != (ulong *)0x0) &&
      (uVar5 = CONCAT44(uVar4,uVar4) & 0x3fff00003fff,
      plVar10 = (long *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8))) +
                               2], plVar10 != (long *)0x0)) && (lVar12 = *plVar10, lVar12 != 0)) {
    plVar13 = plVar10 + 1;
    goto LAB_031dd1ac;
  }
LAB_031dd07c:
  while (uVar4 = (uint)*puVar8, (uVar4 >> 0x17 & 1) == 0) {
    puVar9 = puVar8 + 1;
    puVar8 = (ulong *)*puVar9;
    if ((ulong *)*puVar9 == (ulong *)0x0) {
      return;
    }
  }
  uVar5 = CONCAT44(uVar4,uVar4) & 0x7fffff007fffff;
  psVar6 = (short *)puVar8[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)) +
                                        POPCOUNT((char)(uVar5 >> 0x10))) + 2];
  if (psVar6 == (short *)0x0) {
    return;
  }
  sVar2 = *psVar6;
  sVar3 = psVar6[1];
  if ((long)sVar3 + (long)sVar2 == 0) {
    return;
  }
  plVar10 = (long *)(psVar6 + 4);
  do {
    puVar7 = (undefined8 *)*plVar10;
    uVar4 = (uint)*puVar7;
    if (((uVar4 >> 0x11 & 1) == 0) ||
       (uVar5 = CONCAT44(uVar4,uVar4) & 0x1ffff0001ffff,
       ((uint)puVar7[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)) +
                                  POPCOUNT((char)(uVar5 >> 0x10))) + 2] >> 0x10 & 1) == 0)) {
      puVar9 = (ulong *)puVar7[1];
      FUN_031dced8(puVar9);
      uVar5 = 0;
      do {
        uVar4 = (uint)*puVar9;
        if ((uVar4 >> 0x15 & 1) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = CONCAT44(uVar4,uVar4) & 0x1fffff001fffff;
          uVar11 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                       POPCOUNT((char)(uVar11 >> 0x10))) + 2];
        }
        uVar5 = uVar11 | uVar5;
      } while (((*puVar9 & 1) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
      if ((uVar5 & 1) != 0) goto LAB_031dd210;
    }
    plVar10 = plVar10 + 1;
    if (plVar10 == (long *)(psVar6 + ((long)sVar3 + (long)sVar2) * 4 + 4)) {
      return;
    }
  } while( true );
  while (plVar13 = plVar13 + 2, plVar13 != plVar10 + lVar12 * 2 + 1) {
LAB_031dd1ac:
    FUN_031dced8(*plVar13);
    puVar9 = (ulong *)*plVar13;
    uVar5 = 0;
    do {
      uVar4 = (uint)*puVar9;
      if ((uVar4 >> 0x15 & 1) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = CONCAT44(uVar4,uVar4) & 0x1fffff001fffff;
        uVar11 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                     POPCOUNT((char)(uVar11 >> 0x10))) + 2];
      }
      uVar5 = uVar11 | uVar5;
    } while (((*puVar9 & 1) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
    if ((uVar5 & 1) != 0) goto LAB_031dd210;
  }
  goto LAB_031dd07c;
}


