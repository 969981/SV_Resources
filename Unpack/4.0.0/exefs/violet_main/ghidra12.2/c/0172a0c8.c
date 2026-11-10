/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172a0c8; name: FUN_0172a0c8
 */


void FUN_0172a0c8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  ushort uVar5;
  undefined *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  ulong **ppuVar10;
  int *piVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ushort *puVar15;
  ulong *puVar16;
  uint uVar17;
  int *piVar18;
  ulong uVar19;
  ulong *puVar20;
  float fVar21;
  ulong **local_1e0;
  char *pcStack_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  undefined8 **local_1c0;
  char *pcStack_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  ulong *local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  long *local_188;
  ulong *local_180;
  char *pcStack_178;
  undefined8 local_170;
  long *local_168;
  undefined8 *local_160;
  char *pcStack_158;
  undefined8 local_150;
  long *local_148;
  ulong local_140;
  char *pcStack_138;
  undefined8 local_130;
  long *local_128;
  ulong local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108 [8];
  undefined1 auStack_c8 [64];
  ulong **local_88 [3];
  undefined8 ***local_68;
  
  FUN_00fb9e50(&local_120,param_1 + 0x1d8,param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x228) = local_110;
  *(char **)(param_1 + 0x220) = pcStack_118;
  *(ulong *)(param_1 + 0x218) = local_120;
  FUN_00fb9ce0(param_1 + 0x230,local_108);
  FUN_00fb9ce0(param_1 + 0x270,auStack_c8);
  FUN_00db239c(auStack_c8);
  FUN_00db239c(local_108);
  FUN_00fb4dd0(&local_120,param_1 + 0x218);
  puVar1 = (undefined8 *)(param_1 + 0x2b0);
  *(char **)(param_1 + 0x2b8) = pcStack_118;
  *(undefined8 *)(param_1 + 0x2c0) = local_110;
  *(ulong *)(param_1 + 0x2b0) = local_120;
  local_110 = 0x1a;
  local_108[0] = (long *)0x0;
  local_120 = 0x49e043f7c831bf1c;
  pcStack_118 = "WorldInstanceFadeNearStart";
  local_140 = 0x1a9368fa4c055bc0;
  pcStack_138 = "TreeNearBegin";
  local_130 = 0xd;
  local_128 = (long *)0x0;
  piVar7 = (int *)FUN_0155b658(puVar1,&local_140);
  puVar6 = PTR_DAT_047d5608;
  fVar21 = 0.0;
  if ((piVar7 != (int *)0x0) && (piVar11 = (int *)*puVar1, piVar11 != (int *)0x0)) {
    puVar15 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar5 = *puVar15;
    if (uVar5 < 7) {
      piVar18 = (int *)0x0;
    }
    else {
      piVar18 = (int *)0x0;
      if ((ulong)puVar15[3] != 0) {
        puVar4 = (uint *)((long)piVar7 + (ulong)puVar15[3]);
        piVar18 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
       (uVar19 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar19 == 0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (long)*(char *)((long)piVar18 + uVar19) & 0xffffffff;
    }
    if (*(long *)(PTR_DAT_047d5608 + uVar19 * 8) == 4) {
      fVar21 = 0.0;
      if (uVar5 < 0xb) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        if ((ulong)puVar15[5] != 0) {
          uVar17 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar15[5]);
        }
        if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
          fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
        }
      }
      if ((uVar17 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
         (uVar19 = (ulong)*(ushort *)(((long)piVar11 - (long)*piVar11) + (ulong)uVar17), uVar19 != 0
         )) {
        fVar21 = *(float *)((long)piVar11 + uVar19);
      }
    }
    else if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
      fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
    }
  }
  puVar14 = (ulong *)(param_1 + 0x308);
  puVar20 = puVar14;
  if (*(ulong **)(param_1 + 0x308) != (ulong *)0x0) {
    puVar13 = *(ulong **)(param_1 + 0x308);
    do {
      if (puVar13[4] < 0x49e043f7c831bf1d) {
        if (puVar13[4] == 0x49e043f7c831bf1c) goto LAB_0172a2cc;
        puVar20 = puVar13 + 1;
        puVar12 = (ulong *)*puVar20;
        if (puVar12 == (ulong *)0x0) goto LAB_0172a2cc;
      }
      else {
        puVar12 = (ulong *)*puVar13;
        puVar20 = puVar13;
        if (puVar12 == (ulong *)0x0) {
          goto LAB_0172a2cc;
        }
      }
      puVar13 = puVar12;
    } while( true );
  }
  puVar13 = puVar14;
