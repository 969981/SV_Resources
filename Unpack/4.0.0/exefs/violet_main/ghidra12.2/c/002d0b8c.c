/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d0b8c; name: FUN_002d0b8c
 */


void FUN_002d0b8c(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  
  puVar12 = *(uint **)(param_1 + 0x440);
  if (puVar12 != *(uint **)(param_1 + 0x448)) {
    do {
      uVar9 = *puVar12;
      uVar8 = (ulong)uVar9;
      uVar4 = puVar12[1];
      uVar5 = uVar9 - 1;
      if (0 < (int)uVar9) {
        uVar3 = uVar9 + 0x3e;
        if (-1 < (int)uVar5) {
          uVar3 = uVar5;
        }
        uVar10 = *(ulong *)(param_1 + (long)((int)uVar3 >> 6) * 8);
        uVar11 = 1L << ((ulong)uVar5 & 0x3f);
        if ((uVar10 & uVar11) == 0) {
          *(ulong *)(param_1 + ((long)((ulong)uVar3 << 0x20) >> 0x26) * 8) = uVar10 | uVar11;
          uVar3 = uVar9 >> 6;
          uVar10 = *(ulong *)(param_1 + (ulong)uVar3 * 8) & -1L << (uVar8 & 0x3f);
          if (uVar10 != 0) {
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 & 0xffffffc0 | (uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
            goto LAB_002d0c3c;
          }
          if (uVar3 == 2) {
LAB_002d0e2c:
            uVar10 = *(ulong *)(param_1 + 0x18);
            if (uVar10 == 0) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar9 = (uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | 0xc0;
            }
          }
          else if (uVar3 == 1) {
LAB_002d0e14:
            uVar10 = *(ulong *)(param_1 + 0x10);
            if (uVar10 == 0) goto LAB_002d0e2c;
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar9 = (uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | 0x80;
          }
          else {
            uVar9 = 0xffffffff;
            if (uVar3 == 0) {
              uVar10 = *(ulong *)(param_1 + 8);
              if (uVar10 == 0) goto LAB_002d0e14;
              uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar9 = (uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | 0x40;
            }
          }
LAB_002d0c3c:
          *(undefined4 *)(param_1 + 0x20 + (long)(int)uVar5 * 4) =
               *(undefined4 *)(param_1 + 0x20 + (long)(int)uVar9 * 4);
        }
      }
      uVar9 = uVar4 + 0x3f;
      if (-1 < (int)uVar4) {
        uVar9 = uVar4;
      }
      uVar10 = *(ulong *)(param_1 + (long)((int)uVar9 >> 6) * 8);
      uVar11 = 1L << ((ulong)uVar4 & 0x3f);
      if ((uVar10 & uVar11) == 0) {
        *(ulong *)(param_1 + ((long)((ulong)uVar9 << 0x20) >> 0x26) * 8) = uVar10 | uVar11;
        uVar9 = uVar4 + 1;
        uVar5 = uVar4 + 0x40;
        if (-1 < (int)uVar9) {
          uVar5 = uVar9;
        }
        iVar7 = (int)uVar5 >> 6;
        uVar10 = *(ulong *)(param_1 + (long)iVar7 * 8) & -1L << ((ulong)uVar9 & 0x3f);
        if (uVar10 != 0) {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar9 = (uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | iVar7 << 6;
          goto LAB_002d0cb4;
        }
        if (iVar7 == 2) {
LAB_002d0dfc:
          uVar10 = *(ulong *)(param_1 + 0x18);
          if (uVar10 == 0) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar9 = (uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | 0xc0;
          }
        }
        else if (iVar7 == 1) {
LAB_002d0de4:
          uVar10 = *(ulong *)(param_1 + 0x10);
          if (uVar10 == 0) goto LAB_002d0dfc;
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar9 = (uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | 0x80;
        }
        else {
          uVar9 = 0xffffffff;
          if (iVar7 == 0) {
            uVar10 = *(ulong *)(param_1 + 8);
            if (uVar10 == 0) goto LAB_002d0de4;
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar9 = (uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | 0x40;
          }
        }
LAB_002d0cb4:
        *(undefined4 *)(param_1 + 0x20 + (long)(int)uVar4 * 4) =
             *(undefined4 *)(param_1 + 0x20 + (long)(int)uVar9 * 4);
      }
      do {
        iVar7 = (int)uVar8;
        if (0xff < iVar7) break;
        iVar2 = iVar7 + 0x3f;
        if (-1 < iVar7) {
          iVar2 = iVar7;
        }
        iVar2 = iVar2 >> 6;
        uVar8 = *(ulong *)(param_1 + (long)iVar2 * 8) & -1L << (uVar8 & 0x3f);
        if (uVar8 != 0) {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar9 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | iVar2 << 6;
          goto LAB_002d0cd0;
        }
        if (iVar2 == 2) {
LAB_002d0d68:
          uVar10 = *(ulong *)(param_1 + 0x18);
          uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar9 = 0xffffffff;
          if (uVar10 != 0) {
            uVar9 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | 0xc0;
          }
        }
        else if (iVar2 == 1) {
LAB_002d0d50:
          uVar8 = *(ulong *)(param_1 + 0x10);
          if (uVar8 == 0) goto LAB_002d0d68;
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar9 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | 0x80;
        }
        else {
          uVar9 = 0xffffffff;
          if (iVar2 == 0) {
            uVar8 = *(ulong *)(param_1 + 8);
            if (uVar8 == 0) goto LAB_002d0d50;
            uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
            uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar9 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | 0x40;
          }
        }
LAB_002d0cd0:
        lVar1 = param_1 + (long)(int)uVar9 * 4;
        uVar6 = FUN_002d0e7c(param_1,*(undefined4 *)(lVar1 + 0x20));
        uVar8 = (ulong)(uVar9 + 1);
        *(undefined4 *)(lVar1 + 0x20) = uVar6;
      } while (uVar9 != uVar4);
      puVar12 = puVar12 + 2;
    } while (puVar12 != *(uint **)(param_1 + 0x448));
    puVar12 = *(uint **)(param_1 + 0x440);
  }
  *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_1 + 0x428);
  *(uint **)(param_1 + 0x448) = puVar12;
  return;
}


