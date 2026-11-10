/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001b9f40; name: FUN_001b9f40
 */


void FUN_001b9f40(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  
  lVar2 = 0;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 5U >> 3;
    *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 5U >> 3;
  } while (lVar2 != 0x400);
  lVar2 = 0;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 0x404) = *(int *)(lVar3 + 0x404) + 5U >> 3;
    *(uint *)(lVar3 + 0x408) = *(int *)(lVar3 + 0x408) + 5U >> 3;
  } while (lVar2 != 0x400);
  lVar2 = 0;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 0x804) = *(int *)(lVar3 + 0x804) + 5U >> 3;
    *(uint *)(lVar3 + 0x808) = *(int *)(lVar3 + 0x808) + 5U >> 3;
  } while (lVar2 != 0x400);
  lVar2 = 0;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 0xc04) = *(int *)(lVar3 + 0xc04) + 5U >> 3;
    *(uint *)(lVar3 + 0xc08) = *(int *)(lVar3 + 0xc08) + 5U >> 3;
  } while (lVar2 != 0x400);
  lVar2 = -0x400;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 0x1404) = *(int *)(lVar3 + 0x1404) + 5U >> 3;
    *(uint *)(lVar3 + 0x1408) = *(int *)(lVar3 + 0x1408) + 5U >> 3;
  } while (lVar2 != 0);
  lVar2 = -0x400;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 0x1804) = *(int *)(lVar3 + 0x1804) + 5U >> 3;
    *(uint *)(lVar3 + 0x1808) = *(int *)(lVar3 + 0x1808) + 5U >> 3;
  } while (lVar2 != 0);
  lVar2 = -0x400;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 0x1c04) = *(int *)(lVar3 + 0x1c04) + 5U >> 3;
    *(uint *)(lVar3 + 0x1c08) = *(int *)(lVar3 + 0x1c08) + 5U >> 3;
  } while (lVar2 != 0);
  lVar2 = -0x400;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    iVar1 = *(int *)(&DAT_00002008 + lVar3);
    *(uint *)(lVar3 + 0x2004) = *(int *)(lVar3 + 0x2004) + 5U >> 3;
    *(uint *)(&DAT_00002008 + lVar3) = iVar1 + 5U >> 3;
  } while (lVar2 != 0);
  lVar2 = -0x400;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 0x2404) = *(int *)(lVar3 + 0x2404) + 5U >> 3;
    *(uint *)(lVar3 + 0x2408) = *(int *)(lVar3 + 0x2408) + 5U >> 3;
  } while (lVar2 != 0);
  lVar2 = -0x400;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 0x2804) = *(int *)(lVar3 + 0x2804) + 5U >> 3;
    *(uint *)(lVar3 + 0x2808) = *(int *)(lVar3 + 0x2808) + 5U >> 3;
  } while (lVar2 != 0);
  lVar2 = -0x400;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 0x2c04) = *(int *)(lVar3 + 0x2c04) + 5U >> 3;
    *(uint *)(lVar3 + 0x2c08) = *(int *)(lVar3 + 0x2c08) + 5U >> 3;
  } while (lVar2 != 0);
  lVar2 = -0x400;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    iVar1 = *(int *)(&DAT_00003008 + lVar3);
    *(uint *)(lVar3 + 0x3004) = *(int *)(lVar3 + 0x3004) + 5U >> 3;
    *(uint *)(&DAT_00003008 + lVar3) = iVar1 + 5U >> 3;
  } while (lVar2 != 0);
  lVar2 = -0x400;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 0x3404) = *(int *)(lVar3 + 0x3404) + 5U >> 3;
    *(uint *)(lVar3 + 0x3408) = *(int *)(lVar3 + 0x3408) + 5U >> 3;
  } while (lVar2 != 0);
  lVar2 = -0x400;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    *(uint *)(lVar3 + 0x3804) = *(int *)(lVar3 + 0x3804) + 5U >> 3;
    *(uint *)(lVar3 + 0x3808) = *(int *)(lVar3 + 0x3808) + 5U >> 3;
  } while (lVar2 != 0);
  lVar2 = -0x400;
  do {
    lVar3 = param_1 + lVar2;
    lVar2 = lVar2 + 8;
    iVar1 = *(int *)(&DAT_00003c08 + lVar3);
    *(uint *)(lVar3 + 0x3c04) = *(int *)(lVar3 + 0x3c04) + 5U >> 3;
    *(uint *)(&DAT_00003c08 + lVar3) = iVar1 + 5U >> 3;
    lVar3 = 0;
  } while (lVar2 != 0);
  do {
    lVar2 = param_1 + lVar3;
    lVar3 = lVar3 + 8;
    iVar1 = *(int *)(&DAT_00003c08 + lVar2);
    *(uint *)(lVar2 + 0x3c04) = *(int *)(lVar2 + 0x3c04) + 5U >> 3;
    *(uint *)(&DAT_00003c08 + lVar2) = iVar1 + 5U >> 3;
  } while (lVar3 != 0x400);
  puVar4 = (uint *)(param_1 + 0x4008);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x4408);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x4808);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x4c08);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(&DAT_00005008 + param_1);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x5408);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x5808);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x5c08);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x6008);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x6408);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x6808);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x6c08);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x7008);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x7408);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x7808);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x7c08);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x8008);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x8408);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x8808);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x8c08);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x9008);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x9408);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x9808);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0x9c08);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0xcc10);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  if (1 < *(int *)(param_1 + 0xcc08)) {
    puVar4 = (uint *)(param_1 + 0xd010);
    lVar2 = 0x100;
    do {
      puVar4[-1] = puVar4[-1] + 5 >> 3;
      *puVar4 = *puVar4 + 5 >> 3;
      puVar4 = puVar4 + 2;
      lVar2 = lVar2 + -2;
    } while (lVar2 != 0);
  }
  puVar4 = (uint *)(param_1 + 0xa008);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0xa408);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0xa808);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0xac08);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0xb008);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0xc40c);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  puVar4 = (uint *)(param_1 + 0xc80c);
  lVar2 = 0x100;
  do {
    puVar4[-1] = puVar4[-1] + 5 >> 3;
    *puVar4 = *puVar4 + 5 >> 3;
    puVar4 = puVar4 + 2;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  return;
}


