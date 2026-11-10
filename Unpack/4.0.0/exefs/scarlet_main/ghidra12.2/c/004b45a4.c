/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b45a4; name: FUN_004b45a4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b45a4(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,byte param_5)

{
  undefined8 **ppuVar1;
  undefined *puVar2;
  byte *pbVar3;
  void *pvVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  int iVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined ***pppuVar12;
  undefined1 *puVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  size_t sVar16;
  ulong *puVar17;
  uint uVar18;
  byte *pbVar19;
  undefined *puVar20;
  ulong uVar21;
  ulong uVar22;
  byte *pbVar23;
  ulong uVar24;
  undefined8 uVar25;
  byte *pbVar26;
  long lVar27;
  ulonglong *puVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  undefined *puVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  char *local_190;
  undefined4 local_188;
  undefined8 *local_160;
  undefined4 local_158;
  undefined *local_130;
  undefined4 local_128;
  undefined ***local_100;
  uint local_f8;
  undefined1 auStack_f4 [4];
  undefined8 local_f0;
  undefined **local_d0;
  undefined8 uStack_c8;
  undefined **local_c0;
  byte local_98 [16];
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  byte *local_70;
  
  puVar15 = param_3;
  if (param_3 == (undefined8 *)0x0) {
    puVar15 = *(undefined8 **)(param_1 + 0x50);
  }
  uVar9 = FUN_004b3c30(param_1,puVar15[1],*(undefined8 *)(param_2 + 0x18));
  FUN_004ad8f4(param_1,*(undefined8 *)(param_2 + 0x18),uVar9,param_2);
  lVar27 = *(long *)(param_1 + 8);
  pbVar26 = *(byte **)(param_2 + 0x18);
  ppuVar10 = (undefined **)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (ppuVar10 != (undefined **)0x0) {
    if ((*pbVar26 & 1) == 0) {
      puVar31 = *(undefined **)(pbVar26 + 8);
      puVar20 = *(undefined **)pbVar26;
      ppuVar10[2] = *(undefined **)(pbVar26 + 0x10);
      ppuVar10[1] = puVar31;
      *ppuVar10 = puVar20;
    }
    else {
      puVar20 = *(undefined **)(pbVar26 + 8);
      pvVar4 = *(void **)(pbVar26 + 0x10);
      if (puVar20 < (undefined *)0x17) {
        puVar13 = (undefined1 *)((long)ppuVar10 + 1);
        *(char *)ppuVar10 = (char)((int)puVar20 << 1);
      }
      else {
        if ((undefined *)0xffffffffffffffef < puVar20) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        puVar13 = (undefined1 *)
                  FUN_0049e770(PTR_FUN_047cba38,(ulong)(puVar20 + 0x10) & 0xfffffffffffffff0);
        ppuVar10[1] = puVar20;
        ppuVar10[2] = puVar13;
        *ppuVar10 = (undefined *)((ulong)(puVar20 + 0x10) & 0xfffffffffffffff0 | 1);
      }
      memcpy(puVar13,pvVar4,(size_t)(puVar20 + 1));
    }
  }
  local_d0 = ppuVar10;
  FUN_004a3dc0(lVar27 + 0xd0,&local_d0);
  *param_4 = ppuVar10;
  param_4[1] = uVar9;
  lVar27 = *(long *)(param_1 + 0x50);
  param_4[5] = lVar27;
  *(undefined4 *)((long)param_4 + 0x44) = *(undefined4 *)(param_2 + 0x48);
  *(byte *)((long)param_4 + 0x43) = param_5 & 1;
  cVar32 = *(char *)(param_2 + 0x50);
  *(char *)((long)param_4 + 0x41) = cVar32;
  if ((cVar32 != '\0') && (*(int *)(lVar27 + 0x3c) != 3)) {
    FUN_004a8ec0(&local_d0,"The [proto3_optional=true] option may only be set on proto3fields, not "
                 ,uVar9);
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
                    /* try { // try from 004b470c to 004b471f has its CatchHandler @ 004b5bac */
      (**(code **)(*plVar11 + 0x10))(plVar11,param_1 + 0x38,uVar9,param_2,2,&local_d0);
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (((ulong)local_d0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_c0);
    }
  }
  pbVar26 = *(byte **)(param_2 + 0x18);
  if ((*pbVar26 & 1) == 0) {
    puStack_78 = *(undefined **)(pbVar26 + 8);
    local_80 = *(undefined **)pbVar26;
    local_70 = *(byte **)(pbVar26 + 0x10);
  }
  else {
    puVar20 = *(undefined **)(pbVar26 + 8);
    pvVar4 = *(void **)(pbVar26 + 0x10);
    if (puVar20 < (undefined *)0x17) {
      pbVar26 = (byte *)((ulong)&local_80 | 1);
      local_80 = (undefined *)CONCAT71(local_80._1_7_,(char)((int)puVar20 << 1));
    }
    else {
      if ((undefined *)0xffffffffffffffef < puVar20) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      pbVar26 = (byte *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(puVar20 + 0x10) & 0xfffffffffffffff0);
      local_80 = (undefined *)((ulong)(puVar20 + 0x10) & 0xfffffffffffffff0 | 1);
      puStack_78 = puVar20;
      local_70 = pbVar26;
    }
    memcpy(pbVar26,pvVar4,(size_t)(puVar20 + 1));
  }
  pbVar19 = (byte *)((ulong)&local_80 | 1);
  puVar20 = (undefined *)(ulong)((byte)local_80 >> 1);
  pbVar26 = pbVar19;
  pbVar3 = pbVar19 + (long)puVar20;
  if (((ulong)local_80 & 1) != 0) {
    pbVar26 = local_70;
    pbVar3 = local_70 + (long)puStack_78;
  }
  if (pbVar26 != pbVar3) {
    uVar21 = (long)pbVar3 - (long)pbVar26;
    pbVar23 = pbVar26;
    if (uVar21 < 8) {
LAB_004b49a0:
      do {
        if (*pbVar23 - 0x41 < 0x1a) {
          *pbVar23 = *pbVar23 + 0x20;
        }
        pbVar23 = pbVar23 + 1;
      } while (pbVar3 != pbVar23);
    }
    else {
      uVar22 = uVar21 & 0xfffffffffffffff8;
      pbVar23 = pbVar26 + uVar22;
      pbVar26 = pbVar26 + 3;
      uVar24 = uVar22;
      do {
        uVar9 = *(undefined8 *)(pbVar26 + -3);
        cVar32 = (char)((ulong)uVar9 >> 8);
        cVar33 = (char)((ulong)uVar9 >> 0x10);
        cVar34 = (char)((ulong)uVar9 >> 0x18);
        cVar35 = (char)((ulong)uVar9 >> 0x20);
        cVar36 = (char)((ulong)uVar9 >> 0x28);
        cVar37 = (char)((ulong)uVar9 >> 0x30);
        cVar38 = (char)((ulong)uVar9 >> 0x38);
        if ((byte)((char)uVar9 + 0xbfU) < 0x1a) {
          pbVar26[-3] = (char)uVar9 + 0x20;
        }
        if ((byte)(cVar32 + 0xbfU) < 0x1a) {
          pbVar26[-2] = cVar32 + 0x20;
        }
        if ((byte)(cVar33 + 0xbfU) < 0x1a) {
          pbVar26[-1] = cVar33 + 0x20;
        }
        if ((byte)(cVar34 + 0xbfU) < 0x1a) {
          *pbVar26 = cVar34 + 0x20;
        }
        if ((byte)(cVar35 + 0xbfU) < 0x1a) {
          pbVar26[1] = cVar35 + 0x20;
        }
        if ((byte)(cVar36 + 0xbfU) < 0x1a) {
          pbVar26[2] = cVar36 + 0x20;
        }
        if ((byte)(cVar37 + 0xbfU) < 0x1a) {
          pbVar26[3] = cVar37 + 0x20;
        }
        if ((byte)(cVar38 + 0xbfU) < 0x1a) {
          pbVar26[4] = cVar38 + 0x20;
        }
        uVar24 = uVar24 - 8;
        pbVar26 = pbVar26 + 8;
      } while (uVar24 != 0);
      if (uVar21 != uVar22) goto LAB_004b49a0;
    }
    puVar20 = (undefined *)(ulong)((byte)local_80 >> 1);
  }
  pbVar26 = *(byte **)(param_2 + 0x18);
  puVar31 = puVar20;
  if (((ulong)local_80 & 1) != 0) {
    puVar31 = puStack_78;
  }
  bVar5 = *pbVar26;
  puVar2 = (undefined *)(ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    puVar2 = *(undefined **)(pbVar26 + 8);
  }
  if (puVar31 == puVar2) {
    pbVar3 = pbVar19;
    if (((ulong)local_80 & 1) != 0) {
      pbVar3 = local_70;
    }
    pbVar23 = *(byte **)(pbVar26 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar23 = pbVar26 + 1;
    }
    if (((ulong)local_80 & 1) == 0) {
      while (puVar31 != (undefined *)0x0) {
        if (*pbVar19 != *pbVar23) goto LAB_004b49c8;
        pbVar19 = pbVar19 + 1;
        pbVar23 = pbVar23 + 1;
        puVar20 = puVar20 + -1;
        puVar31 = puVar20;
      }
    }
    else if ((puVar31 != (undefined *)0x0) &&
            (iVar8 = memcmp(pbVar3,pbVar23,(size_t)puVar31), iVar8 != 0)) goto LAB_004b49c8;
    param_4[2] = *param_4;
  }
  else {
LAB_004b49c8:
    lVar27 = *(long *)(param_1 + 8);
    ppuVar10 = (undefined **)FUN_0049e770(PTR_FUN_047cba38,0x18);
    pbVar26 = local_70;
    puVar20 = puStack_78;
    if (ppuVar10 != (undefined **)0x0) {
      if (((ulong)local_80 & 1) == 0) {
        ppuVar10[2] = local_70;
        ppuVar10[1] = puStack_78;
        *ppuVar10 = local_80;
      }
      else {
        if (puStack_78 < (undefined *)0x17) {
          puVar13 = (undefined1 *)((long)ppuVar10 + 1);
          *(char *)ppuVar10 = (char)((int)puStack_78 << 1);
        }
        else {
          if ((undefined *)0xffffffffffffffef < puStack_78) {
                    /* try { // try from 004b5b24 to 004b5b33 has its CatchHandler @ 004b5c18 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          puVar31 = puStack_78 + 0x10;
          puVar13 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,(ulong)puVar31 & 0xfffffffffffffff0)
          ;
          ppuVar10[1] = puVar20;
          ppuVar10[2] = puVar13;
          *ppuVar10 = (undefined *)((ulong)puVar31 & 0xfffffffffffffff0 | 1);
        }
        memcpy(puVar13,pbVar26,(size_t)(puVar20 + 1));
      }
    }
                    /* try { // try from 004b4a6c to 004b4a73 has its CatchHandler @ 004b5c18 */
    local_d0 = ppuVar10;
    FUN_004a3dc0(lVar27 + 0xd0,&local_d0);
    param_4[2] = ppuVar10;
    pbVar26 = *(byte **)(param_2 + 0x18);
  }
  lVar27 = *(long *)(param_1 + 8);
                    /* try { // try from 004b4a80 to 004b4a8f has its CatchHandler @ 004b5c14 */
  FUN_004b5c40(&local_d0,pbVar26,1);
  pppuVar12 = (undefined ***)FUN_0049e770(PTR_FUN_047cba38,0x18);
  ppuVar10 = local_c0;
  ppuVar7 = uStack_c8;
  if (pppuVar12 != (undefined ***)0x0) {
    if (((ulong)local_d0 & 1) == 0) {
      pppuVar12[2] = local_c0;
      pppuVar12[1] = (undefined **)uStack_c8;
      *pppuVar12 = local_d0;
    }
    else {
      if (uStack_c8 < (undefined8 **)0x17) {
        ppuVar14 = (undefined **)((long)pppuVar12 + 1);
        *(byte *)pppuVar12 = (byte)((int)uStack_c8 << 1);
      }
      else {
        if ((undefined8 **)0xffffffffffffffef < uStack_c8) {
                    /* try { // try from 004b5b1c to 004b5b23 has its CatchHandler @ 004b5bf4 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        ppuVar1 = uStack_c8 + 2;
        ppuVar14 = (undefined **)FUN_0049e770(PTR_FUN_047cba38,(ulong)ppuVar1 & 0xfffffffffffffff0);
        pppuVar12[1] = (undefined **)ppuVar7;
        pppuVar12[2] = ppuVar14;
        *pppuVar12 = (undefined **)((ulong)ppuVar1 & 0xfffffffffffffff0 | 1);
      }
      memcpy(ppuVar14,ppuVar10,(long)ppuVar7 + 1);
    }
  }
                    /* try { // try from 004b4b20 to 004b4b27 has its CatchHandler @ 004b5bf4 */
  local_100 = pppuVar12;
  FUN_004a3dc0(lVar27 + 0xd0,&local_100);
  param_4[3] = pppuVar12;
  if (((ulong)local_d0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_c0);
  }
  if ((*(byte *)(param_2 + 0x10) >> 4 & 1) == 0) {
    *(undefined1 *)((long)param_4 + 0x42) = 0;
    lVar27 = *(long *)(param_1 + 8);
                    /* try { // try from 004b4b58 to 004b4b5f has its CatchHandler @ 004b5bf0 */
    FUN_004b5d90(&local_d0,*(undefined8 *)(param_2 + 0x18));
    pppuVar12 = (undefined ***)FUN_0049e770(PTR_FUN_047cba38,0x18);
    ppuVar10 = local_c0;
    ppuVar7 = uStack_c8;
    if (pppuVar12 != (undefined ***)0x0) {
      if (((ulong)local_d0 & 1) == 0) {
        pppuVar12[2] = local_c0;
        pppuVar12[1] = (undefined **)uStack_c8;
        *pppuVar12 = local_d0;
      }
      else {
        if (uStack_c8 < (undefined8 **)0x17) {
          ppuVar14 = (undefined **)((long)pppuVar12 + 1);
          *(byte *)pppuVar12 = (byte)((int)uStack_c8 << 1);
        }
        else {
          if ((undefined8 **)0xffffffffffffffef < uStack_c8) {
                    /* try { // try from 004b5b34 to 004b5b3b has its CatchHandler @ 004b5bec */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          ppuVar1 = uStack_c8 + 2;
          ppuVar14 = (undefined **)
                     FUN_0049e770(PTR_FUN_047cba38,(ulong)ppuVar1 & 0xfffffffffffffff0);
          pppuVar12[1] = (undefined **)ppuVar7;
          pppuVar12[2] = ppuVar14;
          *pppuVar12 = (undefined **)((ulong)ppuVar1 & 0xfffffffffffffff0 | 1);
        }
        memcpy(ppuVar14,ppuVar10,(long)ppuVar7 + 1);
      }
    }
                    /* try { // try from 004b4ca0 to 004b4ca7 has its CatchHandler @ 004b5bec */
    local_100 = pppuVar12;
    FUN_004a3dc0(lVar27 + 0xd0,&local_100);
    param_4[4] = pppuVar12;
    if (((ulong)local_d0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_c0);
    }
  }
  else {
    *(undefined1 *)((long)param_4 + 0x42) = 1;
    lVar27 = *(long *)(param_1 + 8);
    pbVar26 = *(byte **)(param_2 + 0x38);
    ppuVar10 = (undefined **)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (ppuVar10 != (undefined **)0x0) {
      if ((*pbVar26 & 1) == 0) {
        puVar31 = *(undefined **)(pbVar26 + 8);
        puVar20 = *(undefined **)pbVar26;
        ppuVar10[2] = *(undefined **)(pbVar26 + 0x10);
        ppuVar10[1] = puVar31;
        *ppuVar10 = puVar20;
      }
      else {
        puVar20 = *(undefined **)(pbVar26 + 8);
        pvVar4 = *(void **)(pbVar26 + 0x10);
        if (puVar20 < (undefined *)0x17) {
          puVar13 = (undefined1 *)((long)ppuVar10 + 1);
          *(char *)ppuVar10 = (char)((int)puVar20 << 1);
        }
        else {
          if ((undefined *)0xffffffffffffffef < puVar20) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          puVar13 = (undefined1 *)
                    FUN_0049e770(PTR_FUN_047cba38,(ulong)(puVar20 + 0x10) & 0xfffffffffffffff0);
          ppuVar10[1] = puVar20;
          ppuVar10[2] = puVar13;
          *ppuVar10 = (undefined *)((ulong)(puVar20 + 0x10) & 0xfffffffffffffff0 | 1);
        }
        memcpy(puVar13,pvVar4,(size_t)(puVar20 + 1));
      }
    }
                    /* try { // try from 004b4c50 to 004b4c57 has its CatchHandler @ 004b5c18 */
    local_d0 = ppuVar10;
    FUN_004a3dc0(lVar27 + 0xd0,&local_d0);
    param_4[4] = ppuVar10;
  }
  *(undefined4 *)(param_4 + 7) = *(undefined4 *)(param_2 + 0x58);
  iVar8 = *(int *)(param_2 + 0x54);
  *(int *)((long)param_4 + 0x3c) = iVar8;
  if ((iVar8 == 2) && (*(char *)((long)param_4 + 0x43) != '\0')) {
    uVar9 = param_4[1];
                    /* try { // try from 004b4ce8 to 004b4cfb has its CatchHandler @ 004b5be4 */
    FUN_004a8ec0(&local_100,"The extension ",uVar9);
                    /* try { // try from 004b4cfc to 004b4d0f has its CatchHandler @ 004b5bd0 */
    puVar15 = (undefined8 *)FUN_0021d540(&local_100," cannot be required.",0x14);
    uStack_c8 = (undefined8 **)puVar15[1];
    local_d0 = (undefined **)*puVar15;
    local_c0 = (undefined **)puVar15[2];
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = 0;
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
                    /* try { // try from 004b4d3c to 004b4d4f has its CatchHandler @ 004b5b8c */
      (**(code **)(*plVar11 + 0x10))(plVar11,param_1 + 0x38,uVar9,param_2,2,&local_d0);
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (((ulong)local_d0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_c0);
    }
    if (((ulong)local_100 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_f0);
    }
  }
  param_4[0xc] = 0;
  param_4[10] = 0;
  param_4[6] = 0;
  puVar28 = param_4 + 0x12;
  *puVar28 = 0;
  param_4[0xd] = 0;
  param_4[0xe] = 0;
  param_4[0x10] = 0;
  param_4[0x11] = 0;
  uVar18 = *(uint *)(param_2 + 0x10);
  *(byte *)(param_4 + 8) = (byte)(uVar18 >> 3) & 1;
  if (((uVar18 >> 3 & 1) != 0) && (*(int *)((long)param_4 + 0x3c) == 3)) {
                    /* try { // try from 004b4dc8 to 004b4ddf has its CatchHandler @ 004b5c18 */
    FUN_004aa7f4(param_1,param_4[1],param_2,4,"Repeated fields can\'t have default values.");
    uVar18 = *(uint *)(param_2 + 0x10);
  }
  if ((uVar18 >> 10 & 1) != 0) {
    if ((uVar18 >> 3 & 1) == 0) {
      puVar17 = (ulong *)param_4[6];
      if ((puVar17 != (ulong *)0x0) &&
         (local_130 = PTR_LAB_047cd728, local_160 = param_4, *puVar17 != 0xffffffffffffffff)) {
        local_d0 = &local_130;
        uStack_c8 = &local_160;
        local_100 = &local_d0;
                    /* try { // try from 004b4f38 to 004b4f9f has its CatchHandler @ 004b5c18 */
        std::__call_once(puVar17,&local_100,(_func_void_void_ptr *)&LAB_004c0750);
      }
      switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)*(uint *)(param_4 + 7) * 4)) {
      case 1:
      case 3:
      case 6:
        *(undefined4 *)puVar28 = 0;
        break;
      case 2:
      case 4:
      case 5:
      case 8:
        *puVar28 = 0;
        break;
      case 7:
        *(undefined1 *)puVar28 = 0;
        break;
      case 9:
        FUN_0052b030();
        *puVar28 = (ulonglong)PTR_DAT_047cba80;
      }
    }
    else {
      local_190 = (char *)0x0;
      puVar17 = (ulong *)param_4[6];
      if ((puVar17 != (ulong *)0x0) &&
         (local_130 = PTR_LAB_047cd728, local_160 = param_4, *puVar17 != 0xffffffffffffffff)) {
        local_d0 = &local_130;
        uStack_c8 = &local_160;
        local_100 = &local_d0;
                    /* try { // try from 004b51b0 to 004b51bf has its CatchHandler @ 004b5b74 */
        std::__call_once(puVar17,&local_100,(_func_void_void_ptr *)&LAB_004c0750);
      }
      uVar18 = *(uint *)(param_4 + 7);
      switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)uVar18 * 4)) {
      case 1:
        pbVar26 = *(byte **)(param_2 + 0x30);
        if ((*pbVar26 & 1) == 0) {
          pbVar26 = pbVar26 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar26 + 0x10);
        }
        lVar27 = strtol((char *)pbVar26,&local_190,0);
        *(int *)puVar28 = (int)lVar27;
        break;
      case 2:
        pbVar26 = *(byte **)(param_2 + 0x30);
        if ((*pbVar26 & 1) == 0) {
          pbVar26 = pbVar26 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar26 + 0x10);
        }
        uVar30 = strtoll((char *)pbVar26,&local_190,0);
        *puVar28 = uVar30;
        break;
      case 3:
        pbVar26 = *(byte **)(param_2 + 0x30);
        if ((*pbVar26 & 1) == 0) {
          pbVar26 = pbVar26 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar26 + 0x10);
        }
        uVar21 = strtoul((char *)pbVar26,&local_190,0);
        *(int *)puVar28 = (int)uVar21;
        break;
      case 4:
        pbVar26 = *(byte **)(param_2 + 0x30);
        if ((*pbVar26 & 1) == 0) {
          pbVar26 = pbVar26 + 1;
        }
        else {
          pbVar26 = *(byte **)(pbVar26 + 0x10);
        }
        uVar30 = strtoull((char *)pbVar26,&local_190,0);
        *puVar28 = uVar30;
        break;
      case 5:
        pbVar26 = *(byte **)(param_2 + 0x30);
        bVar5 = *pbVar26;
        if ((bVar5 & 1) == 0) {
          if (((bVar5 & 0xfe) != 6) || (*(short *)(pbVar26 + 1) != 0x6e69 || pbVar26[3] != 0x66)) {
            if ((bVar5 & 0xfe) == 8) {
              if (*(int *)(pbVar26 + 1) == 0x666e692d) goto LAB_004b5944;
              if ((bVar5 & 1) != 0) goto LAB_004b56ec;
            }
            if ((bVar5 & 0xfe) == 6) {
              if (*(short *)(pbVar26 + 1) == 0x616e && pbVar26[3] == 0x6e) goto LAB_004b5964;
              if ((bVar5 & 1) != 0) goto LAB_004b5720;
            }
            pbVar26 = pbVar26 + 1;
            goto LAB_004b5724;
          }
LAB_004b58e8:
          *puVar28 = 0x7ff0000000000000;
        }
        else {
          lVar27 = *(long *)(pbVar26 + 8);
          if (lVar27 == 3) {
            if (**(short **)(pbVar26 + 0x10) == 0x6e69 &&
                (char)(*(short **)(pbVar26 + 0x10))[1] == 'f') goto LAB_004b58e8;
            lVar27 = *(long *)(pbVar26 + 8);
          }
          if (lVar27 == 4) {
            if (**(int **)(pbVar26 + 0x10) == 0x666e692d) {
LAB_004b5944:
              *puVar28 = 0xfff0000000000000;
              break;
            }
LAB_004b56ec:
            lVar27 = *(long *)(pbVar26 + 8);
          }
          if ((lVar27 == 3) &&
             (**(short **)(pbVar26 + 0x10) == 0x616e &&
              (char)(*(short **)(pbVar26 + 0x10))[1] == 'n')) {
LAB_004b5964:
            *puVar28 = 0x7ff8000000000000;
          }
          else {
LAB_004b5720:
            pbVar26 = *(byte **)(pbVar26 + 0x10);
LAB_004b5724:
                    /* try { // try from 004b5724 to 004b58ab has its CatchHandler @ 004b5b74 */
            uVar30 = thunk_FUN_00533960(pbVar26,&local_190);
            *puVar28 = uVar30;
          }
        }
        break;
      case 6:
        pbVar26 = *(byte **)(param_2 + 0x30);
        bVar5 = *pbVar26;
        if ((bVar5 & 1) == 0) {
          if (((bVar5 & 0xfe) != 6) || (*(short *)(pbVar26 + 1) != 0x6e69 || pbVar26[3] != 0x66)) {
            if ((bVar5 & 0xfe) == 8) {
              if (*(int *)(pbVar26 + 1) == 0x666e692d) goto LAB_004b5950;
              if ((bVar5 & 1) != 0) goto LAB_004b57ec;
            }
            if ((bVar5 & 0xfe) == 6) {
              if (*(short *)(pbVar26 + 1) == 0x616e && pbVar26[3] == 0x6e) goto LAB_004b5970;
              if ((bVar5 & 1) != 0) goto LAB_004b5820;
            }
            pbVar26 = pbVar26 + 1;
            goto LAB_004b5824;
          }
LAB_004b58f4:
          *(undefined4 *)puVar28 = 0x7f800000;
        }
        else {
          lVar27 = *(long *)(pbVar26 + 8);
          if (lVar27 == 3) {
            if (**(short **)(pbVar26 + 0x10) == 0x6e69 &&
                (char)(*(short **)(pbVar26 + 0x10))[1] == 'f') goto LAB_004b58f4;
            lVar27 = *(long *)(pbVar26 + 8);
          }
          if (lVar27 == 4) {
            if (**(int **)(pbVar26 + 0x10) == 0x666e692d) {
LAB_004b5950:
              *(undefined4 *)puVar28 = 0xff800000;
              break;
            }
LAB_004b57ec:
            lVar27 = *(long *)(pbVar26 + 8);
          }
          if ((lVar27 == 3) &&
             (**(short **)(pbVar26 + 0x10) == 0x616e &&
              (char)(*(short **)(pbVar26 + 0x10))[1] == 'n')) {
LAB_004b5970:
            *(undefined4 *)puVar28 = 0x7fc00000;
          }
          else {
LAB_004b5820:
            pbVar26 = *(byte **)(pbVar26 + 0x10);
LAB_004b5824:
            thunk_FUN_00533960(pbVar26,&local_190);
            uVar29 = FUN_0052ced0();
            *(undefined4 *)puVar28 = uVar29;
          }
        }
        break;
      case 7:
        pbVar26 = *(byte **)(param_2 + 0x30);
        bVar5 = *pbVar26;
        if ((bVar5 & 1) == 0) {
          if (((bVar5 & 0xfe) == 8) && (*(int *)(pbVar26 + 1) == 0x65757274)) {
LAB_004b5900:
            *(undefined1 *)puVar28 = 1;
            break;
          }
          if ((bVar5 & 0xfe) == 10) {
            pbVar26 = pbVar26 + 1;
            goto LAB_004b586c;
          }
        }
        else {
          lVar27 = *(long *)(pbVar26 + 8);
          if (lVar27 == 4) {
            if (**(int **)(pbVar26 + 0x10) == 0x65757274) goto LAB_004b5900;
            lVar27 = *(long *)(pbVar26 + 8);
          }
          if (lVar27 == 5) {
            pbVar26 = *(byte **)(pbVar26 + 0x10);
LAB_004b586c:
            if (*(int *)pbVar26 == 0x736c6166 && pbVar26[4] == 0x65) {
              *(undefined1 *)puVar28 = 0;
              break;
            }
          }
        }
        FUN_004aa7f4(param_1,param_4[1],param_2,4,"Boolean default must be true or false.");
        break;
      case 8:
        *puVar28 = 0;
        break;
      case 9:
        puVar17 = (ulong *)param_4[6];
        if (puVar17 != (ulong *)0x0) {
          local_130 = PTR_LAB_047cd728;
          local_160 = param_4;
          if (*puVar17 != 0xffffffffffffffff) {
            local_d0 = &local_130;
            uStack_c8 = &local_160;
            local_100 = &local_d0;
            std::__call_once(puVar17,&local_100,(_func_void_void_ptr *)&LAB_004c0750);
          }
          uVar18 = *(uint *)(param_4 + 7);
        }
        lVar27 = *(long *)(param_1 + 8);
        if (uVar18 == 0xc) {
                    /* try { // try from 004b5658 to 004b565f has its CatchHandler @ 004b5b50 */
          FUN_00532c80(&local_d0,*(undefined8 *)(param_2 + 0x30));
          pppuVar12 = (undefined ***)FUN_0049e770(PTR_FUN_047cba38,0x18);
          ppuVar10 = local_c0;
          ppuVar7 = uStack_c8;
          if (pppuVar12 != (undefined ***)0x0) {
            if (((ulong)local_d0 & 1) == 0) {
              pppuVar12[2] = local_c0;
              pppuVar12[1] = (undefined **)uStack_c8;
              *pppuVar12 = local_d0;
            }
            else {
              if (uStack_c8 < (undefined8 **)0x17) {
                ppuVar14 = (undefined **)((long)pppuVar12 + 1);
                *(byte *)pppuVar12 = (byte)((int)uStack_c8 << 1);
              }
              else {
                if ((undefined8 **)0xffffffffffffffef < uStack_c8) {
                    /* try { // try from 004b5b44 to 004b5b4b has its CatchHandler @ 004b5b4c */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                ppuVar1 = uStack_c8 + 2;
                ppuVar14 = (undefined **)
                           FUN_0049e770(PTR_FUN_047cba38,(ulong)ppuVar1 & 0xfffffffffffffff0);
                pppuVar12[1] = (undefined **)ppuVar7;
                pppuVar12[2] = ppuVar14;
                *pppuVar12 = (undefined **)((ulong)ppuVar1 & 0xfffffffffffffff0 | 1);
              }
              memcpy(ppuVar14,ppuVar10,(long)ppuVar7 + 1);
            }
          }
                    /* try { // try from 004b5a14 to 004b5a1b has its CatchHandler @ 004b5b4c */
          local_100 = pppuVar12;
          FUN_004a3dc0(lVar27 + 0xd0,&local_100);
          *puVar28 = (ulonglong)pppuVar12;
          if (((ulong)local_d0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_c0);
          }
        }
        else {
          pbVar26 = *(byte **)(param_2 + 0x30);
          ppuVar10 = (undefined **)FUN_0049e770(PTR_FUN_047cba38,0x18);
          if (ppuVar10 != (undefined **)0x0) {
            if ((*pbVar26 & 1) == 0) {
              puVar31 = *(undefined **)(pbVar26 + 8);
              puVar20 = *(undefined **)pbVar26;
              ppuVar10[2] = *(undefined **)(pbVar26 + 0x10);
              ppuVar10[1] = puVar31;
              *ppuVar10 = puVar20;
            }
            else {
              puVar20 = *(undefined **)(pbVar26 + 8);
              pvVar4 = *(void **)(pbVar26 + 0x10);
              if (puVar20 < (undefined *)0x17) {
                puVar13 = (undefined1 *)((long)ppuVar10 + 1);
                *(char *)ppuVar10 = (char)((int)puVar20 << 1);
              }
              else {
                if ((undefined *)0xffffffffffffffef < puVar20) {
                    /* try { // try from 004b5b3c to 004b5b43 has its CatchHandler @ 004b5b74 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                puVar13 = (undefined1 *)
                          FUN_0049e770(PTR_FUN_047cba38,(ulong)(puVar20 + 0x10) & 0xfffffffffffffff0
                                      );
                ppuVar10[1] = puVar20;
                ppuVar10[2] = puVar13;
                *ppuVar10 = (undefined *)((ulong)(puVar20 + 0x10) & 0xfffffffffffffff0 | 1);
              }
              memcpy(puVar13,pvVar4,(size_t)(puVar20 + 1));
            }
          }
                    /* try { // try from 004b59c0 to 004b59c7 has its CatchHandler @ 004b5b74 */
          local_d0 = ppuVar10;
          FUN_004a3dc0(lVar27 + 0xd0,&local_d0);
          *puVar28 = (ulonglong)ppuVar10;
        }
        break;
      case 10:
                    /* try { // try from 004b54bc to 004b5643 has its CatchHandler @ 004b5b74 */
        FUN_004aa7f4(param_1,param_4[1],param_2,4,"Messages can\'t have default values.");
        *(undefined1 *)(param_4 + 8) = 0;
      }
      if (local_190 != (char *)0x0) {
        bVar5 = **(byte **)(param_2 + 0x30);
        if ((bVar5 & 1) == 0) {
          if (bVar5 >> 1 != 0) {
LAB_004b5a60:
            if (*local_190 == '\0') goto switchD_004b4f78_default;
          }
        }
        else if (*(long *)(*(byte **)(param_2 + 0x30) + 8) != 0) goto LAB_004b5a60;
        uVar9 = param_4[1];
                    /* try { // try from 004b5a6c to 004b5a7b has its CatchHandler @ 004b5b60 */
        FUN_004a8ec0(&local_100,"Couldn\'t parse default value \"");
                    /* try { // try from 004b5a7c to 004b5a8f has its CatchHandler @ 004b5b5c */
        puVar15 = (undefined8 *)FUN_0021d540(&local_100,&DAT_03bfbda2,2);
        uStack_c8 = (undefined8 **)puVar15[1];
        local_d0 = (undefined **)*puVar15;
        local_c0 = (undefined **)puVar15[2];
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = 0;
        plVar11 = *(long **)(param_1 + 0x10);
        if (plVar11 != (long *)0x0) {
                    /* try { // try from 004b5abc to 004b5acf has its CatchHandler @ 004b5b54 */
          (**(code **)(*plVar11 + 0x10))(plVar11,param_1 + 0x38,uVar9,param_2,4,&local_d0);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if (((ulong)local_d0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_c0);
        }
        if (((ulong)local_100 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_f0);
        }
      }
    }
  }
switchD_004b4f78_default:
  iVar8 = *(int *)((long)param_4 + 0x44);
  if (iVar8 < 1) {
    FUN_004aa7f4(param_1,param_4[1],param_2,1,"Field numbers must be positive integers.");
LAB_004b50bc:
    if ((param_5 & 1) == 0) goto LAB_004b5110;
    uVar18 = *(uint *)(param_2 + 0x10);
    if ((uVar18 >> 1 & 1) == 0) {
                    /* try { // try from 004b50cc to 004b5133 has its CatchHandler @ 004b5c18 */
      FUN_004aa7f4(param_1,param_4[1],param_2,3,
                   "FieldDescriptorProto.extendee not set for extension field.");
      uVar18 = *(uint *)(param_2 + 0x10);
    }
    param_4[0xc] = param_3;
    if ((uVar18 >> 7 & 1) != 0) {
      FUN_004aa7f4(param_1,param_4[1],param_2,2,
                   "FieldDescriptorProto.oneof_index should not be set for extensions.");
    }
  }
  else {
    if ((iVar8 < 0x20000000) || ((param_5 & 1) != 0)) {
      if (iVar8 - 19000U < 1000) {
        uVar9 = param_4[1];
                    /* try { // try from 004b4fc0 to 004b4fc7 has its CatchHandler @ 004b5b70 */
        local_d0 = (undefined **)FUN_00533180(19000,(long)&uStack_c8 + 4);
        sVar16 = strlen((char *)local_d0);
        uStack_c8 = (undefined8 **)CONCAT44(uStack_c8._4_4_,(int)sVar16);
                    /* try { // try from 004b4fdc to 004b4fe3 has its CatchHandler @ 004b5b6c */
        local_100 = (undefined ***)FUN_00533180(19999,auStack_f4);
        sVar16 = strlen((char *)local_100);
        local_130 = (undefined *)0x0;
        local_f8 = (uint)sVar16;
        local_128 = 0xffffffff;
        local_160 = (undefined8 *)0x0;
        local_158 = 0xffffffff;
        local_190 = (char *)0x0;
        local_188 = 0xffffffff;
        local_1c0 = 0;
        local_1b8 = 0xffffffff;
        local_1f0 = 0;
        local_1e8 = 0xffffffff;
        local_220 = 0;
        local_218 = 0xffffffff;
        local_250 = 0;
        local_248 = 0xffffffff;
        local_280 = 0;
        local_278 = 0xffffffff;
                    /* try { // try from 004b5034 to 004b5073 has its CatchHandler @ 004b5b68 */
        FUN_00506f30(local_98,
                     "Field numbers $0 through $1 are reserved for the protocol buffer library implementation."
                     ,&local_d0,&local_100,&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                     &local_220,&local_250,&local_280);
        plVar11 = *(long **)(param_1 + 0x10);
        if (plVar11 != (long *)0x0) {
                    /* try { // try from 004b5088 to 004b509b has its CatchHandler @ 004b5b58 */
          (**(code **)(*plVar11 + 0x10))(plVar11,param_1 + 0x38,uVar9,param_2,1,local_98);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((local_98[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_88);
        }
      }
      goto LAB_004b50bc;
    }
    uVar9 = param_4[1];
                    /* try { // try from 004b4e10 to 004b4e17 has its CatchHandler @ 004b5bcc */
    local_d0 = (undefined **)FUN_00533180(0x1fffffff,(long)&uStack_c8 + 4);
    sVar16 = strlen((char *)local_d0);
    local_100 = (undefined ***)0x0;
    uStack_c8 = (undefined8 **)CONCAT44(uStack_c8._4_4_,(int)sVar16);
    local_f8 = 0xffffffff;
    local_130 = (undefined *)0x0;
    local_128 = 0xffffffff;
    local_160 = (undefined8 *)0x0;
    local_158 = 0xffffffff;
    local_190 = (char *)0x0;
    local_188 = 0xffffffff;
    local_1c0 = 0;
    local_1b8 = 0xffffffff;
    local_1f0 = 0;
    local_1e8 = 0xffffffff;
    local_220 = 0;
    local_218 = 0xffffffff;
    local_250 = 0;
    local_248 = 0xffffffff;
    local_280 = 0;
    local_278 = 0xffffffff;
                    /* try { // try from 004b4e70 to 004b4eaf has its CatchHandler @ 004b5bc8 */
    FUN_00506f30(local_98,"Field numbers cannot be greater than $0.",&local_d0,&local_100,&local_130
                 ,&local_160,&local_190,&local_1c0,&local_1f0,&local_220,&local_250,&local_280);
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
                    /* try { // try from 004b4ec4 to 004b4ed7 has its CatchHandler @ 004b5b78 */
      (**(code **)(*plVar11 + 0x10))(plVar11,param_1 + 0x38,uVar9,param_2,1,local_98);
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
    if ((local_98[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_88);
    }
LAB_004b5110:
    uVar18 = *(uint *)(param_2 + 0x10);
    if ((uVar18 >> 1 & 1) != 0) {
      FUN_004aa7f4(param_1,param_4[1],param_2,3,
                   "FieldDescriptorProto.extendee set for non-extension field.");
      uVar18 = *(uint *)(param_2 + 0x10);
    }
    param_4[10] = param_3;
    if ((uVar18 >> 7 & 1) != 0) {
      uVar18 = *(uint *)(param_2 + 0x4c);
      if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)((long)param_3 + 0x6c))) {
        param_4[0xb] = param_3[6] + (ulong)uVar18 * 0x30;
        param_4[0xf] = 0;
        bVar5 = *(byte *)(param_2 + 0x10);
        goto joined_r0x004b5330;
      }
      uVar9 = param_4[1];
                    /* try { // try from 004b5214 to 004b5217 has its CatchHandler @ 004b5bc4 */
      local_d0 = (undefined **)FUN_00533180((ulong)uVar18,(long)&uStack_c8 + 4);
      sVar16 = strlen((char *)local_d0);
      uStack_c8 = (undefined8 **)CONCAT44(uStack_c8._4_4_,(int)sVar16);
      pbVar26 = (byte *)*param_3;
      local_100 = *(undefined ****)(pbVar26 + 0x10);
      if ((*pbVar26 & 1) == 0) {
        local_100 = (undefined ***)(pbVar26 + 1);
      }
      local_130 = (undefined *)0x0;
      local_128 = 0xffffffff;
      local_160 = (undefined8 *)0x0;
      local_158 = 0xffffffff;
      local_190 = (char *)0x0;
      local_188 = 0xffffffff;
      local_1c0 = 0;
      local_1b8 = 0xffffffff;
      local_1f0 = 0;
      local_1e8 = 0xffffffff;
      local_220 = 0;
      local_f8 = (uint)(*pbVar26 >> 1);
      if ((*pbVar26 & 1) != 0) {
        local_f8 = (uint)*(undefined8 *)(pbVar26 + 8);
      }
      local_218 = 0xffffffff;
      local_250 = 0;
      local_248 = 0xffffffff;
      local_280 = 0;
      local_278 = 0xffffffff;
                    /* try { // try from 004b5298 to 004b52d7 has its CatchHandler @ 004b5bc0 */
      FUN_00506f30(local_98,"FieldDescriptorProto.oneof_index $0 is out of range for type \"$1\".",
                   &local_d0,&local_100,&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                   &local_220,&local_250,&local_280);
      plVar11 = *(long **)(param_1 + 0x10);
      if (plVar11 != (long *)0x0) {
                    /* try { // try from 004b52ec to 004b52ff has its CatchHandler @ 004b5b64 */
        (**(code **)(*plVar11 + 0x10))(plVar11,param_1 + 0x38,uVar9,param_2,2,local_98);
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      if ((local_98[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_88);
      }
    }
  }
  param_4[0xb] = 0;
  param_4[0xf] = 0;
  bVar5 = *(byte *)(param_2 + 0x10);
joined_r0x004b5330:
  if ((bVar5 >> 5 & 1) != 0) {
    uVar25 = *(undefined8 *)(param_2 + 0x40);
    local_c0 = (undefined **)FUN_0049e770(PTR_FUN_047cba38,0x20);
    uVar6 = s_google_protobuf_FieldOptions_03c09a35._0_8_;
    puVar20 = (undefined *)
              CONCAT44(s_google_protobuf_FieldOptions_03c09a35._12_4_,
                       s_google_protobuf_FieldOptions_03c09a35._8_4_);
    uStack_c8 = _UNK_03cac1b8;
    local_d0 = _DAT_03cac1b0;
    uVar9 = CONCAT44(s_google_protobuf_FieldOptions_03c09a35._16_4_,
                     s_google_protobuf_FieldOptions_03c09a35._12_4_);
    *(undefined8 *)((long)local_c0 + 0x14) = s_google_protobuf_FieldOptions_03c09a35._20_8_;
    *(undefined8 *)((long)local_c0 + 0xc) = uVar9;
    local_c0[1] = puVar20;
    *local_c0 = (undefined *)uVar6;
    *(char *)((long)local_c0 + 0x1c) = '\0';
                    /* try { // try from 004b5374 to 004b538b has its CatchHandler @ 004b5be8 */
    FUN_004b5e90(param_1,uVar25,param_4,8,&local_d0);
    if (((ulong)local_d0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_c0);
    }
  }
                    /* try { // try from 004b53a8 to 004b540b has its CatchHandler @ 004b5c18 */
  FUN_004acb08(param_1,param_4[1],param_3,*param_4,param_2,2,param_4);
  if (((ulong)local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  return;
}


