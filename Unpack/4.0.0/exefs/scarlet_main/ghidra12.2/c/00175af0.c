/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00175af0; name: FUN_00175af0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00175af0(uint *param_1,long param_2,ulong **param_3,ulong param_4,ulong *param_5,
                 long param_6)

{
  ulong **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  ulong *__src;
  byte bVar5;
  long lVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  ulong **ppuVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ushort *puVar13;
  ulong **ppuVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  size_t __n;
  size_t sVar19;
  ulong **ppuVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  undefined8 uVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *local_290 [52];
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  ushort auStack_6e [7];
  
  if ((param_2 < 2) || ((long)param_4 < 1)) {
    if (param_2 == 1) {
      memset(param_3,(uint)(byte)*param_1,param_4);
      return 1;
    }
    return -1;
  }
  bVar5 = (byte)*param_1;
  puVar8 = (ushort *)((long)param_1 + param_2);
  __src = (ulong *)((long)param_1 + 1);
  if (bVar5 == 0) goto LAB_00175c70;
  lVar18 = param_6 - (long)param_5;
  local_f0 = 0;
  local_290[0] = param_5;
  if ((char)bVar5 < '\0') {
    bVar5 = bVar5 >> 4 & 7;
    if (bVar5 == 0) {
      uVar17 = ((ulong)(ushort)*param_1 & 0xf) << 8 | (ulong)(ushort)((ushort)*param_1 >> 8);
      if (lVar18 < (long)uVar17) {
        return -1;
      }
      puVar7 = (ushort *)((long)param_1 + 2 + uVar17);
      if (puVar8 < puVar7) {
        return -1;
      }
      memmove(param_5,(void *)((long)param_1 + 2),uVar17);
      lVar6 = (long)puVar7 - (long)param_1;
      local_f0 = uVar17;
    }
    else {
LAB_00175c18:
      lVar6 = FUN_00175150(bVar5,local_290,param_1,puVar8,&local_f0,lVar18,param_5,param_6);
    }
joined_r0x00175c08:
    if ((lVar6 < 1) || (sVar19 = param_2 - lVar6, lVar18 < (long)(local_f0 + sVar19))) {
      return -1;
    }
  }
  else {
    if (3 < param_2) {
      bVar5 = bVar5 >> 4;
      if (bVar5 != 0) goto LAB_00175c18;
      uVar9 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      uVar17 = (ulong)((uVar9 >> 0x10 | uVar9 << 0x10) >> 8 & 0x3ffff);
      if (param_2 + -3 < (long)uVar17) {
        return -1;
      }
      if ((uVar9 & 0xffff) >> 10 != 0) {
        return -1;
      }
      if (lVar18 < (long)uVar17) {
        return -1;
      }
      memmove(param_5,(void *)((long)param_1 + 3),uVar17);
      lVar6 = (long)param_1 + 3 + (uVar17 - (long)param_1);
      local_f0 = uVar17;
      goto joined_r0x00175c08;
    }
    if (param_2 != 3) {
      return -1;
    }
    if ((bVar5 != 0 || *(char *)((long)param_1 + 1) != '\0') || *(char *)((long)param_1 + 2) != '\0'
       ) {
      FUN_0015c3d0();
      if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
        (**(code **)PTR_PTR_047cb868)
                  (0,"v:/devel/projects/oodle2/core/newlz_arrays.inl",0x78,
                   "OODLE ERROR : corruption : header == 0\n");
      }
      FUN_0015c3f0();
      return -1;
    }
    local_290[0] = (ulong *)0x0;
    lVar6 = 3;
    local_f0 = 0;
    sVar19 = 0;
    if (lVar18 < 0) {
      return -1;
    }
  }
  memcpy((undefined1 *)((long)local_290[0] + local_f0),(void *)((long)param_1 + lVar6),sVar19);
  puVar8 = (ushort *)((long)local_290[0] + sVar19 + local_f0);
  __src = local_290[0];