LAB_0172a2cc:
  plVar2 = (long *)(param_1 + 0x300);
  puVar8 = (undefined8 *)*puVar20;
  if ((undefined8 *)*puVar20 == (undefined8 *)0x0) {
    local_180 = &local_120;
    FUN_0172b370(&local_160,plVar2,&local_180);
    *local_160 = 0;
    local_160[1] = 0;
    local_160[2] = puVar13;
    *puVar20 = (ulong)local_160;
    puVar8 = local_160;
    if (*(long *)*plVar2 != 0) {
      *plVar2 = *(long *)*plVar2;
      puVar8 = (undefined8 *)*puVar20;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x308),puVar8);
    *(long *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + 1;
    puVar8 = local_160;
  }
  *(float *)(puVar8 + 8) = fVar21;
  local_180 = &local_120;
  puVar20 = (ulong *)(param_1 + 0x2d0);
  puVar13 = puVar20;
  if (*(ulong **)(param_1 + 0x2d0) != (ulong *)0x0) {
    puVar12 = *(ulong **)(param_1 + 0x2d0);
    do {
      if (local_120 < puVar12[4]) {
        puVar16 = (ulong *)*puVar12;
        puVar13 = puVar12;
        if (puVar16 == (ulong *)0x0) {
          goto LAB_0172a37c;
        }
      }
      else {
        if (local_120 <= puVar12[4]) goto LAB_0172a37c;
        puVar13 = puVar12 + 1;
        puVar16 = (ulong *)*puVar13;
        if (puVar16 == (ulong *)0x0) goto LAB_0172a37c;
      }
      puVar12 = puVar16;
    } while( true );
  }
  puVar12 = puVar20;
LAB_0172a37c:
  plVar3 = (long *)(param_1 + 0x2c8);
  puVar8 = (undefined8 *)*puVar13;
  if ((undefined8 *)*puVar13 == (undefined8 *)0x0) {
    FUN_0172b370(&local_160,plVar3,&local_180);
    *local_160 = 0;
    local_160[1] = 0;
    local_160[2] = puVar12;
    *puVar13 = (ulong)local_160;
    puVar8 = local_160;
    if (*(long *)*plVar3 != 0) {
      *plVar3 = *(long *)*plVar3;
      puVar8 = (undefined8 *)*puVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x2d0),puVar8);
    *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 0x2f8) + 1;
    puVar8 = local_160;
  }
  *(float *)(puVar8 + 8) = fVar21;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  FUN_0172b650(param_1,&local_120);
  FUN_0172b4c8(param_1,&local_120);
  local_140 = 0x249cc2805586b665;
  pcStack_138 = "WorldInstanceFadeNearEnd";
  local_130 = 0x18;
  local_128 = (long *)0x0;
  local_160 = (undefined8 *)0x3b31635896b8148c;
  pcStack_158 = "TreeNearEnd";
  local_150 = 0xb;
  local_148 = (long *)0x0;
  piVar7 = (int *)FUN_0155b658(puVar1,&local_160);
  fVar21 = 0.0;
  if ((piVar7 != (int *)0x0) && (piVar11 = (int *)*puVar1, piVar11 != (int *)0x0)) {
    puVar15 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar5 = *puVar15;
    if (uVar5 < 7) {
      piVar18 = (int *)0x0;
    }
    else {
      piVar18 = (int *)0x0;
      if ((ulong)puVar15[3] != 0) {
        puVar4 = (uint *)((long)piVar7 + (ulong)puVar15[3]);
        piVar18 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
       (uVar19 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar19 == 0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (long)*(char *)((long)piVar18 + uVar19) & 0xffffffff;
    }
    if (*(long *)(puVar6 + uVar19 * 8) == 4) {
      fVar21 = 0.0;
      if (uVar5 < 0xb) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        if ((ulong)puVar15[5] != 0) {
          uVar17 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar15[5]);
        }
        if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
          fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
        }
      }
      if ((uVar17 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
         (uVar19 = (ulong)*(ushort *)(((long)piVar11 - (long)*piVar11) + (ulong)uVar17), uVar19 != 0
         )) {
        fVar21 = *(float *)((long)piVar11 + uVar19);
      }
    }
    else if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
      fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
    }
  }
  local_1a0 = &local_140;
  if ((ulong *)*puVar14 != (ulong *)0x0) {
    puVar13 = (ulong *)(param_1 + 0x308);
    puVar12 = (ulong *)*puVar14;
    do {
      if (local_140 < puVar12[4]) {
        puVar16 = (ulong *)*puVar12;
        puVar13 = puVar12;
        if (puVar16 == (ulong *)0x0) {
          goto LAB_0172a54c;
        }
      }
      else {
        if (local_140 <= puVar12[4]) goto LAB_0172a54c;
        puVar13 = puVar12 + 1;
        puVar16 = (ulong *)*puVar13;
        if (puVar16 == (ulong *)0x0) goto LAB_0172a54c;
      }
      puVar12 = puVar16;
    } while( true );
  }
  puVar13 = puVar14;
  puVar12 = puVar14;
