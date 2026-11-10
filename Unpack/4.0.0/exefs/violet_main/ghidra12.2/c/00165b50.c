/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00165b50; name: FUN_00165b50
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00165b50(long param_1,long param_2,long param_3,ulong param_4,long *param_5,ulong param_6,
                 undefined8 param_7,long param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  int iVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  undefined1 *puVar18;
  ulong *puVar19;
  char cVar20;
  long lVar21;
  ulong *puVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  ulong *puVar28;
  long lVar29;
  ulong uVar30;
  undefined8 unaff_x24;
  undefined4 *unaff_x25;
  ulong uVar31;
  char cVar32;
  ulong *puVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  ulong *local_148;
  ulong *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  int *local_108;
  int *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  int *local_e8;
  int *local_e0;
  long local_d8;
  uint local_d0;
  ulong local_c8;
  int local_c0;
  undefined4 uStack_bc;
  undefined8 local_48;
  
  uVar31 = param_4 & 0xffffffff;
  *(long *)(param_1 + 0x28) = 4L << (param_4 & 0x3f);
  if (param_3 == 0) {
    return param_1;
  }
  uVar30 = param_6 & 0xffffffff;
  puVar13 = (undefined8 *)param_5[1];
  if ((param_5[3] - (long)puVar13) + *param_5 + -0x10 < 0x28) {
LAB_00165bac:
    puVar13 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0x28,0x10);
    if (puVar13 == (undefined8 *)0x0) {
      FUN_0015ed40(0x28);
    }
    puVar18 = &LAB_00170350;
  }
  else {
    puVar2 = puVar13 + 6;
    if (puVar2 <= (undefined8 *)(*param_5 + param_5[3])) {
      puVar7 = (undefined8 *)param_5[2];
      if ((undefined8 *)param_5[2] <= puVar2) {
        puVar7 = puVar2;
      }
      param_5[1] = (long)puVar2;
      param_5[2] = (long)puVar7;
      puVar13[4] = 0;
      *puVar13 = 0;
      puVar13[1] = 0;
      if (puVar13 != (undefined8 *)0x0) {
        puVar18 = &LAB_00170310;
        goto LAB_00165c20;
      }
      goto LAB_00165bac;
    }
    plVar17 = param_5;
    puVar13 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0x30,0x10);
    if (puVar13 == (undefined8 *)0x0) {
      auVar35 = FUN_0015ed40(0x30);
      puVar13 = auVar35._8_8_;
      lVar15 = auVar35._0_8_;
      uVar26 = (uint)plVar17;
      *unaff_x25 = 0xffffffff;
      if ((int)uVar26 < 0x81) {
        return (long)(int)uVar26;
      }
      uVar4 = uVar26 >> 6 & 0x3fffffc;
      lVar14 = *(long *)(lVar15 + 0x20);
      uVar10 = *(undefined4 *)(lVar15 + 0x4c);
      iVar23 = *(int *)(*(long *)(lVar15 + 0x10) + 0x14);
      uVar1 = (uVar26 >> 1) + 8;
      iVar24 = uVar26 + 8;
      iVar16 = (int)(((ulong)plVar17 & 0xffffffff) / 3);
      uVar5 = 0x3ffffff8;
      if (iVar23 - 1U >> 0x1e == 0) {
        uVar5 = iVar23 - 8;
      }
      local_d0 = uVar26;
      local_c8 = param_4;
      FUN_00164c64(puVar13 + 1,
                   (long)(int)(iVar16 * 5 + (int)(((ulong)plVar17 & 0xffffffff) / 5) + uVar1 +
                               iVar24 * 2 + uVar4 + 0x100),*puVar13);
      local_148 = (ulong *)puVar13[1];
      local_c0 = 8;
      local_138 = (undefined8 *)((long)local_148 + (long)iVar24);
      local_128 = (char *)((long)local_138 + (long)iVar24);
      local_118 = local_128 + uVar1;
      local_108 = (int *)((ulong)(local_118 + ((ulong)plVar17 & 0xffffffff) / 3 + 3) &
                         0xfffffffffffffffc);
      local_f8 = (undefined1 *)((long)local_108 + (long)(iVar16 * 4));
      local_e8 = (int *)((ulong)(local_f8 + ((ulong)plVar17 & 0xffffffff) / 5 + 3) &
                        0xfffffffffffffffc);
      local_d8 = (long)local_e8 + (ulong)uVar4;
      lVar8 = *(long *)(lVar14 + 8);
      lVar9 = *(long *)(lVar14 + 0x10);
      lVar29 = *(long *)(lVar14 + 0x20);
      uVar1 = *(uint *)(lVar14 + 0x1c);
      puVar33 = (ulong *)(param_4 + (long)(int)uVar26 + -8);
      puVar28 = (ulong *)(param_4 + (long)(int)uVar26 + -0x10);
      uStack_bc = uVar10;
      local_140 = local_148;
      local_130 = local_138;
      local_120 = local_128;
      local_110 = local_118;
      lVar14 = -8;
      local_100 = local_108;
      local_f0 = local_f8;
      local_e0 = local_e8;
      puVar12 = (ulong *)(param_4 + (ulong)(param_8 == 0) * 8);
joined_r0x00165e8c:
      if (1 < (long)puVar28 - (long)puVar12) {
        lVar21 = 0x11;
        lVar25 = 1;
        puVar19 = puVar12;
        while( true ) {
          uVar31 = *puVar19;
          lVar27 = (uVar31 * lVar9 >> ((ulong)uVar1 & 0x3f)) * 4;
          iVar23 = (int)puVar19 - (int)lVar29;
          iVar24 = *(int *)(lVar8 + lVar27);
          *(int *)(lVar8 + lVar27) = iVar23;
          uVar26 = (uint)uVar31;
          if ((*(uint *)((long)puVar19 + lVar14) ^ uVar26) < 0x100) break;
          iVar24 = iVar23 - iVar24;
          if (*(uint *)((long)puVar19 - (long)iVar24) == uVar26) {
            if (iVar24 - 8U < uVar5) {
              lVar21 = (long)-iVar24;
              goto joined_r0x00165f5c;
            }
            if ((uint)puVar19[-1] == uVar26) {
              lVar21 = -8;
              iVar24 = 8;
              goto joined_r0x00165f5c;
            }
          }
          puVar19 = (ulong *)((long)puVar19 + lVar25);
          lVar25 = lVar21 >> 4;
          lVar21 = lVar21 + 1;
          if ((long)puVar28 - (long)puVar19 <= lVar25) goto LAB_0016618c;
        }
        puVar22 = (ulong *)((long)puVar19 + 1);
        iVar24 = 0;
        *(int *)(lVar8 + (*puVar22 * lVar9 >> ((ulong)uVar1 & 0x3f)) * 4) = iVar23 + 1;
        lVar21 = lVar14;
        goto joined_r0x00165f88;
      }
LAB_0016618c:
      puVar19 = puVar12;
      goto LAB_00166190;
    }
    puVar18 = &LAB_00170310;
  }
  puVar13[4] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
