/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03539060; name: FUN_03539060
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 FUN_03539060(int param_1,void *param_2)

{
  short sVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  short *psVar10;
  short sVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar17 = (long)param_1;
  if (*(int *)(&DAT_048d2100 + (long)param_1 * 0x638) != 0) {
    lVar4 = nn::os::GetTlsValue((&DAT_048d2d70)[lVar17]);
    if (lVar4 != 0) {
      return 0;
    }
    puVar5 = (undefined8 *)FUN_03539a30(param_1,0);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    nn::os::SetTlsValue((&DAT_048d2d70)[lVar17],puVar5);
    uVar6 = nn::os::GetTlsValue((&DAT_048d2d70)[lVar17]);
    *puVar5 = uVar6;
    return 0;
  }
  *(int *)(&DAT_048d2100 + (long)param_1 * 0x638) = 1;
  if (param_2 == (void *)0x0) {
    memset(&DAT_048d2108 + lVar17 * 0x638,0,0x48);
  }
  else {
    memcpy(&DAT_048d2108 + lVar17 * 0x638,param_2,0x48);
  }
  lVar4 = lVar17 * 0x638;
  uVar8 = *(ulong *)(&DAT_048d2128 + lVar4);
  puVar12 = (ulong *)(&DAT_048d2150 + lVar4);
  *puVar12 = uVar8;
  *(ulong *)(&DAT_048d2160 + lVar4) = uVar8;
  *(undefined4 *)(&DAT_048d258c + lVar4) = 0;
  if (uVar8 == 0) {
    uVar7 = 0;
    *puVar12 = 0;
LAB_0353916c:
    uVar8 = 0x100;
  }
  else {
    if (*(int *)(&DAT_048d2140 + lVar17 * 0x638) != 0) {
      *(undefined4 *)(&DAT_048d258c + lVar4) = 1;
    }
    uVar7 = (uint)(*(int *)(&DAT_048d2140 + lVar17 * 0x638) != 0);
    if (uVar8 < 0x100) goto LAB_0353916c;
    if (uVar8 < 0x100000001) goto LAB_03539174;
    uVar8 = 0x100000000;
  }
  *puVar12 = uVar8;
LAB_03539174:
  uVar13 = 0;
  *(ulong *)(&DAT_048d2158 + lVar17 * 0x638) = 0;
  do {
    uVar8 = uVar8 >> 1;
    uVar13 = uVar13 + 1;
  } while (uVar8 != 1);
  uVar9 = 1L << (uVar13 & 0x3f);
  *(ulong *)(&DAT_048d2158 + lVar17 * 0x638) = uVar13;
  *puVar12 = uVar9;
  uVar13 = 0x1000;
  puVar12 = &DAT_048d2168 + lVar17 * 199;
  *puVar12 = 0x1000;
  uVar14 = *(ulong *)(&DAT_048d2130 + lVar17 * 0x638);
  uVar8 = 0x10000;
  if (uVar14 != 0) {
    uVar8 = uVar14;
  }
  *(long *)(&DAT_048d2170 + lVar17 * 0x638) = 0xc;
  if (0x3ffff < uVar8) {
    uVar8 = 0x40000;
  }
  if (0x1000 < uVar8) {
    lVar16 = 0xc;
    uVar13 = 0x1000;
    do {
      uVar13 = uVar13 << 1;
      lVar16 = lVar16 + 1;
    } while (uVar13 < uVar8);
    *puVar12 = uVar13;
    *(long *)(&DAT_048d2170 + lVar17 * 0x638) = lVar16;
  }
  lVar16 = lVar17 * 0x638;
  uVar14 = *(ulong *)(&DAT_048d2138 + lVar16);
  *(ulong *)(&DAT_048d2178 + lVar16) = -uVar13;
  uVar8 = 0x10;
  if (uVar14 != 0) {
    uVar8 = uVar14;
  }
  if ((uVar8 * uVar13 < uVar9) && (uVar8 = 0, uVar13 != 0)) {
    uVar8 = uVar9 / uVar13;
  }
  *(ulong *)(&DAT_048d2180 + lVar16) = uVar8;
  if ((uVar13 <= uVar9) && ((uVar8 * uVar13 & uVar9 - 1) != 0)) {
    uVar8 = 0;
    if (uVar13 != 0) {
      uVar8 = uVar9 / uVar13;
    }
    *(ulong *)(&DAT_048d2180 + lVar16) = uVar8;
  }
  uVar14 = uVar8;
  if (0xf < uVar8) {
    uVar14 = 0x10;
  }
  *(ulong *)(&DAT_048d2188 + lVar17 * 0x638) = uVar14;
  *(ulong *)(&DAT_048d2128 + lVar4) = uVar9;
  *(ulong *)(&DAT_048d2130 + lVar17 * 0x638) = uVar13;
  *(ulong *)(&DAT_048d2138 + lVar16) = uVar8;
  *(uint *)(&DAT_048d2140 + lVar17 * 0x638) = uVar7;
  iVar3 = nn::os::AllocateTlsSlot((TlsSlot *)(&DAT_048d2d70 + lVar17),(_func_void_ulong *)0x0);
  if (iVar3 == 0) {
    if (param_1 == 0) {
      DAT_048d2d78 = _DAT_048d2148;
      DAT_048d2190 = 0x10;
      DAT_048d2194 = (undefined2)((DAT_048d2168 - 0x80) / 0x10);
      DAT_048d2196 = 0;
      uVar8 = DAT_048d2168;
    }
    else {
      (&DAT_048d2190)[lVar17 * 0x18e] = 0x10;
      uVar8 = *puVar12;
      (&DAT_048d2194)[lVar17 * 0x31c] = (short)((int)uVar8 + 0xfff80U >> 4);
      (&DAT_048d2196)[lVar17 * 0x31c] = 0;
    }
    uVar9 = uVar8 - 0x80;
    sVar11 = 1;
    uVar13 = 0x10;
    psVar10 = (short *)(&DAT_048d219e + lVar17 * 0x638);
    do {
      sVar1 = 0;
      if (uVar13 != 0) {
        sVar1 = (short)(uVar9 / uVar13);
      }
      *(int *)(psVar10 + -3) = (int)uVar13;
      uVar13 = uVar13 + 0x10;
      *psVar10 = sVar11;
      sVar11 = sVar11 + 1;
      psVar10[-1] = sVar1;
      psVar10 = psVar10 + 4;
    } while (uVar13 != 0x410);
    uVar13 = 0x7e00;
    if (uVar9 < 0xfc02) {
      uVar13 = uVar9 >> 1;
    }
    *(ulong *)(&DAT_048d2580 + lVar17 * 0x638) = uVar13;
    if (0x5ff < uVar13) {
      uVar13 = 0x600;
      lVar4 = 0x200;
      lVar16 = 0;
      lVar15 = 1;
      do {
        puVar5 = (undefined8 *)(&DAT_048d2190 + lVar17 * 0x18e + (lVar16 + 0x41) * 2);
        *(int *)puVar5 = (int)uVar13;
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = (uint)((uVar8 - 0x80) / uVar13);
        }
        *(short *)((long)puVar5 + 4) = (short)uVar7;
        *(short *)((long)puVar5 + 6) = (short)(lVar16 + 0x41);
        if ((uint)*(ushort *)(&DAT_048d2190 + lVar17 * 0x18e + lVar16 * 2 + 0x81) ==
            (uVar7 & 0xffff)) {
          lVar16 = lVar4;
          do {
            lVar2 = lVar16 + lVar17 * 0x638;
            *(undefined8 *)(&DAT_048d2100 + lVar2 + 0x90) = *puVar5;
            if (lVar16 == 0) break;
            lVar16 = lVar16 + -8;
          } while (*(short *)(&DAT_048d2100 + lVar2 + 0x8c) == *(short *)((long)puVar5 + 4));
        }
        if (lVar15 == 0x3d) break;
        uVar13 = (lVar15 + 1) * 0x200 + 0x400;
        if (*(ulong *)(&DAT_048d2580 + lVar17 * 0x638) < uVar13) break;
        uVar8 = *puVar12;
        lVar4 = lVar4 + 8;
        lVar16 = lVar15;
        lVar15 = lVar15 + 1;
      } while( true );
    }
    lVar17 = lVar17 * 0x638;
    memset(&DAT_048d25a8 + lVar17,0,0x178);
    uVar6 = 0;
    *(undefined8 *)(&DAT_048d2728 + lVar17) = 0;
    *(undefined8 *)(&DAT_048d2730 + lVar17) = 0;
    *(undefined4 *)(&DAT_048d2720 + lVar17) = 0;
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}


