/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006ec9d0; name: FUN_006ec9d0
 */


void FUN_006ec9d0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  size_t sVar5;
  void *pvVar6;
  ulong *puVar7;
  byte *pbVar8;
  long *plVar9;
  long *plVar10;
  void *pvVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  long *plVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  ulong local_a8;
  size_t local_a0;
  void *local_98;
  byte local_90;
  undefined7 uStack_8f;
  ulong local_88;
  ulong local_80;
  long *plStack_78;
  ulong *local_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)PTR_PTR_047cbcf8;
  lVar19 = param_2 + 9;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    lVar19 = *(long *)(param_2 + 0x18);
  }
                    /* try { // try from 006eca14 to 006eca23 has its CatchHandler @ 006ed32c */
  FUN_006fde30(&local_90,uVar4,lVar19);
  uVar20 = (ulong)&local_90 | 1;
  if ((local_90 & 1) != 0) {
    uVar20 = local_80;
  }
                    /* try { // try from 006eca38 to 006eca3f has its CatchHandler @ 006ed2fc */
  FUN_006ed370(param_1,uVar20);
  if ((local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))
              (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
  }
  iVar2 = *(int *)(param_2 + 0x48);
  if (4 < iVar2 - 1U) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 300) = iVar2;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x4c);
  if (*(long **)(param_2 + 0x50) != (long *)(param_2 + 0x58)) {
    pvVar11 = (void *)((ulong)&local_a8 | 1);
    plVar16 = *(long **)(param_2 + 0x50);
    do {
      if ((*(byte *)(plVar16 + 8) & 1) == 0) {
        pcVar17 = (char *)((long)plVar16 + 0x41);
        if ((*(byte *)(plVar16 + 4) & 1) != 0) goto LAB_006ecacc;
LAB_006ecae0:
        pcVar18 = (char *)((long)plVar16 + 0x21);
      }
      else {
        pcVar17 = (char *)plVar16[10];
        if ((*(byte *)(plVar16 + 4) & 1) == 0) goto LAB_006ecae0;
LAB_006ecacc:
        pcVar18 = (char *)plVar16[6];
      }
      sVar5 = strlen(pcVar18);
      if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 006ed2b0 to 006ed2b7 has its CatchHandler @ 006ed2c4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar5 < 0x17) {
        local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar5 << 1));
        pvVar6 = pvVar11;
        if (sVar5 != 0) goto LAB_006ecb3c;
      }
      else {
        uVar20 = sVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar6 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar20);
        local_a8 = uVar20 | 1;
        local_a0 = sVar5;
        local_98 = pvVar6;
