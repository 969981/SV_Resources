/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b7c88; name: FUN_002b7c88
 */


void FUN_002b7c88(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  size_t sVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  size_t sVar11;
  undefined8 *puVar12;
  void *__dest;
  long *plVar13;
  long *plVar14;
  size_t *psVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  char *pcVar19;
  long lVar20;
  long *plVar21;
  void *pvVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long *plVar26;
  char *pcVar27;
  void *pvVar28;
  undefined8 *puVar29;
  long lVar30;
  byte local_d8 [16];
  undefined8 local_c8;
  char local_c0;
  byte local_b8;
  undefined8 local_a8;
  ulong local_a0;
  size_t sStack_98;
  void *local_90;
  size_t *local_88;
  size_t sStack_80;
  void *local_78;
  undefined1 auStack_70 [8];
  ulong *local_68;
  
  pcVar27 = *(char **)PTR_PTR_047cc700;
  sVar11 = strlen(pcVar27);
  if (0xffffffffffffffef < sVar11) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  plVar26 = (long *)(param_1 + 0x108);
  if (sVar11 < 0x17) {
    local_88 = (size_t *)CONCAT71(local_88._1_7_,(char)((int)sVar11 << 1));
    pvVar28 = (void *)((ulong)&local_88 | 1);
    if (sVar11 != 0) goto LAB_002b7d18;
  }
  else {
    uVar16 = sVar11 + 0x10 & 0xfffffffffffffff0;
    pvVar28 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar16);
    local_88 = (size_t *)(uVar16 | 1);
    sStack_80 = sVar11;
    local_78 = pvVar28;
LAB_002b7d18:
    memcpy(pvVar28,pcVar27,sVar11);
  }
  *(undefined1 *)((long)pvVar28 + sVar11) = 0;
                    /* try { // try from 002b7d2c to 002b7d3b has its CatchHandler @ 002b8954 */
  puVar12 = (undefined8 *)FUN_002c3c14(plVar26,&local_a0,&local_88);
  puVar25 = (undefined8 *)*puVar12;
  if (puVar25 == (undefined8 *)0x0) {
    puVar25 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
    puVar25[6] = local_78;
    puVar25[5] = sStack_80;
    puVar25[4] = local_88;
    sStack_80 = 0;
    local_78 = (void *)0x0;
    local_88 = (size_t *)0x0;
    puVar25[0xe] = 0;
    puVar25[0xd] = 0;
    puVar25[0x10] = 0;
    puVar25[0xf] = 0;
    puVar25[0xe] = puVar25 + 0xf;
    puVar25[0xc] = 0;
    puVar25[0xb] = 0;
    puVar25[10] = 0;
    puVar25[9] = 0;
    puVar25[8] = 0;
    puVar25[7] = 0;
    puVar25[2] = local_a0;
    *puVar25 = 0;
    puVar25[1] = 0;
    *puVar12 = puVar25;
    if (*(long *)*plVar26 == 0) {
      puVar12 = puVar25;
    }
    else {
      *plVar26 = *(long *)*plVar26;
      puVar12 = (undefined8 *)*puVar12;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x110),puVar12);
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
  }
  if (((ulong)local_88 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_78);
  }
  puVar8 = PTR_LAB_047cba48;
  sStack_80 = 0;
  local_78 = (void *)0x0;
  plVar18 = param_2 + 1;
  local_88 = &sStack_80;
  if ((long *)*param_2 != plVar18) {
    pvVar28 = (void *)((ulong)&local_a0 | 1);
    plVar17 = puVar25 + 0xe;
    plVar14 = (long *)*param_2;
    do {
      if ((*(byte *)(plVar14 + 4) & 1) == 0) {
        pcVar27 = (char *)((long)plVar14 + 0x21);
      }
      else {
        pcVar27 = (char *)plVar14[6];
      }
      sVar11 = strlen(pcVar27);
      if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 002b8914 to 002b891b has its CatchHandler @ 002b8944 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar11 < 0x17) {
        local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar11 << 1));
        pvVar22 = pvVar28;
        if (sVar11 != 0) goto LAB_002b7e20;
      }
      else {
        uVar16 = sVar11 + 0x10 & 0xfffffffffffffff0;
        pvVar22 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar16);
        local_a0 = uVar16 | 1;
        sStack_98 = sVar11;
        local_90 = pvVar22;
