/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fc3ef8; name: FUN_00fc3ef8
 */


void FUN_00fc3ef8(long param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  __compar_fn_t __compar;
  long *plVar16;
  int iVar17;
  void *__src;
  int iVar18;
  long local_380;
  int *local_378;
  int *local_370;
  undefined8 local_368;
  char *local_360;
  undefined8 uStack_358;
  long *local_350;
  undefined1 *local_348;
  char *pcStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined1 auStack_314 [24];
  undefined1 auStack_2fc [24];
  undefined1 auStack_2e4 [24];
  undefined1 auStack_2cc [24];
  undefined1 auStack_2b4 [24];
  undefined1 auStack_29c [24];
  undefined1 auStack_284 [24];
  undefined1 auStack_26c [24];
  undefined1 auStack_254 [24];
  undefined4 local_23c;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [64];
  undefined1 auStack_1b0 [64];
  char *local_170;
  long local_168;
  int *local_160;
  char *local_158;
  long local_150;
  int *local_148;
  char *local_140;
  long local_138;
  int *local_130;
  char *local_128;
  long local_120;
  int *local_118;
  undefined *local_110;
  long local_108;
  int *local_100;
  char *local_f8;
  long local_f0;
  int *local_e8;
  char *local_e0;
  long local_d8;
  int *local_d0;
  char *local_c8;
  long local_c0;
  int *local_b8;
  char *local_b0;
  long local_a8;
  int *local_a0;
  char *local_98;
  long local_90;
  int *local_88;
  char *local_80;
  long local_78;
  int *local_70;
  
  local_208 = *(undefined8 *)(param_1 + 0x228);
  local_200 = *(undefined8 *)(param_1 + 0x230);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x238);
  FUN_00fb9f24(auStack_1f0,param_1 + 0x240);
  FUN_00fb9f24(auStack_1b0,param_1 + 0x280);
  FUN_00fb4dd0(auStack_220,&local_208);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x2c8);
  local_348 = &DAT_fbec41851566601b;
  pcStack_340 = "values";
  local_338 = 6;
  local_330 = (long *)0x0;
  piVar2 = (int *)FUN_00efa07c(auStack_220,&local_348);
  if (piVar2 == (int *)0x0) {
    iVar17 = 0;
  }
  else {
    iVar17 = *piVar2;
  }
  if (local_330 != (long *)0x0) {
    (**(code **)(*local_330 + 0x20))();
  }
  if (iVar17 != 0) {
    iVar18 = 0;
    __compar = (__compar_fn_t)PTR_LAB_047d5600;
    do {
      local_338 = 6;
      local_330 = (long *)0x0;
      local_348 = &DAT_fbec41851566601b;
      pcStack_340 = "values";
      FUN_00e90ee0(auStack_238,auStack_220,&local_348,iVar18);
      if (local_330 != (long *)0x0) {
        (**(code **)(*local_330 + 0x20))();
      }
      memset(&local_348,0,0x110);
      local_350 = (long *)0x0;
      local_368 = 0x45e350da1d34436d;
      local_360 = "Type";
      uStack_358 = 4;
      piVar2 = (int *)FUN_00d27b5c(auStack_238,&local_368);
      if ((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) {
        uVar5 = 0;
      }
      else {
        uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = *(undefined4 *)((long)piVar2 + uVar6);
        }
      }
      local_348 = (undefined1 *)CONCAT44(local_348._4_4_,uVar5);
      if (local_350 != (long *)0x0) {
        (**(code **)(*local_350 + 0x20))();
      }
      local_350 = (long *)0x0;
      local_368 = 0x1f1e5752f82834b2;
      local_360 = "FavoriteObjectType";
      uStack_358 = 0x12;
      piVar2 = (int *)FUN_00d27b5c(auStack_238,&local_368);
      if ((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) {
        local_23c = 0;
      }
      else {
        uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
        local_23c = 0;
        if (uVar6 != 0) {
          local_23c = *(undefined4 *)((long)piVar2 + uVar6);
        }
      }
      if (local_350 != (long *)0x0) {
        (**(code **)(*local_350 + 0x20))();
      }
      local_350 = (long *)0x0;
      local_368 = 0x4817c17e5bc9b4c0;
      local_360 = "PhaseData";
      uStack_358 = 9;
      FUN_00fb4c10(&local_380,auStack_238,&local_368);
      if (local_378 == (int *)0x0) {
LAB_00fc52b8:
        local_78 = 0;
        local_70 = (int *)0x0;
        local_80 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_378 - (long)*local_378) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_378 - (long)*local_378))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_378 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_80 = "Pokemon";
        puVar3 = bsearch(&local_80,puVar3 + 1,(ulong)*puVar3,4,__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc52b8;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar8 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar3 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
            (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) ||
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc52b8;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_370 - (long)*local_370) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_370 - (long)*local_370))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_370 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_80 = (char *)(local_380 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_70 = local_370;
        local_78 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc5644((ulong)&local_348 | 4,&local_80);
      if (local_378 == (int *)0x0) {
LAB_00fc52c4:
        local_90 = 0;
        local_88 = (int *)0x0;
        local_98 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_378 - (long)*local_378) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_378 - (long)*local_378))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_378 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_98 = "Player";
        puVar3 = bsearch(&local_98,puVar3 + 1,(ulong)*puVar3,4,__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc52c4;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar8 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar3 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
            (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) ||
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc52c4;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_370 - (long)*local_370) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_370 - (long)*local_370))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_370 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_98 = (char *)(local_380 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_88 = local_370;
        local_90 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc5644((long)&local_330 + 4,&local_98);
      if (local_378 == (int *)0x0) {
LAB_00fc52d0:
        local_a8 = 0;
        local_a0 = (int *)0x0;
        local_b0 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_378 - (long)*local_378) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_378 - (long)*local_378))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_378 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_b0 = "FavoritePlace";
        puVar3 = bsearch(&local_b0,puVar3 + 1,(ulong)*puVar3,4,__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc52d0;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar8 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar3 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
            (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) ||
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc52d0;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_370 - (long)*local_370) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_370 - (long)*local_370))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_370 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_b0 = (char *)(local_380 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_a0 = local_370;
        local_a8 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc5644(auStack_314,&local_b0);
      if (local_378 == (int *)0x0) {
LAB_00fc52dc:
        local_c0 = 0;
        local_b8 = (int *)0x0;
        local_c8 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_378 - (long)*local_378) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_378 - (long)*local_378))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_378 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_c8 = "HatePlace";
        puVar3 = bsearch(&local_c8,puVar3 + 1,(ulong)*puVar3,4,__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc52dc;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar8 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar3 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
            (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) ||
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc52dc;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_370 - (long)*local_370) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_370 - (long)*local_370))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_370 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_c8 = (char *)(local_380 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_b8 = local_370;
        local_c0 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc5644(auStack_2fc,&local_c8);
      if (local_378 == (int *)0x0) {
LAB_00fc52e8:
        local_d8 = 0;
        local_d0 = (int *)0x0;
        local_e0 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_378 - (long)*local_378) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_378 - (long)*local_378))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_378 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_e0 = "Meals";
        puVar3 = bsearch(&local_e0,puVar3 + 1,(ulong)*puVar3,4,__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc52e8;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar8 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar3 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
            (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) ||
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc52e8;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_370 - (long)*local_370) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_370 - (long)*local_370))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_370 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_e0 = (char *)(local_380 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_d0 = local_370;
        local_d8 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc5644(auStack_2e4,&local_e0);
      if (local_378 == (int *)0x0) {
LAB_00fc52f4:
        local_f0 = 0;
        local_e8 = (int *)0x0;
        local_f8 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_378 - (long)*local_378) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_378 - (long)*local_378))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_378 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_f8 = "Sleep";
        puVar3 = bsearch(&local_f8,puVar3 + 1,(ulong)*puVar3,4,__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc52f4;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar8 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar3 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
            (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) ||
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc52f4;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_370 - (long)*local_370) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_370 - (long)*local_370))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_370 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_f8 = (char *)(local_380 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_e8 = local_370;
        local_f0 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc5644(auStack_2cc,&local_f8);
      if (local_378 == (int *)0x0) {
LAB_00fc5300:
        local_108 = 0;
        local_100 = (int *)0x0;
        local_110 = (undefined *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_378 - (long)*local_378) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_378 - (long)*local_378))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_378 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_110 = &DAT_03c5d2be;
        puVar3 = bsearch(&local_110,puVar3 + 1,(ulong)*puVar3,4,__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc5300;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar8 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar3 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
            (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) ||
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc5300;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_370 - (long)*local_370) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_370 - (long)*local_370))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_370 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_110 = (undefined *)(local_380 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_100 = local_370;
        local_108 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc5644(auStack_2b4,&local_110);
      if (local_378 == (int *)0x0) {
LAB_00fc530c:
        local_120 = 0;
        local_118 = (int *)0x0;
        local_128 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_378 - (long)*local_378) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_378 - (long)*local_378))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_378 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_128 = "PlayerChase";
        puVar3 = bsearch(&local_128,puVar3 + 1,(ulong)*puVar3,4,__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc530c;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar8 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar3 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
            (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) ||
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc530c;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_370 - (long)*local_370) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_370 - (long)*local_370))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_370 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_128 = (char *)(local_380 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_118 = local_370;
        local_120 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc5644(auStack_29c,&local_128);
      if (local_378 == (int *)0x0) {
LAB_00fc5318:
        local_138 = 0;
        local_130 = (int *)0x0;
        local_140 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_378 - (long)*local_378) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_378 - (long)*local_378))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_378 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_140 = "Rummaging";
        puVar3 = bsearch(&local_140,puVar3 + 1,(ulong)*puVar3,4,__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc5318;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar8 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar3 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
            (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) ||
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc5318;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_370 - (long)*local_370) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_370 - (long)*local_370))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_370 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_140 = (char *)(local_380 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_130 = local_370;
        local_138 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc5644(auStack_284,&local_140);
      if (local_378 == (int *)0x0) {
LAB_00fc5324:
        local_150 = 0;
        local_148 = (int *)0x0;
        local_158 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_378 - (long)*local_378) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_378 - (long)*local_378))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_378 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_158 = "Stain";
        puVar3 = bsearch(&local_158,puVar3 + 1,(ulong)*puVar3,4,__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc5324;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar8 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar3 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
            (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) ||
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc5324;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_370 - (long)*local_370) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_370 - (long)*local_370))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_370 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_158 = (char *)(local_380 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_148 = local_370;
        local_150 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc5644(auStack_26c,&local_158);
      if (local_378 == (int *)0x0) {
LAB_00fc5330:
        local_160 = (int *)0x0;
        local_168 = 0;
        local_170 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_378 - (long)*local_378) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_378 - (long)*local_378))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_378 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_170 = "PhotoBgm";
        puVar3 = bsearch(&local_170,puVar3 + 1,(ulong)*puVar3,4,__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc5330;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
        if (*puVar8 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar8[3] != 0) {
            puVar3 = (uint *)((long)piVar2 + (ulong)puVar8[3]);
            piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
            (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) ||
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc5330;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_370 - (long)*local_370) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_370 - (long)*local_370))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_370 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_170 = (char *)(local_380 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_160 = local_370;
        local_168 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc5644(auStack_254,&local_170);
      if (local_350 != (long *)0x0) {
        (**(code **)(*local_350 + 0x20))();
      }
      pvVar13 = *(void **)(param_1 + 0x2d0);
      if (pvVar13 == *(void **)(param_1 + 0x2d8)) {
        uVar6 = *(ulong *)(param_1 + 0x2e8);
        lVar4 = (long)pvVar13 - *(long *)(param_1 + 0x2c8) >> 4;
        if (0x7ffffffffffffffe < uVar6) {
          uVar6 = 0x7fffffffffffffff;
        }
        uVar11 = lVar4 * -0xf0f0f0f0f0f0f0f + 1;
        if (uVar6 < uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (long)*(void **)(param_1 + 0x2d8) - *(long *)(param_1 + 0x2c8) >> 4;
        uVar9 = lVar7 * -0x1e1e1e1e1e1e1e1e;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (uVar6 >> 1 <= (ulong)(lVar7 * -0xf0f0f0f0f0f0f0f)) {
          uVar11 = uVar6;
        }
        if (uVar11 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(**(long **)(param_1 + 0x2e0) + 0x10))
                            (*(long **)(param_1 + 0x2e0),uVar11 * 0x110,4);
          if (lVar7 == 0) {
            (**(code **)(**(long **)(param_1 + 0x2e0) + 0xe8))();
          }
        }
        pvVar13 = (void *)(lVar7 + lVar4 * 0x10);
        uVar12 = *(undefined8 *)(param_1 + 0x2e0);
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          memcpy(pvVar13,&local_348,0x110);
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00fc5610;
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar12;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          memcpy(pvVar13,&local_348,0x110);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        pvVar15 = *(void **)(param_1 + 0x2c8);
        __src = *(void **)(param_1 + 0x2d0);
        pvVar14 = pvVar13;
        if (__src != pvVar15) {
          do {
            uVar12 = *(undefined8 *)(param_1 + 0x2e0);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            pvVar14 = (void *)((long)pvVar14 + -0x110);
            __src = (void *)((long)__src + -0x110);
            lVar4 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar4 == 0) {
              memcpy(pvVar14,__src,0x110);
            }
            else {
              if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00fc5610;
              *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar12;
              *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
              memcpy(pvVar14,__src,0x110);
              *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
            }
          } while (pvVar15 != __src);
          pvVar15 = *(void **)(param_1 + 0x2c8);
        }
        *(void **)(param_1 + 0x2c8) = pvVar14;
        *(long *)(param_1 + 0x2d0) = (long)pvVar13 + 0x110;
        lVar4 = *(long *)(param_1 + 0x2d8);
        *(ulong *)(param_1 + 0x2d8) = lVar7 + uVar11 * 0x110;
        __compar = (__compar_fn_t)PTR_LAB_047d5600;
        if (pvVar15 != (void *)0x0) {
          plVar16 = *(long **)(param_1 + 0x2e0);
          lVar4 = lVar4 - (long)pvVar15;
          uVar6 = (**(code **)(*plVar16 + 0xf8))(plVar16);
          if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar16 + 0x18))(plVar16,pvVar15,lVar4,4);
          }
          else {
            FUN_00c48fe8(plVar16,pvVar15,lVar4,4);
          }
          __compar = (__compar_fn_t)PTR_LAB_047d5600;
        }
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 0x2e0);
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          memcpy(pvVar13,&local_348,0x110);
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00fc5610:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar12;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          memcpy(pvVar13,&local_348,0x110);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        *(long *)(param_1 + 0x2d0) = (long)pvVar13 + 0x110;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 != iVar17);
  }
  FUN_00db239c(auStack_1b0);
  FUN_00db239c(auStack_1f0);
  return;
}


