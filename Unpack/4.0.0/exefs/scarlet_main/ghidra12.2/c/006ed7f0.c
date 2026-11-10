/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006ed7f0; name: FUN_006ed7f0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006ed7f0(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  void *pvVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong local_240;
  size_t local_238;
  void *local_230;
  long *local_228;
  size_t *local_220;
  size_t sStack_218;
  void *local_210;
  long *local_208;
  byte local_200;
  undefined7 uStack_1ff;
  undefined8 local_1f0;
  long *plStack_1e8;
  byte local_1e0;
  undefined7 uStack_1df;
  char *local_1d0;
  long *plStack_1c8;
  undefined4 *local_1c0;
  undefined4 *local_1b8;
  undefined4 *local_1b0;
  long *local_1a8;
  long *local_1a0;
  long lStack_198;
  ulong local_190;
  long *plStack_188;
  byte local_180;
  undefined7 uStack_17f;
  char *local_170;
  long *plStack_168;
  undefined4 *local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  long *local_148;
  undefined4 *local_140;
  undefined4 *local_138;
  undefined4 *local_130;
  long *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  long *local_110;
  long local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  long *local_f0;
  long local_e8;
  ulong local_e0 [2];
  undefined8 local_d0;
  long *plStack_c8;
  byte local_c0;
  undefined7 uStack_bf;
  char *local_b0;
  long *plStack_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *plStack_88;
  byte local_80;
  undefined7 uStack_7f;
  char *local_70;
  long *plStack_68;
  
  sStack_218 = 0;
  local_210 = (void *)FUN_01cf7e20();
  local_208 = (long *)0x0;
  local_98 = 0;
  local_220 = &sStack_218;
  local_90 = FUN_01cf7e20();
  plStack_88 = (long *)0x0;
  local_e0[0] = 0;
  local_1a0 = (long *)0x0;
  local_a0 = &local_98;
  FUN_01f72b20(param_1,&local_220,&local_a0,local_e0,&local_1a0);
  FUN_01cfa44c(&local_a0,local_98);
  FUN_01cfa44c(&local_220,sStack_218);
  pbVar13 = *(byte **)(param_2 + 0x88);
  if ((*pbVar13 & 1) == 0) {
    pbVar13 = pbVar13 + 1;
  }
  else {
    pbVar13 = *(byte **)(pbVar13 + 0x10);
  }
  FUN_006fc1b0(&local_a0,pbVar13);
  pcVar5 = (char *)&uStack_7f;
  if ((local_80 & 1) != 0) {
    pcVar5 = local_70;
  }
  sVar8 = strlen(pcVar5);
                    /* try { // try from 006ed8c4 to 006ed8cb has its CatchHandler @ 006ee810 */
  FUN_01f77cc0(param_1 + 8,pcVar5,sVar8);
  pbVar13 = *(byte **)(param_2 + 0x90);
  if ((*pbVar13 & 1) == 0) {
    pbVar13 = pbVar13 + 1;
  }
  else {
    pbVar13 = *(byte **)(pbVar13 + 0x10);
  }
  FUN_006fc6a0(local_e0,pbVar13);
  pcVar5 = (char *)&uStack_bf;
  if ((local_c0 & 1) != 0) {
    pcVar5 = local_b0;
  }
  sVar8 = strlen(pcVar5);
                    /* try { // try from 006ed914 to 006ed91b has its CatchHandler @ 006ee80c */
  FUN_01f77cc0(param_1 + 0x28,pcVar5,sVar8);
  iVar6 = *(int *)(param_2 + 300);
  if (4 < iVar6 - 1U) {
    iVar6 = 0;
  }
  uVar7 = *(undefined4 *)(param_2 + 0x100);
  *(int *)(param_1 + 0x48) = iVar6;
  *(undefined4 *)(param_1 + 0x4c) = uVar7;
  local_f8 = 0;
  local_f0 = (long *)FUN_01cf7e20();
  local_e8 = 0;
  lStack_198 = *(long *)(param_2 + 0x20);
  local_190 = *(ulong *)(lStack_198 + 0x18);
  uVar15 = *(ulong *)(lStack_198 + 8);
  local_100 = &local_f8;
  if (local_190 < uVar15) {
    do {
      local_1a0 = *(long **)(*(long *)(lStack_198 + 0x20) + local_190 * 8);
      if (local_1a0 != (long *)0x0) {
        if (local_1a0 == *(long **)(*(long *)(lStack_198 + 0x20) + (local_190 ^ 1) * 8)) {
          local_1a0 = *(long **)(*local_1a0 + 0x20);
        }
        if (local_1a0 == (long *)0x0) goto LAB_006edb5c;
        goto LAB_006ed9c8;
      }
      local_190 = local_190 + 1;
    } while (uVar15 != local_190);
    local_1a0 = (long *)0x0;
    local_190 = uVar15;
  }
  else {
    local_1a0 = (long *)0x0;
  }
  goto LAB_006edb5c;
  while( true ) {
    *(undefined1 *)((long)pvVar20 + sVar8) = 0;
                    /* try { // try from 006edcc0 to 006edccf has its CatchHandler @ 006ee824 */
    puVar9 = (undefined8 *)FUN_01d0232c(&local_120,&local_140,&local_220);
    puVar21 = (undefined8 *)*puVar9;
    if (puVar21 == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)(**(code **)(*local_110 + 0x10))(local_110,0x60,8);
      puVar21[5] = sStack_218;
      puVar21[4] = local_220;
      puVar21[7] = local_208;
      puVar21[6] = local_210;
      local_220 = (size_t *)0x0;
      sStack_218 = 0;
      local_210 = (void *)0x0;
      uVar11 = FUN_01cf7e20();
      puVar21[10] = 0;
      puVar21[0xb] = uVar11;
      puVar21[8] = 0;
      puVar21[9] = 0;
      puVar21[2] = local_140;
      *puVar21 = 0;
      puVar21[1] = 0;
      *puVar9 = puVar21;
      if ((undefined8 *)*local_120 == (undefined8 *)0x0) {
        puVar9 = puVar21;
      }
      else {
        puVar9 = (undefined8 *)*puVar9;
        local_120 = (undefined8 *)*local_120;
      }
      FUN_010108e0(local_118,puVar9);
      local_108 = local_108 + 1;
    }
    sVar8 = strlen((char *)pbVar19);
                    /* try { // try from 006edd64 to 006edd6b has its CatchHandler @ 006ee824 */
    FUN_01f77cc0(puVar21 + 8,pbVar19,sVar8);
    if (((ulong)local_220 & 1) != 0) {
      (**(code **)(*local_208 + 0x18))(local_208,local_210,(ulong)local_220 & 0xfffffffffffffffe,1);
    }
                    /* try { // try from 006edd90 to 006edd97 has its CatchHandler @ 006ee814 */
    FUN_006ef338(&local_1a0);
    if (local_1a0 == (long *)0x0) break;
LAB_006edc0c:
    pbVar13 = (byte *)local_1a0[1];
    if ((pbVar13[0x18] & 1) == 0) {
      pbVar19 = pbVar13 + 0x19;
      if ((*pbVar13 & 1) != 0) goto LAB_006edc28;
LAB_006edc3c:
      pbVar13 = pbVar13 + 1;
    }
    else {
      pbVar19 = *(byte **)(pbVar13 + 0x28);
      if ((*pbVar13 & 1) == 0) goto LAB_006edc3c;
LAB_006edc28:
      pbVar13 = *(byte **)(pbVar13 + 0x10);
    }
    plVar12 = (long *)FUN_01cf7e20();
    local_208 = plVar12;
    sVar8 = strlen((char *)pbVar13);
    if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 006ee628 to 006ee62f has its CatchHandler @ 006ee7d8 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar8 < 0x17) {
      local_220 = (size_t *)CONCAT71(local_220._1_7_,(char)((int)sVar8 << 1));
      pvVar20 = (void *)((ulong)&local_220 | 1);
      if (sVar8 != 0) goto LAB_006edcac;
    }
    else {
      uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
      pvVar20 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar15,1);
      local_220 = (size_t *)(uVar15 | 1);
      sStack_218 = sVar8;
      local_210 = pvVar20;
