/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00395c60; name: FUN_00395c60
 */


void FUN_00395c60(byte *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte *__dest;
  long lVar5;
  long *plVar6;
  size_t __n;
  size_t *psVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar8 = param_3 * 0x10;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar3 = 0;
  if (param_3 != 0) {
    if (lVar8 - 0x10U < 0x80) {
      lVar3 = 0;
      lVar4 = param_2;
    }
    else {
      uVar1 = (lVar8 - 0x10U >> 4) + 1;
      lVar3 = 0;
      lVar9 = 0;
      uVar2 = 8;
      if ((uVar1 & 7) != 0) {
        uVar2 = uVar1 & 7;
      }
      lVar5 = uVar1 - uVar2;
      lVar11 = 0;
      lVar10 = 0;
      lVar13 = 0;
      lVar12 = 0;
      lVar15 = 0;
      lVar14 = 0;
      lVar4 = param_2 + lVar5 * 0x10;
      plVar6 = (long *)(param_2 + 0x48);
      do {
        lVar5 = lVar5 + -8;
        lVar3 = plVar6[-8] + lVar3;
        lVar9 = plVar6[-6] + lVar9;
        lVar10 = plVar6[-4] + lVar10;
        lVar11 = plVar6[-2] + lVar11;
        lVar12 = *plVar6 + lVar12;
        lVar13 = plVar6[2] + lVar13;
        lVar14 = plVar6[4] + lVar14;
        lVar15 = plVar6[6] + lVar15;
        plVar6 = plVar6 + 0x10;
      } while (lVar5 != 0);
      lVar3 = lVar14 + lVar12 + lVar10 + lVar3 + lVar15 + lVar13 + lVar11 + lVar9;
    }
    do {
      plVar6 = (long *)(lVar4 + 8);
      lVar4 = lVar4 + 0x10;
      lVar3 = *plVar6 + lVar3;
    } while (param_2 + param_3 * 0x10 != lVar4);
  }
                    /* try { // try from 00395d38 to 00395d3f has its CatchHandler @ 00395d98 */
  FUN_002a2528(param_1,lVar3);
  if (param_3 != 0) {
    __dest = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      __dest = param_1 + 1;
    }
    psVar7 = (size_t *)(param_2 + 8);
    do {
      __n = *psVar7;
      if (__n != 0) {
        memcpy(__dest,(void *)psVar7[-1],__n);
        __dest = __dest + __n;
      }
      lVar8 = lVar8 + -0x10;
      psVar7 = psVar7 + 2;
    } while (lVar8 != 0);
  }
  return;
}


