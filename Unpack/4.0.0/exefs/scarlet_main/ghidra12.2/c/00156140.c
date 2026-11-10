/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00156140; name: FUN_00156140
 */


/* WARNING: Control flow encountered bad instruction data */

long FUN_00156140(ulong *param_1,long param_2,ulong *param_3,long *param_4,ulong *param_5)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  uint uVar12;
  ulong *puVar13;
  long lVar14;
  ulong *puVar15;
  int *piVar16;
  size_t __n;
  int iVar17;
  ulong *puVar18;
  byte *pbVar19;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  uint uVar27;
  int iVar28;
  
  puVar9 = (ulong *)((long)param_1 + param_2 + -1);
  if (param_5 <= puVar9) {
    puVar9 = param_5;
  }
  puVar13 = (ulong *)((long)puVar9 - 4);
  if (param_1 < puVar13) {
    puVar15 = (ulong *)param_4[8];
    lVar14 = *param_4;
    piVar4 = (int *)param_4[2];
    uVar12 = ~(-1 << (ulong)(*(uint *)(param_4 + 1) & 0x1f));
    puVar6 = param_1;
    if (puVar15 == param_1) {
      puVar6 = (ulong *)((long)param_1 + 1);
    }
    puVar8 = param_1;
    puVar20 = param_3;
    do {
      iVar23 = 0x23;
      while( true ) {
        iVar28 = (int)*puVar6;
        uVar10 = (ulong)((iVar28 * -0x61c8864f ^ (uint)(iVar28 * -0x61c8864f) >> 0xd) & uVar12);
        uVar21 = (ulong)(iVar28 * 0x5bd1e995 + ((uint)(iVar28 * 0x5bd1e995) >> 0xb) & uVar12);
        iVar17 = (int)((long)puVar6 - (long)puVar15);
        uVar27 = iVar17 - (uint)*(ushort *)(lVar14 + uVar10 * 2);
        uVar1 = (undefined2)((long)puVar6 - (long)puVar15);
        if ((((uVar27 & 0xffff) < 0xfff8) &&
            (piVar16 = (int *)((long)puVar6 - (ulong)(ushort)uVar27),
            (uVar27 & 0xffff) != 0 && iVar28 == *piVar16)) ||
           ((uVar27 = iVar17 - (uint)*(ushort *)(lVar14 + uVar21 * 2), (uVar27 & 0xffff) < 0xfff8 &&
            (piVar16 = (int *)((long)puVar6 - (ulong)(ushort)uVar27),
            (uVar27 & 0xffff) != 0 && iVar28 == *piVar16)))) break;
        iVar17 = iVar23 >> 5;
        iVar23 = iVar23 + 1;
        puVar6 = (ulong *)((long)puVar6 + (long)iVar17);
        *(undefined2 *)(lVar14 + uVar10 * 2) = uVar1;
        *(undefined2 *)(lVar14 + uVar21 * 2) = uVar1;
        if (puVar13 <= puVar6) goto LAB_0015660c;
      }
      *(undefined2 *)(lVar14 + uVar10 * 2) = uVar1;
      puVar11 = (ulong *)((long)puVar6 + 4);
      uVar10 = (ulong)(uVar27 & 0xffff);
      *(undefined2 *)(lVar14 + uVar21 * 2) = uVar1;
      if (puVar11 < puVar13) {
        do {
          if (*puVar11 != *(ulong *)((long)puVar11 - uVar10)) {
            uVar21 = *(ulong *)((long)puVar11 - uVar10) ^ *puVar11;
            uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
            uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
            uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
            uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
            puVar11 = (ulong *)((long)puVar11 +
                               ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3));
            if (puVar9 <= puVar11) {
              puVar11 = puVar9;
            }
            goto joined_r0x001562c8;
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 < puVar13);
      }
      if (puVar9 <= puVar11) {
        puVar11 = puVar9;
      }
joined_r0x001562c8:
      if (puVar11 < puVar13) {
        puVar18 = (ulong *)((long)puVar6 + 1);
        iVar23 = *(int *)puVar18;
        uVar21 = (ulong)((iVar23 * -0x61c8864f ^ (uint)(iVar23 * -0x61c8864f) >> 0xd) & uVar12);
        uVar27 = iVar23 * 0x5bd1e995 + ((uint)(iVar23 * 0x5bd1e995) >> 0xb) & uVar12;
        iVar17 = iVar17 + 1;
        uVar2 = iVar17 - (uint)*(ushort *)(lVar14 + uVar21 * 2);
        if ((uVar2 & 0xffff) < 0xfff8) {
          uVar25 = (ulong)uVar2 & 0xffff;
          piVar26 = (int *)((long)puVar18 - uVar25);
          if ((int)uVar25 == 0 || iVar23 != *piVar26) goto LAB_00156318;
LAB_00156340:
          puVar7 = (ulong *)((long)puVar6 + 5);
          if (puVar7 < puVar13) {
            do {
              if (*puVar7 != *(ulong *)((long)puVar7 - uVar25)) {
                uVar5 = *(ulong *)((long)puVar7 - uVar25) ^ *puVar7;
                uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
                uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                puVar7 = (ulong *)((long)puVar7 +
                                  ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3));
                break;
              }
              puVar7 = puVar7 + 1;
            } while (puVar7 < puVar13);
          }
          if (puVar9 <= puVar7) {
            puVar7 = puVar9;
          }
          if ((ulong *)((long)puVar11 + 3U) <= puVar7) {
            *(short *)(lVar14 + uVar21 * 2) = (short)iVar17;
            *(short *)(lVar14 + (ulong)uVar27 * 2) = (short)iVar17;
            puVar6 = puVar18;
            uVar10 = uVar25;
            puVar11 = puVar7;
            piVar16 = piVar26;
          }
        }
        else {
LAB_00156318:
          uVar2 = iVar17 - (uint)*(ushort *)(lVar14 + (ulong)uVar27 * 2);
          if ((uVar2 & 0xffff) < 0xfff8) {
            uVar25 = (ulong)uVar2 & 0xffff;
            piVar26 = (int *)((long)puVar18 - uVar25);
            if ((int)uVar25 != 0 && iVar23 == *piVar26) goto LAB_00156340;
          }
        }
      }
      if (puVar8 < puVar6) {
        do {
          if (piVar16 <= piVar4) goto LAB_001563e4;
          puVar18 = (ulong *)((long)puVar6 + -1);
          piVar16 = (int *)((long)piVar16 + -1);
          if (*(char *)puVar18 != *(char *)piVar16) goto LAB_001563e4;
          puVar6 = puVar18;
        } while (puVar8 != puVar18);
        puVar6 = puVar8;
      }
LAB_001563e4:
      iVar23 = (int)puVar6 - (int)puVar8;
      lVar22 = (long)iVar23;
      if ((byte *)((long)param_3 + param_2) <= (byte *)((long)puVar20 + lVar22)) break;
      iVar17 = (int)puVar11 - (int)puVar6;
      uVar2 = iVar17 - 4;
      uVar27 = uVar2;
      if (0xe < (int)uVar2) {
        uVar27 = 0xf;
      }
      if ((uint)uVar10 < 8) {
        uVar3 = iVar23 - 0xf;
        iVar28 = iVar23;
        if (0xe < iVar23) {
          iVar28 = 0xf;
        }
        puVar18 = (ulong *)((long)puVar20 + 1);
        *(byte *)puVar20 = (byte)iVar28 | 0xf0;
        if (0xe < iVar23) {
          if (uVar3 < 0xc0) {
            lVar24 = 2;
          }
          else {
            puVar18 = (ulong *)((long)puVar20 + 2);
            lVar24 = 3;
            *(byte *)((long)puVar20 + 1) = (char)(uVar3 >> 8) - 0x40;
          }
          *(byte *)puVar18 = (byte)uVar3;
          puVar18 = (ulong *)((long)puVar20 + lVar24);
        }
        puVar7 = (ulong *)((long)puVar18 + lVar22);
        do {
          puVar20 = puVar18 + 1;
          *puVar18 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar18 = puVar20;
        } while (puVar20 < puVar7);
        puVar20 = (ulong *)((long)puVar7 + 1);
        *(byte *)puVar7 = (char)uVar10 + (char)uVar27 * '\b' + 0x80;
        if (0xe < (int)uVar2) {
          uVar27 = iVar17 - 0x13;
          if (uVar27 < 0xc0) {
            puVar8 = puVar20;
            puVar20 = puVar7;
          }
          else {
            puVar8 = (ulong *)((long)puVar7 + 2);
            *(byte *)puVar20 = (char)(uVar27 >> 8) - 0x40;
          }
          puVar20 = (ulong *)((long)puVar20 + 2);
          *(byte *)puVar8 = (byte)uVar27;
        }
      }
      else {
        uVar1 = (undefined2)uVar10;
        if (iVar23 < 0xf) {
          *(byte *)puVar20 = (byte)iVar23 | (byte)(uVar27 << 4);
          *(ulong *)((long)puVar20 + 1) = *puVar8;
          if (8 < iVar23) {
            *(ulong *)((long)puVar20 + 9) = puVar8[1];
          }
          puVar18 = (ulong *)((long)puVar20 + 1 + lVar22);
        }
        else {
          uVar2 = iVar23 - 0xf;
          pbVar19 = (byte *)((long)puVar20 + 1);
          *(byte *)puVar20 = (byte)(uVar27 << 4) | 0xf;
          if (uVar2 < 0xc0) {
            lVar24 = 2;
          }
          else {
            pbVar19 = (byte *)((long)puVar20 + 2);
            lVar24 = 3;
            *(byte *)((long)puVar20 + 1) = (char)(uVar2 >> 8) - 0x40;
          }
          puVar18 = (ulong *)((long)puVar20 + lVar24 + lVar22);
          *pbVar19 = (byte)uVar2;
          puVar20 = (ulong *)((long)puVar20 + lVar24);
          do {
            puVar7 = puVar20 + 1;
            *puVar20 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar20 = puVar7;
          } while (puVar7 < puVar18);
        }
        if (uVar27 < 0xf) {
          puVar20 = (ulong *)((long)puVar18 + 2);
          *(undefined2 *)puVar18 = uVar1;
        }
        else if (iVar17 - 0x13U < 0x7f) {
          *(byte *)puVar18 = (byte)(iVar17 - 0x13U);
          *(undefined2 *)((long)puVar18 + 1) = uVar1;
          puVar20 = (ulong *)((long)puVar18 + 3);
        }
        else {
          *(byte *)puVar18 = 0x7f;
          uVar27 = iVar17 - 0x92;
          *(undefined2 *)((long)puVar18 + 1) = uVar1;
          if (uVar27 < 0xc0) {
            *(byte *)((long)puVar18 + 3) = (byte)uVar27;
            puVar20 = (ulong *)((long)puVar18 + 4);
          }
          else {
            *(byte *)((long)puVar18 + 3) = (char)(uVar27 >> 8) - 0x40;
            *(byte *)((long)puVar18 + 4) = (byte)uVar27;
            puVar20 = (ulong *)((long)puVar18 + 5);
          }
        }
      }
      puVar8 = puVar11;
      if (puVar13 <= puVar11) goto LAB_0015660c;
      puVar18 = (ulong *)((long)puVar6 + 2);
      puVar6 = puVar11;
      if (puVar18 < puVar11) {
        iVar23 = (int)puVar18 - (int)puVar15;
        do {
          puVar7 = (ulong *)((long)puVar18 + 2);
          uVar27 = (int)*puVar18 * -0x61c8864f;
          *(short *)(lVar14 + (ulong)((uVar27 ^ uVar27 >> 0xd) & uVar12) * 2) = (short)iVar23;
          iVar23 = iVar23 + 2;
          puVar18 = puVar7;
        } while (puVar7 < puVar11);
      }
    } while( true );
  }
