/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a9f94; name: FUN_004a9f94
 */


long FUN_004a9f94(long *param_1,long param_2)

{
  char *__s2;
  size_t sVar1;
  size_t sVar2;
  char *__s1;
  ulong *puVar3;
  void *pvVar4;
  char cVar5;
  byte bVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  size_t sVar13;
  byte *pbVar14;
  long lVar15;
  char *pcVar16;
  byte *pbVar17;
  long *plVar18;
  ulong *puVar19;
  byte *pbVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  byte local_168 [8];
  size_t local_160;
  char *local_158;
  byte local_150 [8];
  size_t local_148;
  char *local_140;
  byte *local_138 [27];
  
  FUN_001fcec0(param_1 + 7,*(undefined8 *)(param_2 + 0xb0));
  local_138[0] = (byte *)((long)param_1 + 0x39);
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    local_138[0] = (byte *)param_1[9];
  }
  lVar10 = FUN_004c05ec(param_1[1] + 0x158,local_138);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
    FUN_004caf90(local_138,0);
                    /* try { // try from 004aa004 to 004aa033 has its CatchHandler @ 004aa6b8 */
    FUN_004a698c(lVar10,local_138);
    if ((*(int *)(lVar10 + 0x3c) == 2) && ((*(byte *)(param_2 + 0x10) >> 2 & 1) != 0)) {
      FUN_004a6f44(local_138,"proto2");
    }
                    /* try { // try from 004aa034 to 004aa03f has its CatchHandler @ 004aa6b4 */
    FUN_0052d79c(local_150,local_138);
                    /* try { // try from 004aa040 to 004aa04b has its CatchHandler @ 004aa694 */
    FUN_0052d79c(local_168,param_2);
    bVar6 = local_150[0];
    sVar13 = (size_t)(local_150[0] >> 1);
    sVar1 = sVar13;
    if ((local_150[0] & 1) != 0) {
      sVar1 = local_148;
    }
    sVar2 = (ulong)(local_168[0] >> 1);
    if ((local_168[0] & 1) != 0) {
      sVar2 = local_160;
    }
    if (sVar1 == sVar2) {
      pcVar16 = (char *)((ulong)local_150 | 1);
      __s1 = pcVar16;
      if ((local_150[0] & 1) != 0) {
        __s1 = local_140;
      }
      __s2 = (char *)((ulong)local_168 | 1);
      if ((local_168[0] & 1) != 0) {
        __s2 = local_158;
      }
      if ((local_150[0] & 1) == 0) {
        while (sVar1 != 0) {
          if (*pcVar16 != *__s2) goto LAB_004aa0d0;
          pcVar16 = pcVar16 + 1;
          __s2 = __s2 + 1;
          sVar13 = sVar13 - 1;
          sVar1 = sVar13;
        }
      }
      else if (sVar1 != 0) {
        iVar9 = memcmp(__s1,__s2,sVar1);
        bVar8 = iVar9 == 0;
        goto joined_r0x004aa0d4;
      }
      bVar8 = true;
    }
    else {
LAB_004aa0d0:
      bVar8 = false;
    }