LAB_0172a54c:
  puVar16 = (ulong *)*puVar13;
  if ((ulong *)*puVar13 == (ulong *)0x0) {
    FUN_0172b370(&local_180,plVar2,&local_1a0);
    *local_180 = 0;
    local_180[1] = 0;
    local_180[2] = (ulong)puVar12;
    *puVar13 = (ulong)local_180;
    puVar12 = local_180;
    if (*(long *)*plVar2 != 0) {
      *plVar2 = *(long *)*plVar2;
      puVar12 = (ulong *)*puVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x308),puVar12);
    *(long *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + 1;
    puVar16 = local_180;
  }
  *(float *)(puVar16 + 8) = fVar21;
  local_1a0 = &local_140;
  if ((ulong *)*puVar20 != (ulong *)0x0) {
    puVar13 = (ulong *)(param_1 + 0x2d0);
    puVar12 = (ulong *)*puVar20;
    do {
      if (local_140 < puVar12[4]) {
        puVar16 = (ulong *)*puVar12;
        puVar13 = puVar12;
        if (puVar16 == (ulong *)0x0) {
          goto LAB_0172a5f4;
        }
      }
      else {
        if (local_140 <= puVar12[4]) goto LAB_0172a5f4;
        puVar13 = puVar12 + 1;
        puVar16 = (ulong *)*puVar13;
        if (puVar16 == (ulong *)0x0) goto LAB_0172a5f4;
      }
      puVar12 = puVar16;
    } while( true );
  }
  puVar13 = puVar20;
  puVar12 = puVar20;