LAB_00165c20:
  *(undefined1 **)(param_1 + 0x30) = puVar18;
  lVar14 = FUN_00170394(puVar13,uVar31,uVar31,0x10,param_5,uVar30);
  lVar15 = param_3 - param_2;
  if (lVar15 == 0) {
    puVar13[4] = param_3;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x10);
    if ((4 < *(int *)(param_1 + 4)) && (*(int *)(lVar14 + 0x28) != 0)) {
      if (*(int *)(lVar14 + 0x24) <= lVar15) {
        lVar15 = (long)*(int *)(lVar14 + 0x24);
      }
    }
    iVar24 = *(int *)(lVar14 + 0x14);
    lVar14 = lVar15;
    if (iVar24 <= lVar15) {
      lVar14 = (long)iVar24;
    }
    if (iVar24 < 1) {
      lVar14 = lVar15;
    }
    if (0xffffff < lVar14) {
      lVar14 = 0x1000000;
    }
    lVar14 = FUN_001704f4(puVar13,param_2,param_3,lVar14);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar13;
  return lVar14;
  while (puVar19 = (ulong *)((long)puVar22 + -1),
        *(char *)((long)puVar22 + -1) == *(char *)((long)puVar22 + lVar21 + -1)) {
joined_r0x00165f5c:
    puVar22 = puVar19;
    if ((puVar22 <= puVar12) || (lVar21 <= lVar29 - (long)puVar22)) break;
  }
  puVar19 = puVar22;
  if (puVar12 == puVar22 && iVar24 == 0) {
    iVar24 = -(int)lVar14;
  }
