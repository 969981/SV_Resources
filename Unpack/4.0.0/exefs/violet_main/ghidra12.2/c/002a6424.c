/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a6424; name: FUN_002a6424
 */


void FUN_002a6424(undefined8 param_1,long param_2,byte *param_3,undefined8 *param_4,byte *param_5,
                 byte *param_6,ulong param_7,uint param_8)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  ulong *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar16;
  byte *pbVar15;
  int *piVar17;
  long *plVar18;
  byte *local_150;
  byte *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 uStack_130;
  ulong local_108;
  ulong uStack_100;
  undefined8 local_f8;
  undefined *local_d8;
  long lStack_d0;
  undefined auStack_c8 [32];
  char *local_a8;
  undefined8 uStack_a0;
  long local_98;
  byte local_78 [16];
  undefined8 local_68;
  
  lVar7 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
                    /* try { // try from 002a6478 to 002a6487 has its CatchHandler @ 002a6b64 */
  puVar8 = (ulong *)FUN_0038ad50(PTR_PTR_047cc6b8,lVar7);
  uVar10 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar10 = (ulong)(*param_3 >> 1);
  }
  puVar8[2] = (ulong)pbVar2;
  puVar8[3] = uVar10;
  bVar3 = *param_5;
  if ((bVar3 & 1) == 0) {
    if (1 < bVar3) {
      param_5 = param_5 + 1;
      uVar10 = (ulong)(bVar3 >> 1);
      goto LAB_002a64d0;
    }
  }
  else {
    uVar10 = *(ulong *)(param_5 + 8);
    if (uVar10 != 0) {
      param_5 = *(byte **)(param_5 + 0x10);
LAB_002a64d0:
      *puVar8 = (ulong)param_5;
      puVar8[1] = uVar10;
    }
  }
  bVar3 = *param_6;
  if ((bVar3 & 1) == 0) {
    if (bVar3 < 2) goto LAB_002a6500;
    param_6 = param_6 + 1;
    uVar10 = (ulong)(bVar3 >> 1);
  }
  else {
    uVar10 = *(ulong *)(param_6 + 8);
    if (uVar10 == 0) goto LAB_002a6500;
    param_6 = *(byte **)(param_6 + 0x10);
  }
  puVar8[4] = (ulong)param_6;
  puVar8[5] = uVar10;
