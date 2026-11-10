/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001566e0; name: FUN_001566e0
 */


/* WARNING: Control flow encountered bad instruction data */

long FUN_001566e0(ulong *param_1,long param_2,ulong *param_3,long *param_4,ulong *param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *__src;
  long lVar15;
  uint uVar16;
  ulong *puVar17;
  long lVar18;
  ulong *puVar19;
  int *piVar20;
  size_t __n;
  ushort *puVar21;
  ulong *puVar22;
  long lVar23;
  ulong *puVar24;
  
  puVar13 = (ulong *)((long)param_1 + param_2 + -1);
  if (param_5 <= puVar13) {
    puVar13 = param_5;
  }
  puVar17 = (ulong *)((long)puVar13 - 4);
  if (param_1 < puVar17) {
    puVar19 = (ulong *)param_4[8];
    lVar15 = param_4[1];
    lVar18 = *param_4;
    lVar8 = param_4[2];
    puVar12 = param_1;
    if (puVar19 == param_1) {
      puVar12 = (ulong *)((long)param_1 + 1);
    }
    puVar7 = param_1;
    puVar22 = param_3;
LAB_00156758:
    uVar14 = 0x13;
    do {
      uVar5 = *puVar12;
      lVar11 = (ulong)((uint)((int)uVar5 * -0x61c8864f) >> (ulong)(0x20U - (int)lVar15 & 0x1f)) * 2;
      uVar1 = *(ushort *)(lVar18 + lVar11);
      iVar6 = (int)puVar12 - (int)puVar19;
      *(short *)(lVar18 + lVar11) = (short)iVar6;
      uVar16 = iVar6 - (uint)uVar1;
      if ((uVar16 & 0xffff) < 0xfff8) {
        uVar1 = (ushort)uVar16;
        piVar20 = (int *)((long)puVar12 - (ulong)uVar1);
        if ((uVar16 & 0xffff) != 0 && (int)uVar5 == *piVar20) goto LAB_001567b4;
      }
      puVar12 = (ulong *)((long)puVar12 + (uVar14 >> 4));
      if (puVar17 <= puVar12) {
        __src = puVar7;
        goto LAB_00156a64;
      }
      uVar14 = uVar14 + 1;
    } while( true );
  }
LAB_00156ab8:
  return param_2 + 1;
LAB_001567b4:
  iVar6 = (int)puVar12 - (int)puVar7;
  iVar10 = (int)piVar20 - (int)lVar8;
  iVar4 = iVar6;
  if (iVar10 <= iVar6) {
    iVar4 = iVar10;
  }
  iVar4 = -iVar4;
  if ((iVar4 < 0) && (*(char *)((long)puVar12 - 1) == *(char *)((long)piVar20 + -1))) {
    iVar10 = -2;
    if (iVar4 < -1) {
      do {
        if (*(char *)((long)puVar12 + (long)iVar10) != *(char *)((long)piVar20 + (long)iVar10))
        break;
        iVar10 = iVar10 + -1;
      } while (iVar4 <= iVar10);
    }
    puVar12 = (ulong *)((long)puVar12 + (long)(iVar10 + 1));
    iVar6 = iVar10 + 1 + iVar6;
  }
  lVar11 = (long)iVar6;
  if ((undefined1 *)((long)param_3 + param_2) <= (undefined1 *)((long)puVar22 + lVar11))
  goto LAB_00156ab8;
  __src = (ulong *)((long)puVar12 + 4);
  if (__src < puVar17) {
    do {
      if (*__src != *(ulong *)((long)__src - (ulong)uVar1)) {
        uVar14 = *(ulong *)((long)__src - (ulong)uVar1) ^ *__src;
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        __src = (ulong *)((long)__src + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3));
        break;
      }
      __src = __src + 1;
    } while (__src < puVar17);
  }
  if (puVar13 <= __src) {
    __src = puVar13;
  }
  iVar4 = (int)__src - (int)puVar12;
  uVar2 = iVar4 - 4;
  uVar9 = uVar2;
  if (0xe < (int)uVar2) {
    uVar9 = 0xf;
  }
  if ((uVar16 & 0xffff) < 8) {
    iVar10 = iVar6;
    if (0xe < iVar6) {
      iVar10 = 0xf;
    }
    puVar12 = (ulong *)((long)puVar22 + 1);
    *(byte *)puVar22 = (byte)iVar10 | 0xf0;
    if (0xe < iVar6) {
      uVar3 = iVar6 - 0xf;
      if (uVar3 < 0xc0) {
        lVar23 = 2;
      }
      else {
        puVar12 = (ulong *)((long)puVar22 + 2);
        *(char *)((long)puVar22 + 1) = (char)(uVar3 >> 8) + -0x40;
        lVar23 = 3;
      }
      *(char *)puVar12 = (char)uVar3;
      puVar12 = (ulong *)((long)puVar22 + lVar23);
    }
    puVar24 = (ulong *)((long)puVar12 + lVar11);
    do {
      puVar22 = puVar12 + 1;
      *puVar12 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar12 = puVar22;
    } while (puVar22 < puVar24);
    puVar22 = (ulong *)((long)puVar24 + 1);
    *(char *)puVar24 = (char)(uVar16 & 0xffff) + (char)uVar9 * '\b' + -0x80;
    if (0xe < (int)uVar2) {
      uVar16 = iVar4 - 0x13;
      if (uVar16 < 0xc0) {
        puVar12 = puVar22;
        puVar22 = puVar24;
      }
      else {
        puVar12 = (ulong *)((long)puVar24 + 2);
        *(char *)puVar22 = (char)(uVar16 >> 8) + -0x40;
      }
      puVar22 = (ulong *)((long)puVar22 + 2);
      *(char *)puVar12 = (char)uVar16;
    }
  }
  else {
    if (iVar6 < 0xf) {
      *(byte *)puVar22 = (byte)iVar6 | (byte)(uVar9 << 4);
      *(ulong *)((long)puVar22 + 1) = *puVar7;
      if (8 < iVar6) {
        *(ulong *)((long)puVar22 + 9) = puVar7[1];
      }
      puVar12 = (ulong *)((long)puVar22 + 1 + lVar11);
    }
    else {
      puVar21 = (ushort *)((long)puVar22 + 1);
      *(byte *)puVar22 = (byte)(uVar9 << 4) | 0xf;
      uVar16 = iVar6 - 0xf;
      if (uVar16 < 0xc0) {
        lVar23 = 2;
      }
      else {
        puVar21 = (ushort *)((long)puVar22 + 2);
        *(char *)((long)puVar22 + 1) = (char)(uVar16 >> 8) + -0x40;
        lVar23 = 3;
      }
      puVar12 = (ulong *)((long)puVar22 + lVar23 + lVar11);
      *(char *)puVar21 = (char)uVar16;
      puVar22 = (ulong *)((long)puVar22 + lVar23);
      do {
        puVar24 = puVar22 + 1;
        *puVar22 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar22 = puVar24;
      } while (puVar24 < puVar12);
    }
    if (uVar9 < 0xf) {
      puVar22 = (ulong *)((long)puVar12 + 2);
      *(ushort *)puVar12 = uVar1;
    }
    else if (iVar4 - 0x13U < 0x7f) {
      *(char *)puVar12 = (char)(iVar4 - 0x13U);
      *(ushort *)((long)puVar12 + 1) = uVar1;
      puVar22 = (ulong *)((long)puVar12 + 3);
    }
    else {
      uVar16 = iVar4 - 0x92;
      *(undefined1 *)puVar12 = 0x7f;
      *(ushort *)((long)puVar12 + 1) = uVar1;
      if (uVar16 < 0xc0) {
        *(char *)((long)puVar12 + 3) = (char)uVar16;
        puVar22 = (ulong *)((long)puVar12 + 4);
      }
      else {
        *(char *)((long)puVar12 + 3) = (char)(uVar16 >> 8) + -0x40;
        *(char *)((long)puVar12 + 4) = (char)uVar16;
        puVar22 = (ulong *)((long)puVar12 + 5);
      }
    }
  }
  puVar7 = __src;
  puVar12 = __src;
  if (puVar17 <= __src) goto LAB_00156a64;
  goto LAB_00156758;
