/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dbb6c8; name: FUN_00dbb6c8
 */


ulong FUN_00dbb6c8(long *param_1,ulong param_2,ulong *param_3)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar7 = param_2 * -0xae502812aa7333 >> ((ulong)*(uint *)(param_1 + 2) & 0x3f);
  puVar4 = (ulong *)(*param_1 + (param_1[1] & uVar7) * 0x80);
  cVar2 = (char)(param_2 * -0xae502812aa7333 >> 0x38);
  uVar5 = puVar4[1];
  uVar9 = *puVar4;
  uVar1 = (uint)uVar9 & 0xff;
  uVar3 = (ulong)uVar1;
  uVar6 = uVar3;
  if (0xcc < uVar1) {
    uVar6 = ~(-1L << ((ulong)(uVar1 - 0xc5) & 0x3f));
  }
  if ((uVar9 & 0xff) == 0) {
    uVar6 = uVar5 & 0x101010101010100 &
            CONCAT17(-(cVar2 == (char)(uVar9 >> 0x38)),
                     CONCAT16(-(cVar2 == (char)(uVar9 >> 0x30)),
                              CONCAT15(-(cVar2 == (char)(uVar9 >> 0x28)),
                                       CONCAT14(-(cVar2 == (char)(uVar9 >> 0x20)),
                                                CONCAT13(-(cVar2 == (char)(uVar9 >> 0x18)),
                                                         CONCAT12(-(cVar2 == (char)(uVar9 >> 0x10)),
                                                                  CONCAT11(-(cVar2 == (char)(uVar9 
                                                  >> 8)),-(cVar2 == (char)uVar9))))))));
    if (uVar6 == 0) {
      uVar3 = 0;
    }
    else {
      do {
        uVar3 = (uVar6 << 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 << 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20);
        uVar10 = (puVar4 + (uVar3 >> 3) * 2)[1];
        uVar7 = 0xffL << (uVar3 & 0x3f);
        if (puVar4[(uVar3 >> 3) * 2] == param_2 && ((puVar4[1] ^ uVar5) & uVar7) == 0) {
LAB_00dbb820:
          *param_3 = uVar10;
          return 1;
        }
        uVar3 = 0;
        uVar6 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
      } while (uVar6 != 0);
    }
  }
  else {
    uVar8 = 0;
    while( true ) {
      for (uVar9 = uVar5 & 0x101010101010100 &
                   CONCAT17(-(cVar2 == (char)(uVar9 >> 0x38)),
                            CONCAT16(-(cVar2 == (char)(uVar9 >> 0x30)),
                                     CONCAT15(-(cVar2 == (char)(uVar9 >> 0x28)),
                                              CONCAT14(-(cVar2 == (char)(uVar9 >> 0x20)),
                                                       CONCAT13(-(cVar2 == (char)(uVar9 >> 0x18)),
                                                                CONCAT12(-(cVar2 == (char)(uVar9 >> 
                                                  0x10)),CONCAT11(-(cVar2 == (char)(uVar9 >> 8)),
                                                                  -(cVar2 == (char)uVar9))))))));
          uVar9 != 0; uVar9 = uVar9 & (uVar12 ^ 0xffffffffffffffff)) {
        uVar10 = (uVar9 << 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 << 7 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
        uVar12 = 0xffL << (uVar11 & 0x3f);
        uVar10 = (puVar4 + (uVar11 >> 3) * 2)[1];
        if (puVar4[(uVar11 >> 3) * 2] == param_2 && ((puVar4[1] ^ uVar5) & uVar12) == 0)
        goto LAB_00dbb820;
      }
      uVar3 = (ulong)((uint)uVar3 & (uint)(uVar6 != uVar8));
      if (uVar6 == uVar8) break;
      uVar8 = uVar8 + 1;
      puVar4 = (ulong *)(*param_1 + (param_1[1] & uVar8 + uVar7) * 0x80);
      uVar5 = puVar4[1];
      uVar9 = *puVar4;
    }
  }
  return uVar3;
}