LAB_006edcac:
      memcpy(pvVar20,pbVar13,sVar8);
    }
  }
  goto LAB_006edda0;
  while( true ) {
    *(undefined1 *)((long)pvVar20 + sVar8) = 0;
                    /* try { // try from 006eda7c to 006eda8b has its CatchHandler @ 006ee85c */
    puVar9 = (undefined8 *)FUN_01d0232c(&local_100,&local_120,&local_220);
    puVar21 = (undefined8 *)*puVar9;
    if (puVar21 == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)(**(code **)(*local_f0 + 0x10))(local_f0,0x60,8);
      puVar21[5] = sStack_218;
      puVar21[4] = local_220;
      puVar21[7] = local_208;
      puVar21[6] = local_210;
      local_220 = (size_t *)0x0;
      sStack_218 = 0;
      local_210 = (void *)0x0;
      uVar11 = FUN_01cf7e20();
      puVar21[10] = 0;
      puVar21[0xb] = uVar11;
      puVar21[8] = 0;
      puVar21[9] = 0;
      puVar21[2] = local_120;
      *puVar21 = 0;
      puVar21[1] = 0;
      *puVar9 = puVar21;
      if ((undefined8 *)*local_100 == (undefined8 *)0x0) {
        puVar9 = puVar21;
      }
      else {
        puVar9 = (undefined8 *)*puVar9;
        local_100 = (undefined8 *)*local_100;
      }
      FUN_010108e0(local_f8,puVar9);
      local_e8 = local_e8 + 1;
    }
    sVar8 = strlen((char *)pbVar19);
                    /* try { // try from 006edb20 to 006edb27 has its CatchHandler @ 006ee85c */
    FUN_01f77cc0(puVar21 + 8,pbVar19,sVar8);
    if (((ulong)local_220 & 1) != 0) {
      (**(code **)(*local_208 + 0x18))(local_208,local_210,(ulong)local_220 & 0xfffffffffffffffe,1);
    }
                    /* try { // try from 006edb4c to 006edb53 has its CatchHandler @ 006ee81c */
    FUN_006ef338(&local_1a0);
    if (local_1a0 == (long *)0x0) break;