joined_r0x00165f88:
  for (puVar19 = (ulong *)((long)puVar19 + 4); puVar19 < puVar33; puVar19 = puVar19 + 1) {
    if (*puVar19 != *(ulong *)((long)puVar19 + lVar21)) {
      uVar31 = *(ulong *)((long)puVar19 + lVar21) ^ *puVar19;
      uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
      uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
      uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
      uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
      puVar19 = (ulong *)((long)puVar19 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3));
      break;
    }
  }
  if (puVar33 <= puVar19) {
    puVar19 = puVar33;
  }
  iVar16 = (int)puVar22 - (int)puVar12;
  iVar23 = (int)puVar19 - (int)puVar22;
  if (iVar16 == 0) {
    cVar32 = '\0';
  }
  else if (iVar16 < 9) {
    iVar11 = iVar16 + -3;
    *local_f0 = (char)iVar11;
    puVar18 = local_f0 + 1;
    if (iVar11 < 0) {
      puVar18 = local_f0;
    }
    *local_140 = *puVar12;
    local_140 = (ulong *)((long)local_140 + (long)iVar16);
    uVar31 = *puVar12;
    uVar34 = *(undefined8 *)((long)puVar12 - (long)local_c0);
    *local_130 = CONCAT17((char)(uVar31 >> 0x38) - (char)((ulong)uVar34 >> 0x38),
                          CONCAT16((char)(uVar31 >> 0x30) - (char)((ulong)uVar34 >> 0x30),
                                   CONCAT15((char)(uVar31 >> 0x28) - (char)((ulong)uVar34 >> 0x28),
                                            CONCAT14((char)(uVar31 >> 0x20) -
                                                     (char)((ulong)uVar34 >> 0x20),
                                                     CONCAT13((char)(uVar31 >> 0x18) -
                                                              (char)((ulong)uVar34 >> 0x18),
                                                              CONCAT12((char)(uVar31 >> 0x10) -
                                                                       (char)((ulong)uVar34 >> 0x10)
                                                                       ,CONCAT11((char)(uVar31 >> 8)
                                                                                 - (char)((ulong)
                                                  uVar34 >> 8),(char)uVar31 - (char)uVar34)))))));
    iVar6 = 3;
    if (iVar11 < 0) {
      iVar6 = iVar16;
    }
    cVar32 = (char)iVar6;
    local_130 = (undefined8 *)((long)local_130 + (long)iVar16);
    local_f0 = puVar18;
  }
  else {
    FUN_0016fe00(&local_148);
    cVar32 = '\x03';
  }
  cVar20 = (char)(iVar23 + -2);
  if (0xe < iVar23 + -2) {
    if (iVar23 + -0x11 < 0xff) {
      *local_f0 = (char)(iVar23 + -0x11);
    }
    else {
      *local_f0 = 0xff;
      *local_e0 = iVar23 + -0x110;
      local_e0 = local_e0 + 1;
    }
    local_f0 = local_f0 + 1;
    cVar20 = '\x0f';
  }
  cVar32 = cVar32 + cVar20 * '\x04';
  if (0 < iVar24) {
    cVar32 = cVar32 + -0x40;
    local_c0 = iVar24;
    if (iVar24 < 0x7fff08) {
      *local_110 = ((byte)(iVar24 + 0xf8) & 0xf) + (char)LZCOUNT(iVar24 + 0xf8) * -0x10 + 'p';
      *local_100 = iVar24;
      local_110 = local_110 + 1;
      local_100 = local_100 + 1;
    }
    else {
      FUN_0016ff40(&local_148,iVar24);
    }
  }
  pcVar3 = local_120 + 1;
  *local_120 = cVar32;
  local_120 = pcVar3;
  lVar14 = lVar21;
  puVar12 = puVar19;
  if (puVar28 <= puVar19) {
LAB_00166190:
    FUN_0016f590(&local_148,puVar19);
    lVar15 = FUN_0016f6f0(local_48,unaff_x25,0,param_6,param_7,lVar15,*puVar13,&local_148,param_8,
                          unaff_x24);
    return lVar15;
  }
  goto joined_r0x00165e8c;
}