LAB_002b7e20:
        memcpy(pvVar22,pcVar27,sVar11);
      }
      *(undefined1 *)((long)pvVar22 + sVar11) = 0;
                    /* try { // try from 002b7e34 to 002b7e43 has its CatchHandler @ 002b8988 */
      puVar12 = (undefined8 *)FUN_002c4080(plVar17,&local_68,&local_a0);
      puVar29 = (undefined8 *)*puVar12;
      if (puVar29 == (undefined8 *)0x0) {
        puVar29 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
        puVar29[6] = local_90;
        puVar29[7] = 0;
        puVar29[5] = sStack_98;
        puVar29[4] = local_a0;
        sStack_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = 0;
        puVar29[2] = local_68;
        *puVar29 = 0;
        puVar29[1] = 0;
        *puVar12 = puVar29;
        if (*(long *)*plVar17 == 0) {
          puVar12 = puVar29;
        }
        else {
          *plVar17 = *(long *)*plVar17;
          puVar12 = (undefined8 *)*puVar12;
        }
        FUN_010108e0(puVar25[0xf],puVar12);
        puVar25[0x10] = puVar25[0x10] + 1;
        if ((local_a0 & 1) != 0) goto LAB_002b7ed8;
LAB_002b7e58:
        lVar23 = puVar29[7];
      }
      else {
        if ((local_a0 & 1) == 0) goto LAB_002b7e58;
LAB_002b7ed8:
        FUN_0049e790(puVar8,local_90);
        lVar23 = puVar29[7];
      }
      if ((lVar23 != 0) && (*(char *)(lVar23 + 0x49) != '\0')) {
                    /* try { // try from 002b7ef8 to 002b7efb has its CatchHandler @ 002b8980 */
        FUN_00360570(lVar23 + 0x50);
        *(undefined1 *)(lVar23 + 0x49) = 0;
      }
      puVar1 = (ulong *)(plVar14 + 7);
      if (((byte)*puVar1 & 1) == 0) {
        if ((byte)*puVar1 < 2) goto LAB_002b7f4c;
        sStack_98 = plVar14[8];
        local_a0 = *puVar1;
        local_90 = (void *)plVar14[9];
      }
      else {
        uVar16 = plVar14[8];
        if (uVar16 == 0) {
LAB_002b7f4c:
          sVar11 = strlen(pcVar27);
          if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 002b891c to 002b892b has its CatchHandler @ 002b8940 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar11 < 0x17) {
            local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar11 << 1));
            pvVar22 = pvVar28;
            if (sVar11 != 0) goto LAB_002b7fa4;
          }
          else {
            uVar16 = sVar11 + 0x10 & 0xfffffffffffffff0;
            pvVar22 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar16);
            local_a0 = uVar16 | 1;
            sStack_98 = sVar11;
            local_90 = pvVar22;