LAB_006ed9c8:
    pbVar13 = (byte *)local_1a0[1];
    if ((pbVar13[0x18] & 1) == 0) {
      pbVar19 = pbVar13 + 0x19;
      if ((*pbVar13 & 1) != 0) goto LAB_006ed9e4;
LAB_006ed9f8:
      pbVar13 = pbVar13 + 1;
    }
    else {
      pbVar19 = *(byte **)(pbVar13 + 0x28);
      if ((*pbVar13 & 1) == 0) goto LAB_006ed9f8;
LAB_006ed9e4:
      pbVar13 = *(byte **)(pbVar13 + 0x10);
    }
    plVar12 = (long *)FUN_01cf7e20();
    local_208 = plVar12;
    sVar8 = strlen((char *)pbVar13);
    if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 006ee620 to 006ee627 has its CatchHandler @ 006ee7e0 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar8 < 0x17) {
      local_220 = (size_t *)CONCAT71(local_220._1_7_,(char)((int)sVar8 << 1));
      pvVar20 = (void *)((ulong)&local_220 | 1);
      if (sVar8 != 0) goto LAB_006eda68;
    }
    else {
      uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
      pvVar20 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar15,1);
      local_220 = (size_t *)(uVar15 | 1);
      sStack_218 = sVar8;
      local_210 = pvVar20;
LAB_006eda68:
      memcpy(pvVar20,pbVar13,sVar8);
    }
  }
