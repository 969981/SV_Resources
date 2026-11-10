/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00155940; name: FUN_00155940
 */


long FUN_00155940(double param_1,undefined8 *param_2,int *param_3,undefined1 *param_4,int *param_5,
                 uint param_6)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  ulong uVar12;
  undefined *puVar13;
  uint uVar14;
  ulong uVar15;
  char *pcVar16;
  char *__s;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulong local_68;
  
  dVar17 = param_1;
  if ((long)param_1 < 0) {
    dVar17 = -param_1;
  }
  uVar8 = (uint)((ulong)param_1 >> 0x34) & 0x7ff;
  if (uVar8 == 0) {
    if (ABS(param_1) == 0.0) {
      iVar4 = 1;
      *param_5 = 1;
      *param_2 = param_4;
      *param_4 = 0x30;
      goto LAB_00155f8c;
    }
    if (((ulong)param_1 >> 0x33 & 1) == 0) {
      uVar8 = 0;
      uVar6 = 0x8000000000000;
      do {
        uVar6 = (long)uVar6 >> 1;
        uVar8 = uVar8 - 1;
      } while ((uVar6 & (ulong)param_1) == 0);
      goto LAB_001559dc;
    }
    iVar4 = -0x3ff;
LAB_00155a20:
    iVar4 = iVar4 * 0x269;
    iVar2 = iVar4 + 0x7ff;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    iVar2 = iVar2 >> 0xb;
  }
  else {
    if (uVar8 == 0x7ff) {
      puVar13 = &DAT_03c9c83d;
      if (((ulong)param_1 & 0xfffffffffffff) != 0) {
        puVar13 = &DAT_03c5a91d;
      }
      *param_2 = puVar13;
      *param_5 = 0x7000;
      iVar4 = 3;
LAB_00155f8c:
      *param_3 = iVar4;
      return (long)param_1 >> 0x3f;
    }
LAB_001559dc:
    iVar4 = uVar8 - 0x3ff;
    if (iVar4 < 0) goto LAB_00155a20;
    iVar4 = iVar4 * 0x4d1;
    iVar2 = iVar4 + 0xfff;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    iVar2 = (iVar2 >> 0xc) + 1;
  }
  uVar8 = (uint)(0x12 - (long)iVar2);
  if (uVar8 < 0x17) {
    dVar18 = *(double *)(&DAT_03cb6858 + (0x12 - (long)iVar2) * 8);
    dVar10 = (double)((ulong)dVar17 & 0xfffffffff8000000);
    dVar19 = dVar17 - dVar10;
    dVar17 = dVar17 * dVar18;
    dVar11 = (double)((ulong)dVar18 & 0xfffffffff8000000);
    dVar10 = dVar19 * (dVar18 - dVar11) +
             dVar19 * dVar11 + (dVar10 * dVar11 - dVar17) + (dVar18 - dVar11) * dVar10;
  }
  else {
    uVar3 = iVar2 - 0x12U;
    if (iVar2 - 0x12U == 0 || iVar2 < 0x12) {
      uVar3 = uVar8;
    }
    uVar8 = (int)(uVar3 * 0x2c9) >> 0xe;
    if (0xc < (int)uVar8) {
      uVar8 = 0xd;
    }
    uVar3 = uVar3 + uVar8 * -0x17;
    if (iVar2 < 0x13) {
      if (uVar3 == 0) {
        dVar10 = 0.0;
      }
      else {
        uVar14 = uVar3;
        if (0x15 < (int)uVar3) {
          uVar14 = 0x16;
        }
        dVar18 = *(double *)(&DAT_03cb6858 + (long)(int)uVar14 * 8);
        dVar10 = (double)((ulong)dVar17 & 0xfffffffff8000000);
        dVar11 = (double)((ulong)dVar18 & 0xfffffffff8000000);
        dVar19 = dVar17 * dVar18;
        dVar10 = (dVar17 - dVar10) * (dVar18 - dVar11) +
                 (dVar17 - dVar10) * dVar11 +
                 (dVar10 * dVar11 - dVar19) + (dVar18 - dVar11) * dVar10;
        dVar17 = dVar19;
        if (uVar3 - uVar14 != 0) {
          dVar20 = dVar19 + dVar10;
          dVar18 = *(double *)(&DAT_03cb6858 + (long)(int)(uVar3 - uVar14) * 8);
          dVar17 = (double)((ulong)dVar20 & 0xfffffffff8000000);
          dVar11 = (double)((ulong)dVar18 & 0xfffffffff8000000);
          dVar10 = (dVar10 - (dVar20 - dVar19)) * dVar18 +
                   (dVar20 - dVar17) * (dVar18 - dVar11) +
                   (dVar20 - dVar17) * dVar11 +
                   (dVar17 * dVar11 - dVar20 * dVar18) + (dVar18 - dVar11) * dVar17;
          dVar17 = dVar20 * dVar18;
        }
      }
      if (uVar8 == 0) goto LAB_00155cf0;
      dVar18 = dVar17 + dVar10;
      uVar6 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3;
      dVar19 = *(double *)((long)&DAT_03cb6b38 + uVar6);
      dVar11 = (double)((ulong)dVar18 & 0xfffffffff8000000);
      dVar10 = dVar10 - (dVar18 - dVar17);
      dVar17 = dVar18 * dVar19;
      dVar20 = dVar18 - dVar11;
      puVar13 = &UNK_03cb6ba8;
    }
    else {
      if (uVar3 == 0) {
        dVar10 = 0.0;
      }
      else {
        uVar6 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
        dVar19 = *(double *)((long)&DAT_03cb6908 + uVar6);
        dVar11 = (double)((ulong)dVar17 & 0xfffffffff8000000);
        dVar20 = dVar17 - dVar11;
        dVar18 = (double)((ulong)dVar19 & 0xfffffffff8000000);
        dVar10 = dVar17 * *(double *)(&UNK_03cb69b8 + uVar6);
        dVar17 = dVar17 * dVar19;
        dVar10 = dVar10 + dVar20 * (dVar19 - dVar18) +
                          dVar20 * dVar18 + (dVar11 * dVar18 - dVar17) + (dVar19 - dVar18) * dVar11;
      }
      if (uVar8 == 0) goto LAB_00155cf0;
      dVar18 = dVar17 + dVar10;
      uVar6 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3;
      dVar19 = *(double *)(&UNK_03cb6a68 + uVar6);
      dVar11 = (double)((ulong)dVar18 & 0xfffffffff8000000);
      dVar10 = dVar10 - (dVar18 - dVar17);
      dVar17 = dVar18 * dVar19;
      dVar20 = dVar18 - dVar11;
      puVar13 = &UNK_03cb6ad8;
    }
    dVar21 = (double)((ulong)dVar19 & 0xfffffffff8000000);
    dVar10 = dVar10 * dVar19 + dVar18 * *(double *)(puVar13 + (uVar6 - 8)) +
             dVar20 * (dVar19 - dVar21) +
             dVar20 * dVar21 + (dVar11 * dVar21 - dVar17) + (dVar19 - dVar21) * dVar11;
  }
