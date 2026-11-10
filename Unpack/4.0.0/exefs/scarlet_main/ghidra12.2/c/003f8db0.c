/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f8db0; name: FUN_003f8db0
 */


undefined8 FUN_003f8db0(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  
  uVar11 = 0xffffffff;
  if ((param_1 != (uint *)0x0) && (param_3 != (uint *)0x0)) {
    if ((param_2 != 0x80) && ((param_2 != 0x100 && (param_2 != 0xc0)))) {
      return 0xfffffffe;
    }
    if (param_2 == 0x80) {
      uVar13 = 10;
    }
    else if (param_2 == 0xc0) {
      uVar13 = 0xc;
    }
    else {
      uVar13 = 0xe;
    }
    param_3[0x3c] = uVar13;
    uVar13 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
    *param_3 = uVar13;
    uVar10 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
    param_3[1] = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
    param_3[2] = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
    param_3[3] = uVar10 >> 0x10 | uVar10 << 0x10;
    if (param_2 == 0x80) {
      lVar12 = 0;
      do {
        uVar5 = param_3[3];
        puVar1 = (uint *)((long)&DAT_03cdf2a8 + lVar12);
        lVar12 = lVar12 + 4;
        uVar13 = uVar13 ^ (uint)(byte)(&DAT_03cde2ab)[(ulong)(byte)(uVar5 >> 0x10) * 4] << 0x18 ^
                 (uint)(byte)(&DAT_03cde6aa)[(ulong)(byte)(uVar5 >> 8) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03cdeaa9)[(ulong)(byte)uVar5 * 4] << 8 ^
                 (uint)(byte)(&DAT_03cdeea8)[(ulong)(uVar5 >> 0x16) & 0x3fc] ^ *puVar1;
        param_3[4] = uVar13;
        param_3[5] = param_3[1] ^ uVar13;
        uVar10 = param_3[2] ^ param_3[1] ^ uVar13;
        param_3[6] = uVar10;
        param_3[7] = uVar10 ^ uVar5;
        param_3 = param_3 + 4;
      } while (lVar12 != 0x28);
    }
    else {
      uVar10 = (param_1[4] & 0xff00ff00) >> 8 | (param_1[4] & 0xff00ff) << 8;
      param_3[4] = uVar10 >> 0x10 | uVar10 << 0x10;
      uVar10 = (param_1[5] & 0xff00ff00) >> 8 | (param_1[5] & 0xff00ff) << 8;
      param_3[5] = uVar10 >> 0x10 | uVar10 << 0x10;
      if (param_2 == 0xc0) {
        uVar4 = param_3[5];
        uVar13 = uVar13 ^ (uint)(byte)(&DAT_03cde2ab)[(ulong)(byte)(uVar4 >> 0x10) * 4] << 0x18 ^
                 (uint)(byte)(&DAT_03cde6aa)[(ulong)(byte)(uVar4 >> 8) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03cdeaa9)[(ulong)(byte)uVar4 * 4] << 8 ^
                 (uint)(byte)(&DAT_03cdeea8)[(ulong)(uVar4 >> 0x16) & 0x3fc] ^ 0x1000000;
        uVar2 = param_3[1] ^ uVar13;
        uVar5 = param_3[2] ^ uVar2;
        uVar3 = param_3[3] ^ uVar5;
        uVar10 = param_3[4] ^ uVar3;
        uVar4 = uVar10 ^ uVar4;
        bVar6 = (&DAT_03cde2ab)[(ulong)(uVar4 >> 0x10 & 0xff) * 4];
        param_3[6] = uVar13;
        param_3[7] = uVar2;
        bVar7 = (&DAT_03cde6aa)[(ulong)(uVar4 >> 8 & 0xff) * 4];
        bVar8 = (&DAT_03cdeaa9)[(ulong)(uVar4 & 0xff) * 4];
        param_3[8] = uVar5;
        param_3[9] = uVar3;
        uVar13 = uVar13 ^ (uint)bVar6 << 0x18 ^ (uint)bVar7 << 0x10 ^ (uint)bVar8 << 8 ^
                 (uint)(byte)(&DAT_03cdeea8)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x2000000;
        uVar2 = uVar2 ^ uVar13;
        uVar5 = uVar5 ^ uVar2;
        uVar3 = uVar3 ^ uVar5;
        param_3[10] = uVar10;
        param_3[0xb] = uVar4;
        uVar10 = uVar10 ^ uVar3;
        uVar4 = uVar10 ^ uVar4;
        bVar6 = (&DAT_03cde2ab)[(ulong)(uVar4 >> 0x10 & 0xff) * 4];
        param_3[0xc] = uVar13;
        param_3[0xd] = uVar2;
        uVar13 = uVar13 ^ (uint)bVar6 << 0x18 ^
                 (uint)(byte)(&DAT_03cde6aa)[(ulong)(uVar4 >> 8 & 0xff) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03cdeaa9)[(ulong)(uVar4 & 0xff) * 4] << 8 ^
                 (uint)(byte)(&DAT_03cdeea8)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x4000000;
        uVar2 = uVar2 ^ uVar13;
        param_3[0xe] = uVar5;
        param_3[0xf] = uVar3;
        uVar5 = uVar5 ^ uVar2;
        uVar3 = uVar3 ^ uVar5;
        param_3[0x10] = uVar10;
        param_3[0x11] = uVar4;
        uVar10 = uVar10 ^ uVar3;
        uVar4 = uVar10 ^ uVar4;
        bVar6 = (&DAT_03cde2ab)[(ulong)(uVar4 >> 0x10 & 0xff) * 4];
        param_3[0x12] = uVar13;
        param_3[0x13] = uVar2;
        uVar13 = uVar13 ^ (uint)bVar6 << 0x18 ^
                 (uint)(byte)(&DAT_03cde6aa)[(ulong)(uVar4 >> 8 & 0xff) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03cdeaa9)[(ulong)(uVar4 & 0xff) * 4] << 8 ^
                 (uint)(byte)(&DAT_03cdeea8)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x8000000;
        uVar2 = uVar2 ^ uVar13;
        param_3[0x14] = uVar5;
        param_3[0x15] = uVar3;
        uVar5 = uVar5 ^ uVar2;
        uVar3 = uVar3 ^ uVar5;
        param_3[0x16] = uVar10;
        param_3[0x17] = uVar4;
        uVar10 = uVar10 ^ uVar3;
        uVar4 = uVar10 ^ uVar4;
        bVar6 = (&DAT_03cde2ab)[(ulong)(uVar4 >> 0x10 & 0xff) * 4];
        param_3[0x18] = uVar13;
        param_3[0x19] = uVar2;
        bVar7 = (&DAT_03cde6aa)[(ulong)(uVar4 >> 8 & 0xff) * 4];
        bVar8 = (&DAT_03cdeaa9)[(ulong)(uVar4 & 0xff) * 4];
        param_3[0x1a] = uVar5;
        param_3[0x1b] = uVar3;
        uVar13 = uVar13 ^ (uint)bVar6 << 0x18 ^ (uint)bVar7 << 0x10 ^ (uint)bVar8 << 8 ^
                 (uint)(byte)(&DAT_03cdeea8)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x10000000;
        uVar2 = uVar2 ^ uVar13;
        uVar5 = uVar5 ^ uVar2;
        uVar3 = uVar3 ^ uVar5;
        param_3[0x1c] = uVar10;
        param_3[0x1d] = uVar4;
        uVar10 = uVar10 ^ uVar3;
        uVar4 = uVar10 ^ uVar4;
        bVar6 = (&DAT_03cde2ab)[(ulong)(uVar4 >> 0x10 & 0xff) * 4];
        param_3[0x1e] = uVar13;
        param_3[0x1f] = uVar2;
        uVar13 = uVar13 ^ (uint)bVar6 << 0x18 ^
                 (uint)(byte)(&DAT_03cde6aa)[(ulong)(uVar4 >> 8 & 0xff) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03cdeaa9)[(ulong)(uVar4 & 0xff) * 4] << 8 ^
                 (uint)(byte)(&DAT_03cdeea8)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x20000000;
        uVar2 = uVar2 ^ uVar13;
        param_3[0x20] = uVar5;
        param_3[0x21] = uVar3;
        uVar5 = uVar5 ^ uVar2;
        uVar3 = uVar3 ^ uVar5;
        param_3[0x22] = uVar10;
        param_3[0x23] = uVar4;
        uVar10 = uVar10 ^ uVar3;
        uVar4 = uVar10 ^ uVar4;
        bVar6 = (&DAT_03cde2ab)[(ulong)(uVar4 >> 0x10 & 0xff) * 4];
        bVar7 = (&DAT_03cde6aa)[(ulong)(uVar4 >> 8 & 0xff) * 4];
        bVar8 = (&DAT_03cdeaa9)[(ulong)(uVar4 & 0xff) * 4];
        bVar9 = (&DAT_03cdeea8)[(ulong)(uVar4 >> 0x18) * 4];
        param_3[0x24] = uVar13;
        param_3[0x25] = uVar2;
        uVar13 = uVar13 ^ (uint)bVar6 << 0x18 ^ (uint)bVar7 << 0x10 ^ (uint)bVar8 << 8 ^ (uint)bVar9
                 ^ 0x40000000;
        uVar2 = uVar2 ^ uVar13;
        param_3[0x26] = uVar5;
        param_3[0x27] = uVar3;
        uVar5 = uVar5 ^ uVar2;
        uVar3 = uVar3 ^ uVar5;
        param_3[0x28] = uVar10;
        param_3[0x29] = uVar4;
        uVar4 = uVar10 ^ uVar3 ^ uVar4;
        param_3[0x2e] = uVar10 ^ uVar3;
        param_3[0x2f] = uVar4;
        bVar6 = (&DAT_03cde2ab)[(ulong)(uVar4 >> 0x10 & 0xff) * 4];
        param_3[0x2a] = uVar13;
        param_3[0x2b] = uVar2;
        uVar13 = uVar13 ^ (uint)bVar6 << 0x18 ^
                 (uint)(byte)(&DAT_03cde6aa)[(ulong)(uVar4 >> 8 & 0xff) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_03cdeaa9)[(ulong)(uVar4 & 0xff) * 4] << 8 ^
                 (uint)(byte)(&DAT_03cdeea8)[(ulong)(uVar4 >> 0x18) * 4] ^ 0x80000000;
        uVar2 = uVar2 ^ uVar13;
        param_3[0x30] = uVar13;
        param_3[0x31] = uVar2;
        uVar2 = uVar5 ^ uVar2;
        param_3[0x2c] = uVar5;
        param_3[0x2d] = uVar3;
        param_3[0x32] = uVar2;
        param_3[0x33] = uVar3 ^ uVar2;
        return 0;
      }
      uVar10 = (param_1[6] & 0xff00ff00) >> 8 | (param_1[6] & 0xff00ff) << 8;
      param_3[6] = uVar10 >> 0x10 | uVar10 << 0x10;
      uVar10 = (param_1[7] & 0xff00ff00) >> 8 | (param_1[7] & 0xff00ff) << 8;
      param_3[7] = uVar10 >> 0x10 | uVar10 << 0x10;
      if (param_2 == 0x100) {
        lVar12 = 0;
        while( true ) {
          uVar3 = param_3[7];
          uVar13 = uVar13 ^ (uint)(byte)(&DAT_03cde2ab)[(ulong)(byte)(uVar3 >> 0x10) * 4] << 0x18 ^
                   (uint)(byte)(&DAT_03cde6aa)[(ulong)(byte)(uVar3 >> 8) * 4] << 0x10 ^
                   (uint)(byte)(&DAT_03cdeaa9)[(ulong)(byte)uVar3 * 4] << 8 ^
                   (uint)(byte)(&DAT_03cdeea8)[(ulong)(uVar3 >> 0x16) & 0x3fc] ^
                   *(uint *)((long)&DAT_03cdf2a8 + lVar12);
          param_3[8] = uVar13;
          param_3[9] = param_3[1] ^ uVar13;
          uVar10 = param_3[2] ^ param_3[1] ^ uVar13;
          uVar5 = param_3[3] ^ uVar10;
          param_3[10] = uVar10;
          param_3[0xb] = uVar5;
          if (lVar12 == 0x18) break;
          uVar10 = param_3[4] ^ (uint)(byte)(&DAT_03cde2ab)[(ulong)(uVar5 >> 0x18) * 4] << 0x18 ^
                   (uint)(byte)(&DAT_03cde6aa)[(ulong)(uVar5 >> 0x10 & 0xff) * 4] << 0x10 ^
                   (uint)(byte)(&DAT_03cdeaa9)[(ulong)(uVar5 >> 8 & 0xff) * 4] << 8 ^
                   (uint)(byte)(&DAT_03cdeea8)[(ulong)(uVar5 & 0xff) * 4];
          uVar5 = param_3[5] ^ uVar10;
          param_3[0xc] = uVar10;
          param_3[0xd] = uVar5;
          uVar5 = param_3[6] ^ uVar5;
          param_3[0xe] = uVar5;
          param_3[0xf] = uVar5 ^ uVar3;
          lVar12 = lVar12 + 4;
          param_3 = param_3 + 8;
        }
      }
    }
    uVar11 = 0;
  }
  return uVar11;
}