LAB_006edb5c:
  if ((undefined8 **)(param_1 + 0x50) != &local_100) {
                    /* try { // try from 006edb70 to 006edb77 has its CatchHandler @ 006ee7f8 */
    FUN_01f7783c((undefined8 **)(param_1 + 0x50),local_100,&local_f8);
  }
  local_118 = 0;
  local_110 = (long *)FUN_01cf7e20();
  local_108 = 0;
  lStack_198 = *(long *)(param_2 + 0x38);
  local_190 = *(ulong *)(lStack_198 + 0x18);
  uVar15 = *(ulong *)(lStack_198 + 8);
  local_120 = &local_118;
  if (local_190 < uVar15) {
    do {
      local_1a0 = *(long **)(*(long *)(lStack_198 + 0x20) + local_190 * 8);
      if (local_1a0 != (long *)0x0) {
        if (local_1a0 == *(long **)(*(long *)(lStack_198 + 0x20) + (local_190 ^ 1) * 8)) {
          local_1a0 = *(long **)(*local_1a0 + 0x20);
        }
        if (local_1a0 == (long *)0x0) goto LAB_006edda0;
        goto LAB_006edc0c;
      }
      local_190 = local_190 + 1;
    } while (uVar15 != local_190);
    local_1a0 = (long *)0x0;
    local_190 = uVar15;
  }
  else {
    local_1a0 = (long *)0x0;
  }