LAB_002b7fa4:
            memcpy(pvVar22,pcVar27,sVar11);
          }
          *(undefined1 *)((long)pvVar22 + sVar11) = 0;
        }
        else {
          pvVar22 = (void *)plVar14[9];
          if (uVar16 < 0x17) {
            local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar16 << 1));
            __dest = pvVar28;
          }
          else {
            if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            uVar24 = uVar16 + 0x10 & 0xfffffffffffffff0;
            __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar24);
            local_a0 = uVar24 | 1;
            sStack_98 = uVar16;
            local_90 = __dest;
          }
          memcpy(__dest,pvVar22,uVar16 + 1);
        }
      }
      plVar13 = (long *)FUN_002a4d2c(&local_88,&local_68,&local_a0);
      if (*plVar13 == 0) {
        puVar12 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
        puVar12[6] = local_90;
        puVar12[5] = sStack_98;
        puVar12[4] = local_a0;
        sStack_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = 0;
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = local_68;
        *plVar13 = (long)puVar12;
        if ((size_t *)*local_88 != (size_t *)0x0) {
          puVar12 = (undefined8 *)*plVar13;
          local_88 = (size_t *)*local_88;
        }
        FUN_010108e0(sStack_80,puVar12);
        local_78 = (void *)((long)local_78 + 1);
      }
      if ((local_a0 & 1) != 0) {
        FUN_0049e790(puVar8,local_90);
      }
      lVar23 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
      sVar11 = strlen(pcVar27);
      if (0xffffffffffffffef < sVar11) {
LAB_002b890c:
                    /* try { // try from 002b890c to 002b8913 has its CatchHandler @ 002b8948 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar11 < 0x17) {
        local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar11 << 1));
        pvVar22 = pvVar28;
        if (sVar11 != 0) goto LAB_002b8088;
      }
      else {
        uVar16 = sVar11 + 0x10 & 0xfffffffffffffff0;
        pvVar22 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar16);
        local_a0 = uVar16 | 1;
        sStack_98 = sVar11;
        local_90 = pvVar22;
LAB_002b8088:
        memcpy(pvVar22,pcVar27,sVar11);
      }
      local_68 = &local_a0;
      *(undefined1 *)((long)pvVar22 + sVar11) = 0;
                    /* try { // try from 002b80a8 to 002b80bf has its CatchHandler @ 002b898c */
      lVar23 = FUN_002c4e68(lVar23 + 0x108,&local_a0,&DAT_03cc9966,&local_68,auStack_70);
      if ((local_a0 & 1) != 0) {
        FUN_0049e790(puVar8,local_90);
      }
      puVar2 = (ulong *)(lVar23 + 0x58);
      if (*(char *)(lVar23 + 0x50) == '\0') {
        lVar20 = plVar14[8];
        uVar16 = *puVar1;
        *(long *)(lVar23 + 0x68) = plVar14[9];
        *(long *)(lVar23 + 0x60) = lVar20;
        *puVar2 = uVar16;
        plVar14[8] = 0;
        plVar14[9] = 0;
        *puVar1 = 0;
        *(undefined8 *)(lVar23 + 0x78) = 0;
        *(undefined8 *)(lVar23 + 0x70) = 0;
        *(undefined8 *)(lVar23 + 0x88) = 0;
        *(undefined8 *)(lVar23 + 0x80) = 0;
        if ((char)plVar14[10] != '\0') {
          lVar30 = plVar14[0xc];
          lVar20 = plVar14[0xb];
          *(long *)(lVar23 + 0x88) = plVar14[0xd];
          *(long *)(lVar23 + 0x80) = lVar30;
          *(long *)(lVar23 + 0x78) = lVar20;
          plVar14[0xb] = 0;
          plVar14[0xc] = 0;
          plVar14[0xd] = 0;
          *(undefined1 *)(lVar23 + 0x70) = 1;
        }
        *(undefined1 *)(lVar23 + 0x50) = 1;
LAB_002b8380:
        plVar13 = *(long **)(lVar23 + 0x38);
        while (plVar13 != (long *)(lVar23 + 0x40)) {
          if (*(char *)(lVar23 + 0x50) == '\0') {
                    /* try { // try from 002b8908 to 002b890b has its CatchHandler @ 002b894c */
            FUN_003855e0();
            goto LAB_002b890c;
          }
          plVar21 = (long *)plVar13[4];
                    /* try { // try from 002b83a4 to 002b83af has its CatchHandler @ 002b89ac */
          FUN_002b8a08(local_d8,puVar2);
                    /* try { // try from 002b83b8 to 002b83c3 has its CatchHandler @ 002b89b4 */
          (**(code **)(*plVar21 + 0x10))(plVar21,local_d8);
          if (local_c0 != '\0') {
            if ((local_b8 & 1) != 0) {
              FUN_0049e790(puVar8,local_a8);
            }
            local_c0 = '\0';
          }
          if ((local_d8[0] & 1) != 0) {
            FUN_0049e790(puVar8,local_c8);
          }
          plVar21 = (long *)plVar13[1];
          if ((long *)plVar13[1] == (long *)0x0) {
            plVar21 = plVar13 + 2;
            if (*(long **)*plVar21 == plVar13) {
              plVar13 = (long *)*plVar21;
            }
            else {
              do {
                lVar20 = *plVar21;
                plVar21 = (long *)(lVar20 + 0x10);
                plVar13 = (long *)*plVar21;
              } while (*plVar13 != lVar20);
            }
          }
          else {
            do {
              plVar13 = plVar21;
              plVar21 = (long *)*plVar13;
            } while ((long *)*plVar13 != (long *)0x0);
          }
        }
      }
      else {
        bVar6 = *(byte *)(plVar14 + 7);
        uVar16 = (ulong)(bVar6 >> 1);
        bVar7 = *(byte *)(lVar23 + 0x58);
        sVar11 = uVar16;
        if ((bVar6 & 1) != 0) {
          sVar11 = plVar14[8];
        }
        sVar4 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar4 = *(size_t *)(lVar23 + 0x60);
        }
        if (sVar11 != sVar4) {
LAB_002b82d8:
          if ((bVar7 & 1) != 0) {
            FUN_0049e790(puVar8,*(undefined8 *)(lVar23 + 0x68));
          }
          lVar20 = plVar14[8];
          uVar16 = *puVar1;
          *(long *)(lVar23 + 0x68) = plVar14[9];
          *(long *)(lVar23 + 0x60) = lVar20;
          *puVar2 = uVar16;
          *(undefined2 *)(plVar14 + 7) = 0;
          if ((char)plVar14[10] == '\0') {
            if (*(char *)(lVar23 + 0x70) != '\0') {
              if ((*(byte *)(lVar23 + 0x78) & 1) != 0) {
                FUN_0049e790(puVar8,*(undefined8 *)(lVar23 + 0x88));
              }
              *(undefined1 *)(lVar23 + 0x70) = 0;
            }
          }
          else {
            plVar13 = plVar14 + 0xb;
            pbVar3 = (byte *)(lVar23 + 0x78);
            if (*(char *)(lVar23 + 0x70) == '\0') {
              lVar30 = plVar14[0xc];
              lVar20 = *plVar13;
              *(long *)(lVar23 + 0x88) = plVar14[0xd];
              *(long *)(lVar23 + 0x80) = lVar30;
              *(long *)pbVar3 = lVar20;
              plVar14[0xc] = 0;
              plVar14[0xd] = 0;
              *plVar13 = 0;
              *(undefined1 *)(lVar23 + 0x70) = 1;
            }
            else {
              if ((*pbVar3 & 1) != 0) {
                FUN_0049e790(puVar8,*(undefined8 *)(lVar23 + 0x88));
              }
              lVar30 = plVar14[0xc];
              lVar20 = *plVar13;
              *(long *)(lVar23 + 0x88) = plVar14[0xd];
              *(long *)(lVar23 + 0x80) = lVar30;
              *(long *)pbVar3 = lVar20;
              *(undefined2 *)plVar13 = 0;
            }
          }
          goto LAB_002b8380;
        }
        pvVar22 = (void *)plVar14[9];
        if ((bVar6 & 1) == 0) {
          pvVar22 = (void *)((long)plVar14 + 0x39);
        }
        pcVar27 = *(char **)(lVar23 + 0x68);
        if ((bVar7 & 1) == 0) {
          pcVar27 = (char *)(lVar23 + 0x59);
        }
        if ((bVar6 & 1) == 0) {
          if (sVar11 != 0) {
            pcVar19 = (char *)((long)plVar14 + 0x39);
            do {
              if (*pcVar19 != *pcVar27) goto LAB_002b82d8;
              uVar16 = uVar16 - 1;
              pcVar19 = pcVar19 + 1;
              pcVar27 = pcVar27 + 1;
            } while (uVar16 != 0);
          }
        }
        else if ((sVar11 != 0) && (iVar10 = memcmp(pvVar22,pcVar27,sVar11), iVar10 != 0))
        goto LAB_002b82d8;
        bVar9 = ((char)plVar14[10] != '\0') != (*(char *)(lVar23 + 0x70) != '\0');
        if ((bVar9) || ((char)plVar14[10] == '\0')) {
          if (!bVar9) goto LAB_002b844c;
          goto LAB_002b82d8;
        }
        bVar6 = *(byte *)(plVar14 + 0xb);
        bVar5 = *(byte *)(lVar23 + 0x78);
        uVar16 = (ulong)(bVar6 >> 1);
        sVar11 = uVar16;
        if ((bVar6 & 1) != 0) {
          sVar11 = plVar14[0xc];
        }
        sVar4 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          sVar4 = *(size_t *)(lVar23 + 0x80);
        }
        if (sVar11 != sVar4) goto LAB_002b82d8;
        pvVar22 = (void *)plVar14[0xd];
        if ((bVar6 & 1) == 0) {
          pvVar22 = (void *)((long)plVar14 + 0x59);
        }
        pcVar27 = *(char **)(lVar23 + 0x88);
        if ((bVar5 & 1) == 0) {
          pcVar27 = (char *)(lVar23 + 0x79);
        }
        if ((bVar6 & 1) == 0) {
          if (sVar11 != 0) {
            pcVar19 = (char *)((long)plVar14 + 0x59);
            do {
              if (*pcVar19 != *pcVar27) goto LAB_002b82d8;
              uVar16 = uVar16 - 1;
              pcVar19 = pcVar19 + 1;
              pcVar27 = pcVar27 + 1;
            } while (uVar16 != 0);
          }
        }
        else if ((sVar11 != 0) && (iVar10 = memcmp(pvVar22,pcVar27,sVar11), iVar10 != 0))
        goto LAB_002b82d8;
      }
