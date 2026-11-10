/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004abe80; name: FUN_004abe80
 */


undefined1  [16] FUN_004abe80(long param_1,ulong *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined1 *__dest;
  ulong *puVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong *puVar12;
  byte *pbVar13;
  ulong uVar14;
  void *pvVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  byte local_80;
  undefined7 uStack_7f;
  char cStack_78;
  undefined7 uStack_77;
  char local_70;
  undefined2 uStack_6f;
  undefined5 uStack_6d;
  ulong *local_68;
  
  bVar3 = (byte)*param_2;
  uVar17 = param_2[1];
  pbVar10 = (byte *)param_2[2];
  bVar4 = bVar3 >> 1;
  if ((bVar3 & 1) == 0) {
    if (bVar4 != 0) {
      bVar5 = false;
      uVar14 = (ulong)bVar4;
      puVar12 = param_2;
      do {
        puVar12 = (ulong *)((long)puVar12 + 1);
        bVar2 = *(byte *)puVar12;
        if (bVar2 < 0x61) {
          if (bVar2 < 0x41) {
            if (0x2f < bVar2) {
              if (bVar2 < 0x3a) goto LAB_004abed4;
              goto LAB_004abfc4;
            }
            if ((bool)(bVar5 | bVar2 != 0x2e)) goto LAB_004abfc4;
            bVar5 = true;
          }
          else {
            bVar5 = false;
            if ((0x5a < bVar2) && (bVar2 != 0x5f)) goto LAB_004abfc4;
          }
        }
        else {
          if (0x7a < bVar2) goto LAB_004abfc4;
LAB_004abed4:
          bVar5 = false;
        }
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
LAB_004abfc0:
      if (!bVar5) {
        pbVar13 = pbVar10;
        if ((bVar3 & 1) == 0) {
          pbVar13 = (byte *)((long)param_2 + 1);
        }
        lVar19 = *(long *)(param_1 + 0x20);
        pbVar1 = (byte *)((long)param_2 + 1);
        if (*pbVar13 == 0x2e) {
          if ((bVar3 & 1) == 0) {
            if (bVar4 == 0) goto LAB_004ac8c4;
            uVar17 = (ulong)bVar4;
            pbVar10 = pbVar1;
          }
          else if (uVar17 == 0) goto LAB_004ac8c4;
          uVar14 = uVar17 - 1;
          if (0xffffffffffffffef < uVar14) goto LAB_004ac8bc;
          if (uVar14 < 0x17) {
            local_80 = (byte)((int)uVar14 << 1);
            pvVar15 = (void *)((ulong)&local_80 | 1);
            if (uVar14 != 0) goto LAB_004ac0ac;
          }
          else {
            uVar17 = uVar17 + 0xf & 0xfffffffffffffff0;
            pvVar15 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar17);
            local_80 = (byte)uVar17 | 1;
            uStack_7f = (undefined7)(uVar17 >> 8);
            cStack_78 = (char)uVar14;
            uStack_77 = (undefined7)(uVar14 >> 8);
            local_70 = (char)pvVar15;
            uStack_6f = (undefined2)((ulong)pvVar15 >> 8);
            uStack_6d = (undefined5)((ulong)pvVar15 >> 0x18);
LAB_004ac0ac:
            memcpy(pvVar15,pbVar10 + 1,uVar14);
          }
          *(undefined1 *)((long)pvVar15 + uVar14) = 0;
          puVar12 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
          if (puVar12 != (ulong *)0x0) {
            if ((local_80 & 1) == 0) {
              puVar12[2] = CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
              puVar12[1] = CONCAT71(uStack_77,cStack_78);
              *puVar12 = CONCAT71(uStack_7f,local_80);
            }
            else {
              uVar17 = CONCAT71(uStack_77,cStack_78);
              pvVar15 = (void *)CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
              if (uVar17 < 0x17) {
                pbVar10 = (byte *)((long)puVar12 + 1);
                *(byte *)puVar12 = (byte)((int)uVar17 << 1);
              }
              else {
                if (0xffffffffffffffef < uVar17) {
                    /* try { // try from 004ac8dc to 004ac8e3 has its CatchHandler @ 004ac914 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                uVar14 = uVar17 + 0x10 & 0xfffffffffffffff0;
                pbVar10 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
                puVar12[1] = uVar17;
                puVar12[2] = (ulong)pbVar10;
                *puVar12 = uVar14 | 1;
              }
              memcpy(pbVar10,pvVar15,uVar17 + 1);
            }
          }
                    /* try { // try from 004ac1b8 to 004ac1bf has its CatchHandler @ 004ac914 */
          local_68 = puVar12;
          FUN_004a3dc0(lVar19 + 0xd0,&local_68);
          if ((local_80 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70)));
          }
        }
        else {
          puVar12 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
          if (puVar12 != (ulong *)0x0) {
            if ((*param_2 & 1) == 0) {
              uVar14 = param_2[1];
              uVar17 = *param_2;
              puVar12[2] = param_2[2];
              puVar12[1] = uVar14;
              *puVar12 = uVar17;
            }
            else {
              uVar17 = param_2[1];
              pvVar15 = (void *)param_2[2];
              if (uVar17 < 0x17) {
                pbVar10 = (byte *)((long)puVar12 + 1);
                *(byte *)puVar12 = (byte)((int)uVar17 << 1);
              }
              else {
                if (0xffffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                uVar14 = uVar17 + 0x10 & 0xfffffffffffffff0;
                pbVar10 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
                puVar12[1] = uVar17;
                puVar12[2] = (ulong)pbVar10;
                *puVar12 = uVar14 | 1;
              }
              memcpy(pbVar10,pvVar15,uVar17 + 1);
            }
          }
          local_80 = (byte)puVar12;
          uStack_7f = (undefined7)((ulong)puVar12 >> 8);
          FUN_004a3dc0(lVar19 + 0xd0,&local_80);
        }
        bVar3 = (byte)*puVar12;
        if ((bVar3 & 1) == 0) {
          pbVar10 = (byte *)((long)puVar12 + 1);
          uVar17 = (ulong)(bVar3 >> 1);
          if ((ulong)(bVar3 >> 1) == 0) goto LAB_004ac22c;
LAB_004ac1f8:
          do {
            uVar14 = uVar17;
            if (uVar14 == 0) goto LAB_004ac22c;
            uVar17 = uVar14 - 1;
          } while (pbVar10[uVar14 - 1] != 0x2e);
          if (uVar14 == 0) goto LAB_004ac22c;
          lVar19 = *(long *)(param_1 + 0x20);
          if ((bVar3 & 1) == 0) {
            uVar11 = (ulong)(bVar3 >> 1);
            pbVar10 = (byte *)((long)puVar12 + 1);
          }
          else {
            uVar11 = puVar12[1];
            pbVar10 = (byte *)puVar12[2];
          }
          if (uVar17 <= uVar11) {
            uVar11 = uVar17;
          }
          if (0xffffffffffffffef < uVar11) goto LAB_004ac8bc;
          if (uVar11 < 0x17) {
            local_80 = (byte)((int)uVar11 << 1);
            pvVar15 = (void *)((ulong)&local_80 | 1);
            if (uVar11 != 0) goto LAB_004ac5f0;
          }
          else {
            uVar18 = uVar11 + 0x10 & 0xfffffffffffffff0;
            pvVar15 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar18);
            local_80 = (byte)uVar18 | 1;
            uStack_7f = (undefined7)(uVar18 >> 8);
            cStack_78 = (char)uVar11;
            uStack_77 = (undefined7)(uVar11 >> 8);
            local_70 = (char)pvVar15;
            uStack_6f = (undefined2)((ulong)pvVar15 >> 8);
            uStack_6d = (undefined5)((ulong)pvVar15 >> 0x18);
LAB_004ac5f0:
            memcpy(pvVar15,pbVar10,uVar11);
          }
          *(undefined1 *)((long)pvVar15 + uVar11) = 0;
          puVar8 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
          if (puVar8 != (ulong *)0x0) {
            if ((local_80 & 1) == 0) {
              puVar8[2] = CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
              puVar8[1] = CONCAT71(uStack_77,cStack_78);
              *puVar8 = CONCAT71(uStack_7f,local_80);
            }
            else {
              uVar11 = CONCAT71(uStack_77,cStack_78);
              pvVar15 = (void *)CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
              if (uVar11 < 0x17) {
                pbVar10 = (byte *)((long)puVar8 + 1);
                *(byte *)puVar8 = (byte)((int)uVar11 << 1);
              }
              else {
                if (0xffffffffffffffef < uVar11) {
                    /* try { // try from 004ac8ec to 004ac8f3 has its CatchHandler @ 004ac900 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                uVar18 = uVar11 + 0x10 & 0xfffffffffffffff0;
                pbVar10 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar18);
                puVar8[1] = uVar11;
                puVar8[2] = (ulong)pbVar10;
                *puVar8 = uVar18 | 1;
              }
              memcpy(pbVar10,pvVar15,uVar11 + 1);
            }
          }
                    /* try { // try from 004ac72c to 004ac733 has its CatchHandler @ 004ac900 */
          local_68 = puVar8;
          FUN_004a3dc0(lVar19 + 0xd0,&local_68);
          if ((local_80 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70)));
          }
          lVar19 = *(long *)(param_1 + 0x20);
          if (((byte)*puVar12 & 1) == 0) {
            uVar11 = (ulong)(byte)((byte)*puVar12 >> 1);
            if (uVar11 <= uVar17) {
LAB_004ac8c4:
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_out_of_range();
            }
            pbVar10 = (byte *)((long)puVar12 + 1);
          }
          else {
            uVar11 = puVar12[1];
            if (uVar11 <= uVar17) goto LAB_004ac8c4;
            pbVar10 = (byte *)puVar12[2];
          }
          uVar11 = uVar11 - uVar14;
          if (0xffffffffffffffef < uVar11) {
LAB_004ac8bc:
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar11 < 0x17) {
            local_80 = (byte)((int)uVar11 << 1);
            pvVar15 = (void *)((ulong)&local_80 | 1);
            if (uVar11 != 0) goto LAB_004ac7e4;
          }
          else {
            uVar17 = uVar11 + 0x10 & 0xfffffffffffffff0;
            pvVar15 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar17);
            local_80 = (byte)uVar17 | 1;
            cStack_78 = (char)uVar11;
            uStack_77 = (undefined7)(uVar11 >> 8);
            local_70 = (char)pvVar15;
            uStack_6f = (undefined2)((ulong)pvVar15 >> 8);
            uStack_6d = (undefined5)((ulong)pvVar15 >> 0x18);
            uStack_7f = (undefined7)(uVar17 >> 8);
LAB_004ac7e4:
            memcpy(pvVar15,pbVar10 + uVar14,uVar11);
          }
          *(undefined1 *)((long)pvVar15 + uVar11) = 0;
          puVar9 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
          if (puVar9 != (ulong *)0x0) {
            if ((local_80 & 1) == 0) {
              puVar9[2] = CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
              puVar9[1] = CONCAT71(uStack_77,cStack_78);
              *puVar9 = CONCAT71(uStack_7f,local_80);
            }
            else {
              uVar17 = CONCAT71(uStack_77,cStack_78);
              pvVar15 = (void *)CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
              if (uVar17 < 0x17) {
                pbVar10 = (byte *)((long)puVar9 + 1);
                *(byte *)puVar9 = (byte)((int)uVar17 << 1);
              }
              else {
                if (0xffffffffffffffef < uVar17) {
                    /* try { // try from 004ac8f4 to 004ac8fb has its CatchHandler @ 004ac8fc */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                uVar14 = uVar17 + 0x10 & 0xfffffffffffffff0;
                pbVar10 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
                *puVar9 = uVar14 | 1;
                puVar9[1] = uVar17;
                puVar9[2] = (ulong)pbVar10;
              }
              memcpy(pbVar10,pvVar15,uVar17 + 1);
            }
          }
                    /* try { // try from 004ac890 to 004ac897 has its CatchHandler @ 004ac8fc */
          local_68 = puVar9;
          FUN_004a3dc0(lVar19 + 0xd0,&local_68);
          if ((local_80 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70)));
          }
        }
        else {
          pbVar10 = (byte *)puVar12[2];
          uVar17 = puVar12[1];
          if (puVar12[1] != 0) goto LAB_004ac1f8;
LAB_004ac22c:
          FUN_0052b030();
          puVar8 = (ulong *)PTR_DAT_047cba80;
          puVar9 = puVar12;
        }
        local_80 = 0;
        uStack_7f = 0;
        cStack_78 = 0;
        uStack_77 = 0;
        local_70 = 0;
        uStack_6f = 0;
        uStack_6d = 0;
        if (((byte)*puVar12 & 1) == 0) {
          uVar17 = (ulong)(byte)((byte)*puVar12 >> 1);
          pbVar10 = (byte *)((long)puVar12 + 1);
        }
        else {
          uVar17 = puVar12[1];
          pbVar10 = (byte *)puVar12[2];
        }
        if (0xffffffffffffffef < uVar17 + 0x12) {
                    /* try { // try from 004ac8b4 to 004ac8bb has its CatchHandler @ 004ac918 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar17 + 0x12 < 0x17) {
          local_80 = (byte)((int)uVar17 << 1);
          pvVar15 = (void *)((ulong)&local_80 | 1);
          if (uVar17 != 0) goto LAB_004ac2b0;
        }
        else {
          uVar14 = uVar17 + 0x22 & 0xfffffffffffffff0;
          pvVar15 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
          local_80 = (byte)uVar14 | 1;
          uStack_7f = (undefined7)(uVar14 >> 8);
          cStack_78 = (char)uVar17;
          uStack_77 = (undefined7)(uVar17 >> 8);
          local_70 = (char)pvVar15;
          uStack_6f = (undefined2)((ulong)pvVar15 >> 8);
          uStack_6d = (undefined5)((ulong)pvVar15 >> 0x18);
LAB_004ac2b0:
          memcpy(pvVar15,pbVar10,uVar17);
        }
        *(undefined1 *)((long)pvVar15 + uVar17) = 0;
                    /* try { // try from 004ac2c4 to 004ac2d7 has its CatchHandler @ 004ac918 */
        FUN_0021d540(&local_80,".placeholder.proto",0x12);
                    /* try { // try from 004ac2d8 to 004ac2e3 has its CatchHandler @ 004ac91c */
        lVar19 = FUN_004ac948(param_1,&local_80);
        if ((local_80 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70)));
        }
        *(ulong **)(lVar19 + 8) = puVar8;
        if (param_3 != 1) {
          *(undefined4 *)(lVar19 + 0x2c) = 1;
          puVar16 = (undefined8 *)FUN_004a41ac(*(undefined8 *)(param_1 + 0x20),0x90);
          *(undefined8 **)(lVar19 + 0x68) = puVar16;
          puVar16[4] = 0;
          puVar16[3] = 0;
          puVar16[0x11] = 0;
          puVar16[2] = lVar19;
          puVar16[6] = 0;
          puVar16[5] = 0;
          puVar16[8] = 0;
          puVar16[7] = 0;
          puVar16[10] = 0;
          puVar16[9] = 0;
          puVar16[0xc] = 0;
          puVar16[0xb] = 0;
          puVar16[0xe] = 0;
          puVar16[0xd] = 0;
          *puVar16 = puVar9;
          puVar16[1] = puVar12;
          puVar16[0x10] = 0;
          puVar16[0xf] = 0;
          uVar6 = FUN_004dd064();
          puVar16[4] = uVar6;
          *(undefined1 *)((long)puVar16 + 0x8c) = 1;
          if ((*param_2 & 1) != 0) {
            pbVar1 = (byte *)param_2[2];
          }
          *(bool *)((long)puVar16 + 0x8d) = *pbVar1 != 0x2e;
          if (param_3 == 2) {
            *(undefined4 *)((long)puVar16 + 0x7c) = 1;
            puVar7 = (undefined8 *)FUN_004a41ac(*(undefined8 *)(param_1 + 0x20),0x10);
            uVar6 = DAT_03cb5580;
            puVar16[9] = puVar7;
            *puVar7 = uVar6;
          }
          uVar6 = 1;
          goto LAB_004abfcc;
        }
        *(undefined4 *)(lVar19 + 0x30) = 1;
        puVar16 = (undefined8 *)FUN_004a41ac(*(undefined8 *)(param_1 + 0x20),0x50);
        *(undefined8 **)(lVar19 + 0x70) = puVar16;
        puVar16[4] = 0;
        puVar16[3] = 0;
        puVar16[9] = 0;
        puVar16[2] = lVar19;
        puVar16[6] = 0;
        puVar16[5] = 0;
        *puVar16 = puVar9;
        puVar16[1] = puVar12;
        puVar16[8] = 0;
        puVar16[7] = 0;
        uVar6 = FUN_004df294();
        puVar16[4] = uVar6;
        *(undefined1 *)(puVar16 + 5) = 1;
        if ((*param_2 & 1) != 0) {
          pbVar1 = (byte *)param_2[2];
        }
        bVar3 = *pbVar1;
        *(undefined4 *)((long)puVar16 + 0x2c) = 1;
        *(bool *)((long)puVar16 + 0x29) = bVar3 != 0x2e;
        puVar7 = (undefined8 *)FUN_004a41ac(*(undefined8 *)(param_1 + 0x20),0x28);
        puVar16[6] = puVar7;
        puVar7[4] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        lVar19 = *(long *)(param_1 + 0x20);
        local_80 = 0x22;
        uStack_6f = 0x45;
        uStack_77 = s_PLACEHOLDER_VALUE_03bfbd90._8_7_;
        local_70 = s_PLACEHOLDER_VALUE_03bfbd90[0xf];
        uStack_7f = s_PLACEHOLDER_VALUE_03bfbd90._0_7_;
        cStack_78 = s_PLACEHOLDER_VALUE_03bfbd90[7];
        puVar12 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
        if (puVar12 != (ulong *)0x0) {
          puVar12[2] = CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
          puVar12[1] = CONCAT71(uStack_77,cStack_78);
          *puVar12 = CONCAT71(uStack_7f,local_80);
        }
                    /* try { // try from 004ac3e4 to 004ac3eb has its CatchHandler @ 004ac90c */
        local_68 = puVar12;
        FUN_004a3dc0(lVar19 + 0xd0,&local_68);
        *puVar7 = puVar12;
        bVar3 = (byte)*puVar8;
        if ((bVar3 & 1) == 0) {
          if (bVar3 < 2) goto LAB_004ac508;
          lVar19 = *(long *)(param_1 + 0x20);
          uVar17 = (ulong)(bVar3 >> 1);
          pbVar10 = (byte *)((long)puVar8 + 1);
LAB_004ac4dc:
          uStack_6d = 0;
          uStack_6f = 0;
          local_70 = '\0';
          uStack_77 = 0;
          cStack_78 = '\0';
          uStack_7f = 0;
          local_80 = 0;
          if (0xffffffffffffffef < uVar17 + 0x12) {
                    /* try { // try from 004ac8cc to 004ac8d3 has its CatchHandler @ 004ac908 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar17 + 0x12 < 0x17) {
            local_80 = (byte)((int)uVar17 << 1);
            pvVar15 = (void *)((ulong)&local_80 | 1);
            if (uVar17 != 0) goto LAB_004ac538;
          }
          else {
            uVar14 = uVar17 + 0x22 & 0xfffffffffffffff0;
            pvVar15 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
            local_80 = (byte)uVar14 | 1;
            uStack_7f = (undefined7)(uVar14 >> 8);
            cStack_78 = (char)uVar17;
            uStack_77 = (undefined7)(uVar17 >> 8);
            local_70 = (char)pvVar15;
            uStack_6f = (undefined2)((ulong)pvVar15 >> 8);
            uStack_6d = (undefined5)((ulong)pvVar15 >> 0x18);
LAB_004ac538:
            memcpy(pvVar15,pbVar10,uVar17);
          }
          *(undefined1 *)((long)pvVar15 + uVar17) = 0;
                    /* try { // try from 004ac54c to 004ac55f has its CatchHandler @ 004ac908 */
          FUN_0021d540(&local_80,".PLACEHOLDER_VALUE",0x12);
          puVar12 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
          if (puVar12 != (ulong *)0x0) {
            if ((local_80 & 1) == 0) {
              puVar12[2] = CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
              puVar12[1] = CONCAT71(uStack_77,cStack_78);
              *puVar12 = CONCAT71(uStack_7f,local_80);
            }
            else {
              uVar17 = CONCAT71(uStack_77,cStack_78);
              pvVar15 = (void *)CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70));
              if (uVar17 < 0x17) {
                __dest = (undefined1 *)((long)puVar12 + 1);
                *(char *)puVar12 = (char)((int)uVar17 << 1);
              }
              else {
                if (0xffffffffffffffef < uVar17) {
                    /* try { // try from 004ac8e4 to 004ac8eb has its CatchHandler @ 004ac904 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                uVar14 = uVar17 + 0x10 & 0xfffffffffffffff0;
                __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
                puVar12[1] = uVar17;
                puVar12[2] = (ulong)__dest;
                *puVar12 = uVar14 | 1;
              }
              memcpy(__dest,pvVar15,uVar17 + 1);
            }
          }
                    /* try { // try from 004ac6b0 to 004ac6b7 has its CatchHandler @ 004ac904 */
          local_68 = puVar12;
          FUN_004a3dc0(lVar19 + 0xd0,&local_68);
          puVar7[1] = puVar12;
          if ((local_80 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,CONCAT53(uStack_6d,CONCAT21(uStack_6f,local_70)));
          }
        }
        else {
          if (puVar8[1] != 0) {
            lVar19 = *(long *)(param_1 + 0x20);
            uVar17 = puVar8[1];
            pbVar10 = (byte *)puVar8[2];
            goto LAB_004ac4dc;
          }
LAB_004ac508:
          puVar7[1] = puVar12;
        }
        *(undefined4 *)(puVar7 + 2) = 0;
        puVar7[3] = puVar16;
        uVar6 = FUN_004dfc94();
        puVar7[4] = uVar6;
        uVar6 = 4;
        goto LAB_004abfcc;
      }
    }
  }
  else if (uVar17 != 0) {
    bVar5 = false;
    uVar14 = uVar17;
    pbVar13 = pbVar10;
    do {
      bVar2 = *pbVar13;
      if (bVar2 < 0x61) {
        if (bVar2 < 0x41) {
          if (0x2f < bVar2) {
            if (bVar2 < 0x3a) goto LAB_004abf58;
            goto LAB_004abfc4;
          }
          if (bVar5 || bVar2 != 0x2e) goto LAB_004abfc4;
          bVar5 = true;
        }
        else {
          bVar5 = false;
          if ((0x5a < bVar2) && (bVar2 != 0x5f)) goto LAB_004abfc4;
        }
      }
      else {
        if (0x7a < bVar2) goto LAB_004abfc4;
LAB_004abf58:
        bVar5 = false;
      }
      pbVar13 = pbVar13 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    goto LAB_004abfc0;
  }
LAB_004abfc4:
  uVar6 = 0;
  puVar16 = (undefined8 *)0x0;
LAB_004abfcc:
  auVar20._8_8_ = puVar16;
  auVar20._0_8_ = uVar6;
  return auVar20;
}