LAB_00175c70:
  lVar18 = 0;
  if (0x126 < param_4) {
    lVar18 = param_4 - 0x127;
  }
  puVar25 = (ulong *)0x0;
  puVar26 = (ulong *)0x0;
  ppuVar1 = (ulong **)((long)param_3 + param_4);
  ppuVar10 = param_3;
  if ((param_3 < (ulong **)((long)param_3 + lVar18)) && (0x70 < (long)puVar8 - (long)__src)) {
    puVar25 = (ulong *)0x0;
    puVar26 = (ulong *)0x0;
    do {
      bVar5 = (byte)*(ushort *)((long)puVar8 - 1U);
      puVar7 = puVar8;
      if (bVar5 - 1 < 0x2f) {
LAB_00175d94:
        if (bVar5 < 0x10) {
LAB_00175e14:
          if (bVar5 == 1) {
            uVar4 = (undefined1)*__src;
            puVar25 = (ulong *)CONCAT17(uVar4,CONCAT16(uVar4,CONCAT15(uVar4,CONCAT14(uVar4,CONCAT13(
                                                  uVar4,CONCAT12(uVar4,CONCAT11(uVar4,uVar4)))))));
            puVar26 = (ulong *)CONCAT17(uVar4,CONCAT16(uVar4,CONCAT15(uVar4,CONCAT14(uVar4,CONCAT13(
                                                  uVar4,CONCAT12(uVar4,CONCAT11(uVar4,uVar4)))))));
            __src = (ulong *)((long)__src + 1);
            puVar8 = (ushort *)((long)puVar7 - 1);
          }
          else {
            puVar8 = puVar7 + -1;
            if (bVar5 < 9) {
              uVar9 = (uint)*puVar8;
              uVar17 = (ulong)(uVar9 * 0x40 - 0x7fc0);
              if ((long)puVar8 - (long)__src < (long)uVar17) {
                return -1;
              }
              if ((long)ppuVar1 - (long)ppuVar10 < (long)uVar17) {
                return -1;
              }
              puVar23 = (ulong *)*__src;
              uVar12 = (ulong)(uint)-(int)ppuVar10 & 0xf;
              puVar2 = (undefined8 *)((long)__src + uVar12);
              puVar3 = (undefined8 *)((long)ppuVar10 + uVar12);
              uVar16 = uVar9 - 0x200;
              ppuVar10[1] = (ulong *)__src[1];
              *ppuVar10 = puVar23;
              uVar24 = *puVar2;
              puVar3[1] = puVar2[1];
              *puVar3 = uVar24;
              uVar24 = puVar2[2];
              puVar3[3] = puVar2[3];
              puVar3[2] = uVar24;
              uVar24 = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[4] = uVar24;
              if (uVar16 != 0) {
                puVar15 = puVar3;
                puVar11 = puVar2;
                if ((uVar16 & 1) != 0) {
                  uVar24 = puVar2[6];
                  uVar16 = uVar9 - 0x201;
                  puVar3[7] = puVar2[7];
                  puVar3[6] = uVar24;
                  puVar11 = puVar2 + 8;
                  uVar24 = *puVar11;
                  puVar15 = puVar3 + 8;
                  puVar3[9] = puVar2[9];
                  *puVar15 = uVar24;
                  uVar24 = puVar2[10];
                  puVar3[0xb] = puVar2[0xb];
                  puVar3[10] = uVar24;
                  uVar24 = puVar2[0xc];
                  puVar3[0xd] = puVar2[0xd];
                  puVar3[0xc] = uVar24;
                }
                if (uVar9 != 0x201) {
                  puVar11 = puVar11 + 10;
                  puVar15 = puVar15 + 10;
                  do {
                    uVar24 = puVar11[-4];
                    puVar15[-3] = puVar11[-3];
                    puVar15[-4] = uVar24;
                    uVar24 = puVar11[-2];
                    puVar15[-1] = puVar11[-1];
                    puVar15[-2] = uVar24;
                    uVar24 = *puVar11;
                    uVar16 = uVar16 - 2;
                    puVar15[1] = puVar11[1];
                    *puVar15 = uVar24;
                    uVar24 = puVar11[2];
                    puVar15[3] = puVar11[3];
                    puVar15[2] = uVar24;
                    uVar24 = puVar11[4];
                    puVar15[5] = puVar11[5];
                    puVar15[4] = uVar24;
                    uVar24 = puVar11[6];
                    puVar15[7] = puVar11[7];
                    puVar15[6] = uVar24;
                    uVar24 = puVar11[8];
                    puVar15[9] = puVar11[9];
                    puVar15[8] = uVar24;
                    puVar2 = puVar11 + 0xb;
                    uVar24 = puVar11[10];
                    puVar11 = puVar11 + 0x10;
                    puVar15[0xb] = *puVar2;
                    puVar15[10] = uVar24;
                    puVar15 = puVar15 + 0x10;
                  } while (uVar16 != 0);
                }
              }
              __src = (ulong *)((long)__src + uVar17);
              puVar23 = (ulong *)__src[-2];
              ppuVar10 = (ulong **)((long)ppuVar10 + uVar17);
              ppuVar10[-1] = (ulong *)__src[-1];
              ppuVar10[-2] = puVar23;
            }
            else {
              uVar17 = (ulong)((uint)*puVar8 * 0x80 - 0x47f80);
              if ((long)ppuVar1 - (long)ppuVar10 < (long)uVar17) {
                return -1;
              }
              ppuVar20 = (ulong **)((long)ppuVar10 + uVar17);
              ppuVar10[1] = puVar26;
              *ppuVar10 = puVar25;
              ppuVar14 = (ulong **)((long)ppuVar10 + 0xfU & 0xfffffffffffffff0);
              ppuVar20[-7] = puVar26;
              ppuVar20[-8] = puVar25;
              ppuVar20[-1] = puVar26;
              ppuVar20[-2] = puVar25;
              ppuVar20[-5] = puVar26;
              ppuVar20[-6] = puVar25;
              ppuVar20[-3] = puVar26;
              ppuVar20[-4] = puVar25;
              do {
                ppuVar14[1] = puVar26;
                *ppuVar14 = puVar25;
                ppuVar14[3] = puVar26;
                ppuVar14[2] = puVar25;
                ppuVar14[5] = puVar26;
                ppuVar14[4] = puVar25;
                ppuVar14[7] = puVar26;
                ppuVar14[6] = puVar25;
                ppuVar14 = ppuVar14 + 8;
                ppuVar10 = ppuVar20;
              } while (ppuVar14 < ppuVar20 + -8);
            }
          }
        }
        else {
LAB_00175d9c:
          puVar8 = puVar7 + -1;
          uVar9 = *puVar8 - 0x1000;
          puVar22 = (ulong *)*__src;
          puVar23 = (ulong *)((long)ppuVar10 + ((ulong)uVar9 & 0x3f));
          ppuVar10[1] = (ulong *)__src[1];
          *ppuVar10 = puVar22;
          puVar22 = (ulong *)__src[2];
          ppuVar10[3] = (ulong *)__src[3];
          ppuVar10[2] = puVar22;
          puVar22 = (ulong *)__src[4];
          ppuVar10[5] = (ulong *)__src[5];
          ppuVar10[4] = puVar22;
          puVar22 = __src + 7;
          puVar21 = (ulong *)__src[6];
          __src = (ulong *)((long)__src + ((ulong)uVar9 & 0x3f));
          ppuVar10[7] = (ulong *)*puVar22;
          ppuVar10[6] = puVar21;
          puVar23[1] = (ulong)puVar26;
          *puVar23 = (ulong)puVar25;
          puVar23[3] = (ulong)puVar26;
          puVar23[2] = (ulong)puVar25;
          puVar23[5] = (ulong)puVar26;
          puVar23[4] = (ulong)puVar25;
          if (0xc3f < uVar9) {
            uVar17 = (long)puVar23 + 0xfU & 0xfffffffffffffff0;
            *(ulong **)(uVar17 + 0x28) = puVar26;
            *(ulong **)(uVar17 + 0x20) = puVar25;
            *(ulong **)(uVar17 + 0x38) = puVar26;
            *(ulong **)(uVar17 + 0x30) = puVar25;
            *(ulong **)(uVar17 + 0x48) = puVar26;
            *(ulong **)(uVar17 + 0x40) = puVar25;
            *(ulong **)(uVar17 + 0x58) = puVar26;
            *(ulong **)(uVar17 + 0x50) = puVar25;
            *(ulong **)(uVar17 + 0x68) = puVar26;
            *(ulong **)(uVar17 + 0x60) = puVar25;
            *(ulong **)(uVar17 + 0x78) = puVar26;
            *(ulong **)(uVar17 + 0x70) = puVar25;
          }
          ppuVar10 = (ulong **)((long)puVar23 + (ulong)(uVar9 >> 6));
        }
      }
      else {
        puVar22 = __src + 1;
        puVar21 = (ulong *)*__src;
        uVar17 = (ulong)(0xf - bVar5) & 0xf;
        puVar23 = (ulong *)((long)ppuVar10 + uVar17);
        __src = (ulong *)((long)__src + uVar17);
        ppuVar10[1] = (ulong *)*puVar22;
        *ppuVar10 = puVar21;
        puVar23[1] = (ulong)puVar26;
        *puVar23 = (ulong)puVar25;
        ppuVar10 = (ulong **)((long)puVar23 + (ulong)(bVar5 >> 4));
        puVar7 = puVar8 + -1;
        bVar5 = (byte)*puVar7;
        puVar13 = (ushort *)((long)puVar8 - 1U);
        if (bVar5 - 1 < 0x2f) {
LAB_00175d90:
          puVar7 = puVar13;
          goto LAB_00175d94;
        }
        puVar22 = __src + 1;
        puVar21 = (ulong *)*__src;
        uVar17 = (ulong)(0xf - bVar5) & 0xf;
        puVar23 = (ulong *)((long)ppuVar10 + uVar17);
        __src = (ulong *)((long)__src + uVar17);
        ppuVar10[1] = (ulong *)*puVar22;
        *ppuVar10 = puVar21;
        puVar23[1] = (ulong)puVar26;
        *puVar23 = (ulong)puVar25;
        ppuVar10 = (ulong **)((long)puVar23 + (ulong)(bVar5 >> 4));
        puVar13 = (ushort *)((long)puVar8 - 3);
        bVar5 = (byte)*puVar13;
        if (bVar5 - 1 < 0x2f) {
          if (bVar5 < 0x10) goto LAB_00175e14;
          goto LAB_00175d9c;
        }
        puVar22 = __src + 1;
        puVar21 = (ulong *)*__src;
        uVar17 = (ulong)(0xf - bVar5) & 0xf;
        puVar23 = (ulong *)((long)ppuVar10 + uVar17);
        __src = (ulong *)((long)__src + uVar17);
        ppuVar10[1] = (ulong *)*puVar22;
        *ppuVar10 = puVar21;
        puVar23[1] = (ulong)puVar26;
        *puVar23 = (ulong)puVar25;
        ppuVar10 = (ulong **)((long)puVar23 + (ulong)(bVar5 >> 4));
        puVar8 = puVar8 + -2;
        bVar5 = (byte)*puVar8;
        if (bVar5 - 1 < 0x2f) goto LAB_00175d90;
        puVar22 = __src + 1;
        puVar21 = (ulong *)*__src;
        uVar17 = (ulong)(0xf - bVar5) & 0xf;
        puVar23 = (ulong *)((long)ppuVar10 + uVar17);
        __src = (ulong *)((long)__src + uVar17);
        ppuVar10[1] = (ulong *)*puVar22;
        *ppuVar10 = puVar21;
        puVar23[1] = (ulong)puVar26;
        *puVar23 = (ulong)puVar25;
        ppuVar10 = (ulong **)((long)puVar23 + (ulong)(bVar5 >> 4));
      }
    } while ((ppuVar10 < (ulong **)((long)param_3 + lVar18)) && (0x70 < (long)puVar8 - (long)__src))
    ;
  }
  local_f0 = 0;
  uStack_e8 = 0;
  lVar18 = 0;
  if (0xcd < param_4) {
    lVar18 = param_4 - 0xce;
  }
  lVar6 = 0;
  sVar19 = 0;
  param_3 = (ulong **)((long)param_3 + lVar18);
  local_70 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  ppuVar14 = ppuVar1;