LAB_0172a5f4:
  puVar16 = (ulong *)*puVar13;
  if ((ulong *)*puVar13 == (ulong *)0x0) {
    FUN_0172b370(&local_180,plVar3,&local_1a0);
    *local_180 = 0;
    local_180[1] = 0;
    local_180[2] = (ulong)puVar12;
    *puVar13 = (ulong)local_180;
    puVar12 = local_180;
    if (*(long *)*plVar3 != 0) {
      *plVar3 = *(long *)*plVar3;
      puVar12 = (ulong *)*puVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x2d0),puVar12);
    *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 0x2f8) + 1;
    puVar16 = local_180;
  }
  *(float *)(puVar16 + 8) = fVar21;
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  FUN_0172b650(param_1,&local_140);
  FUN_0172b4c8(param_1,&local_140);
  local_160 = (undefined8 *)0x900b8d8d3691fc09;
  pcStack_158 = "DetailInstanceFadeNearStart";
  local_150 = 0x1b;
  local_148 = (long *)0x0;
  local_180 = (ulong *)0x32b4997c2ec3ed88;
  pcStack_178 = "GrassNearBegin";
  local_170 = 0xe;
  local_168 = (long *)0x0;
  piVar7 = (int *)FUN_0155b658(puVar1,&local_180);
  fVar21 = 0.0;
  if ((piVar7 != (int *)0x0) && (piVar11 = (int *)*puVar1, piVar11 != (int *)0x0)) {
    puVar15 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar5 = *puVar15;
    if (uVar5 < 7) {
      piVar18 = (int *)0x0;
    }
    else {
      piVar18 = (int *)0x0;
      if ((ulong)puVar15[3] != 0) {
        puVar4 = (uint *)((long)piVar7 + (ulong)puVar15[3]);
        piVar18 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
       (uVar19 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar19 == 0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (long)*(char *)((long)piVar18 + uVar19) & 0xffffffff;
    }
    if (*(long *)(puVar6 + uVar19 * 8) == 4) {
      fVar21 = 0.0;
      if (uVar5 < 0xb) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        if ((ulong)puVar15[5] != 0) {
          uVar17 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar15[5]);
        }
        if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
          fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
        }
      }
      if ((uVar17 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
         (uVar19 = (ulong)*(ushort *)(((long)piVar11 - (long)*piVar11) + (ulong)uVar17), uVar19 != 0
         )) {
        fVar21 = *(float *)((long)piVar11 + uVar19);
      }
    }
    else if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
      fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
    }
  }
  local_1c0 = &local_160;
  if ((ulong *)*puVar14 != (ulong *)0x0) {
    puVar13 = (ulong *)(param_1 + 0x308);
    puVar12 = (ulong *)*puVar14;
    do {
      if (local_160 < (undefined8 *)puVar12[4]) {
        puVar16 = (ulong *)*puVar12;
        puVar13 = puVar12;
        if (puVar16 == (ulong *)0x0) {
          goto LAB_0172a7c0;
        }
      }
      else {
        if (local_160 <= (undefined8 *)puVar12[4]) goto LAB_0172a7c0;
        puVar13 = puVar12 + 1;
        puVar16 = (ulong *)*puVar13;
        if (puVar16 == (ulong *)0x0) goto LAB_0172a7c0;
      }
      puVar12 = puVar16;
    } while( true );
  }
  puVar13 = puVar14;
  puVar12 = puVar14;
LAB_0172a7c0:
  puVar16 = (ulong *)*puVar13;
  if ((ulong *)*puVar13 == (ulong *)0x0) {
    FUN_0172b370(&local_1a0,plVar2,&local_1c0);
    *local_1a0 = 0;
    local_1a0[1] = 0;
    local_1a0[2] = (ulong)puVar12;
    *puVar13 = (ulong)local_1a0;
    puVar12 = local_1a0;
    if (*(long *)*plVar2 != 0) {
      *plVar2 = *(long *)*plVar2;
      puVar12 = (ulong *)*puVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x308),puVar12);
    *(long *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + 1;
    puVar16 = local_1a0;
  }
  *(float *)(puVar16 + 8) = fVar21;
  local_1c0 = &local_160;
  if ((ulong *)*puVar20 != (ulong *)0x0) {
    puVar13 = (ulong *)(param_1 + 0x2d0);
    puVar12 = (ulong *)*puVar20;
    do {
      if (local_160 < (undefined8 *)puVar12[4]) {
        puVar16 = (ulong *)*puVar12;
        puVar13 = puVar12;
        if (puVar16 == (ulong *)0x0) {
          goto LAB_0172a868;
        }
      }
      else {
        if (local_160 <= (undefined8 *)puVar12[4]) goto LAB_0172a868;
        puVar13 = puVar12 + 1;
        puVar16 = (ulong *)*puVar13;
        if (puVar16 == (ulong *)0x0) goto LAB_0172a868;
      }
      puVar12 = puVar16;
    } while( true );
  }
  puVar13 = puVar20;
  puVar12 = puVar20;