LAB_006ecb3c:
        memcpy(pvVar6,pcVar18,sVar5);
      }
      *(undefined1 *)((long)pvVar6 + sVar5) = 0;
      uStack_68 = 0;
                    /* try { // try from 006ecb58 to 006ecb9b has its CatchHandler @ 006ed344 */
      local_70 = &local_a8;
      FUN_006eeb44(&local_90,*(undefined8 *)(param_1 + 0x20),&local_70);
      plVar9 = (long *)CONCAT71(uStack_8f,local_90);
      lVar19 = plVar9[1];
      if (lVar19 == 0) {
        lVar19 = FUN_006ee9b0(param_1 + 0x10,&local_a8);
        *plVar9 = lVar19;
        plVar9[1] = lVar19;
      }
      sVar5 = strlen(pcVar17);
      FUN_0026c6b8(lVar19 + 0x18,pcVar17,sVar5);
      if ((local_a8 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_98);
      }
      plVar9 = (long *)plVar16[1];
      if ((long *)plVar16[1] == (long *)0x0) {
        plVar9 = plVar16 + 2;
        plVar10 = (long *)*plVar9;
        if ((long *)*plVar10 != plVar16) {
          do {
            lVar19 = *plVar9;
            plVar9 = (long *)(lVar19 + 0x10);
            plVar10 = (long *)*plVar9;
          } while (*plVar10 != lVar19);
        }
      }
      else {
        do {
          plVar10 = plVar9;
          plVar9 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar16 = plVar10;
    } while (plVar10 != (long *)(param_2 + 0x58));
  }
  if (*(long **)(param_2 + 0x70) != (long *)(param_2 + 0x78)) {
    pvVar11 = (void *)((ulong)&local_a8 | 1);
    plVar16 = *(long **)(param_2 + 0x70);
    do {
      if ((*(byte *)(plVar16 + 8) & 1) == 0) {
        pcVar17 = (char *)((long)plVar16 + 0x41);
        if ((*(byte *)(plVar16 + 4) & 1) != 0) goto LAB_006ecc48;
LAB_006ecc5c:
        pcVar18 = (char *)((long)plVar16 + 0x21);
      }
      else {
        pcVar17 = (char *)plVar16[10];
        if ((*(byte *)(plVar16 + 4) & 1) == 0) goto LAB_006ecc5c;
LAB_006ecc48:
        pcVar18 = (char *)plVar16[6];
      }
      sVar5 = strlen(pcVar18);
      if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 006ed2b8 to 006ed2bf has its CatchHandler @ 006ed2c0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar5 < 0x17) {
        local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar5 << 1));
        pvVar6 = pvVar11;
        if (sVar5 != 0) goto LAB_006eccb8;
      }
      else {
        uVar20 = sVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar6 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar20);
        local_a8 = uVar20 | 1;
        local_a0 = sVar5;
        local_98 = pvVar6;
