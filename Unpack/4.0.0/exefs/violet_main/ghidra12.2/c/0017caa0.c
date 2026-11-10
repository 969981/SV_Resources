/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0017caa0; name: FUN_0017caa0
 */


/* WARNING: Removing unreachable block (ram,0x0017cf3c) */

void FUN_0017caa0(long *param_1,int param_2,int *param_3,uint param_4,int param_5)

{
  uint *puVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  long lVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  byte *pbVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  ulong uVar27;
  int iVar28;
  byte local_f10 [256];
  ulong *local_e10;
  long lStack_e08;
  ulong local_e00;
  long lStack_df8;
  undefined1 auStack_dec [256];
  undefined1 auStack_cec [256];
  undefined1 auStack_bec [252];
  uint uStack_af0;
  uint local_aec [257];
  uint local_6e8 [256];
  uint local_2e8 [32];
  int aiStack_268 [130];
  
  lVar20 = param_1[2];
  lVar16 = param_1[3];
  lStack_e08 = param_1[1];
  uVar19 = lVar20 << (lVar16 + 1U & 0x3f);
  puVar13 = (ulong *)(*param_1 + ((long)(0x3fU - lVar16) >> 3));
  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
  uVar15 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
  uVar19 = (0x3fU - lVar16 & 0xfffffffffffffff8) + lVar16;
  *(ulong *)*param_1 = uVar15 >> 0x20 | uVar15 << 0x20;
  if (7 < param_5) {
    memset(aiStack_268,0,0x200);
    if ((int)param_4 < 1) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      do {
        if (param_3[uVar15] != 0) break;
        uVar15 = uVar15 + 1;
      } while (param_4 != uVar15);
    }
    uVar17 = lVar20 << 1 | 1;
    uVar14 = (uint)uVar15;
    local_aec[0] = uVar14;
    if ((int)uVar14 < (int)param_4) {
      uVar21 = 0;
      uVar24 = 0;
      iVar28 = 0;
      iVar4 = 6;
      iVar10 = 1;
      uVar15 = uVar15 & 0xffffffff;
      if ((int)uVar14 < (int)param_4) goto LAB_0017cde0;
      do {
        uVar18 = uVar15;
        uVar27 = uVar15 & 0xffffffff;
LAB_0017ce80:
        uVar15 = uVar27;
        iVar7 = (int)uVar15;
        local_aec[iVar10] = iVar7 - (int)uVar18;
        iVar6 = iVar10 + 1;
        if (iVar7 < (int)param_4) {
          uVar15 = (ulong)iVar7;
          do {
            if (param_3[uVar15] != 0) break;
            uVar15 = uVar15 + 1;
          } while (param_4 != (uint)uVar15);
        }
        uVar14 = (uint)uVar15;
        iVar10 = iVar10 + 2;
        local_aec[iVar6] = uVar14 - iVar7;
        uVar25 = uVar14 - iVar7;
        if ((int)param_4 <= (int)uVar14) goto LAB_0017cec8;
      } while ((int)param_4 <= (int)uVar14);
LAB_0017cde0:
      iVar6 = uVar24 + param_4;
      uVar27 = uVar15 & 0xffffffff;
      iVar7 = param_3[(int)uVar15];
      while( true ) {
        uVar18 = uVar15;
        if (iVar7 == 0) break;
        uVar14 = iVar7 - 1;
        iVar7 = iVar4 >> 2;
        uVar3 = iVar7 * 2;
        uVar25 = uVar14;
        if ((int)uVar14 <= (int)uVar3) {
          uVar25 = (uVar14 - iVar7) * 2 ^ (int)(uVar14 - iVar7) >> 0x1f;
        }
        local_6e8[(int)uVar24] = uVar25;
        if (uVar25 < 0x80) {
          aiStack_268[uVar25] = aiStack_268[uVar25] + 1;
        }
        else {
          local_2e8[(int)uVar21] = uVar25;
          uVar21 = uVar21 + 1;
        }
        uVar25 = (int)uVar27 + 1;
        uVar27 = (ulong)uVar25;
        if ((int)uVar3 <= (int)uVar14) {
          uVar14 = uVar3;
        }
        iVar28 = iVar28 + 1;
        iVar4 = uVar14 + (iVar4 - iVar7);
        if (param_4 == uVar25) {
          uVar24 = iVar6 - (int)uVar15;
          break;
        }
        iVar7 = param_3[(int)uVar25];
        uVar24 = uVar24 + 1;
      }
      goto LAB_0017ce80;
    }
    iVar28 = 0;
    uVar24 = 0;
    uVar21 = 0;
    iVar10 = 1;
    uVar25 = uVar14;
LAB_0017cec8:
    local_aec[iVar10 + -1] = (uVar25 - uVar14) + 0x100;
    uVar15 = uVar17 << (uVar19 & 0x3f);
    puVar2 = (ulong *)((long)puVar13 + ((long)(0x40 - uVar19) >> 3));
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    *puVar13 = uVar15 >> 0x20 | uVar15 << 0x20;
    lVar20 = (uVar19 - 1) + (0x40 - uVar19 & 0xfffffffffffffff8);
    iVar4 = FUN_0015ecc0(aiStack_268,0x80,0);
    if ((int)uVar21 < 1) {
      iVar7 = FUN_0015ecc0(aiStack_268,0x80,1);
      iVar6 = iVar7;
      if (iVar4 <= iVar7) {
        iVar6 = iVar4;
      }
      iVar5 = FUN_0015ecc0(aiStack_268,0x80,2);
      iVar9 = iVar5;
      if (iVar6 <= iVar5) {
        iVar9 = iVar6;
      }
      uVar14 = 2;
      if (iVar6 <= iVar5) {
        uVar14 = (uint)(iVar4 == 0x7fffffff || iVar7 < iVar4);
      }
      iVar6 = FUN_0015ecc0(aiStack_268,0x80,3);
      iVar4 = iVar6;
      if (iVar9 <= iVar6) {
        iVar4 = iVar9;
      }
      uVar21 = 3;
      if (iVar9 <= iVar6) {
        uVar21 = uVar14;
      }
      iVar7 = FUN_0015ecc0(aiStack_268,0x80,4);
      iVar6 = iVar7;
      if (iVar4 <= iVar7) {
        iVar6 = iVar4;
      }
      uVar14 = 4;
      if (iVar4 <= iVar7) {
        uVar14 = uVar21;
      }
      iVar7 = FUN_0015ecc0(aiStack_268,0x80,5);
      iVar4 = iVar7;
      if (iVar6 <= iVar7) {
        iVar4 = iVar6;
      }
      uVar21 = 5;
      if (iVar6 <= iVar7) {
        uVar21 = uVar14;
      }
      iVar7 = FUN_0015ecc0(aiStack_268,0x80,6);
      iVar6 = iVar7;
      if (iVar4 <= iVar7) {
        iVar6 = iVar4;
      }
      uVar14 = 6;
      if (iVar4 <= iVar7) {
        uVar14 = uVar21;
      }
      iVar4 = FUN_0015ecc0(aiStack_268,0x80,7);
    }
    else {
      uVar19 = (ulong)uVar21;
      if (uVar21 == 1) {
        lVar12 = 0;
LAB_0017d074:
        iVar4 = iVar4 + (int)LZCOUNT(local_2e8[lVar12] + 1) * -2 + 0x3f;
      }
      else {
        lVar16 = 0;
        do {
          lVar12 = lVar16 + 2;
          iVar4 = iVar4 + (int)LZCOUNT(local_2e8[lVar16] + 1) * -2 +
                  (int)LZCOUNT(local_2e8[lVar16 + 1] + 1) * -2 + 0x7e;
          lVar16 = lVar12;
        } while (uVar19 - (uVar19 & 1) != lVar12);
        if ((uVar21 & 1) != 0) goto LAB_0017d074;
      }
      iVar6 = FUN_0015ecc0(aiStack_268,0x80,1);
      puVar11 = local_2e8;
      uVar15 = uVar19;
      do {
        iVar6 = iVar6 + (int)LZCOUNT((*puVar11 >> 1) + 1) * -2 + 0x40;
        uVar15 = uVar15 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar15 != 0);
      iVar7 = FUN_0015ecc0(aiStack_268,0x80,2);
      puVar11 = local_2e8;
      uVar15 = uVar19;
      do {
        iVar7 = iVar7 + (int)LZCOUNT((*puVar11 >> 2) + 1) * -2 + 0x41;
        uVar15 = uVar15 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar15 != 0);
      iVar9 = iVar6;
      if (iVar4 <= iVar6) {
        iVar9 = iVar4;
      }
      iVar5 = iVar7;
      if (iVar9 <= iVar7) {
        iVar5 = iVar9;
      }
      iVar8 = FUN_0015ecc0(aiStack_268,0x80,3);
      puVar11 = local_2e8;
      uVar15 = uVar19;
      do {
        iVar8 = iVar8 + (int)LZCOUNT((*puVar11 >> 3) + 1) * -2 + 0x42;
        uVar15 = uVar15 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar15 != 0);
      uVar14 = 2;
      if (iVar9 <= iVar7) {
        uVar14 = (uint)(iVar4 == 0x7fffffff || iVar6 < iVar4);
      }
      iVar4 = iVar8;
      if (iVar5 <= iVar8) {
        iVar4 = iVar5;
      }
      iVar6 = FUN_0015ecc0(aiStack_268,0x80,4);
      puVar11 = local_2e8;
      uVar15 = uVar19;
      do {
        iVar6 = iVar6 + (int)LZCOUNT((*puVar11 >> 4) + 1) * -2 + 0x43;
        uVar15 = uVar15 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar15 != 0);
      uVar21 = 3;
      if (iVar5 <= iVar8) {
        uVar21 = uVar14;
      }
      iVar7 = iVar6;
      if (iVar4 <= iVar6) {
        iVar7 = iVar4;
      }
      iVar9 = FUN_0015ecc0(aiStack_268,0x80,5);
      puVar11 = local_2e8;
      uVar15 = uVar19;
      do {
        iVar9 = iVar9 + (int)LZCOUNT((*puVar11 >> 5) + 1) * -2 + 0x44;
        uVar15 = uVar15 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar15 != 0);
      uVar14 = 4;
      if (iVar4 <= iVar6) {
        uVar14 = uVar21;
      }
      iVar5 = iVar9;
      if (iVar7 <= iVar9) {
        iVar5 = iVar7;
      }
      iVar8 = FUN_0015ecc0(aiStack_268,0x80,6);
      puVar11 = local_2e8;
      uVar15 = uVar19;
      do {
        iVar8 = iVar8 + (int)LZCOUNT((*puVar11 >> 6) + 1) * -2 + 0x45;
        uVar15 = uVar15 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar15 != 0);
      uVar21 = 5;
      if (iVar7 <= iVar9) {
        uVar21 = uVar14;
      }
      iVar6 = iVar8;
      if (iVar5 <= iVar8) {
        iVar6 = iVar5;
      }
      iVar4 = FUN_0015ecc0(aiStack_268,0x80,7);
      puVar11 = local_2e8;
      do {
        iVar4 = iVar4 + (int)LZCOUNT((*puVar11 >> 7) + 1) * -2 + 0x46;
        uVar19 = uVar19 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar19 != 0);
      uVar14 = 6;
      if (iVar5 <= iVar8) {
        uVar14 = uVar21;
      }
    }
    uVar21 = 7;
    if (iVar6 <= iVar4) {
      uVar21 = uVar14;
    }
    iVar10 = FUN_001790b0(auStack_bec,auStack_cec,auStack_dec,iVar28,local_aec,iVar10);
    local_e00 = (long)(iVar28 + -1) | ((long)(int)uVar21 | uVar17 << 3) << 8;
    uVar19 = local_e00 << (lVar20 - 10U & 0x3f);
    uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    *puVar2 = uVar19 >> 0x20 | uVar19 << 0x20;
    lStack_df8 = lVar20 + (0x4aU - lVar20 & 0xfffffffffffffff8) + -0xb;
    local_e10 = (ulong *)((long)puVar2 + ((long)(0x4aU - lVar20) >> 3));
    FUN_00179160(&local_e10,iVar10,iVar28);
    if (0 < (int)uVar24) {
      uVar19 = (ulong)uVar24;
      pbVar22 = local_f10;
      puVar11 = local_6e8;
      do {
        uVar14 = *puVar11 + (1 << (ulong)uVar21);
        iVar28 = 0x1f - (int)LZCOUNT(uVar14 >> (ulong)uVar21);
        *pbVar22 = (byte)iVar28;
        uVar19 = uVar19 - 1;
        *puVar11 = uVar14 & (-1 << (ulong)(iVar28 + uVar21 & 0x1f) ^ 0xffffffffU);
        pbVar22 = pbVar22 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar19 != 0);
    }
    FUN_00178c30(&local_e10,local_f10,(long)(int)uVar24);
    FUN_00178c30(&local_e10,auStack_bec,(long)iVar10);
    FUN_00178bb0(&local_e10,auStack_cec,auStack_dec,(long)iVar10);
    if (0 < (int)uVar24) {
      uVar19 = (ulong)uVar24;
      puVar11 = local_6e8;
      pbVar22 = local_f10;
      uVar14 = uVar21 + local_f10[0];
      if (uVar14 != 0) goto LAB_0017d418;
      while (uVar19 = uVar19 - 1, uVar19 != 0) {
        while( true ) {
          pbVar22 = pbVar22 + 1;
          puVar11 = puVar11 + 1;
          uVar14 = uVar21 + *pbVar22;
          if (uVar14 == 0) break;
LAB_0017d418:
          uVar15 = local_e00 << (lStack_df8 + 1U & 0x3f);
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          *local_e10 = uVar15 >> 0x20 | uVar15 << 0x20;
          local_e10 = (ulong *)((long)local_e10 + ((long)(0x3fU - lStack_df8) >> 3));
          lStack_df8 = ((0x3fU - lStack_df8 & 0xfffffffffffffff8) + lStack_df8) - (ulong)uVar14;
          local_e00 = local_e00 << ((ulong)uVar14 & 0x3f) | (ulong)*puVar11;
          uVar19 = uVar19 - 1;
          if (uVar19 == 0) goto LAB_0017d458;
        }
      }
    }
LAB_0017d458:
    uVar19 = local_e00 << (lStack_df8 + 1U & 0x3f);
    uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    *local_e10 = uVar19 >> 0x20 | uVar19 << 0x20;
    puVar13 = (ulong *)((long)local_e10 + ((long)(0x3fU - lStack_df8) >> 3));
    lStack_df8 = (0x3fU - lStack_df8 & 0xfffffffffffffff8) + lStack_df8;
    goto LAB_0017d47c;
  }
  uVar15 = (lVar20 << 1) << (uVar19 & 0x3f);
  uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
  *puVar13 = uVar15 >> 0x20 | uVar15 << 0x20;
  if ((int)param_4 < 1) {
    uVar17 = 0x40 - uVar19;
  }
  else {
    lVar16 = 0;
    uVar15 = 0;
    iVar10 = *param_3;
    while( true ) {
      if (iVar10 != 0) {
        local_aec[(int)uVar15] = (uint)lVar16 | iVar10 << 0x10;
        uVar15 = (ulong)((int)uVar15 + 1);
      }
      if ((ulong)param_4 == lVar16 + 1U) break;
      lVar16 = lVar16 + 1;
      iVar10 = param_3[lVar16];
    }
    uVar17 = 0x40 - uVar19;
    uVar15 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
    if (uVar15 != 0) {
      puVar1 = (uint *)((long)local_aec + uVar15);
      puVar11 = local_aec + 1;
      if (puVar11 != puVar1) {
        uVar14 = local_aec[1];
        do {
          puVar23 = puVar11;
          if (local_aec < puVar11) {
            puVar26 = puVar11;
            do {
              puVar23 = puVar26 + -1;
              if (*puVar23 <= uVar14) {
                puVar23 = puVar26;
                break;
              }
              *puVar26 = *puVar23;
              puVar26 = puVar23;
            } while (local_aec < puVar23);
          }
          puVar11 = puVar11 + 1;
          *puVar23 = uVar14;
          if (puVar11 == puVar1) break;
          uVar14 = *puVar11;
        } while( true );
      }
    }
  }
  puVar13 = (ulong *)((long)puVar13 + ((long)uVar17 >> 3));
  uVar14 = param_5 - 1;
  if ((int)uVar14 < 1) {
LAB_0017cc98:
    uVar21 = 1;
  }
  else {
    uVar21 = 0;
    uVar15 = (ulong)uVar14;
    puVar11 = local_aec;
    uVar24 = 0;
    do {
      uVar25 = *puVar11;
      iVar10 = (uVar25 >> 0x10) - uVar24;
      uVar24 = 0;
      if (iVar10 != 0) {
        uVar24 = 0x20 - (int)LZCOUNT(iVar10);
      }
      if ((int)uVar21 <= (int)uVar24) {
        uVar21 = uVar24;
      }
      uVar15 = uVar15 - 1;
      puVar11 = puVar11 + 1;
      uVar24 = uVar25 >> 0x10;
    } while (uVar15 != 0);
    if (uVar21 == 0) goto LAB_0017cc98;
  }
  uVar24 = 0;
  if (param_2 != 0) {
    uVar24 = 0x20 - (int)LZCOUNT(param_2);
  }
  uVar15 = ((long)(param_5 + -2) | lVar20 << 4) << ((ulong)uVar24 & 0x3f) | (long)(int)uVar21;
  lVar20 = (uVar19 - uVar24) + (uVar17 & 0xfffffffffffffff8) + -4;
  if (0 < (int)uVar14) {
    uVar19 = (ulong)uVar14;
    puVar11 = local_aec;
    uVar24 = 0;
    do {
      uVar17 = uVar15 << (lVar20 + 1U & 0x3f);
      uVar25 = *puVar11;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      *puVar13 = uVar17 >> 0x20 | uVar17 << 0x20;
      puVar13 = (ulong *)((long)puVar13 + ((long)(0x3fU - lVar20) >> 3));
      uVar15 = ((ulong)(byte)*puVar11 | uVar15 << 8) << ((ulong)uVar21 & 0x3f) |
               (ulong)((uVar25 >> 0x10) - uVar24);
      lVar20 = (-8 - (long)(int)uVar21) + lVar20 + (0x3fU - lVar20 & 0xfffffffffffffff8);
      uVar19 = uVar19 - 1;
      puVar11 = puVar11 + 1;
      uVar24 = uVar25 >> 0x10;
    } while (uVar19 != 0);
  }
  uVar19 = uVar15 << (lVar20 + 1U & 0x3f);
  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
  *puVar13 = uVar19 >> 0x20 | uVar19 << 0x20;
  puVar13 = (ulong *)((long)puVar13 + ((long)(0x3fU - lVar20) >> 3));
  local_e00 = (ulong)*(byte *)((long)local_aec +
                              (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2))
              | uVar15 << 8;
  lStack_df8 = lVar20 + (0x3fU - lVar20 & 0xfffffffffffffff8) + -8;
LAB_0017d47c:
  uVar19 = local_e00 << (lStack_df8 + 1U & 0x3f);
  uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
  uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
  *puVar13 = uVar19 >> 0x20 | uVar19 << 0x20;
  param_1[2] = local_e00;
  param_1[3] = (0x3fU - lStack_df8 & 0xfffffffffffffff8) + lStack_df8;
  *param_1 = (long)puVar13 + ((long)(0x3fU - lStack_df8) >> 3);
  param_1[1] = lStack_e08;
  return;
}