LAB_0172a868:
  puVar16 = (ulong *)*puVar13;
  if ((ulong *)*puVar13 == (ulong *)0x0) {
    FUN_0172b370(&local_1a0,plVar3,&local_1c0);
    *local_1a0 = 0;
    local_1a0[1] = 0;
    local_1a0[2] = (ulong)puVar12;
    *puVar13 = (ulong)local_1a0;
    puVar12 = local_1a0;
    if (*(long *)*plVar3 != 0) {
      *plVar3 = *(long *)*plVar3;
      puVar12 = (ulong *)*puVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x2d0),puVar12);
    *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 0x2f8) + 1;
    puVar16 = local_1a0;
  }
  *(float *)(puVar16 + 8) = fVar21;
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  FUN_0172b650(param_1,&local_160);
  FUN_0172b4c8(param_1,&local_160);
  local_180 = (ulong *)0x812d60652befb5f8;
  pcStack_178 = "DetailInstanceFadeNearEnd";
  local_170 = 0x19;
  local_168 = (long *)0x0;
  local_1a0 = (ulong *)0x4d23bc24dd6030c4;
  pcStack_198 = "GrassNearEnd";
  local_190 = 0xc;
  local_188 = (long *)0x0;
  piVar7 = (int *)FUN_0155b658(puVar1,&local_1a0);
  fVar21 = 0.0;
  if ((piVar7 != (int *)0x0) && (piVar11 = (int *)*puVar1, piVar11 != (int *)0x0)) {
    puVar15 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar5 = *puVar15;
    if (uVar5 < 7) {
      piVar18 = (int *)0x0;
    }
    else {
      piVar18 = (int *)0x0;
      if ((ulong)puVar15[3] != 0) {
        puVar4 = (uint *)((long)piVar7 + (ulong)puVar15[3]);
        piVar18 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
       (uVar19 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar19 == 0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (long)*(char *)((long)piVar18 + uVar19) & 0xffffffff;
    }
    if (*(long *)(puVar6 + uVar19 * 8) == 4) {
      fVar21 = 0.0;
      if (uVar5 < 0xb) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        if ((ulong)puVar15[5] != 0) {
          uVar17 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar15[5]);
        }
        if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
          fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
        }
      }
      if ((uVar17 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
         (uVar19 = (ulong)*(ushort *)(((long)piVar11 - (long)*piVar11) + (ulong)uVar17), uVar19 != 0
         )) {
        fVar21 = *(float *)((long)piVar11 + uVar19);
      }
    }
    else if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
      fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
    }
  }
  local_1e0 = &local_180;
  if ((ulong *)*puVar14 != (ulong *)0x0) {
    puVar13 = (ulong *)(param_1 + 0x308);
    puVar12 = (ulong *)*puVar14;
    do {
      if (local_180 < (ulong *)puVar12[4]) {
        puVar16 = (ulong *)*puVar12;
        puVar13 = puVar12;
        if (puVar16 == (ulong *)0x0) {
          goto LAB_0172aa34;
        }
      }
      else {
        if (local_180 <= (ulong *)puVar12[4]) goto LAB_0172aa34;
        puVar13 = puVar12 + 1;
        puVar16 = (ulong *)*puVar13;
        if (puVar16 == (ulong *)0x0) goto LAB_0172aa34;
      }
      puVar12 = puVar16;
    } while( true );
  }
  puVar13 = puVar14;
  puVar12 = puVar14;
LAB_0172aa34:
  ppuVar9 = (undefined8 **)*puVar13;
  if ((undefined8 **)*puVar13 == (undefined8 **)0x0) {
    FUN_0172b370(&local_1c0,plVar2,&local_1e0);
    *local_1c0 = (undefined8 *)0x0;
    local_1c0[1] = (undefined8 *)0x0;
    local_1c0[2] = puVar12;
    *puVar13 = (ulong)local_1c0;
    ppuVar9 = local_1c0;
    if (*(long *)*plVar2 != 0) {
      *plVar2 = *(long *)*plVar2;
      ppuVar9 = (undefined8 **)*puVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x308),ppuVar9);
    *(long *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + 1;
    ppuVar9 = local_1c0;
  }
  *(float *)(ppuVar9 + 8) = fVar21;
  local_1e0 = &local_180;
  if ((ulong *)*puVar20 != (ulong *)0x0) {
    puVar13 = (ulong *)(param_1 + 0x2d0);
    puVar12 = (ulong *)*puVar20;
    do {
      if (local_180 < (ulong *)puVar12[4]) {
        puVar16 = (ulong *)*puVar12;
        puVar13 = puVar12;
        if (puVar16 == (ulong *)0x0) {
          goto LAB_0172aadc;
        }
      }
      else {
        if (local_180 <= (ulong *)puVar12[4]) goto LAB_0172aadc;
        puVar13 = puVar12 + 1;
        puVar16 = (ulong *)*puVar13;
        if (puVar16 == (ulong *)0x0) goto LAB_0172aadc;
      }
      puVar12 = puVar16;
    } while( true );
  }
  puVar13 = puVar20;
  puVar12 = puVar20;