LAB_002b844c:
      plVar13 = (long *)plVar14[1];
      if ((long *)plVar14[1] == (long *)0x0) {
        plVar13 = plVar14 + 2;
        plVar21 = (long *)*plVar13;
        if ((long *)*plVar21 != plVar14) {
          do {
            lVar23 = *plVar13;
            plVar13 = (long *)(lVar23 + 0x10);
            plVar21 = (long *)*plVar13;
          } while (*plVar21 != lVar23);
        }
      }
      else {
        do {
          plVar21 = plVar13;
          plVar13 = (long *)*plVar21;
        } while ((long *)*plVar21 != (long *)0x0);
      }
      plVar14 = plVar21;
    } while (plVar21 != plVar18);
  }
  puVar8 = PTR_LAB_047cba48;
  plVar17 = (long *)puVar25[0xe];
  while (plVar17 != puVar25 + 0xf) {
                    /* try { // try from 002b84c4 to 002b84cf has its CatchHandler @ 002b89a0 */
    plVar14 = (long *)FUN_002c4f70(param_2,plVar17 + 4);
    if (plVar18 == plVar14) {
                    /* try { // try from 002b8500 to 002b8507 has its CatchHandler @ 002b897c */
      puVar12 = (undefined8 *)
                FUN_002b8b98(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10) + 0x108,
                             plVar17 + 4);
      if (*(char *)(puVar12 + 3) != '\0') {
        if (*(char *)(puVar12 + 7) != '\0') {
          if ((*(byte *)(puVar12 + 8) & 1) != 0) {
            FUN_0049e790(puVar8,puVar12[10]);
          }
          *(undefined1 *)(puVar12 + 7) = 0;
        }
        if ((*(byte *)(puVar12 + 4) & 1) != 0) {
          FUN_0049e790(puVar8,puVar12[6]);
        }
        *(undefined1 *)(puVar12 + 3) = 0;
      }
      plVar14 = (long *)*puVar12;
      while (plVar14 != puVar12 + 1) {
                    /* try { // try from 002b856c to 002b856f has its CatchHandler @ 002b89a8 */
        (**(code **)(*(long *)plVar14[4] + 0x20))();
        plVar13 = (long *)plVar14[1];
        if ((long *)plVar14[1] == (long *)0x0) {
          plVar13 = plVar14 + 2;
          if (*(long **)*plVar13 == plVar14) {
            plVar14 = (long *)*plVar13;
          }
          else {
            do {
              lVar23 = *plVar13;
              plVar13 = (long *)(lVar23 + 0x10);
              plVar14 = (long *)*plVar13;
            } while (*plVar14 != lVar23);
          }
        }
        else {
          do {
            plVar14 = plVar13;
            plVar13 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
      }
    }
    plVar14 = (long *)plVar17[1];
    if ((long *)plVar17[1] == (long *)0x0) {
      plVar14 = plVar17 + 2;
      bVar9 = *(long **)*plVar14 != plVar17;
      plVar17 = (long *)*plVar14;
      if (bVar9) {
        do {
          lVar23 = *plVar14;
          plVar14 = (long *)(lVar23 + 0x10);
          plVar17 = (long *)*plVar14;
        } while (*(long *)*plVar14 != lVar23);
      }
    }
    else {
      do {
        plVar17 = plVar14;
        plVar14 = (long *)*plVar17;
      } while (plVar14 != (long *)0x0);
    }
  }
  pcVar27 = *(char **)PTR_PTR_047cc710;
  sVar11 = strlen(pcVar27);
  if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 002b8934 to 002b893b has its CatchHandler @ 002b893c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar11 < 0x17) {
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar11 << 1));
    pvVar28 = (void *)((ulong)&local_a0 | 1);
    if (sVar11 == 0) goto LAB_002b8660;
  }
  else {
    uVar16 = sVar11 + 0x10 & 0xfffffffffffffff0;
    pvVar28 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar16);
    local_a0 = uVar16 | 1;
    sStack_98 = sVar11;
    local_90 = pvVar28;
  }
  memcpy(pvVar28,pcVar27,sVar11);