joined_r0x004aa0d4:
    if ((local_168[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_158);
      bVar6 = local_150[0];
    }
    if ((bVar6 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_140);
    }
    FUN_004cb2ec(local_138);
    if (bVar8) {
      return lVar10;
    }
  }
  plVar18 = (long *)param_1[1];
  puVar19 = (ulong *)*plVar18;
  puVar3 = (ulong *)plVar18[1];
  if ((long)puVar3 - (long)puVar19 == 0) {
    lVar10 = *param_1;
    cVar5 = *(char *)(lVar10 + 0x29);
    puVar19 = puVar3;
  }
  else {
    pbVar14 = *(byte **)(param_2 + 0xb0);
    uVar22 = 0;
    bVar6 = *pbVar14;
    sVar1 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    uVar23 = ((long)puVar3 - (long)puVar19 >> 3) * -0x5555555555555555;
    if ((bVar6 & 1) == 0) {
      do {
        puVar24 = puVar19 + uVar22 * 3;
        bVar6 = (byte)*puVar24;
        uVar25 = (ulong)(bVar6 >> 1);
        sVar13 = uVar25;
        if ((bVar6 & 1) != 0) {
          sVar13 = puVar24[1];
        }
        if (sVar13 == sVar1) {
          pbVar17 = (byte *)puVar19[uVar22 * 3 + 2];
          if ((bVar6 & 1) == 0) {
            pbVar17 = (byte *)((long)puVar24 + 1);
          }
          if ((bVar6 & 1) == 0) {
            if (sVar1 == 0) goto LAB_004aa2b4;
            pbVar17 = pbVar14 + 1;
            while (puVar24 = (ulong *)((long)puVar24 + 1), *(byte *)puVar24 == *pbVar17) {
              uVar25 = uVar25 - 1;
              pbVar17 = pbVar17 + 1;
              if (uVar25 == 0) goto LAB_004aa2b4;
            }
          }
          else if ((sVar1 == 0) || (iVar9 = memcmp(pbVar17,pbVar14 + 1,sVar1), iVar9 == 0))
          goto LAB_004aa2b4;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar23);
    }
    else {
      do {
        puVar24 = puVar19 + uVar22 * 3;
        bVar6 = (byte)*puVar24;
        uVar25 = (ulong)(bVar6 >> 1);
        sVar13 = uVar25;
        if ((bVar6 & 1) != 0) {
          sVar13 = puVar24[1];
        }
        if (sVar13 == sVar1) {
          pbVar20 = (byte *)puVar19[uVar22 * 3 + 2];
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          if ((bVar6 & 1) == 0) {
            pbVar20 = (byte *)((long)puVar24 + 1);
          }
          if ((bVar6 & 1) == 0) {
            if (sVar1 == 0) {
LAB_004aa2b4:
              FUN_004ae3ac(param_1,param_2,uVar22 & 0xffffffff);
              return 0;
            }
            while (puVar24 = (ulong *)((long)puVar24 + 1), *(byte *)puVar24 == *pbVar17) {
              uVar25 = uVar25 - 1;
              pbVar17 = pbVar17 + 1;
              if (uVar25 == 0) goto LAB_004aa2b4;
            }
          }
          else if ((sVar1 == 0) || (iVar9 = memcmp(pbVar20,pbVar17,sVar1), iVar9 == 0))
          goto LAB_004aa2b4;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar23);
    }
    lVar10 = *param_1;
    cVar5 = *(char *)(lVar10 + 0x29);
  }
  if ((cVar5 != '\0') || (*(long *)(lVar10 + 8) == 0)) goto LAB_004aa5c4;
  puVar24 = *(ulong **)(param_2 + 0xb0);
  if ((ulong *)plVar18[2] == puVar3) {
    lVar10 = (long)puVar3 - (long)puVar19 >> 3;
    uVar22 = lVar10 * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar22) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = plVar18[2] - (long)puVar19 >> 3;
    uVar23 = lVar12 * 0x5555555555555556;
    if (uVar22 <= uVar23) {
      uVar22 = uVar23;
    }
    if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
      uVar22 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar22 == 0) {
      lVar12 = 0;
      puVar19 = (ulong *)(lVar10 * 8);
      if ((*puVar24 & 1) != 0) goto LAB_004aa408;
LAB_004aa380:
      uVar25 = puVar24[1];
      uVar23 = *puVar24;
      puVar19[2] = puVar24[2];
      puVar19[1] = uVar25;
      *puVar19 = uVar23;
    }
    else {
      lVar12 = FUN_0049e770(PTR_FUN_047cba38,uVar22 * 0x18);
      puVar19 = (ulong *)(lVar12 + lVar10 * 8);
      if ((*puVar24 & 1) == 0) goto LAB_004aa380;
LAB_004aa408:
      uVar23 = puVar24[1];
      pvVar4 = (void *)puVar24[2];
      if (uVar23 < 0x17) {
        puVar11 = (undefined1 *)((long)puVar19 + 1);
        *(char *)puVar19 = (char)((int)uVar23 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar23) {
                    /* try { // try from 004aa65c to 004aa663 has its CatchHandler @ 004aa664 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar25 = uVar23 + 0x10 & 0xfffffffffffffff0;
        puVar11 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar25);
        lVar10 = lVar12 + lVar10 * 8;
        *(ulong *)(lVar10 + 8) = uVar23;
        *(undefined1 **)(lVar10 + 0x10) = puVar11;
        *puVar19 = uVar25 | 1;
      }
      memcpy(puVar11,pvVar4,uVar23 + 1);
    }
    pbVar14 = (byte *)*plVar18;
    pbVar17 = (byte *)plVar18[1];
    puVar3 = puVar19 + 3;
    if (pbVar17 == pbVar14) {
      pbVar17 = pbVar14;
    }
    else {
      do {
        uVar25 = *(ulong *)(pbVar17 + -0x10);
        uVar23 = *(ulong *)(pbVar17 + -0x18);
        puVar19[-1] = *(ulong *)(pbVar17 + -8);
        puVar19[-2] = uVar25;
        puVar19[-3] = uVar23;
        pbVar17[-0x18] = 0;
        pbVar17[-0x17] = 0;
        pbVar17[-0x16] = 0;
        pbVar17[-0x15] = 0;
        pbVar17[-0x14] = 0;
        pbVar17[-0x13] = 0;
        pbVar17[-0x12] = 0;
        pbVar17[-0x11] = 0;
        pbVar17[-0x10] = 0;
        pbVar17[-0xf] = 0;
        pbVar17[-0xe] = 0;
        pbVar17[-0xd] = 0;
        pbVar17[-0xc] = 0;
        pbVar17[-0xb] = 0;
        pbVar17[-10] = 0;
        pbVar17[-9] = 0;
        pbVar17[-8] = 0;
        pbVar17[-7] = 0;
        pbVar17[-6] = 0;
        pbVar17[-5] = 0;
        pbVar17[-4] = 0;
        pbVar17[-3] = 0;
        pbVar17[-2] = 0;
        pbVar17[-1] = 0;
        pbVar17 = pbVar17 + -0x18;
        puVar19 = puVar19 + -3;
      } while (pbVar14 != pbVar17);
      pbVar14 = (byte *)plVar18[1];
      pbVar17 = (byte *)*plVar18;
    }
    *plVar18 = (long)puVar19;
    plVar18[1] = (long)puVar3;
    plVar18[2] = lVar12 + uVar22 * 0x18;
    puVar7 = PTR_LAB_047cba48;
    if (pbVar14 != pbVar17) {
      do {
        pbVar20 = pbVar14 + -0x18;
        if ((*pbVar20 & 1) != 0) {
          FUN_0049e790(puVar7,*(undefined8 *)(pbVar14 + -8));
        }
        pbVar14 = pbVar20;
      } while (pbVar17 != pbVar20);
    }
    if (pbVar17 != (byte *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,pbVar17);
    }
  }
  else {
    if ((*puVar24 & 1) == 0) {
      uVar23 = puVar24[1];
      uVar22 = *puVar24;
      puVar3[2] = puVar24[2];
      puVar3[1] = uVar23;
      *puVar3 = uVar22;
    }
    else {
      uVar22 = puVar24[1];
      pvVar4 = (void *)puVar24[2];
      if (uVar22 < 0x17) {
        puVar11 = (undefined1 *)((long)puVar3 + 1);
        *(char *)puVar3 = (char)((int)uVar22 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar22) {
                    /* try { // try from 004aa654 to 004aa65b has its CatchHandler @ 004aa684 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar23 = uVar22 + 0x10 & 0xfffffffffffffff0;
        puVar11 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar23);
        puVar3[1] = uVar22;
        puVar3[2] = (ulong)puVar11;
        *puVar3 = uVar23 | 1;
      }
      memcpy(puVar11,pvVar4,uVar22 + 1);
    }
    plVar18[1] = (long)(puVar3 + 3);
  }
  plVar21 = (long *)param_1[1];
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar10 = 1;
    do {
      pbVar14 = *(byte **)(*(long *)(param_2 + 0x28) + lVar10 * 8);
      local_138[0] = *(byte **)(pbVar14 + 0x10);
      if ((*pbVar14 & 1) == 0) {
        local_138[0] = pbVar14 + 1;
      }
      lVar12 = FUN_004c05ec(plVar21 + 0x2b,local_138);
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x18) == 0)) {
        lVar12 = *param_1;
        if (*(long *)(lVar12 + 0x18) != 0) {
          lVar12 = FUN_004a464c(*(long *)(lVar12 + 0x18),
                                *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar10 * 8));
          if (lVar12 != 0) goto LAB_004aa528;
          lVar12 = *param_1;
        }
        FUN_004a4900(lVar12,*(undefined8 *)(*(long *)(param_2 + 0x28) + lVar10 * 8));
      }
LAB_004aa528:
      plVar21 = (long *)param_1[1];
      bVar8 = lVar10 < *(int *)(param_2 + 0x20);
      lVar10 = lVar10 + 1;
    } while (bVar8);
  }
  pbVar14 = (byte *)(plVar21[1] + -0x18);
  plVar18 = plVar21;
  if ((*pbVar14 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(plVar21[1] + -8));
    plVar18 = (long *)param_1[1];
  }
  plVar21[1] = (long)pbVar14;
LAB_004aa5c4:
  FUN_004a1d58(plVar18);
  lVar10 = FUN_004ae8b4(param_1,param_2);
  FUN_004a3200(param_1[0xb]);
  lVar12 = param_1[1];
  if (lVar10 == 0) {
    FUN_004a1f00();
  }
  else {
    lVar15 = *(long *)(lVar12 + 0x1a0) + -0x20;
    *(long *)(lVar12 + 0x1a0) = lVar15;
    if (*(long *)(lVar12 + 0x198) == lVar15) {
      *(undefined8 *)(lVar12 + 0x1b8) = *(undefined8 *)(lVar12 + 0x1b0);
      *(undefined8 *)(lVar12 + 0x1d0) = *(undefined8 *)(lVar12 + 0x1c8);
      *(undefined8 *)(lVar12 + 0x1e8) = *(undefined8 *)(lVar12 + 0x1e0);
    }
    *(undefined1 *)(lVar10 + 0x41) = 1;
  }
  return lVar10;
}