LAB_0172aadc:
  ppuVar9 = (undefined8 **)*puVar13;
  if ((undefined8 **)*puVar13 == (undefined8 **)0x0) {
    FUN_0172b370(&local_1c0,plVar3,&local_1e0);
    *local_1c0 = (undefined8 *)0x0;
    local_1c0[1] = (undefined8 *)0x0;
    local_1c0[2] = puVar12;
    *puVar13 = (ulong)local_1c0;
    ppuVar9 = local_1c0;
    if (*(long *)*plVar3 != 0) {
      *plVar3 = *(long *)*plVar3;
      ppuVar9 = (undefined8 **)*puVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x2d0),ppuVar9);
    *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 0x2f8) + 1;
    ppuVar9 = local_1c0;
  }
  *(float *)(ppuVar9 + 8) = fVar21;
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  FUN_0172b650(param_1,&local_180);
  FUN_0172b4c8(param_1,&local_180);
  local_1a0 = (ulong *)0xc5e5d8a7ea22b261;
  pcStack_198 = "WorldInstanceFadeFarStart";
  local_190 = 0x19;
  local_188 = (long *)0x0;
  local_1c0 = (undefined8 **)0x25537fed82b1c2c3;
  pcStack_1b8 = "TreeFarBegin";
  local_1b0 = 0xc;
  local_1a8 = (long *)0x0;
  piVar7 = (int *)FUN_0155b658(puVar1,&local_1c0);
  fVar21 = 0.0;
  if ((piVar7 != (int *)0x0) && (piVar11 = (int *)*puVar1, piVar11 != (int *)0x0)) {
    puVar15 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar5 = *puVar15;
    if (uVar5 < 7) {
      piVar18 = (int *)0x0;
    }
    else {
      piVar18 = (int *)0x0;
      if ((ulong)puVar15[3] != 0) {
        puVar4 = (uint *)((long)piVar7 + (ulong)puVar15[3]);
        piVar18 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
       (uVar19 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar19 == 0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (long)*(char *)((long)piVar18 + uVar19) & 0xffffffff;
    }
    if (*(long *)(puVar6 + uVar19 * 8) == 4) {
      fVar21 = 0.0;
      if (uVar5 < 0xb) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        if ((ulong)puVar15[5] != 0) {
          uVar17 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar15[5]);
        }
        if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
          fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
        }
      }
      if ((uVar17 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
         (uVar19 = (ulong)*(ushort *)(((long)piVar11 - (long)*piVar11) + (ulong)uVar17), uVar19 != 0
         )) {
        fVar21 = *(float *)((long)piVar11 + uVar19);
      }
    }
    else if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
      fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
    }
  }
  local_88[0] = &local_1a0;
  if ((ulong *)*puVar14 != (ulong *)0x0) {
    puVar13 = (ulong *)(param_1 + 0x308);
    puVar12 = (ulong *)*puVar14;
    do {
      if (local_1a0 < (ulong *)puVar12[4]) {
        puVar16 = (ulong *)*puVar12;
        puVar13 = puVar12;
        if (puVar16 == (ulong *)0x0) {
          goto LAB_0172aca8;
        }
      }
      else {
        if (local_1a0 <= (ulong *)puVar12[4]) goto LAB_0172aca8;
        puVar13 = puVar12 + 1;
        puVar16 = (ulong *)*puVar13;
        if (puVar16 == (ulong *)0x0) goto LAB_0172aca8;
      }
      puVar12 = puVar16;
    } while( true );
  }
  puVar13 = puVar14;
  puVar12 = puVar14;