LAB_00156660:
  return param_2 + 1;
LAB_0015660c:
  uVar12 = (int)((long)param_1 + param_2) - (int)puVar8;
  if ((int)uVar12 < 1) {
    iVar23 = FUN_0015ed20("v:/devel/projects/oodle2/core/lzb_fast.inl",0x21f,
                          "Encode_LZB_OneChunk_Fast_NoSlide_Sub","cur_lrl > 0");
    if (iVar23 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    __n = (size_t)(int)uVar12;
    if ((byte *)((long)param_3 + param_2) <= (byte *)((long)puVar20 + __n)) goto LAB_00156660;
    uVar27 = uVar12 - 0xf;
    if (0xe < (int)uVar12) {
      uVar12 = 0xf;
    }
    if (uVar12 < 10) {
      uVar12 = 9;
    }
    pbVar19 = (byte *)((long)puVar20 + 1);
    *(byte *)puVar20 = (byte)uVar12;
    if (uVar12 == 0xf) {
      if (uVar27 < 0xc0) {
        lVar14 = 2;
      }
      else {
        pbVar19 = (byte *)((long)puVar20 + 2);
        *(byte *)((long)puVar20 + 1) = (char)(uVar27 >> 8) - 0x40;
        lVar14 = 3;
      }
      *pbVar19 = (byte)uVar27;
      pbVar19 = (byte *)((long)puVar20 + lVar14);
    }
    memmove(pbVar19,puVar8,__n);
    puVar20 = (ulong *)(pbVar19 + __n);
  }
  return (long)puVar20 - (long)param_3;
}