LAB_00155cf0:
  dVar18 = dVar17 + dVar10;
  dVar19 = (double)(long)dVar18;
  dVar11 = dVar18 - dVar19;
  uVar6 = (long)((dVar10 - (dVar18 - dVar17)) +
                dVar11 + ((dVar18 - (dVar11 - (dVar11 - dVar18))) - ((dVar11 - dVar18) + dVar19))) +
          (long)dVar18;
  if (999999999999999999 < uVar6) {
    iVar2 = iVar2 + 1;
  }
  uVar8 = iVar2 + param_6;
  if ((int)param_6 < 0) {
    uVar8 = (param_6 & 0x7ffffff) + 1;
  }
  if (uVar8 < 0x18) {
    uVar3 = 10;
    if (uVar6 < 1000000000) {
      uVar3 = 1;
    }
    uVar15 = (ulong)uVar3;
    do {
      if (uVar6 < *(ulong *)(&DAT_03cb67b8 + uVar15 * 8)) {
        if ((uVar8 < (uint)uVar15) && (uVar8 = (uint)uVar15 - uVar8, uVar8 < 0x18)) {
          uVar5 = *(ulong *)(&DAT_03cb67b8 + (long)(int)uVar8 * 8);
          uVar12 = uVar6 + (uVar5 >> 1);
          uVar6 = 0;
          if (uVar5 != 0) {
            uVar6 = uVar12 / uVar5;
          }
          if (*(ulong *)(&DAT_03cb67b8 + uVar15 * 8) <= uVar12) {
            iVar2 = iVar2 + 1;
          }
        }
        break;
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 != 0x14);
  }
  uVar15 = uVar6;
  if (uVar6 != 0) {
    if (0xffffffff < (long)uVar6) {
      do {
        uVar6 = uVar15 / 1000;
        if (uVar15 % 1000 != 0) goto LAB_00155e74;
        uVar12 = uVar15 >> 0x23;
        uVar15 = uVar6;
      } while (0x7c < uVar12);
    }
    uVar8 = (uint)((int)uVar6 * 0x26e978d5) >> 3 | (int)uVar6 * -0x60000000;
    while (uVar8 < 0x418938) {
      uVar15 = uVar6 & 0xffffffff;
      uVar6 = uVar15 / 1000;
      iVar4 = (int)(uVar15 / 1000);
      uVar8 = (uint)(iVar4 * 0x26e978d5) >> 3 | iVar4 * -0x60000000;
    }
    uVar15 = uVar6 & 0xffffffff;
  }
LAB_00155e74:
  iVar4 = 0;
  __s = param_4 + 0x40;
  param_4 = param_4 + 0x38;
  if (99999999 < (long)uVar15) goto LAB_00155ed0;
  do {
    local_68 = 0;
    iVar9 = (int)uVar15;
    uVar6 = uVar15;
    pcVar1 = __s;
    uVar15 = local_68;
    while( true ) {
      pcVar16 = pcVar1;
      if (iVar9 != 0) {
        do {
          uVar12 = (uVar6 & 0xffffffff) / 100;
          uVar8 = (uint)uVar6;
          iVar4 = iVar4 + 2;
          pcVar16 = pcVar16 + -2;
          *(undefined2 *)pcVar16 =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (ulong)(uVar8 + (int)uVar12 * -100) * 2);
          uVar6 = uVar12;
        } while (99 < uVar8);
      }
      if (uVar15 == 0) {
        if ((iVar4 != 0) && (*pcVar16 == '0')) {
          pcVar16 = pcVar16 + 1;
          iVar4 = iVar4 + -1;
        }
        *param_5 = iVar2;
        *param_2 = pcVar16;
        goto LAB_00155f8c;
      }
      __s = pcVar1 + -8;
      if (pcVar16 != __s) {
        memset(__s,0x30,(size_t)(pcVar16 + (8 - (long)pcVar1)));
        lVar7 = (long)param_4 - (long)pcVar16;
        do {
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0);
        iVar4 = ((iVar4 + (int)pcVar16) - (int)pcVar1) + 8;
      }
      param_4 = param_4 + -8;
      if (uVar15 < 100000000) break;
LAB_00155ed0:
      uVar6 = uVar15 % 100000000;
      iVar9 = (int)uVar6;
      pcVar1 = __s;
      uVar15 = uVar15 / 100000000;
    }
  } while( true );
}


