/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ae8b4; name: FUN_004ae8b4
 */


/* WARNING: Removing unreachable block (ram,0x004aefd4) */
/* WARNING: Removing unreachable block (ram,0x004af680) */
/* WARNING: Removing unreachable block (ram,0x004af7b8) */
/* WARNING: Removing unreachable block (ram,0x004af988) */
/* WARNING: Type propagation algorithm not settling */

ulong ****** FUN_004ae8b4(ulong *******param_1,long param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  undefined *puVar4;
  void *pvVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong ******ppppppuVar9;
  ulong *****pppppuVar10;
  ulong ******ppppppuVar11;
  ulong *****pppppuVar12;
  ulong *******pppppppuVar13;
  ulong uVar14;
  ulong ******ppppppuVar15;
  ulong *******pppppppuVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  byte *pbVar20;
  ulong extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  long extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  byte bVar21;
  long *******ppppppplVar22;
  char *pcVar23;
  char *pcVar24;
  undefined4 uVar25;
  long ******pppppplVar26;
  long *******ppppppplVar27;
  ulong *******pppppppuVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong *******pppppppuVar31;
  long lVar32;
  long lVar33;
  ulong ******ppppppuVar34;
  size_t sVar35;
  long lVar36;
  ulong *******pppppppuVar37;
  ulong *****pppppuVar38;
  int iVar39;
  ulong *******local_1d8;
  ulong ******ppppppuStack_1d0;
  ulong ******local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [64];
  long *******local_150;
  long *******local_148;
  long local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  byte local_120 [8];
  ulong local_118;
  ulong local_110;
  byte local_108 [16];
  undefined8 local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong ******local_90;
  undefined8 uStack_88;
  uint6 local_80;
  undefined2 uStack_7a;
  ulong *******local_78;
  ulong *******local_70;
  ulong *******local_68;
  
  ppppppuVar9 = (ulong ******)FUN_004a41ac(param_1[1],0xa0);
  param_1[10] = ppppppuVar9;
  *(undefined2 *)(ppppppuVar9 + 8) = 0;
  if ((*(byte *)(param_2 + 0x10) >> 4 & 1) == 0) {
    pppppuVar10 = (ulong *****)FUN_004e465c();
    pppppuVar38 = (ulong *****)0x0;
  }
  else {
    pppppuVar10 = (ulong *****)FUN_004b01c4(param_1[1],0);
    puVar4 = PTR_DAT_047cd780;
    if (*(undefined **)(param_2 + 0xd0) != (undefined *)0x0) {
      puVar4 = *(undefined **)(param_2 + 0xd0);
    }
    FUN_004e4c3c(pppppuVar10,puVar4);
    pppppuVar38 = pppppuVar10;
  }
  ppppppuVar9[0x13] = pppppuVar10;
  ppppppuVar11 = (ulong ******)FUN_004a4054(param_1[1]);
  param_1[0xb] = ppppppuVar11;
  param_1[10][0x12] = (ulong *****)ppppppuVar11;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    local_1d8 = (ulong *******)((ulong)local_1d8 & 0xffffffffffff0000);
                    /* try { // try from 004ae958 to 004ae973 has its CatchHandler @ 004aff64 */
    FUN_004aa7f4(param_1,&local_1d8,param_2,10,"Missing field: FileDescriptorProto.name.");
    if (((ulong)local_1d8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_1c8);
    }
  }
  pbVar20 = *(byte **)(param_2 + 0xc0);
  bVar21 = *pbVar20;
  if ((bVar21 & 1) == 0) {
    if (1 < bVar21) {
      if ((bVar21 & 0xfe) == 0xc) {
        if (*(int *)(pbVar20 + 1) == 0x746f7270 && *(short *)(pbVar20 + 5) == 0x326f)
        goto LAB_004aeabc;
        if ((bVar21 & 1) != 0) goto LAB_004aea20;
      }
      if ((bVar21 & 0xfe) == 0xc) {
        pbVar20 = pbVar20 + 1;
        goto LAB_004aea30;
      }
      goto LAB_004aea54;
    }
LAB_004aeabc:
    ppppppuVar11 = param_1[10];
    uVar25 = 2;
LAB_004aeac4:
    *(undefined4 *)((long)ppppppuVar11 + 0x3c) = uVar25;
  }
  else {
    lVar33 = *(long *)(pbVar20 + 8);
    if (lVar33 == 0) goto LAB_004aeabc;
    if (lVar33 == 6) {
      if (**(int **)(pbVar20 + 0x10) == 0x746f7270 &&
          (short)(*(int **)(pbVar20 + 0x10))[1] == 0x326f) goto LAB_004aeabc;
LAB_004aea20:
      lVar33 = *(long *)(pbVar20 + 8);
    }
    if (lVar33 == 6) {
      pbVar20 = *(byte **)(pbVar20 + 0x10);
LAB_004aea30:
      if (*(int *)pbVar20 != 0x746f7270 || *(short *)(pbVar20 + 4) != 0x336f) goto LAB_004aea54;
      ppppppuVar11 = param_1[10];
      uVar25 = 3;
      goto LAB_004aeac4;
    }
LAB_004aea54:
    *(undefined4 *)((long)param_1[10] + 0x3c) = 0;
    uVar30 = *(undefined8 *)(param_2 + 0xb0);
    FUN_004a8ec0(&local_1d8,"Unrecognized syntax: ");
    ppppppuVar11 = param_1[2];
    if (ppppppuVar11 != (ulong ******)0x0) {
                    /* try { // try from 004aea84 to 004aea97 has its CatchHandler @ 004aff50 */
      (*(code *)(*ppppppuVar11)[2])(ppppppuVar11,param_1 + 7,uVar30,param_2,10,&local_1d8);
    }
    *(byte *)(param_1 + 6) = 1;
    if (((ulong)local_1d8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_1c8);
    }
  }
  ppppppuVar34 = param_1[1];
  pbVar20 = *(byte **)(param_2 + 0xb0);
  ppppppuVar11 = (ulong ******)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (ppppppuVar11 != (ulong ******)0x0) {
    if ((*pbVar20 & 1) == 0) {
      pppppuVar12 = *(ulong ******)(pbVar20 + 8);
      pppppuVar10 = *(ulong ******)pbVar20;
      ppppppuVar11[2] = *(ulong ******)(pbVar20 + 0x10);
      ppppppuVar11[1] = pppppuVar12;
      *ppppppuVar11 = pppppuVar10;
    }
    else {
      pppppuVar10 = *(ulong ******)(pbVar20 + 8);
      pvVar5 = *(void **)(pbVar20 + 0x10);
      if (pppppuVar10 < (ulong *****)0x17) {
        pppppuVar12 = (ulong *****)((long)ppppppuVar11 + 1);
        *(char *)ppppppuVar11 = (char)((int)pppppuVar10 << 1);
      }
      else {
        if ((ulong *****)0xffffffffffffffef < pppppuVar10) goto LAB_004aff14;
        pppppuVar12 = (ulong *****)
                      FUN_0049e770(PTR_FUN_047cba38,(ulong)(pppppuVar10 + 2) & 0xfffffffffffffff0);
        ppppppuVar11[1] = pppppuVar10;
        ppppppuVar11[2] = pppppuVar12;
        *ppppppuVar11 = (ulong *****)((ulong)(pppppuVar10 + 2) & 0xfffffffffffffff0 | 1);
      }
      memcpy(pppppuVar12,pvVar5,(long)pppppuVar10 + 1);
    }
  }
  local_1d8 = (ulong *******)ppppppuVar11;
  FUN_004a3dc0(ppppppuVar34 + 0x1a,&local_1d8);
  *ppppppuVar9 = (ulong *****)ppppppuVar11;
  ppppppuVar11 = param_1[1];
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    local_1d8 = (ulong *******)((ulong)local_1d8 & 0xffffffffffff0000);
    pppppppuVar13 = (ulong *******)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (pppppppuVar13 != (ulong *******)0x0) {
      pppppppuVar13[2] = local_1c8;
      pppppppuVar13[1] = ppppppuStack_1d0;
      *pppppppuVar13 = (ulong ******)local_1d8;
    }
                    /* try { // try from 004aebac to 004aebb3 has its CatchHandler @ 004aff5c */
    local_78 = pppppppuVar13;
    FUN_004a3dc0(ppppppuVar11 + 0x1a,&local_78);
  }
  else {
    pbVar20 = *(byte **)(param_2 + 0xb8);
    pppppppuVar13 = (ulong *******)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (pppppppuVar13 != (ulong *******)0x0) {
      if ((*pbVar20 & 1) == 0) {
        ppppppuVar15 = *(ulong *******)(pbVar20 + 8);
        ppppppuVar34 = *(ulong *******)pbVar20;
        pppppppuVar13[2] = *(ulong *******)(pbVar20 + 0x10);
        pppppppuVar13[1] = ppppppuVar15;
        *pppppppuVar13 = ppppppuVar34;
      }
      else {
        ppppppuVar34 = *(ulong *******)(pbVar20 + 8);
        pvVar5 = *(void **)(pbVar20 + 0x10);
        if (ppppppuVar34 < (ulong ******)0x17) {
          ppppppuVar15 = (ulong ******)((long)pppppppuVar13 + 1);
          *(byte *)pppppppuVar13 = (byte)((int)ppppppuVar34 << 1);
        }
        else {
          if ((ulong ******)0xffffffffffffffef < ppppppuVar34) {
LAB_004aff14:
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          ppppppuVar15 = (ulong ******)
                         FUN_0049e770(PTR_FUN_047cba38,
                                      (ulong)(ppppppuVar34 + 2) & 0xfffffffffffffff0);
          pppppppuVar13[1] = ppppppuVar34;
          pppppppuVar13[2] = ppppppuVar15;
          *pppppppuVar13 = (ulong ******)((ulong)(ppppppuVar34 + 2) & 0xfffffffffffffff0 | 1);
        }
        memcpy(ppppppuVar15,pvVar5,(long)ppppppuVar34 + 1);
      }
    }
    local_1d8 = pppppppuVar13;
    FUN_004a3dc0(ppppppuVar11 + 0x1a,&local_1d8);
  }
  ppppppuVar9[1] = (ulong *****)pppppppuVar13;
  ppppppuVar9[2] = (ulong *****)*param_1;
  uVar14 = FUN_004a30b0(param_1[1],ppppppuVar9);
  if ((uVar14 & 1) == 0) {
    FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 0xb0),param_2,10,
                 "A file with this name is already in the pool.");
    return (ulong ******)0x0;
  }
  pppppuVar10 = ppppppuVar9[1];
  if ((*(byte *)pppppuVar10 & 1) == 0) {
    if (*(byte *)pppppuVar10 >> 1 != 0) goto LAB_004aecc0;
  }
  else if (pppppuVar10[1] != (ulong ****)0x0) {
LAB_004aecc0:
    FUN_004ad35c(param_1,pppppuVar10,param_2,ppppppuVar9);
  }
  local_138 = &local_130;
  local_130 = 0;
  uStack_128 = 0;
  iVar8 = *(int *)(param_2 + 0x20);
  *(int *)(ppppppuVar9 + 4) = iVar8;
                    /* try { // try from 004aecf0 to 004aed27 has its CatchHandler @ 004affe8 */
  pppppuVar10 = (ulong *****)FUN_004a41ac(param_1[1],iVar8 << 3);
  ppppppuVar9[9] = pppppuVar10;
  if (*(char *)((long)*param_1 + 0x29) == '\0') {
    ppppppuVar9[3] = (ulong *****)0x0;
    ppppppuVar9[10] = (ulong *****)0x0;
  }
  else {
    pppppuVar10 = (ulong *****)FUN_004a3f0c(param_1[1]);
    ppppppuVar9[3] = pppppuVar10;
    pppppuVar10 = (ulong *****)FUN_004a41ac(param_1[1],*(int *)(param_2 + 0x20) << 3);
    ppppppuVar9[10] = pppppuVar10;
    if (0 < (int)*(uint *)(param_2 + 0x20)) {
      memset(pppppuVar10,0,(ulong)*(uint *)(param_2 + 0x20) << 3);
    }
  }
  pppppppuVar37 = param_1 + 0x10;
  pppppppuVar13 = param_1 + 0xf;
  FUN_004c47e4(pppppppuVar13,*pppppppuVar37);
  param_1[0x11] = (ulong ******)0x0;
  param_1[0xf] = (ulong ******)pppppppuVar37;
  param_1[0x10] = (ulong ******)0x0;
  puVar4 = PTR_FUN_047cba38;
  local_148 = (long *******)0x0;
  local_140 = 0;
  iVar8 = *(int *)(param_2 + 0xa0);
  local_150 = (long *******)&local_148;
  if (0 < iVar8) {
    lVar33 = 0;
    iVar39 = **(int **)(param_2 + 0xa8);
LAB_004aee08:
    ppppppplVar22 = (long *******)&local_148;
    ppppppplVar27 = (long *******)&local_148;
LAB_004aee10:
    pppppplVar26 = *ppppppplVar27;
    while( true ) {
      if (pppppplVar26 == (long ******)0x0) {
        pppppplVar26 = (long ******)FUN_0049e770(puVar4,0x20);
        *(int *)((long)pppppplVar26 + 0x1c) = iVar39;
        pppppplVar26[2] = (long *****)ppppppplVar22;
        *pppppplVar26 = (long *****)0x0;
        pppppplVar26[1] = (long *****)0x0;
        *ppppppplVar27 = pppppplVar26;
        if ((long *******)*local_150 != (long *******)0x0) {
          pppppplVar26 = *ppppppplVar27;
          local_150 = (long *******)*local_150;
        }
        FUN_010108e0(local_148,pppppplVar26);
        local_140 = local_140 + 1;
        iVar8 = *(int *)(param_2 + 0xa0);
      }
      lVar33 = lVar33 + 1;
      if (iVar8 <= lVar33) break;
      iVar39 = *(int *)(*(long *)(param_2 + 0xa8) + lVar33 * 4);
      if (local_148 == (long *******)0x0) goto LAB_004aee08;
      ppppppplVar22 = local_148;
      ppppppplVar27 = (long *******)&local_148;
      while( true ) {
        while( true ) {
          if (iVar39 < *(int *)((long)ppppppplVar22 + 0x1c)) break;
          if (iVar39 <= *(int *)((long)ppppppplVar22 + 0x1c)) goto LAB_004aee10;
          ppppppplVar27 = ppppppplVar22 + 1;
          if ((long *******)*ppppppplVar27 == (long *******)0x0) goto LAB_004aee10;
          ppppppplVar22 = (long *******)*ppppppplVar27;
        }
        ppppppplVar27 = ppppppplVar22;
        if ((long *******)*ppppppplVar22 == (long *******)0x0) break;
        ppppppplVar22 = (long *******)*ppppppplVar22;
      }
      pppppplVar26 = *ppppppplVar22;
    }
  }
  puVar4 = PTR_FUN_047cba38;
  if (0 < *(int *)(param_2 + 0x20)) {
    uVar14 = 0;
    do {
      uVar30 = *(undefined8 *)(*(long *)(param_2 + 0x28) + uVar14 * 8 + 8);
                    /* try { // try from 004aeee0 to 004aeeeb has its CatchHandler @ 004b00f8 */
      FUN_002a4bec(&local_138,uVar30,uVar30);
      if ((extraout_x1 & 1) == 0) {
                    /* try { // try from 004aeef0 to 004aeeff has its CatchHandler @ 004b00a0 */
        FUN_004ae5a0(param_1,param_2,uVar14 & 0xffffffff);
      }
      pbVar20 = *(byte **)(*(long *)(param_2 + 0x28) + uVar14 * 8 + 8);
      local_1d8 = *(ulong ********)(pbVar20 + 0x10);
      if ((*pbVar20 & 1) == 0) {
        local_1d8 = (ulong *******)(pbVar20 + 1);
      }
                    /* try { // try from 004aef28 to 004aef6b has its CatchHandler @ 004b015c */
      lVar33 = FUN_004c05ec(param_1[1] + 0x2b,&local_1d8);
      if (lVar33 == 0) {
        ppppppuVar11 = (ulong ******)0x0;
        pppppuVar10 = (*param_1)[3];
joined_r0x004aef58:
        if (pppppuVar10 != (ulong *****)0x0) {
          ppppppuVar11 = (ulong ******)
                         FUN_004a464c(pppppuVar10,
                                      *(undefined8 *)(*(long *)(param_2 + 0x28) + uVar14 * 8 + 8));
        }
      }
      else {
        ppppppuVar11 = *(ulong *******)(lVar33 + 0x18);
        if (ppppppuVar11 == (ulong ******)0x0) {
          pppppuVar10 = (*param_1)[3];
          goto joined_r0x004aef58;
        }
      }
      if (ppppppuVar11 == ppppppuVar9) goto LAB_004afe60;
      ppppppuVar34 = *param_1;
      if (ppppppuVar11 == (ulong ******)0x0) {
        if (*(char *)((long)ppppppuVar34 + 0x29) == '\0') {
          if (*(char *)((long)ppppppuVar34 + 0x2a) != '\0') {
LAB_004aefe0:
                    /* try { // try from 004aefec to 004af05f has its CatchHandler @ 004b015c */
            ppppppuVar11 = (ulong ******)
                           FUN_004ac948(ppppppuVar34,
                                        *(undefined8 *)(*(long *)(param_2 + 0x28) + uVar14 * 8 + 8))
            ;
            ppppppuVar9[9][uVar14] = (ulong ****)ppppppuVar11;
            goto joined_r0x004aefb4;
          }
          if ((*(char *)((long)ppppppuVar34 + 0x2b) == '\0') && (local_148 != (long *******)0x0)) {
            ppppppplVar22 = (long *******)&local_148;
            ppppppplVar27 = local_148;
            do {
              if ((long)uVar14 <= (long)*(int *)((long)ppppppplVar27 + 0x1c)) {
                ppppppplVar22 = ppppppplVar27;
              }
              ppppppplVar27 =
                   (long *******)
                   ppppppplVar27[(long)*(int *)((long)ppppppplVar27 + 0x1c) < (long)uVar14];
            } while (ppppppplVar27 != (long *******)0x0);
            if (((long ********)ppppppplVar22 != &local_148) &&
               ((long)*(int *)((long)ppppppplVar22 + 0x1c) <= (long)uVar14)) goto LAB_004aefe0;
          }
          FUN_004ae6e4(param_1,param_2,uVar14 & 0xffffffff);
        }
        ppppppuVar9[9][uVar14] = (ulong ****)0x0;
LAB_004af130:
        if (*(char *)((long)*param_1 + 0x29) != '\0') {
          ppppppuVar11 = param_1[1];
          pbVar20 = *(byte **)(*(long *)(param_2 + 0x28) + uVar14 * 8 + 8);
          pppppppuVar16 = (ulong *******)FUN_0049e770(puVar4,0x18);
          if (pppppppuVar16 != (ulong *******)0x0) {
            if ((*pbVar20 & 1) == 0) {
              ppppppuVar15 = *(ulong *******)(pbVar20 + 8);
              ppppppuVar34 = *(ulong *******)pbVar20;
              pppppppuVar16[2] = *(ulong *******)(pbVar20 + 0x10);
              pppppppuVar16[1] = ppppppuVar15;
              *pppppppuVar16 = ppppppuVar34;
            }
            else {
              ppppppuVar34 = *(ulong *******)(pbVar20 + 8);
              pvVar5 = *(void **)(pbVar20 + 0x10);
              if (ppppppuVar34 < (ulong ******)0x17) {
                ppppppuVar15 = (ulong ******)((long)pppppppuVar16 + 1);
                *(byte *)pppppppuVar16 = (byte)((int)ppppppuVar34 << 1);
              }
              else {
                if ((ulong ******)0xffffffffffffffef < ppppppuVar34) {
                    /* try { // try from 004aff0c to 004aff13 has its CatchHandler @ 004aff1c */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                ppppppuVar15 = (ulong ******)
                               FUN_0049e770(puVar4,(ulong)(ppppppuVar34 + 2) & 0xfffffffffffffff0);
                pppppppuVar16[1] = ppppppuVar34;
                pppppppuVar16[2] = ppppppuVar15;
                *pppppppuVar16 = (ulong ******)((ulong)(ppppppuVar34 + 2) & 0xfffffffffffffff0 | 1);
              }
              memcpy(ppppppuVar15,pvVar5,(long)ppppppuVar34 + 1);
            }
          }
                    /* try { // try from 004aeeb4 to 004aeebb has its CatchHandler @ 004b015c */
          local_1d8 = pppppppuVar16;
          FUN_004a3dc0(ppppppuVar11 + 0x1a,&local_1d8);
          ppppppuVar9[10][uVar14] = (ulong ****)pppppppuVar16;
        }
      }
      else {
                    /* try { // try from 004aef90 to 004aef93 has its CatchHandler @ 004b0098 */
        if (((*(char *)(ppppppuVar34 + 5) == '\0') ||
            (ppppppuVar34 = (ulong ******)
                            FUN_004c4c58(ppppppuVar34 + 6,*(undefined8 *)(param_2 + 0xb0)),
            *param_1 + 7 == ppppppuVar34)) || (*(int *)((long)ppppppuVar11 + 0x24) != 0)) {
          ppppppuVar9[9][uVar14] = (ulong ****)ppppppuVar11;
        }
        else {
          if ((ulong *******)*pppppppuVar37 == (ulong *******)0x0) {
            pppppppuVar31 = pppppppuVar37;
            pppppppuVar16 = pppppppuVar37;
          }
          else {
            pppppppuVar31 = param_1 + 0x10;
            pppppppuVar28 = (ulong *******)*pppppppuVar37;
            while( true ) {
              while( true ) {
                pppppppuVar16 = pppppppuVar28;
                if (pppppppuVar28[4] <= ppppppuVar11) break;
                if ((ulong *******)*pppppppuVar28 == (ulong *******)0x0) {
                  ppppppuVar34 = *pppppppuVar28;
                  goto joined_r0x004af070;
                }
                pppppppuVar31 = pppppppuVar28;
                pppppppuVar28 = (ulong *******)*pppppppuVar28;
              }
              if (ppppppuVar11 <= pppppppuVar28[4]) break;
              pppppppuVar31 = pppppppuVar28 + 1;
              if ((ulong *******)*pppppppuVar31 == (ulong *******)0x0) break;
              pppppppuVar28 = (ulong *******)*pppppppuVar31;
            }
          }
          ppppppuVar34 = *pppppppuVar31;
          pppppppuVar28 = pppppppuVar31;
joined_r0x004af070:
          if (ppppppuVar34 == (ulong ******)0x0) {
            ppppppuVar34 = (ulong ******)FUN_0049e770(puVar4,0x28);
            *ppppppuVar34 = (ulong *****)0x0;
            ppppppuVar34[1] = (ulong *****)0x0;
            ppppppuVar34[4] = (ulong *****)ppppppuVar11;
            ppppppuVar34[2] = (ulong *****)pppppppuVar16;
            *pppppppuVar28 = ppppppuVar34;
            if ((ulong ******)**pppppppuVar13 != (ulong ******)0x0) {
              *pppppppuVar13 = (ulong ******)**pppppppuVar13;
              ppppppuVar34 = *pppppppuVar28;
            }
            FUN_010108e0(param_1[0x10],ppppppuVar34);
            param_1[0x11] = (ulong ******)((long)param_1[0x11] + 1);
            ppppppuVar9[9][uVar14] = (ulong ****)ppppppuVar11;
          }
          else {
            ppppppuVar9[9][uVar14] = (ulong ****)ppppppuVar11;
          }
        }
joined_r0x004aefb4:
        if (ppppppuVar11 == (ulong ******)0x0) goto LAB_004af130;
      }
      uVar14 = uVar14 + 1;
    } while ((long)uVar14 < (long)*(int *)(param_2 + 0x20));
  }
                    /* try { // try from 004af1cc to 004af1cf has its CatchHandler @ 004aff54 */
  pppppuVar10 = (ulong *****)FUN_004a41ac(param_1[1],*(int *)(param_2 + 0x90) << 2);
  ppppppuVar9[0xb] = pppppuVar10;
  if (*(int *)(param_2 + 0x90) < 1) {
    iVar8 = 0;
  }
  else {
    lVar33 = 0;
    iVar8 = 0;
    do {
      uVar6 = *(uint *)(*(long *)(param_2 + 0x98) + lVar33 * 4);
      if (((int)uVar6 < 0) || (*(int *)(param_2 + 0x20) <= (int)uVar6)) {
                    /* try { // try from 004af208 to 004af21b has its CatchHandler @ 004b00dc */
        FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 0xb0),param_2,10,
                     "Invalid public dependency index.");
      }
      else {
        *(uint *)((long)ppppppuVar9[0xb] + (long)iVar8 * 4) = uVar6;
        iVar8 = iVar8 + 1;
        if (*(char *)((long)*param_1 + 0x29) == '\0') {
          pppppuVar10 = ppppppuVar9[3];
          if ((pppppuVar10 != (ulong *****)0x0) &&
             (local_90 = ppppppuVar9, *pppppuVar10 != (ulong ****)0xffffffffffffffff)) {
            local_1d8 = (ulong *******)PTR_FUN_047cd758;
            local_78 = (ulong *******)&local_1d8;
                    /* try { // try from 004af288 to 004af293 has its CatchHandler @ 004aff58 */
            ppppppuStack_1d0 = (ulong ******)&local_90;
            std::__call_once((ulong *)pppppuVar10,&local_78,(_func_void_void_ptr *)&LAB_004c9510);
          }
          pppppppuVar16 = (ulong *******)*pppppppuVar37;
          if (pppppppuVar16 != (ulong *******)0x0) {
            ppppppuVar11 = (ulong ******)ppppppuVar9[9][uVar6];
            pppppppuVar28 = pppppppuVar16;
            pppppppuVar31 = pppppppuVar37;
            do {
              if (pppppppuVar28[4] >= ppppppuVar11) {
                pppppppuVar31 = pppppppuVar28;
              }
              pppppppuVar28 = (ulong *******)pppppppuVar28[pppppppuVar28[4] < ppppppuVar11];
            } while (pppppppuVar28 != (ulong *******)0x0);
            if ((pppppppuVar31 != pppppppuVar37) && (pppppppuVar31[4] <= ppppppuVar11)) {
              ppppppuVar11 = pppppppuVar31[1];
              if (pppppppuVar31[1] == (ulong ******)0x0) {
                pppppppuVar28 = pppppppuVar31 + 2;
                ppppppuVar34 = *pppppppuVar28;
                if ((ulong *******)*ppppppuVar34 != pppppppuVar31) {
                  do {
                    ppppppuVar11 = *pppppppuVar28;
                    pppppppuVar28 = (ulong *******)(ppppppuVar11 + 2);
                    ppppppuVar34 = *pppppppuVar28;
                  } while ((ulong ******)*ppppppuVar34 != ppppppuVar11);
                }
              }
              else {
                do {
                  ppppppuVar34 = ppppppuVar11;
                  ppppppuVar11 = (ulong ******)*ppppppuVar34;
                } while ((ulong ******)*ppppppuVar34 != (ulong ******)0x0);
              }
              if ((ulong *******)*pppppppuVar13 == pppppppuVar31) {
                *pppppppuVar13 = ppppppuVar34;
              }
              param_1[0x11] = (ulong ******)((long)param_1[0x11] + -1);
              FUN_01336080(pppppppuVar16,pppppppuVar31);
              FUN_0049e790(PTR_LAB_047cba48,pppppppuVar31);
            }
          }
        }
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 < *(int *)(param_2 + 0x90));
  }
  *(int *)((long)ppppppuVar9 + 0x24) = iVar8;
  pppppppuVar13 = param_1 + 0xd;
  FUN_004c47e4(param_1 + 0xc,*pppppppuVar13);
  param_1[0xc] = (ulong ******)pppppppuVar13;
  *pppppppuVar13 = (ulong ******)0x0;
  param_1[0xe] = (ulong ******)0x0;
  puVar4 = PTR_FUN_047cd758;
  if ((*(char *)((long)*param_1 + 0x29) == '\0') && (0 < *(int *)(ppppppuVar9 + 4))) {
    lVar33 = 0;
    do {
      pppppuVar10 = ppppppuVar9[3];
      if ((pppppuVar10 != (ulong *****)0x0) &&
         (local_90 = ppppppuVar9, *pppppuVar10 != (ulong ****)0xffffffffffffffff)) {
        local_1d8 = (ulong *******)puVar4;
                    /* try { // try from 004af3e8 to 004af403 has its CatchHandler @ 004b00f0 */
        ppppppuStack_1d0 = (ulong ******)&local_90;
        local_78 = (ulong *******)&local_1d8;
        std::__call_once((ulong *)pppppuVar10,&local_78,(_func_void_void_ptr *)&LAB_004c9510);
      }
      FUN_004ab0fc(param_1,ppppppuVar9[9][lVar33]);
      lVar33 = lVar33 + 1;
    } while (lVar33 < *(int *)(ppppppuVar9 + 4));
  }
                    /* try { // try from 004af420 to 004af423 has its CatchHandler @ 004b009c */
  pppppuVar10 = (ulong *****)FUN_004a41ac(param_1[1],*(int *)(param_2 + 0xa0) << 2);
  ppppppuVar9[0xc] = pppppuVar10;
  if (*(int *)(param_2 + 0xa0) < 1) {
    iVar8 = 0;
  }
  else {
    lVar33 = 0;
    iVar8 = 0;
    do {
      while ((iVar39 = *(int *)(*(long *)(param_2 + 0xa8) + lVar33 * 4), iVar39 < 0 ||
             (*(int *)(param_2 + 0x20) <= iVar39))) {
                    /* try { // try from 004af450 to 004af463 has its CatchHandler @ 004b00e0 */
        FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 0xb0),param_2,10,
                     "Invalid weak dependency index.");
        lVar33 = lVar33 + 1;
        if (*(int *)(param_2 + 0xa0) <= lVar33) goto LAB_004af4b0;
      }
      *(int *)((long)ppppppuVar9[0xc] + (long)iVar8 * 4) = iVar39;
      iVar8 = iVar8 + 1;
      lVar33 = lVar33 + 1;
    } while (lVar33 < *(int *)(param_2 + 0xa0));
  }