LAB_0172aca8:
  ppuVar10 = (ulong **)*puVar13;
  if ((ulong **)*puVar13 == (ulong **)0x0) {
    FUN_0172b370(&local_1e0,plVar2,local_88);
    *local_1e0 = (ulong *)0x0;
    local_1e0[1] = (ulong *)0x0;
    local_1e0[2] = puVar12;
    *puVar13 = (ulong)local_1e0;
    ppuVar10 = local_1e0;
    if (*(long *)*plVar2 != 0) {
      *plVar2 = *(long *)*plVar2;
      ppuVar10 = (ulong **)*puVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x308),ppuVar10);
    *(long *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + 1;
    ppuVar10 = local_1e0;
  }
  *(float *)(ppuVar10 + 8) = fVar21;
  local_88[0] = &local_1a0;
  if ((ulong *)*puVar20 != (ulong *)0x0) {
    puVar13 = (ulong *)(param_1 + 0x2d0);
    puVar12 = (ulong *)*puVar20;
    do {
      if (local_1a0 < (ulong *)puVar12[4]) {
        puVar16 = (ulong *)*puVar12;
        puVar13 = puVar12;
        if (puVar16 == (ulong *)0x0) {
          goto LAB_0172ad50;
        }
      }
      else {
        if (local_1a0 <= (ulong *)puVar12[4]) goto LAB_0172ad50;
        puVar13 = puVar12 + 1;
        puVar16 = (ulong *)*puVar13;
        if (puVar16 == (ulong *)0x0) goto LAB_0172ad50;
      }
      puVar12 = puVar16;
    } while( true );
  }
  puVar13 = puVar20;
  puVar12 = puVar20;
LAB_0172ad50:
  ppuVar10 = (ulong **)*puVar13;
  if ((ulong **)*puVar13 == (ulong **)0x0) {
    FUN_0172b370(&local_1e0,plVar3,local_88);
    *local_1e0 = (ulong *)0x0;
    local_1e0[1] = (ulong *)0x0;
    local_1e0[2] = puVar12;
    *puVar13 = (ulong)local_1e0;
    ppuVar10 = local_1e0;
    if (*(long *)*plVar3 != 0) {
      *plVar3 = *(long *)*plVar3;
      ppuVar10 = (ulong **)*puVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x2d0),ppuVar10);
    *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 0x2f8) + 1;
    ppuVar10 = local_1e0;
  }
  *(float *)(ppuVar10 + 8) = fVar21;
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  FUN_0172b650(param_1,&local_1a0);
  FUN_0172b4c8(param_1,&local_1a0);
  local_1c0 = (undefined8 **)0xd94a1e2d442e7240;
  pcStack_1b8 = "WorldInstanceFadeFarEnd";
  local_1b0 = 0x17;
  local_1a8 = (long *)0x0;
  local_1e0 = (undefined8 **)0xf47228993c9321db;
  pcStack_1d8 = "TreeFarEnd";
  local_1d0 = 10;
  local_1c8 = (long *)0x0;
  piVar7 = (int *)FUN_0155b658(puVar1,&local_1e0);
  fVar21 = 0.0;
  if ((piVar7 != (int *)0x0) && (piVar11 = (int *)*puVar1, piVar11 != (int *)0x0)) {
    puVar15 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar5 = *puVar15;
    if (uVar5 < 7) {
      piVar18 = (int *)0x0;
    }
    else {
      piVar18 = (int *)0x0;
      if ((ulong)puVar15[3] != 0) {
        puVar4 = (uint *)((long)piVar7 + (ulong)puVar15[3]);
        piVar18 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
       (uVar19 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar19 == 0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (long)*(char *)((long)piVar18 + uVar19) & 0xffffffff;
    }
    if (*(long *)(puVar6 + uVar19 * 8) == 4) {
      fVar21 = 0.0;
      if (uVar5 < 0xb) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        if ((ulong)puVar15[5] != 0) {
          uVar17 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar15[5]);
        }
        if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
          fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
        }
      }
      if ((uVar17 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
         (uVar19 = (ulong)*(ushort *)(((long)piVar11 - (long)*piVar11) + (ulong)uVar17), uVar19 != 0
         )) {
        fVar21 = *(float *)((long)piVar11 + uVar19);
      }
    }
    else if ((0xe < uVar5) && ((ulong)puVar15[7] != 0)) {
      fVar21 = (float)*(double *)((long)piVar7 + (ulong)puVar15[7]);
    }
  }
  local_68 = &local_1c0;
  puVar13 = (ulong *)*puVar14;
  if (puVar13 != (ulong *)0x0) {
    puVar14 = (ulong *)(param_1 + 0x308);
    do {
      if (local_1c0 < (undefined8 **)puVar13[4]) {
        puVar14 = puVar13;
        if ((ulong *)*puVar13 == (ulong *)0x0) {
          goto LAB_0172af1c;
        }
        puVar12 = (ulong *)*puVar13;
      }
      else {
        if (local_1c0 <= (undefined8 **)puVar13[4]) goto LAB_0172af18;
        puVar14 = puVar13 + 1;
        puVar12 = (ulong *)*puVar14;
        if ((ulong *)*puVar14 == (ulong *)0x0) goto LAB_0172af18;
      }
      puVar13 = puVar12;
    } while( true );
  }
  puVar13 = puVar14;
