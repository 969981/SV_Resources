/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d0fcc; name: FUN_002d0fcc
 */


void FUN_002d0fcc(long param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  
  *(undefined4 *)(param_1 + 0x420) = 0;
  uVar11 = 0;
  do {
    iVar10 = (int)uVar11;
    iVar3 = iVar10 + 0x3f;
    if (-1 < iVar10) {
      iVar3 = iVar10;
    }
    iVar3 = iVar3 >> 6;
    uVar9 = *(ulong *)(param_1 + (long)iVar3 * 8) & -1L << (uVar11 & 0x3f);
    if (uVar9 != 0) {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar8 = (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | iVar3 << 6;
      goto LAB_002d103c;
    }
    if (iVar3 == 2) {
LAB_002d1150:
      uVar5 = *(ulong *)(param_1 + 0x18);
      uVar9 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar8 = 0xffffffff;
      if (uVar5 != 0) {
        uVar8 = (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | 0xc0;
      }
    }
    else if (iVar3 == 1) {
LAB_002d1138:
      uVar9 = *(ulong *)(param_1 + 0x10);
      if (uVar9 == 0) goto LAB_002d1150;
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar8 = (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | 0x80;
    }
    else {
      uVar8 = 0xffffffff;
      if (iVar3 == 0) {
        uVar9 = *(ulong *)(param_1 + 8);
        if (uVar9 == 0) goto LAB_002d1138;
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar8 = (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | 0x40;
      }
    }
LAB_002d103c:
    iVar3 = FUN_002d0e7c(param_1,*(undefined4 *)(param_1 + (long)(int)uVar8 * 4 + 0x20));
    if (iVar10 <= (int)uVar8) {
      lVar12 = (long)iVar10;
      lVar1 = (long)(int)uVar8;
      if ((int)uVar8 <= lVar12) {
        lVar1 = lVar12;
      }
      uVar11 = lVar1 + 1;
      uVar9 = uVar11 - lVar12;
      memset((void *)(param_2 + lVar12),iVar3,uVar9);
      if (3 < uVar9) {
        uVar4 = uVar9 & 0xfffffffffffffffc;
        uVar5 = (uVar4 - 4 >> 2) + 1;
        uVar6 = uVar5 & 7;
        if (0x1b < uVar4 - 4) {
          lVar7 = -(uVar5 & 0x7ffffffffffffff8);
          do {
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        lVar12 = uVar4 + lVar12;
        if (uVar6 != 0) {
          lVar7 = -uVar6;
          do {
            bVar2 = lVar7 != -1;
            lVar7 = lVar7 + 1;
          } while (bVar2);
        }
        if (uVar9 == uVar4) goto LAB_002d1000;
      }
      uVar8 = ((int)lVar1 - (int)lVar12) + 1;
      uVar5 = lVar1 - lVar12;
      uVar9 = (ulong)uVar8 & 7;
      if ((uVar8 & 7) != 0) {
        do {
          lVar12 = lVar12 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (6 < uVar5) {
        lVar12 = (lVar1 - lVar12) + 1;
        do {
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
LAB_002d1000:
    if (0xff < (int)uVar11) {
      *param_3 = *(undefined4 *)(param_1 + 0x420);
      return;
    }
  } while( true );
}