LAB_006edda0:
  if ((undefined8 **)(param_1 + 0x70) != &local_120) {
                    /* try { // try from 006eddb4 to 006eddbb has its CatchHandler @ 006ee7f4 */
    FUN_01f7783c((undefined8 **)(param_1 + 0x70),local_120,&local_118);
  }
  uVar15 = *(ulong *)(param_2 + 0x104);
  *(ulong *)(param_1 + 0x90) =
       uVar15 & CONCAT44(-(uint)((int)(uVar15 >> 0x20) - 1U < 3),-(uint)((int)uVar15 - 1U < 3));
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x118);
  local_140 = (undefined4 *)0x0;
  local_138 = (undefined4 *)0x0;
  local_130 = (undefined4 *)0x0;
  local_128 = (long *)FUN_01cf7e20();
  if (*(int *)(param_2 + 0x40) != 0) {
    puVar18 = *(undefined4 **)(param_2 + 0x48);
    puVar1 = puVar18 + *(int *)(param_2 + 0x40);
    do {
      if (local_138 == local_130) {
        lVar22 = (long)local_138 - (long)local_140 >> 2;
        uVar15 = lVar22 + 1;
        if (uVar15 >> 0x3e != 0) {
                    /* try { // try from 006ee638 to 006ee63f has its CatchHandler @ 006ee784 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar16 = (long)local_130 - (long)local_140 >> 1;
        if (uVar15 <= uVar16) {
          uVar15 = uVar16;
        }
        if (0x1ffffffffffffffe < (ulong)((long)local_130 - (long)local_140 >> 2)) {
          uVar15 = 0x3fffffffffffffff;
        }
        if (uVar15 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(*local_128 + 0x10))(local_128,uVar15 << 2,4);
        }
        puVar17 = (undefined4 *)(lVar10 + lVar22 * 4);
        puVar14 = puVar17 + 1;
        *puVar17 = *puVar18;
        puVar2 = (undefined4 *)(lVar10 + uVar15 * 4);
        while (local_138 != local_140) {
          local_138 = local_138 + -1;
          puVar17 = puVar17 + -1;
          *puVar17 = *local_138;
        }
        local_138 = puVar14;
        if (local_140 != (undefined4 *)0x0) {
          lVar22 = (long)local_130 - (long)local_140;
          puVar14 = local_140;
          local_140 = puVar17;
          local_130 = puVar2;
          (**(code **)(*local_128 + 0x18))(local_128,puVar14,lVar22,4);
          puVar17 = local_140;
          puVar2 = local_130;
        }
      }
      else {
        *local_138 = *puVar18;
        puVar17 = local_140;
        local_138 = local_138 + 1;
        puVar2 = local_130;
      }
      local_130 = puVar2;
      local_140 = puVar17;
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar1);
  }
  if ((undefined4 **)(param_1 + 0xa0) != &local_140) {
                    /* try { // try from 006edef8 to 006edefb has its CatchHandler @ 006ee7f0 */
    FUN_01f7abd0((undefined4 **)(param_1 + 0xa0),local_140,local_138);
  }
  local_160 = (undefined4 *)0x0;
  local_158 = (undefined4 *)0x0;
  local_150 = (undefined4 *)0x0;
  local_148 = (long *)FUN_01cf7e20();
  if (*(int *)(param_2 + 0x70) != 0) {
    puVar18 = *(undefined4 **)(param_2 + 0x78);
    puVar1 = puVar18 + *(int *)(param_2 + 0x70);
    do {
      uVar7 = FUN_006ebe40(*puVar18);
      if (local_158 < local_150) {
        *local_158 = uVar7;
        puVar17 = local_160;
        local_158 = local_158 + 1;
        puVar2 = local_150;
      }
      else {
        lVar22 = (long)local_158 - (long)local_160 >> 2;
        uVar15 = lVar22 + 1;
        if (uVar15 >> 0x3e != 0) {
                    /* try { // try from 006ee630 to 006ee637 has its CatchHandler @ 006ee794 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar16 = (long)local_150 - (long)local_160 >> 1;
        if (uVar15 <= uVar16) {
          uVar15 = uVar16;
        }
        if (0x1ffffffffffffffe < (ulong)((long)local_150 - (long)local_160 >> 2)) {
          uVar15 = 0x3fffffffffffffff;
        }
        if (uVar15 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(*local_148 + 0x10))(local_148,uVar15 << 2,4);
        }
        puVar17 = (undefined4 *)(lVar10 + lVar22 * 4);
        puVar2 = (undefined4 *)(lVar10 + uVar15 * 4);
        puVar14 = puVar17 + 1;
        *puVar17 = uVar7;
        while (local_158 != local_160) {
          local_158 = local_158 + -1;
          puVar17 = puVar17 + -1;
          *puVar17 = *local_158;
        }
        local_158 = puVar14;
        if (local_160 != (undefined4 *)0x0) {
          lVar22 = (long)local_150 - (long)local_160;
          puVar14 = local_160;
          local_160 = puVar17;
          local_150 = puVar2;
          (**(code **)(*local_148 + 0x18))(local_148,puVar14,lVar22,4);
          puVar17 = local_160;
          puVar2 = local_150;
        }
      }
      local_150 = puVar2;
      local_160 = puVar17;
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar1);
  }
  if ((undefined4 **)(param_1 + 0xc0) != &local_160) {
                    /* try { // try from 006ee014 to 006ee017 has its CatchHandler @ 006ee7ec */
    FUN_01f7ad34((undefined4 **)(param_1 + 0xc0),local_160,local_158);
  }
  pbVar13 = *(byte **)(param_2 + 0x98);
  if ((*pbVar13 & 1) == 0) {
    pbVar13 = pbVar13 + 1;
  }
  else {
    pbVar13 = *(byte **)(pbVar13 + 0x10);
  }
  sVar8 = strlen((char *)pbVar13);
                    /* try { // try from 006ee040 to 006ee047 has its CatchHandler @ 006ee808 */
  FUN_01f77cc0(param_1 + 0xe0,pbVar13,sVar8);
  pbVar13 = *(byte **)(param_2 + 0xa0);
  if ((*pbVar13 & 1) == 0) {
    pbVar13 = pbVar13 + 1;
  }
  else {
    pbVar13 = *(byte **)(pbVar13 + 0x10);
  }
  sVar8 = strlen((char *)pbVar13);
                    /* try { // try from 006ee070 to 006ee077 has its CatchHandler @ 006ee804 */
  FUN_01f77cc0(param_1 + 0x100,pbVar13,sVar8);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x114);
  pbVar13 = *(byte **)(param_2 + 0xa8);
  if ((*pbVar13 & 1) == 0) {
    pbVar13 = pbVar13 + 1;
  }
  else {
    pbVar13 = *(byte **)(pbVar13 + 0x10);
  }
  FUN_005f6220(&local_1a0,pbVar13);
  pcVar5 = (char *)&uStack_17f;
  if ((local_180 & 1) != 0) {
    pcVar5 = local_170;
  }
  sVar8 = strlen(pcVar5);
                    /* try { // try from 006ee0d0 to 006ee0d7 has its CatchHandler @ 006ee800 */
  FUN_01f77cc0(param_1 + 0x130,pcVar5,sVar8);
  local_1c0 = (undefined4 *)0x0;
  local_1b8 = (undefined4 *)0x0;
  iVar6 = (uint)(*(int *)(param_2 + 0x11c) == 2) << 1;
  if (*(int *)(param_2 + 0x11c) == 1) {
    iVar6 = 1;
  }
  *(int *)(param_1 + 0x150) = iVar6;
  local_1b0 = (undefined4 *)0x0;
  local_1a8 = (long *)FUN_01cf7e20();
  if (*(int *)(param_2 + 0x58) != 0) {
    puVar18 = *(undefined4 **)(param_2 + 0x60);
    puVar1 = puVar18 + *(int *)(param_2 + 0x58);
    do {
      if (local_1b8 == local_1b0) {
        lVar22 = (long)local_1b8 - (long)local_1c0 >> 2;
        uVar15 = lVar22 + 1;
        if (uVar15 >> 0x3e != 0) {
                    /* try { // try from 006ee640 to 006ee647 has its CatchHandler @ 006ee708 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar16 = (long)local_1b0 - (long)local_1c0 >> 1;
        if (uVar15 <= uVar16) {
          uVar15 = uVar16;
        }
        if (0x1ffffffffffffffe < (ulong)((long)local_1b0 - (long)local_1c0 >> 2)) {
          uVar15 = 0x3fffffffffffffff;
        }
        if (uVar15 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = (**(code **)(*local_1a8 + 0x10))(local_1a8,uVar15 << 2,4);
        }
        puVar17 = (undefined4 *)(lVar10 + lVar22 * 4);
        puVar14 = puVar17 + 1;
        *puVar17 = *puVar18;
        puVar2 = (undefined4 *)(lVar10 + uVar15 * 4);
        while (local_1b8 != local_1c0) {
          local_1b8 = local_1b8 + -1;
          puVar17 = puVar17 + -1;
          *puVar17 = *local_1b8;
        }
        local_1b8 = puVar14;
        if (local_1c0 != (undefined4 *)0x0) {
          lVar22 = (long)local_1b0 - (long)local_1c0;
          puVar14 = local_1c0;
          local_1c0 = puVar17;
          local_1b0 = puVar2;
          (**(code **)(*local_1a8 + 0x18))(local_1a8,puVar14,lVar22,4);
          puVar17 = local_1c0;
          puVar2 = local_1b0;
        }
      }
      else {
        *local_1b8 = *puVar18;
        puVar17 = local_1c0;
        local_1b8 = local_1b8 + 1;
        puVar2 = local_1b0;
      }
      local_1b0 = puVar2;
      local_1c0 = puVar17;
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar1);
  }
  if ((undefined4 **)(param_1 + 0x158) != &local_1c0) {
                    /* try { // try from 006ee208 to 006ee20b has its CatchHandler @ 006ee7e8 */
    FUN_01f7abd0((undefined4 **)(param_1 + 0x158),local_1c0,local_1b8);
  }
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x128);
  *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x119);
  puVar3 = PTR_DAT_047cc258;
  if (*(undefined **)(param_2 + 0xb8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_2 + 0xb8);
  }
  FUN_00258750(&local_220,puVar3);
  FUN_027bbf28(param_1 + 400,&local_220);
  FUN_01cfa410(&local_220);
  puVar4 = PTR_DAT_047cbe60;
  puVar3 = PTR_DAT_047cbe60;
  if (*(undefined **)(param_2 + 200) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_2 + 200);
  }
  uVar11 = FUN_0025da00(puVar3);
  *(undefined8 *)(param_1 + 0x198) = uVar11;
  puVar3 = puVar4;
  if (*(undefined **)(param_2 + 0xd0) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_2 + 0xd0);
  }
  uVar11 = FUN_0025da00(puVar3);
  *(undefined8 *)(param_1 + 0x1a0) = uVar11;
  puVar3 = puVar4;
  if (*(undefined **)(param_2 + 0xd8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_2 + 0xd8);
  }
  uVar11 = FUN_0025da00(puVar3);
  *(undefined8 *)(param_1 + 0x1a8) = uVar11;
  puVar3 = puVar4;
  if (*(undefined **)(param_2 + 0xe0) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_2 + 0xe0);
  }
  uVar11 = FUN_0025da00(puVar3);
  *(undefined8 *)(param_1 + 0x1b0) = uVar11;
  if (*(undefined **)(param_2 + 0xf0) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 0xf0);
  }
  uVar11 = FUN_0025da00(puVar4);
  *(undefined8 *)(param_1 + 0x1b8) = uVar11;
  pbVar13 = *(byte **)(param_2 + 0xb0);
  if ((*pbVar13 & 1) == 0) {
    pbVar13 = pbVar13 + 1;
  }
  else {
    pbVar13 = *(byte **)(pbVar13 + 0x10);
  }
  FUN_006fd4e0(&local_220,pbVar13);
  pcVar5 = (char *)&uStack_1df;
  if ((local_1e0 & 1) != 0) {
    pcVar5 = local_1d0;
  }
  plVar12 = (long *)FUN_01cf7e20();
  local_228 = plVar12;
  sVar8 = strlen(pcVar5);
  if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 006ee648 to 006ee64f has its CatchHandler @ 006ee650 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_240 = CONCAT71(local_240._1_7_,(char)((int)sVar8 << 1));
    pvVar20 = (void *)((ulong)&local_240 | 1);
    if (sVar8 == 0) goto LAB_006ee380;
  }
  else {
    uVar15 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar20 = (void *)(**(code **)(*plVar12 + 0x10))(plVar12,uVar15,1);
    local_240 = uVar15 | 1;
    local_238 = sVar8;
    local_230 = pvVar20;
  }
  memcpy(pvVar20,pcVar5,sVar8);
LAB_006ee380:
  *(undefined1 *)((long)pvVar20 + sVar8) = 0;
                    /* try { // try from 006ee388 to 006ee38f has its CatchHandler @ 006ee7fc */
  FUN_01d0e1a8(param_1 + 0x1c0,&local_240);
  if ((local_240 & 1) != 0) {
    (**(code **)(*local_228 + 0x18))(local_228,local_230,local_240 & 0xfffffffffffffffe,1);
  }
  if ((local_1e0 & 1) != 0) {
    (**(code **)(*plStack_1c8 + 0x18))
              (plStack_1c8,local_1d0,CONCAT71(uStack_1df,local_1e0) & 0xfffffffffffffffe,1);
  }
  if ((local_200 & 1) != 0) {
    (**(code **)(*plStack_1e8 + 0x18))
              (plStack_1e8,local_1f0,CONCAT71(uStack_1ff,local_200) & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_220 & 1) != 0) {
    (**(code **)(*local_208 + 0x18))(local_208,local_210,(ulong)local_220 & 0xfffffffffffffffe,1);
  }
  if (local_1c0 != (undefined4 *)0x0) {
    local_1b8 = local_1c0;
    (**(code **)(*local_1a8 + 0x18))(local_1a8,local_1c0,(long)local_1b0 - (long)local_1c0,4);
  }
  if ((local_180 & 1) != 0) {
    (**(code **)(*plStack_168 + 0x18))
              (plStack_168,local_170,CONCAT71(uStack_17f,local_180) & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_1a0 & 1) != 0) {
    (**(code **)(*plStack_188 + 0x18))
              (plStack_188,local_190,(ulong)local_1a0 & 0xfffffffffffffffe,1);
  }
  if (local_160 != (undefined4 *)0x0) {
    local_158 = local_160;
    (**(code **)(*local_148 + 0x18))(local_148,local_160,(long)local_150 - (long)local_160,4);
  }
  if (local_140 != (undefined4 *)0x0) {
    local_138 = local_140;
    (**(code **)(*local_128 + 0x18))(local_128,local_140,(long)local_130 - (long)local_140,4);
  }
  FUN_01cfa44c(&local_120,local_118);
  FUN_01cfa44c(&local_100,local_f8);
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))
              (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
  }
  if ((local_e0[0] & 1) != 0) {
    (**(code **)(*plStack_c8 + 0x18))(plStack_c8,local_d0,local_e0[0] & 0xfffffffffffffffe,1);
  }
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))(plStack_88,local_90,(ulong)local_a0 & 0xfffffffffffffffe,1);
  }
  return;
}