LAB_0172af1c:
  ppuVar10 = (ulong **)*puVar14;
  if ((ulong **)*puVar14 == (ulong **)0x0) {
    FUN_0172b370(local_88,plVar2,&local_68);
    ppuVar10 = local_88[0];
    *local_88[0] = (ulong *)0x0;
    ppuVar10[1] = (ulong *)0x0;
    ppuVar10[2] = puVar13;
    *puVar14 = (ulong)ppuVar10;
    if (*(long *)*plVar2 != 0) {
      *plVar2 = *(long *)*plVar2;
      ppuVar10 = (ulong **)*puVar14;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x308),ppuVar10);
    *(long *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + 1;
    ppuVar10 = local_88[0];
  }
  *(float *)(ppuVar10 + 8) = fVar21;
  local_68 = &local_1c0;
  puVar14 = (ulong *)*puVar20;
  if (puVar14 != (ulong *)0x0) {
    puVar20 = (ulong *)(param_1 + 0x2d0);
    do {
      if (local_1c0 < (undefined8 **)puVar14[4]) {
        puVar20 = puVar14;
        if ((ulong *)*puVar14 == (ulong *)0x0) {
          goto LAB_0172afc4;
        }
        puVar13 = (ulong *)*puVar14;
      }
      else {
        if (local_1c0 <= (undefined8 **)puVar14[4]) goto LAB_0172afc0;
        puVar20 = puVar14 + 1;
        puVar13 = (ulong *)*puVar20;
        if ((ulong *)*puVar20 == (ulong *)0x0) goto LAB_0172afc0;
      }
      puVar14 = puVar13;
    } while( true );
  }
  puVar14 = puVar20;
LAB_0172afc4:
  ppuVar10 = (ulong **)*puVar20;
  if ((ulong **)*puVar20 == (ulong **)0x0) {
    FUN_0172b370(local_88,plVar3,&local_68);
    ppuVar10 = local_88[0];
    *local_88[0] = (ulong *)0x0;
    ppuVar10[1] = (ulong *)0x0;
    ppuVar10[2] = puVar14;
    *puVar20 = (ulong)ppuVar10;
    if (*(long *)*plVar3 != 0) {
      *plVar3 = *(long *)*plVar3;
      ppuVar10 = (ulong **)*puVar20;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x2d0),ppuVar10);
    *(long *)(param_1 + 0x2f8) = *(long *)(param_1 + 0x2f8) + 1;
    ppuVar10 = local_88[0];
  }
  *(float *)(ppuVar10 + 8) = fVar21;
  if (local_1c8 != (long *)0x0) {
    (**(code **)(*local_1c8 + 0x20))();
  }
  FUN_0172b650(param_1,&local_1c0);
  FUN_0172b4c8(param_1,&local_1c0);
  if (local_1a8 != (long *)0x0) {
    (**(code **)(*local_1a8 + 0x20))();
  }
  if (local_188 != (long *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 0x20))();
  }
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (local_108[0] != (long *)0x0) {
    (**(code **)(*local_108[0] + 0x20))();
  }
  return;
LAB_0172af18:
  goto LAB_0172af1c;
LAB_0172afc0:
  goto LAB_0172afc4;
}


