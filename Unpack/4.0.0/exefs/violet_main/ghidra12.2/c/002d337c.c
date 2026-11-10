/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d337c; name: FUN_002d337c
 */


void FUN_002d337c(long *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar6 = *param_1;
  uVar4 = (uint)param_2;
  if (0 < (int)uVar4) {
    uVar8 = (long)(int)uVar4 - 1;
    uVar7 = (uint)uVar8;
    uVar3 = uVar7 + 0x3f;
    if (-1 < (int)uVar7) {
      uVar3 = uVar7;
    }
    uVar9 = *(ulong *)(lVar6 + (long)((int)uVar3 >> 6) * 8);
    uVar10 = 1L << (uVar8 & 0x3f);
    if ((uVar9 & uVar10) == 0) {
      *(ulong *)(lVar6 + ((long)((ulong)uVar3 << 0x20) >> 0x26) * 8) = uVar9 | uVar10;
      uVar3 = uVar4 >> 6;
      uVar9 = *(ulong *)(lVar6 + (ulong)uVar3 * 8) & -1L << (param_2 & 0x3f);
      if (uVar9 == 0) {
        if (uVar3 == 2) {
LAB_002d3608:
          uVar9 = *(ulong *)(lVar6 + 0x18);
          if (uVar9 != 0) {
            uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
            uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
            uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar4 = (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | 0xc0;
            goto LAB_002d33f0;
          }
        }
        else {
          if (uVar3 == 1) {
LAB_002d35f0:
            uVar9 = *(ulong *)(lVar6 + 0x10);
            if (uVar9 != 0) {
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar4 = (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | 0x80;
              goto LAB_002d33f0;
            }
            goto LAB_002d3608;
          }
          if (uVar3 == 0) {
            uVar9 = *(ulong *)(lVar6 + 8);
            if (uVar9 != 0) {
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar4 = (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | 0x40;
              goto LAB_002d33f0;
            }
            goto LAB_002d35f0;
          }
        }
        uVar4 = 0xffffffff;
      }
      else {
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 & 0xffffffc0 | (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
      }
LAB_002d33f0:
      *(undefined4 *)(param_1[1] + uVar8 * 4) = *(undefined4 *)(param_1[1] + (long)(int)uVar4 * 4);
    }
  }
  uVar4 = param_3 + 0x3f;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  uVar8 = *(ulong *)(lVar6 + (long)((int)uVar4 >> 6) * 8);
  uVar9 = 1L << ((ulong)param_3 & 0x3f);
  if ((uVar8 & uVar9) != 0) goto LAB_002d34c8;
  *(ulong *)(lVar6 + ((long)((ulong)uVar4 << 0x20) >> 0x26) * 8) = uVar8 | uVar9;
  uVar4 = param_3 + 1;
  uVar3 = param_3 + 0x40;
  if (-1 < (int)uVar4) {
    uVar3 = uVar4;
  }
  iVar5 = (int)uVar3 >> 6;
  uVar8 = *(ulong *)(lVar6 + (long)iVar5 * 8) & -1L << ((ulong)uVar4 & 0x3f);
  if (uVar8 == 0) {
    if (iVar5 == 2) {
LAB_002d35d0:
      uVar8 = *(ulong *)(lVar6 + 0x18);
      if (uVar8 != 0) {
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | 0xc0;
        goto LAB_002d3470;
      }
    }
    else {
      if (iVar5 == 1) {
LAB_002d35b8:
        uVar8 = *(ulong *)(lVar6 + 0x10);
        if (uVar8 != 0) {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar4 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | 0x80;
          goto LAB_002d3470;
        }
        goto LAB_002d35d0;
      }
      if (iVar5 == 0) {
        uVar8 = *(ulong *)(lVar6 + 8);
        if (uVar8 != 0) {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar4 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | 0x40;
          goto LAB_002d3470;
        }
        goto LAB_002d35b8;
      }
    }
    uVar4 = 0xffffffff;
  }
  else {
    uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar4 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | iVar5 << 6;
  }
LAB_002d3470:
  *(undefined4 *)(param_1[1] + (long)(int)param_3 * 4) =
       *(undefined4 *)(param_1[1] + (long)(int)uVar4 * 4);
LAB_002d34c8:
  do {
    iVar5 = (int)param_2;
    if (0xff < iVar5) {
      return;
    }
    iVar1 = iVar5 + 0x3f;
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    iVar1 = iVar1 >> 6;
    uVar8 = *(ulong *)(lVar6 + (long)iVar1 * 8) & -1L << (param_2 & 0x3f);
    if (uVar8 != 0) {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = (ulong)((uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | iVar1 << 6);
      goto LAB_002d3494;
    }
    if (iVar1 == 2) {
LAB_002d3540:
      uVar9 = *(ulong *)(lVar6 + 0x18);
      uVar8 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = 0xffffffff;
      if (uVar9 != 0) {
        uVar4 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | 0xc0;
      }
      uVar8 = (ulong)uVar4;
    }
    else if (iVar1 == 1) {
LAB_002d3528:
      uVar8 = *(ulong *)(lVar6 + 0x10);
      if (uVar8 == 0) goto LAB_002d3540;
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = (ulong)((uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | 0x80);
    }
    else {
      uVar8 = 0xffffffff;
      if (iVar1 == 0) {
        uVar8 = *(ulong *)(lVar6 + 8);
        if (uVar8 == 0) goto LAB_002d3528;
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = (ulong)((uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | 0x40);
      }
    }
LAB_002d3494:
    lVar2 = param_1[1];
    uVar9 = -(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2;
    iVar5 = *(int *)(lVar2 + uVar9);
    iVar1 = *(int *)param_1[2];
    if (iVar1 <= iVar5) {
      iVar5 = iVar1;
    }
    *(int *)param_1[2] = iVar5;
    param_2 = (ulong)((uint)uVar8 + 1);
    *(undefined4 *)(lVar2 + uVar9) = *(undefined4 *)param_1[3];
    if ((uint)uVar8 == param_3) {
      return;
    }
  } while( true );
}