LAB_002a6500:
  if (param_7 != 0) {
                    /* try { // try from 002a6504 to 002a6513 has its CatchHandler @ 002a6b60 */
    uVar10 = FUN_003520c0(param_7,0,&local_a8);
    if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002a6a78 to 002a6a7b has its CatchHandler @ 002a6b60 */
      abort();
    }
    uVar10 = puVar8[7];
    lVar14 = (long)&uStack_a0 + 1;
    if (local_a8 != (char *)0x0) {
      lVar14 = local_98;
    }
    uVar1 = uStack_a0 & 0xff;
    if (local_a8 != (char *)0x0) {
      uVar1 = uStack_a0;
    }
                    /* try { // try from 002a6540 to 002a656b has its CatchHandler @ 002a6b58 */
    if ((uVar10 == 0) && (uVar10 = FUN_0038ad50(PTR_PTR_047cc6c0,lVar7), uVar10 != 0)) {
      puVar8[7] = uVar10;
    }
    *(long *)(uVar10 + 8) = lVar14;
    *(ulong *)(uVar10 + 0x10) = uVar1;
    if (4 < param_7) {
      FUN_00350fd0(param_7);
    }
  }
  if ((param_8 & 1) != 0) {
                    /* try { // try from 002a6578 to 002a6587 has its CatchHandler @ 002a6b34 */
    if ((puVar8[6] == 0) && (uVar10 = FUN_0038ad50(PTR_PTR_047cc6c8,lVar7), uVar10 != 0)) {
      puVar8[6] = uVar10;
    }
    local_a8 = (char *)((ulong)local_a8 & 0xffffffffffff0000);
                    /* try { // try from 002a65a4 to 002a65af has its CatchHandler @ 002a6b38 */
    FUN_002a6b90(lVar7,*(undefined8 *)(param_2 + 0x10),param_2 + 0x18,param_2 + 0x30,&local_a8);
    if (((ulong)local_a8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_98);
    }
  }
  if ((long *)*param_4 != param_4 + 1) {
    plVar18 = (long *)*param_4;
    do {
      local_a8 = (char *)plVar18[4];
      uStack_a0 = plVar18[5];
      puVar11 = (ulong *)puVar8[8];
      if ((puVar11 == (ulong *)0x0) || (puVar11[1] == puVar11[2])) {
                    /* try { // try from 002a6608 to 002a661b has its CatchHandler @ 002a6b68 */
        FUN_0038afc0(puVar8 + 8,&local_a8,10,lVar7);
        plVar12 = (long *)plVar18[1];
        if ((long *)plVar18[1] != (long *)0x0) goto LAB_002a664c;
LAB_002a665c:
        plVar12 = plVar18 + 2;
        plVar13 = (long *)*plVar12;
        if ((long *)*plVar13 != plVar18) {
          do {
            lVar14 = *plVar12;
            plVar12 = (long *)(lVar14 + 0x10);
            plVar13 = (long *)*plVar12;
          } while (*plVar13 != lVar14);
        }
      }
      else {
        puVar4 = (ulong *)((*puVar11 & 0xfffffffffffffff8) + puVar11[1] * 0x10);
        puVar4[1] = uStack_a0;
        *puVar4 = (ulong)local_a8;
        puVar11[1] = puVar11[1] + 1;
        plVar12 = (long *)plVar18[1];
        if ((long *)plVar18[1] == (long *)0x0) goto LAB_002a665c;
LAB_002a664c:
        do {
          plVar13 = plVar12;
          plVar12 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
      plVar18 = plVar13;
    } while (plVar13 != param_4 + 1);
  }
                    /* try { // try from 002a66e8 to 002a66ef has its CatchHandler @ 002a6b64 */
  if ((*(char *)(*(long *)(param_2 + 8) + 0x10) != '\0') && (iVar6 = FUN_0038c970(0), iVar6 != 0)) {
    local_150 = (byte *)0x0;
    local_148 = (byte *)0x0;
    local_140 = 0;
    if (puVar8[1] != 0) {
      local_108 = *puVar8;
      local_d8 = &DAT_03c751d8;
      lStack_d0 = 3;
      local_a8 = "version_info";
      uStack_a0 = 0xc;
      local_138 = &DAT_03c246d6;
      uStack_130 = 1;
                    /* try { // try from 002a673c to 002a6753 has its CatchHandler @ 002a6ab8 */
      uStack_100 = puVar8[1];
      FUN_00395b50(local_78,&local_a8,&local_d8,&local_108,&local_138);
                    /* try { // try from 002a6754 to 002a675f has its CatchHandler @ 002a6ab4 */
      FUN_002acaf4(&local_150,local_78);
      if ((local_78[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_68);
      }
    }
    if (puVar8[6] != 0) {
                    /* try { // try from 002a6780 to 002a6787 has its CatchHandler @ 002a6ab0 */
      FUN_002abff0(puVar8[6],&local_150);
    }
    puVar5 = PTR_LAB_047cba48;
    puVar11 = (ulong *)puVar8[8];
    if ((puVar11 != (ulong *)0x0) && (uVar10 = puVar11[1], uVar10 != 0)) {
      puVar11 = (ulong *)((*puVar11 & 0xfffffffffffffff8) + 8);
      do {
        if (*puVar11 != 0) {
          local_a8 = "resource_names";
          uStack_a0 = 0xe;
          local_d8 = &DAT_03c751d8;
          lStack_d0 = 3;
          local_108 = puVar11[-1];
          local_138 = &DAT_03c246d6;
          uStack_130 = 1;
                    /* try { // try from 002a67f4 to 002a680b has its CatchHandler @ 002a6ae0 */
          uStack_100 = *puVar11;
          FUN_00395b50(local_78,&local_a8,&local_d8,&local_108,&local_138);
                    /* try { // try from 002a680c to 002a6817 has its CatchHandler @ 002a6ac0 */
          FUN_002acaf4(&local_150,local_78);
          if ((local_78[0] & 1) != 0) {
            FUN_0049e790(puVar5,local_68);
          }
        }
        uVar10 = uVar10 - 1;
        puVar11 = puVar11 + 2;
      } while (uVar10 != 0);
    }
    if (puVar8[3] != 0) {
      local_108 = puVar8[2];
      local_d8 = &DAT_03c751d8;
      lStack_d0 = 3;
      local_a8 = "type_url";
      uStack_a0 = 8;
      local_138 = &DAT_03c246d6;
      uStack_130 = 1;
                    /* try { // try from 002a6868 to 002a687f has its CatchHandler @ 002a6aac */
      uStack_100 = puVar8[3];
      FUN_00395b50(local_78,&local_a8,&local_d8,&local_108,&local_138);
                    /* try { // try from 002a6880 to 002a688b has its CatchHandler @ 002a6aa8 */
      FUN_002acaf4(&local_150,local_78);
      if ((local_78[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_68);
      }
    }
    if (puVar8[5] != 0) {
      local_108 = puVar8[4];
      local_d8 = &DAT_03c751d8;
      lStack_d0 = 3;
      local_a8 = "response_nonce";
      uStack_a0 = 0xe;
      local_138 = &DAT_03c246d6;
      uStack_130 = 1;
                    /* try { // try from 002a68dc to 002a68f3 has its CatchHandler @ 002a6aa4 */
      uStack_100 = puVar8[5];
      FUN_00395b50(local_78,&local_a8,&local_d8,&local_108,&local_138);
                    /* try { // try from 002a68f4 to 002a68ff has its CatchHandler @ 002a6aa0 */
      FUN_002acaf4(&local_150,local_78);
      if ((local_78[0] & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_68);
      }
    }
    piVar17 = (int *)puVar8[7];
    if (piVar17 != (int *)0x0) {
                    /* try { // try from 002a6920 to 002a692f has its CatchHandler @ 002a6a9c */
      FUN_002ac830(&local_150,"error_detail {");
      if (*piVar17 != 0) {
        local_a8 = "  code: ";
        uStack_a0 = 8;
                    /* try { // try from 002a6950 to 002a696f has its CatchHandler @ 002a6abc */
        lStack_d0 = FUN_00394c20(*piVar17,auStack_c8);
        lStack_d0 = lStack_d0 - (long)auStack_c8;
        local_d8 = auStack_c8;
        FUN_003959c0(&local_108,&local_a8,&local_d8);
                    /* try { // try from 002a6970 to 002a697b has its CatchHandler @ 002a6a84 */
        FUN_002acaf4(&local_150,&local_108);
        if ((local_108 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_f8);
        }
      }
      if (*(ulong *)(piVar17 + 4) != 0) {
        local_108 = *(ulong *)(piVar17 + 2);
        local_d8 = &DAT_03c751d8;
        lStack_d0 = 3;
        local_a8 = "  message";
        uStack_a0 = 9;
        local_138 = &DAT_03c246d6;
        uStack_130 = 1;
                    /* try { // try from 002a69cc to 002a69e3 has its CatchHandler @ 002a6a80 */
        uStack_100 = *(ulong *)(piVar17 + 4);
        FUN_00395b50(local_78,&local_a8,&local_d8,&local_108,&local_138);
                    /* try { // try from 002a69e4 to 002a69ef has its CatchHandler @ 002a6a7c */
        FUN_002acaf4(&local_150,local_78);
        if ((local_78[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_68);
        }
      }
                    /* try { // try from 002a6a08 to 002a6a0f has its CatchHandler @ 002a6a98 */
      FUN_002acca0(&local_150);
    }
    pbVar2 = local_150;
    puVar5 = PTR_LAB_047cba48;
    if (local_150 != (byte *)0x0) {
      if (local_148 != local_150) {
        pbVar16 = local_148;
        do {
          pbVar15 = pbVar16 + -0x18;
          if ((*pbVar15 & 1) != 0) {
            FUN_0049e790(puVar5,*(undefined8 *)(pbVar16 + -8));
          }
          pbVar16 = pbVar15;
        } while (pbVar2 != pbVar15);
      }
      local_148 = pbVar2;
      FUN_0049e790(PTR_LAB_047cba48,local_150);
    }
  }
                    /* try { // try from 002a6698 to 002a66bb has its CatchHandler @ 002a6b64 */
  uVar9 = FUN_0038ace0(puVar8,PTR_PTR_047cc6b8,lVar7,&local_a8);
  FUN_003676d0(param_1,uVar9,local_a8);
  if (lVar7 != 0) {
                    /* try { // try from 002a66c0 to 002a66c7 has its CatchHandler @ 002a6b5c */
    FUN_0038bd40(lVar7);
  }
  return;
}