LAB_006eccb8:
        memcpy(pvVar6,pcVar18,sVar5);
      }
      *(undefined1 *)((long)pvVar6 + sVar5) = 0;
      uStack_68 = 0;
                    /* try { // try from 006eccd4 to 006ecd17 has its CatchHandler @ 006ed340 */
      local_70 = &local_a8;
      FUN_006eeb44(&local_90,*(undefined8 *)(param_1 + 0x38),&local_70);
      plVar9 = (long *)CONCAT71(uStack_8f,local_90);
      lVar19 = plVar9[1];
      if (lVar19 == 0) {
        lVar19 = FUN_006ee9b0(param_1 + 0x28,&local_a8);
        *plVar9 = lVar19;
        plVar9[1] = lVar19;
      }
      sVar5 = strlen(pcVar17);
      FUN_0026c6b8(lVar19 + 0x18,pcVar17,sVar5);
      if ((local_a8 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_98);
      }
      plVar9 = (long *)plVar16[1];
      if ((long *)plVar16[1] == (long *)0x0) {
        plVar9 = plVar16 + 2;
        plVar10 = (long *)*plVar9;
        if ((long *)*plVar10 != plVar16) {
          do {
            lVar19 = *plVar9;
            plVar9 = (long *)(lVar19 + 0x10);
            plVar10 = (long *)*plVar9;
          } while (*plVar10 != lVar19);
        }
      }
      else {
        do {
          plVar10 = plVar9;
          plVar9 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar16 = plVar10;
    } while (plVar10 != (long *)(param_2 + 0x78));
  }
  uVar20 = *(ulong *)(param_2 + 0x90);
  *(ulong *)(param_1 + 0x104) =
       uVar20 & CONCAT44(-(uint)((int)(uVar20 >> 0x20) - 1U < 3),-(uint)((int)uVar20 - 1U < 3));
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x98);
  puVar13 = *(undefined4 **)(param_2 + 0xa8);
  if (*(undefined4 **)(param_2 + 0xa0) != puVar13) {
    puVar14 = *(undefined4 **)(param_2 + 0xa0);
    uVar15 = *(uint *)(param_1 + 0x40);
    do {
      uVar1 = uVar15 + 1;
      if (uVar15 == *(uint *)(param_1 + 0x44)) {
                    /* try { // try from 006ecde8 to 006ecdf3 has its CatchHandler @ 006ed33c */
        FUN_00531134((uint *)(param_1 + 0x40),uVar1);
      }
      puVar12 = puVar14 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x48) + (ulong)uVar15 * 4) = *puVar14;
      *(uint *)(param_1 + 0x40) = uVar1;
      puVar14 = puVar12;
      uVar15 = uVar1;
    } while (puVar13 != puVar12);
  }
  puVar13 = *(undefined4 **)(param_2 + 0xc0);
  puVar14 = *(undefined4 **)(param_2 + 200);
  if (puVar13 != puVar14) {
    do {
      uVar3 = FUN_006ebe30(*puVar13);
      uVar15 = *(uint *)(param_1 + 0x70);
      if (uVar15 == *(uint *)(param_1 + 0x74)) {
                    /* try { // try from 006ece44 to 006ece4f has its CatchHandler @ 006ed338 */
        FUN_00531134(param_1 + 0x70,uVar15 + 1);
      }
      puVar13 = puVar13 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x78) + (ulong)uVar15 * 4) = uVar3;
      *(uint *)(param_1 + 0x70) = uVar15 + 1;
    } while (puVar14 != puVar13);
  }
  if ((*(byte *)(param_2 + 0xe0) & 1) == 0) {
    if (1 < *(byte *)(param_2 + 0xe0)) {
      lVar19 = param_2 + 0xe1;
      goto LAB_006ece80;
    }
  }
  else if (*(long *)(param_2 + 0xe8) != 0) {
    lVar19 = *(long *)(param_2 + 0xf0);
LAB_006ece80:
                    /* try { // try from 006ece80 to 006eceb7 has its CatchHandler @ 006ed330 */
    FUN_006ed490(param_1,lVar19);
  }
  if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
    if (1 < *(byte *)(param_2 + 0x100)) {
      lVar19 = param_2 + 0x101;
      goto LAB_006eceb0;
    }
  }
  else if (*(long *)(param_2 + 0x108) != 0) {
    lVar19 = *(long *)(param_2 + 0x110);
LAB_006eceb0:
    FUN_006ed5b0(param_1,lVar19);
  }
  if (*(int *)(param_2 + 0x124) != 0) {
    *(int *)(param_1 + 0x110) = *(int *)(param_2 + 0x124);
  }
  if (*(int *)(param_2 + 0x128) != 0) {
    *(int *)(param_1 + 0x114) = *(int *)(param_2 + 0x128);
  }
  if ((*(byte *)(param_2 + 0x130) & 1) == 0) {
    if (1 < *(byte *)(param_2 + 0x130)) {
      lVar19 = param_2 + 0x131;
      goto LAB_006ecef8;
    }
  }
  else if (*(long *)(param_2 + 0x138) != 0) {
    lVar19 = *(long *)(param_2 + 0x140);
LAB_006ecef8:
                    /* try { // try from 006ecef8 to 006ecf07 has its CatchHandler @ 006ed2f0 */
    FUN_005f80e0(&local_90,uVar4,lVar19);
    uVar20 = (ulong)&local_90 | 1;
    if ((local_90 & 1) != 0) {
      uVar20 = local_80;
    }
                    /* try { // try from 006ecf1c to 006ecf23 has its CatchHandler @ 006ed2ec */
    FUN_006ed6d0(param_1,uVar20);
    if ((local_90 & 1) != 0) {
      (**(code **)(*plStack_78 + 0x18))
                (plStack_78,local_80,CONCAT71(uStack_8f,local_90) & 0xfffffffffffffffe,1);
    }
  }
  iVar2 = (uint)(*(int *)(param_2 + 0x150) == 2) << 1;
  if (*(int *)(param_2 + 0x150) == 1) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0x11c) = iVar2;
  puVar13 = *(undefined4 **)(param_2 + 0x160);
  if (*(undefined4 **)(param_2 + 0x158) != puVar13) {
    puVar14 = *(undefined4 **)(param_2 + 0x158);
    uVar15 = *(uint *)(param_1 + 0x58);
    do {
      uVar1 = uVar15 + 1;
      if (uVar15 == *(uint *)(param_1 + 0x5c)) {
                    /* try { // try from 006ecfa8 to 006ecfb3 has its CatchHandler @ 006ed334 */
        FUN_00531134((uint *)(param_1 + 0x58),uVar1);
      }
      puVar12 = puVar14 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x60) + (ulong)uVar15 * 4) = *puVar14;
      *(uint *)(param_1 + 0x58) = uVar1;
      puVar14 = puVar12;
      uVar15 = uVar1;
    } while (puVar13 != puVar12);
  }
  if (*(int *)(param_2 + 0x178) != 0) {
    *(int *)(param_1 + 0x120) = *(int *)(param_2 + 0x178);
  }
  if (*(int *)(param_2 + 0x17c) != 0) {
    *(int *)(param_1 + 0x124) = *(int *)(param_2 + 0x17c);
  }
  if (*(int *)(param_2 + 0x180) != 0) {
    *(int *)(param_1 + 0x130) = *(int *)(param_2 + 0x180);
  }
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x184);
  *(undefined1 *)(param_1 + 0x119) = *(undefined1 *)(param_2 + 0x188);
  uVar4 = FUN_00258a7c(param_2 + 400);
  lVar19 = *(long *)(param_1 + 0xb8);
  if (lVar19 == 0) {
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
                    /* try { // try from 006ed010 to 006ed01f has its CatchHandler @ 006ed330 */
    lVar19 = FUN_0026b02c(puVar7);
    *(long *)(param_1 + 0xb8) = lVar19;
  }
  FUN_0026ac80(lVar19,uVar4);
  if (0 < *(long *)(param_2 + 0x198)) {
    FUN_0025da20(&local_90,param_2 + 0x198);
    pbVar8 = *(byte **)(param_1 + 200);
    if (pbVar8 == (byte *)0x0) {
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar7 = (ulong *)*puVar7;
      }
                    /* try { // try from 006ed04c to 006ed04f has its CatchHandler @ 006ed2cc */
      pbVar8 = (byte *)FUN_0051444c(puVar7);
      *(byte **)(param_1 + 200) = pbVar8;
    }
    puVar7 = (ulong *)(*(ulong *)(pbVar8 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(pbVar8 + 8) & 1) == 0) {
      if ((local_88 & 1) == 0) goto LAB_006ed06c;
LAB_006ed090:
      if (puVar7 == *(ulong **)(local_88 & 0xfffffffffffffffe)) goto LAB_006ed09c;
LAB_006ed074:
                    /* try { // try from 006ed074 to 006ed0af has its CatchHandler @ 006ed2e8 */
      FUN_005142b4(pbVar8,&local_90);
    }
    else {
      puVar7 = (ulong *)*puVar7;
      if ((local_88 & 1) != 0) goto LAB_006ed090;
LAB_006ed06c:
      if (puVar7 != (ulong *)(local_88 & 0xfffffffffffffffe)) goto LAB_006ed074;
LAB_006ed09c:
      if (pbVar8 != &local_90) {
        FUN_00514364(pbVar8,&local_90);
      }
    }
    FUN_00513c68(&local_90);
  }
  if (0 < *(long *)(param_2 + 0x1a0)) {
    FUN_0025da20(&local_90,param_2 + 0x1a0);
    pbVar8 = *(byte **)(param_1 + 0xd0);
    if (pbVar8 == (byte *)0x0) {
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar7 = (ulong *)*puVar7;
      }
                    /* try { // try from 006ed0e4 to 006ed0e7 has its CatchHandler @ 006ed2c8 */
      pbVar8 = (byte *)FUN_0051444c(puVar7);
      *(byte **)(param_1 + 0xd0) = pbVar8;
    }
    puVar7 = (ulong *)(*(ulong *)(pbVar8 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(pbVar8 + 8) & 1) == 0) {
      if ((local_88 & 1) == 0) goto LAB_006ed104;
LAB_006ed128:
      if (puVar7 == *(ulong **)(local_88 & 0xfffffffffffffffe)) goto LAB_006ed134;
LAB_006ed10c:
                    /* try { // try from 006ed10c to 006ed147 has its CatchHandler @ 006ed2e4 */
      FUN_005142b4(pbVar8,&local_90);
    }
    else {
      puVar7 = (ulong *)*puVar7;
      if ((local_88 & 1) != 0) goto LAB_006ed128;
LAB_006ed104:
      if (puVar7 != (ulong *)(local_88 & 0xfffffffffffffffe)) goto LAB_006ed10c;
LAB_006ed134:
      if (pbVar8 != &local_90) {
        FUN_00514364(pbVar8,&local_90);
      }
    }
    FUN_00513c68(&local_90);
  }
  FUN_0025da20(&local_90,param_2 + 0x1a8);
  pbVar8 = *(byte **)(param_1 + 0xd8);
  if (pbVar8 == (byte *)0x0) {
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
                    /* try { // try from 006ed170 to 006ed173 has its CatchHandler @ 006ed2d4 */
    pbVar8 = (byte *)FUN_0051444c(puVar7);
    *(byte **)(param_1 + 0xd8) = pbVar8;
  }
  puVar7 = (ulong *)(*(ulong *)(pbVar8 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(pbVar8 + 8) & 1) == 0) {
    if ((local_88 & 1) == 0) goto LAB_006ed190;
LAB_006ed1b4:
    if (puVar7 == *(ulong **)(local_88 & 0xfffffffffffffffe)) goto LAB_006ed1c0;
LAB_006ed198:
                    /* try { // try from 006ed198 to 006ed1d3 has its CatchHandler @ 006ed2f8 */
    FUN_005142b4(pbVar8,&local_90);
  }
  else {
    puVar7 = (ulong *)*puVar7;
    if ((local_88 & 1) != 0) goto LAB_006ed1b4;
LAB_006ed190:
    if (puVar7 != (ulong *)(local_88 & 0xfffffffffffffffe)) goto LAB_006ed198;
LAB_006ed1c0:
    if (pbVar8 != &local_90) {
      FUN_00514364(pbVar8,&local_90);
    }
  }
  FUN_00513c68(&local_90);
  FUN_0025da20(&local_90,param_2 + 0x1b0);
  pbVar8 = *(byte **)(param_1 + 0xe0);
  if (pbVar8 == (byte *)0x0) {
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
                    /* try { // try from 006ed1fc to 006ed1ff has its CatchHandler @ 006ed2d0 */
    pbVar8 = (byte *)FUN_0051444c(puVar7);
    *(byte **)(param_1 + 0xe0) = pbVar8;
  }
  puVar7 = (ulong *)(*(ulong *)(pbVar8 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(pbVar8 + 8) & 1) == 0) {
    if ((local_88 & 1) == 0) goto LAB_006ed21c;
LAB_006ed240:
    if (puVar7 == *(ulong **)(local_88 & 0xfffffffffffffffe)) {
LAB_006ed24c:
      if (pbVar8 != &local_90) {
        FUN_00514364(pbVar8,&local_90);
      }
      goto LAB_006ed260;
    }
  }
  else {
    puVar7 = (ulong *)*puVar7;
    if ((local_88 & 1) != 0) goto LAB_006ed240;
LAB_006ed21c:
    if (puVar7 == (ulong *)(local_88 & 0xfffffffffffffffe)) goto LAB_006ed24c;
  }
                    /* try { // try from 006ed224 to 006ed25f has its CatchHandler @ 006ed2f4 */
  FUN_005142b4(pbVar8,&local_90);
LAB_006ed260:
  FUN_00513c68(&local_90);
  return;
}