LAB_00175fe0:
  __n = (long)puVar8 - (long)__src;
  do {
    puVar7 = puVar8;
    if (0x40 < (long)__n) goto LAB_0017605c;
LAB_00176028:
    if (lVar6 != 0) {
      return -1;
    }
    memcpy(&local_f0,__src,__n);
    memcpy((void *)((long)auStack_6e - __n),__src,__n);
    lVar6 = 0x82 - __n;
    __src = &local_f0;
    puVar7 = auStack_6e;
LAB_0017605c:
    if (param_3 <= ppuVar10) {
      if (ppuVar10 == ppuVar14) {
        if ((long)puVar7 - (long)__src != lVar6) {
          return -1;
        }
        if (sVar19 == 0) {
          return param_2;
        }
        memcpy((void *)((long)ppuVar1 - sVar19),local_290,sVar19);
        return param_2;
      }
      if (sVar19 != 0) {
        return -1;
      }
      sVar19 = (long)ppuVar14 - (long)ppuVar10;
      ppuVar10 = local_290;
      param_3 = (ulong **)((long)local_290 + sVar19);
      ppuVar14 = param_3;
    }
    puVar8 = (ushort *)((long)puVar7 - 1);
    bVar5 = (byte)*puVar8;
    uVar9 = (uint)bVar5;
    if (0x2e < uVar9 - 1) {
      puVar22 = __src + 1;
      puVar21 = (ulong *)*__src;
      uVar17 = (ulong)(0xf - uVar9) & 0xf;
      puVar23 = (ulong *)((long)ppuVar10 + uVar17);
      __src = (ulong *)((long)__src + uVar17);
      ppuVar10[1] = (ulong *)*puVar22;
      *ppuVar10 = puVar21;
      puVar23[1] = (ulong)puVar26;
      *puVar23 = (ulong)puVar25;
      ppuVar20 = (ulong **)((long)puVar23 + (ulong)(bVar5 >> 4));
LAB_0017601c:
      __n = (long)puVar8 - (long)__src;
      puVar7 = puVar8;
      ppuVar10 = ppuVar20;
joined_r0x00176108:
      if ((long)__n < 0x41) goto LAB_00176028;
      goto LAB_0017605c;
    }
    if (0xf < uVar9) {
      puVar7 = puVar7 + -1;
      uVar9 = *puVar7 - 0x1000;
      puVar22 = (ulong *)*__src;
      puVar23 = (ulong *)((long)ppuVar10 + ((ulong)uVar9 & 0x3f));
      ppuVar10[1] = (ulong *)__src[1];
      *ppuVar10 = puVar22;
      puVar22 = (ulong *)__src[2];
      ppuVar10[3] = (ulong *)__src[3];
      ppuVar10[2] = puVar22;
      puVar22 = (ulong *)__src[4];
      ppuVar10[5] = (ulong *)__src[5];
      ppuVar10[4] = puVar22;
      puVar22 = __src + 7;
      puVar21 = (ulong *)__src[6];
      __src = (ulong *)((long)__src + ((ulong)uVar9 & 0x3f));
      ppuVar10[7] = (ulong *)*puVar22;
      ppuVar10[6] = puVar21;
      puVar23[1] = (ulong)puVar26;
      *puVar23 = (ulong)puVar25;
      puVar23[3] = (ulong)puVar26;
      puVar23[2] = (ulong)puVar25;
      puVar23[5] = (ulong)puVar26;
      puVar23[4] = (ulong)puVar25;
      if (0xc3f < uVar9) {
        uVar17 = (long)puVar23 + 0xfU & 0xfffffffffffffff0;
        *(ulong **)(uVar17 + 0x28) = puVar26;
        *(ulong **)(uVar17 + 0x20) = puVar25;
        *(ulong **)(uVar17 + 0x38) = puVar26;
        *(ulong **)(uVar17 + 0x30) = puVar25;
        *(ulong **)(uVar17 + 0x48) = puVar26;
        *(ulong **)(uVar17 + 0x40) = puVar25;
        *(ulong **)(uVar17 + 0x58) = puVar26;
        *(ulong **)(uVar17 + 0x50) = puVar25;
        *(ulong **)(uVar17 + 0x68) = puVar26;
        *(ulong **)(uVar17 + 0x60) = puVar25;
        *(ulong **)(uVar17 + 0x78) = puVar26;
        *(ulong **)(uVar17 + 0x70) = puVar25;
      }
      __n = (long)puVar7 - (long)__src;
      ppuVar10 = (ulong **)((long)puVar23 + (ulong)(uVar9 >> 6));
      goto joined_r0x00176108;
    }
    if (uVar9 == 1) {
      uVar4 = (undefined1)*__src;
      puVar25 = (ulong *)CONCAT17(uVar4,CONCAT16(uVar4,CONCAT15(uVar4,CONCAT14(uVar4,CONCAT13(uVar4,
                                                  CONCAT12(uVar4,CONCAT11(uVar4,uVar4)))))));
      puVar26 = (ulong *)CONCAT17(uVar4,CONCAT16(uVar4,CONCAT15(uVar4,CONCAT14(uVar4,CONCAT13(uVar4,
                                                  CONCAT12(uVar4,CONCAT11(uVar4,uVar4)))))));
      __src = (ulong *)((long)__src + 1);
      goto LAB_00175fe0;
    }
    puVar8 = puVar7 + -1;
    if (8 < bVar5) {
      uVar17 = (ulong)((uint)*puVar8 * 0x80 - 0x47f80);
      if ((long)ppuVar14 - (long)ppuVar10 < (long)uVar17) {
        return -1;
      }
      ppuVar20 = (ulong **)((long)ppuVar10 + uVar17);
      ppuVar10[1] = puVar26;
      *ppuVar10 = puVar25;
      ppuVar10 = (ulong **)((long)ppuVar10 + 0xfU & 0xfffffffffffffff0);
      ppuVar20[-7] = puVar26;
      ppuVar20[-8] = puVar25;
      ppuVar20[-1] = puVar26;
      ppuVar20[-2] = puVar25;
      ppuVar20[-5] = puVar26;
      ppuVar20[-6] = puVar25;
      ppuVar20[-3] = puVar26;
      ppuVar20[-4] = puVar25;
      do {
        ppuVar10[1] = puVar26;
        *ppuVar10 = puVar25;
        ppuVar10[3] = puVar26;
        ppuVar10[2] = puVar25;
        ppuVar10[5] = puVar26;
        ppuVar10[4] = puVar25;
        ppuVar10[7] = puVar26;
        ppuVar10[6] = puVar25;
        ppuVar10 = ppuVar10 + 8;
      } while (ppuVar10 < ppuVar20 + -8);
      goto LAB_0017601c;
    }
    uVar9 = (uint)*puVar8;
    uVar17 = (ulong)(uVar9 * 0x40 - 0x7fc0);
    if ((long)puVar8 - (long)__src < (long)uVar17) {
      return -1;
    }
    if ((long)ppuVar14 - (long)ppuVar10 < (long)uVar17) {
      return -1;
    }
    puVar23 = (ulong *)*__src;
    uVar12 = (ulong)(uint)-(int)ppuVar10 & 0xf;
    puVar2 = (undefined8 *)((long)__src + uVar12);
    puVar3 = (undefined8 *)((long)ppuVar10 + uVar12);
    uVar16 = uVar9 - 0x200;
    ppuVar10[1] = (ulong *)__src[1];
    *ppuVar10 = puVar23;
    uVar24 = *puVar2;
    puVar3[1] = puVar2[1];
    *puVar3 = uVar24;
    uVar24 = puVar2[2];
    puVar3[3] = puVar2[3];
    puVar3[2] = uVar24;
    uVar24 = puVar2[4];
    puVar3[5] = puVar2[5];
    puVar3[4] = uVar24;
    if (uVar16 != 0) {
      puVar15 = puVar2;
      puVar11 = puVar3;
      if ((uVar16 & 1) != 0) {
        uVar24 = puVar2[6];
        uVar16 = uVar9 - 0x201;
        puVar3[7] = puVar2[7];
        puVar3[6] = uVar24;
        puVar15 = puVar2 + 8;
        uVar24 = *puVar15;
        puVar11 = puVar3 + 8;
        puVar3[9] = puVar2[9];
        *puVar11 = uVar24;
        uVar24 = puVar2[10];
        puVar3[0xb] = puVar2[0xb];
        puVar3[10] = uVar24;
        uVar24 = puVar2[0xc];
        puVar3[0xd] = puVar2[0xd];
        puVar3[0xc] = uVar24;
      }
      if (uVar9 != 0x201) {
        puVar11 = puVar11 + 10;
        puVar15 = puVar15 + 10;
        do {
          uVar24 = puVar15[-4];
          puVar11[-3] = puVar15[-3];
          puVar11[-4] = uVar24;
          uVar24 = puVar15[-2];
          puVar11[-1] = puVar15[-1];
          puVar11[-2] = uVar24;
          uVar24 = *puVar15;
          uVar16 = uVar16 - 2;
          puVar11[1] = puVar15[1];
          *puVar11 = uVar24;
          uVar24 = puVar15[2];
          puVar11[3] = puVar15[3];
          puVar11[2] = uVar24;
          uVar24 = puVar15[4];
          puVar11[5] = puVar15[5];
          puVar11[4] = uVar24;
          uVar24 = puVar15[6];
          puVar11[7] = puVar15[7];
          puVar11[6] = uVar24;
          uVar24 = puVar15[8];
          puVar11[9] = puVar15[9];
          puVar11[8] = uVar24;
          puVar2 = puVar15 + 0xb;
          uVar24 = puVar15[10];
          puVar15 = puVar15 + 0x10;
          puVar11[0xb] = *puVar2;
          puVar11[10] = uVar24;
          puVar11 = puVar11 + 0x10;
        } while (uVar16 != 0);
      }
    }
    __src = (ulong *)((long)__src + uVar17);
    puVar23 = (ulong *)__src[-2];
    ppuVar10 = (ulong **)((long)ppuVar10 + uVar17);
    ppuVar10[-1] = (ulong *)__src[-1];
    ppuVar10[-2] = puVar23;
    __n = (long)puVar8 - (long)__src;
  } while( true );
}