LAB_002b8660:
  *(undefined1 *)((long)pvVar28 + sVar11) = 0;
                    /* try { // try from 002b8664 to 002b8673 has its CatchHandler @ 002b8950 */
  puVar12 = (undefined8 *)FUN_002c3c14(plVar26,&local_68,&local_a0);
  puVar25 = (undefined8 *)*puVar12;
  if (puVar25 == (undefined8 *)0x0) {
    puVar25 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
    puVar25[6] = local_90;
    puVar25[5] = sStack_98;
    puVar25[4] = local_a0;
    sStack_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    puVar25[0xe] = 0;
    puVar25[0xd] = 0;
    puVar25[0x10] = 0;
    puVar25[0xf] = 0;
    puVar25[0xe] = puVar25 + 0xf;
    puVar25[0xc] = 0;
    puVar25[0xb] = 0;
    puVar25[10] = 0;
    puVar25[9] = 0;
    puVar25[8] = 0;
    puVar25[7] = 0;
    puVar25[2] = local_68;
    *puVar25 = 0;
    puVar25[1] = 0;
    *puVar12 = puVar25;
    if (*(long *)*plVar26 == 0) {
      puVar12 = puVar25;
    }
    else {
      *plVar26 = *(long *)*plVar26;
      puVar12 = (undefined8 *)*puVar12;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x110),puVar12);
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
  }
  if ((local_a0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_90);
  }
  plVar26 = (long *)puVar25[0xe];
  while (plVar26 != puVar25 + 0xf) {
                    /* try { // try from 002b86b8 to 002b86c3 has its CatchHandler @ 002b8984 */
    psVar15 = (size_t *)FUN_002a4f14(&local_88,plVar26 + 4);
    if (&sStack_80 == psVar15) {
                    /* try { // try from 002b86f4 to 002b86fb has its CatchHandler @ 002b8978 */
      puVar12 = (undefined8 *)
                FUN_002b8c40(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10) + 0x120,
                             plVar26 + 4);
      FUN_002c2728(puVar12 + 3);
      plVar18 = (long *)*puVar12;
      while (plVar18 != puVar12 + 1) {
                    /* try { // try from 002b8728 to 002b872b has its CatchHandler @ 002b89a4 */
        (**(code **)(*(long *)plVar18[4] + 0x20))();
        plVar17 = (long *)plVar18[1];
        if ((long *)plVar18[1] == (long *)0x0) {
          plVar17 = plVar18 + 2;
          if (*(long **)*plVar17 == plVar18) {
            plVar18 = (long *)*plVar17;
          }
          else {
            do {
              lVar23 = *plVar17;
              plVar17 = (long *)(lVar23 + 0x10);
              plVar18 = (long *)*plVar17;
            } while (*plVar18 != lVar23);
          }
        }
        else {
          do {
            plVar18 = plVar17;
            plVar17 = (long *)*plVar18;
          } while ((long *)*plVar18 != (long *)0x0);
        }
      }
    }
    plVar18 = (long *)plVar26[1];
    if ((long *)plVar26[1] == (long *)0x0) {
      plVar18 = plVar26 + 2;
      if (*(long **)*plVar18 == plVar26) {
        plVar26 = (long *)*plVar18;
      }
      else {
        do {
          lVar23 = *plVar18;
          plVar18 = (long *)(lVar23 + 0x10);
          plVar26 = (long *)*plVar18;
        } while (*plVar26 != lVar23);
      }
    }
    else {
      do {
        plVar26 = plVar18;
        plVar18 = (long *)*plVar26;
      } while ((long *)*plVar26 != (long *)0x0);
    }
  }
  FUN_002a515c(&local_88,sStack_80);
  return;
}