LAB_00156a64:
  uVar16 = (int)((long)param_1 + param_2) - (int)__src;
  if ((int)uVar16 < 1) {
    iVar6 = FUN_0015ed20("v:/devel/projects/oodle2/core/lzb_vfast.inl",0x15c,
                         "Encode_LZB_OneChunk_VeryFast_NoSlide_Sub","cur_lrl > 0");
    if (iVar6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    __n = (size_t)(int)uVar16;
    if ((undefined1 *)((long)param_3 + param_2) <= (undefined1 *)((long)puVar22 + __n))
    goto LAB_00156ab8;
    uVar9 = uVar16 - 0xf;
    if (0xe < (int)uVar16) {
      uVar16 = 0xf;
    }
    if (uVar16 < 10) {
      uVar16 = 9;
    }
    puVar21 = (ushort *)((long)puVar22 + 1);
    *(char *)puVar22 = (char)uVar16;
    if (uVar16 == 0xf) {
      if (uVar9 < 0xc0) {
        lVar15 = 2;
      }
      else {
        puVar21 = (ushort *)((long)puVar22 + 2);
        *(char *)((long)puVar22 + 1) = (char)(uVar9 >> 8) + -0x40;
        lVar15 = 3;
      }
      *(char *)puVar21 = (char)uVar9;
      puVar21 = (ushort *)((long)puVar22 + lVar15);
    }
    memmove(puVar21,__src,__n);
    puVar22 = (ulong *)((long)puVar21 + __n);
  }
  return (long)puVar22 - (long)param_3;
}


