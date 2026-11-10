/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b8014; name: FUN_004b8014
 */


void FUN_004b8014(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  size_t sVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_140;
  undefined4 local_138;
  byte *local_110;
  size_t local_108;
  void *local_100;
  byte *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  byte local_b0 [16];
  undefined8 local_a0;
  ulong local_98;
  size_t local_90;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar1 = FUN_004dd064();
    *(undefined8 *)(param_2 + 0x20) = uVar1;
  }
  if (0 < *(int *)(param_2 + 0x74)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      FUN_004b8014(param_1,*(long *)(param_2 + 0x38) + lVar9,
                   *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar10 * 8 + 8));
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x90;
    } while (lVar10 < *(int *)(param_2 + 0x74));
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar10 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x40);
      plVar12 = (long *)(lVar9 + lVar10 * 0x50 + 0x20);
      if (*plVar12 == 0) {
        lVar14 = FUN_004df294();
        *plVar12 = lVar14;
        piVar13 = (int *)(lVar9 + lVar10 * 0x50 + 0x2c);
        iVar4 = *piVar13;
      }
      else {
        piVar13 = (int *)(lVar9 + lVar10 * 0x50 + 0x2c);
        iVar4 = *piVar13;
      }
      if (0 < iVar4) {
        lVar14 = 0;
        lVar11 = 0x20;
        do {
          lVar19 = *(long *)(lVar9 + lVar10 * 0x50 + 0x30);
          if (*(long *)(lVar19 + lVar11) == 0) {
            uVar1 = FUN_004dfc94();
            *(undefined8 *)(lVar19 + lVar11) = uVar1;
            iVar4 = *piVar13;
          }
          lVar14 = lVar14 + 1;
          lVar11 = lVar11 + 0x28;
        } while (lVar14 < iVar4);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_2 + 0x78));
  }
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      FUN_004b89a8(param_1,*(long *)(param_2 + 0x28) + lVar9,
                   *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar10 * 8 + 8));
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x98;
    } while (lVar10 < *(int *)(param_2 + 0x68));
  }
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      FUN_004b89a8(param_1,*(long *)(param_2 + 0x50) + lVar9,
                   *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar10 * 8 + 8));
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x98;
    } while (lVar10 < *(int *)(param_2 + 0x80));
  }
  iVar4 = *(int *)(param_2 + 0x7c);
  if (0 < iVar4) {
    lVar10 = 0;
    lVar9 = 8;
    do {
      lVar14 = *(long *)(param_2 + 0x48);
      if (*(long *)(lVar14 + lVar9) == 0) {
        uVar1 = FUN_004d2c4c();
        *(undefined8 *)(lVar14 + lVar9) = uVar1;
        iVar4 = *(int *)(param_2 + 0x7c);
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar10 < iVar4);
  }
  uVar5 = *(uint *)(param_2 + 0x68);
  if (0 < (int)uVar5) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      lVar14 = *(long *)(param_2 + 0x28) + lVar9;
      puVar15 = *(undefined8 **)(lVar14 + 0x58);
      if (puVar15 != (undefined8 *)0x0) {
        if ((0 < *(int *)(puVar15 + 3)) && (*(undefined8 **)(lVar14 + -0x40) != puVar15)) {
          pbVar6 = *(byte **)(param_2 + 8);
          local_90 = 0;
          local_98 = 0;
          local_88 = (void *)0x0;
          if ((*pbVar6 & 1) == 0) {
            sVar17 = (size_t)(*pbVar6 >> 1);
            pbVar6 = pbVar6 + 1;
          }
          else {
            sVar17 = *(size_t *)(pbVar6 + 8);
            pbVar6 = *(byte **)(pbVar6 + 0x10);
          }
          if (0xffffffffffffffef < sVar17 + 1) {
                    /* try { // try from 004b88cc to 004b88d3 has its CatchHandler @ 004b88d4 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar17 + 1 < 0x17) {
            local_98 = (ulong)(byte)((int)sVar17 << 1);
            pvVar3 = (void *)((ulong)&local_98 | 1);
            if (sVar17 != 0) goto LAB_004b8338;
          }
          else {
            uVar8 = sVar17 + 0x11 & 0xfffffffffffffff0;
            pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
            local_98 = uVar8 | 1;
            local_90 = sVar17;
            local_88 = pvVar3;
LAB_004b8338:
            memcpy(pvVar3,pbVar6,sVar17);
          }
          *(undefined1 *)((long)pvVar3 + sVar17) = 0;
                    /* try { // try from 004b834c to 004b835b has its CatchHandler @ 004b8948 */
          FUN_0021d540(&local_98,&DAT_03bdface,1);
          pbVar7 = *(byte **)(*(long *)(param_2 + 0x28) + lVar9 + -0x98);
          uVar8 = *(ulong *)(pbVar7 + 8);
          pbVar6 = *(byte **)(pbVar7 + 0x10);
          if ((*pbVar7 & 1) == 0) {
            pbVar6 = pbVar7 + 1;
            uVar8 = (ulong)(*pbVar7 >> 1);
          }
                    /* try { // try from 004b8380 to 004b8387 has its CatchHandler @ 004b8944 */
          puVar2 = (ulong *)FUN_0021d540(&local_98,pbVar6,uVar8);
          uStack_78 = puVar2[1];
          local_80 = *puVar2;
          local_70 = puVar2[2];
          puVar2[1] = 0;
          puVar2[2] = 0;
          *puVar2 = 0;
          pbVar6 = *(byte **)(*(long *)(param_2 + 0x28) + lVar9 + -0x98);
          local_e0 = *(byte **)(pbVar6 + 0x10);
          uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar10 * 8);
          if ((*pbVar6 & 1) == 0) {
            local_e0 = pbVar6 + 1;
          }
          uVar5 = (uint)(*pbVar6 >> 1);
          if ((*pbVar6 & 1) != 0) {
            uVar5 = (uint)*(undefined8 *)(pbVar6 + 8);
          }
          uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar5);
          pbVar6 = (byte *)*puVar15;
          local_110 = *(byte **)(pbVar6 + 0x10);
          if ((*pbVar6 & 1) == 0) {
            local_110 = pbVar6 + 1;
          }
          local_140 = 0;
          local_138 = 0xffffffff;
          local_170 = 0;
          local_168 = 0xffffffff;
          local_1a0 = 0;
          local_198 = 0xffffffff;
          local_1d0 = 0;
          local_1c8 = 0xffffffff;
          local_200 = 0;
          local_1f8 = 0xffffffff;
          local_230 = 0;
          local_228 = 0xffffffff;
          local_260 = 0;
          local_258 = 0xffffffff;
          local_290 = 0;
          local_288 = 0xffffffff;
          uVar5 = (uint)(*pbVar6 >> 1);
          if ((*pbVar6 & 1) != 0) {
            uVar5 = (uint)*(undefined8 *)(pbVar6 + 8);
          }
          local_108 = CONCAT44(local_108._4_4_,uVar5);
                    /* try { // try from 004b8454 to 004b8497 has its CatchHandler @ 004b891c */
          FUN_00506f30(local_b0,
                       "Fields in the same oneof must be defined consecutively. \"$0\" cannot be defined before the completion of the \"$1\" oneof definition."
                       ,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,&local_200,
                       &local_230,&local_260,&local_290);
          plVar12 = *(long **)(param_1 + 0x10);
          if (plVar12 != (long *)0x0) {
                    /* try { // try from 004b84a8 to 004b84bf has its CatchHandler @ 004b88e0 */
            (**(code **)(*plVar12 + 0x10))(plVar12,param_1 + 0x38,&local_80,uVar1,2,local_b0);
          }
          *(undefined1 *)(param_1 + 0x30) = 1;
          if ((local_b0[0] & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_a0);
          }
          if ((local_80 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_70);
          }
          if ((local_98 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_88);
          }
          uVar5 = *(uint *)(param_2 + 0x68);
        }
        lVar14 = *(long *)(param_2 + 0x30) +
                 (long)((int)((ulong)((long)puVar15 - *(long *)(puVar15[2] + 0x30)) >> 4) *
                       -0x55555555) * 0x30;
        *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + 1;
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x98;
    } while (lVar10 < (int)uVar5);
  }
  uVar8 = (ulong)*(uint *)(param_2 + 0x6c);
  if (0 < (int)*(uint *)(param_2 + 0x6c)) {
    lVar9 = 0;
    lVar10 = 0;
    puVar18 = PTR_LAB_047cba48;
    do {
      lVar11 = *(long *)(param_2 + 0x30);
      lVar14 = lVar11 + lVar9;
      iVar4 = *(int *)(lVar14 + 0x18);
      if (iVar4 == 0) {
        pbVar6 = *(byte **)(param_2 + 8);
        local_110 = (byte *)0x0;
        local_108 = 0;
        local_100 = (void *)0x0;
        if ((*pbVar6 & 1) == 0) {
          sVar17 = (size_t)(*pbVar6 >> 1);
          pbVar6 = pbVar6 + 1;
        }
        else {
          sVar17 = *(size_t *)(pbVar6 + 8);
          pbVar6 = *(byte **)(pbVar6 + 0x10);
        }
        if (0xffffffffffffffef < sVar17 + 1) {
                    /* try { // try from 004b88c4 to 004b88cb has its CatchHandler @ 004b88d8 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar17 + 1 < 0x17) {
          local_110 = (byte *)(ulong)(byte)((int)sVar17 << 1);
          pvVar3 = (void *)((ulong)&local_110 | 1);
          if (sVar17 != 0) goto LAB_004b8618;
        }
        else {
          uVar8 = sVar17 + 0x11 & 0xfffffffffffffff0;
          pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
          local_110 = (byte *)(uVar8 | 1);
          puVar18 = PTR_LAB_047cba48;
          local_108 = sVar17;
          local_100 = pvVar3;
LAB_004b8618:
          memcpy(pvVar3,pbVar6,sVar17);
        }
        *(undefined1 *)((long)pvVar3 + sVar17) = 0;
                    /* try { // try from 004b8628 to 004b8637 has its CatchHandler @ 004b8964 */
        FUN_0021d540(&local_110,&DAT_03bdface,1);
        pbVar7 = *(byte **)(lVar11 + lVar9);
        uVar8 = *(ulong *)(pbVar7 + 8);
        pbVar6 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar6 = pbVar7 + 1;
          uVar8 = (ulong)(*pbVar7 >> 1);
        }
                    /* try { // try from 004b8654 to 004b865b has its CatchHandler @ 004b895c */
        puVar15 = (undefined8 *)FUN_0021d540(&local_110,pbVar6,uVar8);
        uStack_d8 = puVar15[1];
        local_e0 = (byte *)*puVar15;
        local_d0 = puVar15[2];
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = 0;
                    /* try { // try from 004b8680 to 004b8697 has its CatchHandler @ 004b896c */
        FUN_004aa7f4(param_1,&local_e0,*(undefined8 *)(*(long *)(param_3 + 0xa0) + lVar10 * 8 + 8),0
                     ,"Oneof must have at least one field.");
        if (((ulong)local_e0 & 1) != 0) {
          FUN_0049e790(puVar18,local_d0);
        }
        if (((ulong)local_110 & 1) != 0) {
          FUN_0049e790(puVar18,local_100);
        }
        iVar4 = *(int *)(lVar14 + 0x18);
      }
      uVar1 = FUN_004a41ac(*(undefined8 *)(param_1 + 8),iVar4 << 3);
      *(undefined8 *)(lVar14 + 0x20) = uVar1;
      *(undefined4 *)(lVar14 + 0x18) = 0;
      if (*(long *)(lVar14 + 0x28) == 0) {
        uVar1 = FUN_004dea40();
        *(undefined8 *)(lVar14 + 0x28) = uVar1;
      }
      uVar8 = (ulong)*(int *)(param_2 + 0x6c);
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x30;
    } while (lVar10 < (long)uVar8);
    uVar5 = *(uint *)(param_2 + 0x68);
  }
  if (0 < (int)uVar5) {
    lVar10 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x28) + lVar10;
      lVar14 = *(long *)(lVar9 + 0x58);
      if (lVar14 != 0) {
        lVar14 = *(long *)(param_2 + 0x30) +
                 (long)((int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x10) + 0x30)) >> 4) *
                       -0x55555555) * 0x30;
        iVar4 = *(int *)(lVar14 + 0x18);
        *(int *)(lVar9 + 0x48) = iVar4;
        *(int *)(lVar14 + 0x18) = iVar4 + 1;
        *(long *)(*(long *)(lVar14 + 0x20) + (long)iVar4 * 8) = lVar9;
      }
      lVar10 = lVar10 + 0x98;
    } while ((ulong)uVar5 * 0x98 != lVar10);
    if (0 < (int)uVar5) {
      lVar9 = 0;
      lVar10 = 0;
      do {
        lVar14 = *(long *)(param_2 + 0x28) + lVar9;
        if ((*(char *)(lVar14 + 0x41) != '\0') &&
           (((lVar14 = *(long *)(lVar14 + 0x58), lVar14 == 0 || (*(int *)(lVar14 + 0x18) != 1)) ||
            (*(char *)(**(long **)(lVar14 + 0x20) + 0x41) == '\0')))) {
          FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 8),
                       *(undefined8 *)(*(long *)(param_3 + 0x28) + lVar10 * 8 + 8),10,
                       "Fields with proto3_optional set must be a member of a one-field oneof");
          uVar5 = *(uint *)(param_2 + 0x68);
        }
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0x98;
      } while (lVar10 < (int)uVar5);
      uVar8 = (ulong)*(uint *)(param_2 + 0x6c);
    }
  }
  iVar4 = (int)uVar8;
  if (0 < (int)uVar8) {
    lVar9 = 0;
    lVar10 = 0;
    iVar16 = -1;
    do {
      lVar14 = *(long *)(param_2 + 0x30) + lVar9;
      if ((*(int *)(lVar14 + 0x18) == 1) && (*(char *)(**(long **)(lVar14 + 0x20) + 0x41) != '\0'))
      {
        iVar4 = (int)lVar10;
        if (iVar16 != -1) {
          iVar4 = iVar16;
        }
        iVar16 = iVar4;
      }
      else if (iVar16 == -1) {
        iVar16 = -1;
      }
      else {
        FUN_004aa7f4(param_1,*(undefined8 *)(param_2 + 8),
                     *(undefined8 *)(*(long *)(param_3 + 0xa0) + lVar10 * 8 + 8),10,
                     "Synthetic oneofs must be after all other oneofs");
        uVar8 = (ulong)*(uint *)(param_2 + 0x6c);
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x30;
    } while (lVar10 < (int)uVar8);
    iVar4 = (int)uVar8;
    if (iVar16 != -1) goto LAB_004b88a0;
  }
  iVar16 = iVar4;
LAB_004b88a0:
  *(int *)(param_2 + 0x70) = iVar16;
  return;
}