LAB_004af4b0:
  *(int *)(ppppppuVar9 + 5) = iVar8;
  iVar8 = *(int *)(param_2 + 0x38);
  *(int *)((long)ppppppuVar9 + 0x2c) = iVar8;
                    /* try { // try from 004af4c8 to 004af4cb has its CatchHandler @ 004b009c */
  pppppuVar10 = (ulong *****)FUN_004a41ac(param_1[1],iVar8 * 0x90);
  ppppppuVar9[0xd] = pppppuVar10;
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar33 = 0;
                    /* try { // try from 004af4f0 to 004af4fb has its CatchHandler @ 004b0150 */
    for (lVar32 = 1;
        FUN_004b0328(param_1,*(undefined8 *)(*(long *)(param_2 + 0x40) + lVar32 * 8),0,
                     (long)pppppuVar10 + lVar33), lVar32 < *(int *)(param_2 + 0x38);
        lVar32 = lVar32 + 1) {
      pppppuVar10 = ppppppuVar9[0xd];
      lVar33 = lVar33 + 0x90;
    }
  }
  iVar8 = *(int *)(param_2 + 0x50);
  *(int *)(ppppppuVar9 + 6) = iVar8;
                    /* try { // try from 004af52c to 004af52f has its CatchHandler @ 004b009c */
  pppppuVar10 = (ulong *****)FUN_004a41ac(param_1[1],iVar8 * 0x50);
  ppppppuVar9[0xe] = pppppuVar10;
  if (0 < *(int *)(param_2 + 0x50)) {
    lVar33 = 0;
                    /* try { // try from 004af554 to 004af55f has its CatchHandler @ 004b014c */
    for (lVar32 = 1;
        FUN_004b1700(param_1,*(undefined8 *)(*(long *)(param_2 + 0x58) + lVar32 * 8),0,
                     (long)pppppuVar10 + lVar33), lVar32 < *(int *)(param_2 + 0x50);
        lVar32 = lVar32 + 1) {
      pppppuVar10 = ppppppuVar9[0xe];
      lVar33 = lVar33 + 0x50;
    }
  }
  iVar8 = *(int *)(param_2 + 0x68);
  *(int *)((long)ppppppuVar9 + 0x34) = iVar8;
                    /* try { // try from 004af590 to 004af593 has its CatchHandler @ 004b009c */
  pppppuVar10 = (ulong *****)FUN_004a41ac(param_1[1],iVar8 * 0x30);
  ppppppuVar9[0xf] = pppppuVar10;
  if (0 < *(int *)(param_2 + 0x68)) {
                    /* try { // try from 004af5b8 to 004af5bf has its CatchHandler @ 004b0148 */
    for (lVar33 = 1; FUN_004b2298(param_1,*(undefined8 *)(*(long *)(param_2 + 0x70) + lVar33 * 8)),
        lVar33 < *(int *)(param_2 + 0x68); lVar33 = lVar33 + 1) {
    }
  }
  iVar8 = *(int *)(param_2 + 0x80);
  *(int *)(ppppppuVar9 + 7) = iVar8;
                    /* try { // try from 004af5f0 to 004af5f3 has its CatchHandler @ 004b009c */
  pppppuVar10 = (ulong *****)FUN_004a41ac(param_1[1],iVar8 * 0x98);
  ppppppuVar9[0x10] = pppppuVar10;
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar33 = 0;
                    /* try { // try from 004af618 to 004af627 has its CatchHandler @ 004b0144 */
    for (lVar32 = 1;
        FUN_004b45a4(param_1,*(undefined8 *)(*(long *)(param_2 + 0x88) + lVar32 * 8),0,
                     (long)pppppuVar10 + lVar33,1), lVar32 < *(int *)(param_2 + 0x80);
        lVar32 = lVar32 + 1) {
      pppppuVar10 = ppppppuVar9[0x10];
      lVar33 = lVar33 + 0x98;
    }
  }
  ppppppuVar9[0x11] = (ulong *****)0x0;
  if ((*(byte *)(param_2 + 0x10) >> 3 & 1) != 0) {
                    /* try { // try from 004af654 to 004af66f has its CatchHandler @ 004b009c */
    FUN_004adb84(param_1,*(undefined8 *)(param_2 + 200),ppppppuVar9);
  }
  FUN_004b24f4(param_1,ppppppuVar9,param_2);
  if (*(byte *)(param_1 + 6) == 0) {
    local_1c0 = &local_1b8;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = &local_1a0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_1d8 = param_1;
                    /* try { // try from 004af6b0 to 004af6b7 has its CatchHandler @ 004aff34 */
    FUN_004ecde8(auStack_190);
    ppppppuVar11 = param_1[3];
    ppppppuVar34 = ppppppuVar11;
    if (ppppppuVar11 != param_1[4]) {
      pcVar23 = (char *)((ulong)&local_78 | 1);
      pcVar24 = (char *)((ulong)&local_90 | 1);
      lVar33 = 0x58;
      ppppppuVar15 = ppppppuVar11;
      do {
        lVar32 = lVar33;
        pppppuVar10 = ppppppuVar15[9];
        pppppuVar12 = ppppppuVar15[10];
        ppppppuStack_1d0 = ppppppuVar15;
                    /* try { // try from 004af74c to 004af757 has its CatchHandler @ 004b0154 */
        lVar33 = (*(code *)(*pppppuVar12)[0x13])(pppppuVar12);
        uVar7 = s_uninterpreted_option_03be1643._8_8_;
        uVar30 = s_uninterpreted_option_03be1643._0_8_;
        local_78 = (ulong *******)CONCAT71(local_78._1_7_,0x28);
        pcVar23[0x10] = 't';
        pcVar23[0x11] = 'i';
        pcVar23[0x12] = 'o';
        pcVar23[0x13] = 'n';
        *(undefined8 *)(pcVar23 + 8) = uVar7;
        *(undefined8 *)pcVar23 = uVar30;
        local_68._0_6_ = (uint6)(uint5)local_68;
                    /* try { // try from 004af790 to 004af797 has its CatchHandler @ 004b00a4 */
        iVar8 = FUN_004c0784(*(undefined8 *)(*(long *)(lVar33 + 0x10) + 0x90),lVar33,&local_78);
        if (iVar8 == 2) {
          lVar33 = extraout_x1_00;
          if (*(char *)(extraout_x1_00 + 0x43) != '\0') {
            lVar33 = 0;
          }
        }
        else {
          lVar33 = 0;
        }
        if (((ulong)local_78 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_68);
        }
                    /* try { // try from 004af7e8 to 004af7ff has its CatchHandler @ 004b0154 */
        (*(code *)(*pppppuVar12)[0x13])(pppppuVar12);
        FUN_004f207c(extraout_x1_01,pppppuVar12,lVar33);
        local_68 = (ulong *******)0x0;
        local_78 = (ulong *******)0x0;
        local_70 = (ulong *******)0x0;
        lVar36 = (long)ppppppuVar15[7] - (long)ppppppuVar15[6];
        if (lVar36 == 0) {
          uVar25 = *(undefined4 *)(lVar33 + 0x44);
LAB_004af894:
          lVar33 = (long)local_70 - (long)local_78 >> 2;
          uVar14 = lVar33 + 1;
          if (uVar14 >> 0x3e != 0) {
                    /* try { // try from 004afefc to 004aff03 has its CatchHandler @ 004aff24 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar29 = (long)local_68 - (long)local_78 >> 1;
          if (uVar14 <= uVar29) {
            uVar14 = uVar29;
          }
          if (0x1ffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 2)) {
            uVar14 = 0x3fffffffffffffff;
          }
          if (uVar14 == 0) {
            lVar36 = 0;
          }
          else {
            lVar36 = FUN_0049e770(PTR_FUN_047cba38,uVar14 << 2);
          }
          puVar1 = (undefined4 *)(lVar36 + lVar33 * 4);
          sVar35 = (long)local_70 - (long)local_78;
          pppppppuVar13 = (ulong *******)(lVar36 + uVar14 * 4);
          *puVar1 = uVar25;
          pppppppuVar37 = (ulong *******)((long)puVar1 - sVar35);
          if (0 < (long)sVar35) {
            memcpy(pppppppuVar37,local_78,sVar35);
          }
          bVar3 = local_78 != (ulong *******)0x0;
          local_78 = pppppppuVar37;
          local_70 = (ulong *******)(puVar1 + 1);
          local_68 = pppppppuVar13;
          if (bVar3) {
            FUN_0049e790(PTR_LAB_047cba48);
          }
        }
        else {
          uVar14 = lVar36 >> 2;
          if (uVar14 >> 0x3e != 0) {
                    /* try { // try from 004aff04 to 004aff0b has its CatchHandler @ 004aff20 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          pppppppuVar13 = (ulong *******)FUN_0049e770(PTR_FUN_047cba38);
          local_68 = (ulong *******)((long)pppppppuVar13 + uVar14 * 4);
          sVar35 = (long)ppppppuVar15[7] - (long)ppppppuVar15[6];
          local_78 = pppppppuVar13;
          if (0 < (long)sVar35) {
            local_70 = pppppppuVar13;
            memcpy(pppppppuVar13,ppppppuVar15[6],sVar35);
            pppppppuVar13 = (ulong *******)((long)pppppppuVar13 + sVar35);
          }
          uVar25 = *(undefined4 *)(lVar33 + 0x44);
          local_70 = pppppppuVar13;
          if (local_68 <= pppppppuVar13) goto LAB_004af894;
          *(undefined4 *)pppppppuVar13 = uVar25;
          local_70 = (ulong *******)((long)pppppppuVar13 + 4);
        }
                    /* try { // try from 004af938 to 004af943 has its CatchHandler @ 004b00b8 */
        lVar33 = (*(code *)(*pppppuVar10)[0x13])(pppppuVar10);
        local_90 = (ulong ******)CONCAT71(local_90._1_7_,0x28);
        pcVar24[0x10] = 't';
        pcVar24[0x11] = 'i';
        pcVar24[0x12] = 'o';
        pcVar24[0x13] = 'n';
        *(undefined8 *)(pcVar24 + 8) = uVar7;
        *(undefined8 *)pcVar24 = uVar30;
        local_80 = (uint6)(uint5)local_80;
                    /* try { // try from 004af970 to 004af977 has its CatchHandler @ 004b00bc */
        iVar8 = FUN_004c0784(*(undefined8 *)(*(long *)(lVar33 + 0x10) + 0x90),lVar33,&local_90);
        lVar33 = 0;
        if (((iVar8 != 0) && (iVar8 == 2)) &&
           (lVar33 = extraout_x1_02, *(char *)(extraout_x1_02 + 0x43) != '\0')) {
          lVar33 = 0;
        }
        if (((ulong)local_90 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,_local_80);
        }
                    /* try { // try from 004af9b8 to 004af9cf has its CatchHandler @ 004b00fc */
        (*(code *)(*pppppuVar10)[0x13])(pppppuVar10);
        iVar8 = FUN_004f48a0(extraout_x1_03,pppppuVar10,lVar33);
        if (0 < iVar8) {
          iVar39 = 0;
          do {
            if (local_70 == local_68) {
              lVar36 = (long)local_70 - (long)local_78 >> 2;
              uVar14 = lVar36 + 1;
              if (uVar14 >> 0x3e != 0) {
                    /* try { // try from 004afef4 to 004afefb has its CatchHandler @ 004aff28 */
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              uVar29 = (long)local_68 - (long)local_78 >> 1;
              if (uVar14 <= uVar29) {
                uVar14 = uVar29;
              }
              if (0x1ffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 2)) {
                uVar14 = 0x3fffffffffffffff;
              }
              if (uVar14 == 0) {
                lVar17 = 0;
              }
              else {
                lVar17 = FUN_0049e770(PTR_FUN_047cba38,uVar14 << 2);
              }
              piVar2 = (int *)(lVar17 + lVar36 * 4);
              sVar35 = (long)local_70 - (long)local_78;
              pppppppuVar13 = (ulong *******)(lVar17 + uVar14 * 4);
              pppppppuVar37 = (ulong *******)((long)piVar2 - sVar35);
              *piVar2 = iVar39;
              if (0 < (long)sVar35) {
                memcpy(pppppppuVar37,local_78,sVar35);
              }
              bVar3 = local_78 != (ulong *******)0x0;
              local_78 = pppppppuVar37;
              local_70 = (ulong *******)(piVar2 + 1);
              local_68 = pppppppuVar13;
              if (bVar3) {
                FUN_0049e790(PTR_LAB_047cba48);
              }
            }
            else {
              *(int *)local_70 = iVar39;
              local_70 = (ulong *******)((long)local_70 + 4);
            }
                    /* try { // try from 004afaa0 to 004afad3 has its CatchHandler @ 004b0164 */
            (*(code *)(*pppppuVar10)[0x13])(pppppuVar10);
            local_1c8 = (ulong ******)FUN_004f7c80(extraout_x1_04,pppppuVar10,lVar33,iVar39);
            uVar14 = FUN_004bc5ec(&local_1d8,pppppuVar12,&local_78,ppppppuVar15 + 6);
            if ((uVar14 & 1) == 0) {
              ppppppuStack_1d0 = (ulong ******)0x0;
              local_1c8 = (ulong ******)0x0;
              goto joined_r0x004af70c;
            }
            iVar39 = iVar39 + 1;
            local_70 = (ulong *******)((long)local_70 + -4);
          } while (iVar8 != iVar39);
        }
        ppppppuStack_1d0 = (ulong ******)0x0;
        local_1c8 = (ulong ******)0x0;
                    /* try { // try from 004afb00 to 004afb07 has its CatchHandler @ 004b0094 */
        puVar18 = (undefined8 *)(*(code *)(*pppppuVar12)[3])(pppppuVar12);
                    /* try { // try from 004afb14 to 004afb2f has its CatchHandler @ 004b00e4 */
        (*(code *)(*pppppuVar12)[0x13])(pppppuVar12);
        FUN_004f1998(extraout_x1_05,puVar18,pppppuVar12);
        local_90 = (ulong ******)0x0;
        uStack_88 = 0;
        _local_80 = 0;
                    /* try { // try from 004afb38 to 004afb53 has its CatchHandler @ 004b0100 */
        uVar14 = thunk_FUN_0052d660(puVar18,&local_90);
        if (((uVar14 & 1) == 0) || (uVar14 = FUN_0052d318(pppppuVar12,&local_90), (uVar14 & 1) == 0)
           ) {
          pppppppuVar13 = local_1d8;
                    /* try { // try from 004afb5c to 004afb67 has its CatchHandler @ 004b0080 */
          FUN_005071bc(local_108,puVar18);
                    /* try { // try from 004afb68 to 004afb7f has its CatchHandler @ 004b0084 */
          puVar19 = (ulong *)FUN_00273ff4(local_108,0,
                                          "Some options could not be correctly parsed using the proto descriptors compiled into this binary.\nUnparsed options: "
                                          ,0x74);
          uStack_e8 = puVar19[1];
          local_f0 = *puVar19;
          local_e0 = puVar19[2];
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = 0;
                    /* try { // try from 004afb9c to 004afbaf has its CatchHandler @ 004b0070 */
          puVar19 = (ulong *)FUN_0021d540(&local_f0,"\nParsing attempt:  ",0x13);
          uStack_c8 = puVar19[1];
          local_d0 = *puVar19;
          local_c0 = puVar19[2];
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = 0;
                    /* try { // try from 004afbcc to 004afbd7 has its CatchHandler @ 004afff0 */
          FUN_005071bc(local_120,pppppuVar12);
          uVar14 = (ulong)(local_120[0] >> 1);
          uVar29 = (ulong)local_120 | 1;
          if ((local_120[0] & 1) != 0) {
            uVar14 = local_118;
            uVar29 = local_110;
          }
                    /* try { // try from 004afbf4 to 004afbfb has its CatchHandler @ 004b0048 */
          puVar19 = (ulong *)FUN_0021d540(&local_d0,uVar29,uVar14);
          uStack_a8 = puVar19[1];
          local_b0 = *puVar19;
          local_a0 = puVar19[2];
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = 0;
          ppppppuVar34 = pppppppuVar13[2];
          if (ppppppuVar34 != (ulong ******)0x0) {
                    /* try { // try from 004afc2c to 004afc3b has its CatchHandler @ 004aff90 */
            (*(code *)(*ppppppuVar34)[2])
                      (ppppppuVar34,pppppppuVar13 + 7,ppppppuVar15 + 3,pppppuVar10,10,&local_b0);
          }
          *(byte *)(pppppppuVar13 + 6) = 1;
          if ((local_b0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_a0);
          }
          if ((local_120[0] & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_110);
          }
          if ((local_d0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_c0);
          }
          if ((local_f0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_e0);
          }
          if ((local_108[0] & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_f8);
          }
                    /* try { // try from 004afc84 to 004afc9b has its CatchHandler @ 004b0100 */
          (*(code *)(*pppppuVar12)[0x13])(pppppuVar12);
          FUN_004f1998(extraout_x1_06,puVar18,pppppuVar12);
        }
        if (((ulong)local_90 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,_local_80);
        }
        if (puVar18 != (undefined8 *)0x0) {
          (**(code **)*puVar18)(puVar18);
          FUN_0049e790(PTR_LAB_047cba48,puVar18);
        }
joined_r0x004af70c:
        if (local_78 != (ulong *******)0x0) {
          local_70 = local_78;
          FUN_0049e790(PTR_LAB_047cba48);
        }
        puVar4 = PTR_LAB_047cba48;
        ppppppuVar15 = ppppppuVar15 + 0xb;
        lVar33 = lVar32 + 0x58;
      } while (ppppppuVar15 != param_1[4]);
      ppppppuVar34 = param_1[3];
      if (ppppppuVar15 != ppppppuVar34) {
        do {
          lVar33 = *(long *)((long)ppppppuVar11 + lVar32 + -0x28);
          if (lVar33 != 0) {
            *(long *)((long)ppppppuVar11 + lVar32 + -0x20) = lVar33;
            FUN_0049e790(puVar4);
          }
          if ((*(byte *)((long)ppppppuVar11 + lVar32 + -0x40) & 1) == 0) {
            bVar21 = *(byte *)((long)ppppppuVar11 + lVar32 + -0x58);
          }
          else {
            FUN_0049e790(puVar4,*(undefined8 *)((long)ppppppuVar11 + lVar32 + -0x30));
            bVar21 = *(byte *)((long)ppppppuVar11 + lVar32 + -0x58);
          }
          if ((bVar21 & 1) != 0) {
            FUN_0049e790(puVar4,*(undefined8 *)((long)ppppppuVar11 + lVar32 + -0x48));
          }
          lVar32 = lVar32 + -0x58;
        } while ((long)ppppppuVar34 - (long)ppppppuVar11 != lVar32);
      }
    }
    param_1[4] = ppppppuVar34;
    if (pppppuVar38 != (ulong *****)0x0) {
                    /* try { // try from 004afddc to 004afde3 has its CatchHandler @ 004aff2c */
      FUN_004b2734(&local_1d8);
    }
    FUN_004ece4c(auStack_190);
    FUN_004c8fa4(&local_1a8,local_1a0);
    FUN_004c8f30(&local_1c0,local_1b8);
    bVar21 = *(byte *)(param_1 + 6);
    if (bVar21 != 0) {
      if (bVar21 != 0) goto LAB_004afe14;
      goto LAB_004afe5c;
    }
    if (*(char *)((long)*param_1 + 0x29) == '\0') {
      FUN_004b2ec8(param_1,ppppppuVar9,param_2);
      bVar21 = *(byte *)(param_1 + 6);
      if (bVar21 != 0) goto LAB_004afe14;
      bVar21 = 0;
      goto LAB_004afe5c;
    }
LAB_004afeac:
                    /* try { // try from 004afec0 to 004afee7 has its CatchHandler @ 004b009c */
    if (((param_1[0x11] == (ulong ******)0x0) || (*(char *)((long)*param_1 + 0x29) != '\0')) ||
       (FUN_004b393c(param_1,param_2), *(byte *)(param_1 + 6) == 0)) goto LAB_004afe64;
  }
  else {
    bVar21 = 1;
LAB_004afe14:
    if (0 < *(int *)(param_2 + 0x38)) {
      lVar32 = 0;
      lVar33 = 0;
      do {
                    /* try { // try from 004afe3c to 004afe43 has its CatchHandler @ 004b00f4 */
        FUN_004b32d4(param_1,(long)ppppppuVar9[0xd] + lVar32,
                     *(undefined8 *)(*(long *)(param_2 + 0x40) + lVar33 * 8 + 8));
        lVar33 = lVar33 + 1;
        lVar32 = lVar32 + 0x90;
      } while (lVar33 < *(int *)(param_2 + 0x38));
      bVar21 = *(byte *)(param_1 + 6);
    }
LAB_004afe5c:
    if (bVar21 == 0) goto LAB_004afeac;
  }
LAB_004afe60:
  ppppppuVar9 = (ulong ******)0x0;
LAB_004afe64:
  FUN_004c47a0(&local_150,local_148);
  FUN_002a515c(&local_138,local_130);
  return ppppppuVar9;
}


