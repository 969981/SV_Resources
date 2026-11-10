/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03242384; name: FUN_03242384
 */


void FUN_03242384(uint *param_1)

{
  uint uVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  
  lVar8 = DAT_048858d0;
  pMVar2 = (MutexType *)(DAT_048858d0 + 0x28);
  nn::os::LockMutex(pMVar2);
  uVar7 = *(ushort *)(lVar8 + 0x18);
  if (uVar7 == 0) {
    lVar10 = 0;
    do {
      lVar9 = *(long *)(lVar8 + 0x20);
      lVar14 = lVar10 + 1;
      uVar11 = *(uint *)(lVar9 + (ulong)(((uint)lVar14 & 0xffff) +
                                        (((uint)lVar14 >> 4 & 0xfff) / 0x27) * -0x270) * 4);
      uVar1 = (int)lVar10 + 0x18d;
      *(uint *)(lVar9 + lVar10 * 4) =
           *(uint *)(lVar9 + (ulong)((uVar1 & 0xffff) + ((uVar1 >> 4 & 0xfff) / 0x27) * -0x270) * 4)
           ^ (uVar11 & 0x7ffffffe | *(uint *)(lVar9 + lVar10 * 4) & 0x80000000) >> 1;
      if ((uVar11 & 1) != 0) {
        *(uint *)(*(long *)(lVar8 + 0x20) + lVar10 * 4) =
             *(uint *)(*(long *)(lVar8 + 0x20) + lVar10 * 4) ^ 0x9908b0df;
      }
      lVar10 = lVar14;
    } while (lVar14 != 0x270);
    uVar7 = *(ushort *)(lVar8 + 0x18);
  }
  lVar10 = *(long *)(lVar8 + 0x20);
  uVar1 = *(uint *)(lVar10 + (ulong)(uint)uVar7 * 4);
  uVar1 = uVar1 ^ uVar1 >> 0xb;
  uVar1 = (uVar1 & 0x13a58ad) << 7 ^ uVar1;
  uVar11 = (uVar7 + 1) % 0x270;
  uVar12 = (ulong)uVar11;
  *(short *)(lVar8 + 0x18) = (short)uVar11;
  if (uVar11 == 0) {
    lVar14 = 0;
    while( true ) {
      uVar11 = (uint)(lVar14 + 1);
      uVar15 = *(uint *)(lVar10 + (ulong)((uVar11 & 0xffff) +
                                         ((uVar11 >> 4 & 0xfff) / 0x27) * -0x270) * 4);
      uVar11 = (int)lVar14 + 0x18d;
      *(uint *)(lVar10 + lVar14 * 4) =
           *(uint *)(lVar10 + (ulong)((uVar11 & 0xffff) + ((uVar11 >> 4 & 0xfff) / 0x27) * -0x270) *
                              4) ^
           (uVar15 & 0x7ffffffe | *(uint *)(lVar10 + lVar14 * 4) & 0x80000000) >> 1;
      if ((uVar15 & 1) != 0) {
        *(uint *)(*(long *)(lVar8 + 0x20) + lVar14 * 4) =
             *(uint *)(*(long *)(lVar8 + 0x20) + lVar14 * 4) ^ 0x9908b0df;
      }
      if (lVar14 == 0x26f) break;
      lVar10 = *(long *)(lVar8 + 0x20);
      lVar14 = lVar14 + 1;
    }
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x18);
    lVar10 = *(long *)(lVar8 + 0x20);
  }
  uVar11 = *(uint *)(lVar10 + uVar12 * 4);
  uVar11 = uVar11 ^ uVar11 >> 0xb;
  uVar15 = ((int)uVar12 + 1U) % 0x270;
  uVar12 = (ulong)uVar15;
  uVar11 = (uVar11 & 0x13a58ad) << 7 ^ uVar11;
  *(short *)(lVar8 + 0x18) = (short)uVar15;
  if (uVar15 == 0) {
    lVar14 = 0;
    while( true ) {
      uVar15 = (uint)(lVar14 + 1);
      uVar5 = *(uint *)(lVar10 + (ulong)((uVar15 & 0xffff) + ((uVar15 >> 4 & 0xfff) / 0x27) * -0x270
                                        ) * 4);
      uVar15 = (int)lVar14 + 0x18d;
      *(uint *)(lVar10 + lVar14 * 4) =
           *(uint *)(lVar10 + (ulong)((uVar15 & 0xffff) + ((uVar15 >> 4 & 0xfff) / 0x27) * -0x270) *
                              4) ^
           (uVar5 & 0x7ffffffe | *(uint *)(lVar10 + lVar14 * 4) & 0x80000000) >> 1;
      if ((uVar5 & 1) != 0) {
        *(uint *)(*(long *)(lVar8 + 0x20) + lVar14 * 4) =
             *(uint *)(*(long *)(lVar8 + 0x20) + lVar14 * 4) ^ 0x9908b0df;
      }
      if (lVar14 == 0x26f) break;
      lVar10 = *(long *)(lVar8 + 0x20);
      lVar14 = lVar14 + 1;
    }
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x18);
    lVar10 = *(long *)(lVar8 + 0x20);
  }
  uVar15 = (uVar11 & 0x1df8c) << 0xf ^ uVar11;
  uVar1 = (uVar1 & 0x1df8c) << 0xf ^ uVar1;
  uVar5 = *(uint *)(lVar10 + uVar12 * 4);
  uVar5 = uVar5 ^ uVar5 >> 0xb;
  uVar5 = (uVar5 & 0x13a58ad) << 7 ^ uVar5;
  uVar5 = (uVar5 & 0x1df8c) << 0xf ^ uVar5;
  uVar13 = ((int)uVar12 + 1U) % 0x270;
  uVar12 = (ulong)uVar13;
  uVar3 = uVar5 ^ uVar5 >> 0x12;
  *(short *)(lVar8 + 0x18) = (short)uVar13;
  if (uVar13 == 0) {
    lVar14 = 0;
    while( true ) {
      uVar13 = (uint)(lVar14 + 1);
      uVar6 = *(uint *)(lVar10 + (ulong)((uVar13 & 0xffff) + ((uVar13 >> 4 & 0xfff) / 0x27) * -0x270
                                        ) * 4);
      uVar13 = (int)lVar14 + 0x18d;
      *(uint *)(lVar10 + lVar14 * 4) =
           *(uint *)(lVar10 + (ulong)((uVar13 & 0xffff) + ((uVar13 >> 4 & 0xfff) / 0x27) * -0x270) *
                              4) ^
           (uVar6 & 0x7ffffffe | *(uint *)(lVar10 + lVar14 * 4) & 0x80000000) >> 1;
      if ((uVar6 & 1) != 0) {
        *(uint *)(*(long *)(lVar8 + 0x20) + lVar14 * 4) =
             *(uint *)(*(long *)(lVar8 + 0x20) + lVar14 * 4) ^ 0x9908b0df;
      }
      if (lVar14 == 0x26f) break;
      lVar10 = *(long *)(lVar8 + 0x20);
      lVar14 = lVar14 + 1;
    }
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x18);
    lVar10 = *(long *)(lVar8 + 0x20);
  }
  uVar6 = *(uint *)(lVar10 + uVar12 * 4);
  uVar13 = (int)uVar12 + 1;
  uVar6 = uVar6 ^ uVar6 >> 0xb;
  uVar6 = (uVar6 & 0x13a58ad) << 7 ^ uVar6;
  uVar6 = (uVar6 & 0x1df8c) << 0xf ^ uVar6;
  uVar4 = uVar6 ^ uVar6 >> 0x12;
  *(short *)(lVar8 + 0x18) = (short)uVar13 + (short)(uVar13 / 0x270) * -0x270;
  nn::os::UnlockMutex(pMVar2);
  *param_1 = uVar1 ^ uVar1 >> 0x12;
  param_1[1] = uVar15 >> 0x10 | ((uVar11 ^ uVar15 >> 0x12) & 0xfff) << 0x10 | 0x40000000;
  param_1[2] = uVar3 << 0x18 |
               uVar5 >> 8 & 0xff00 | uVar5 >> 0x18 & 0x3f | (uVar3 >> 8 & 0xff) << 0x10 | 0x80;
  param_1[3] = uVar4 << 0x18 | uVar6 >> 8 & 0xff00 | uVar6 >> 0x18 | (uVar4 >> 8 & 0xff) << 0x10;
  return;
}


