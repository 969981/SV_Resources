/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fc5df0; name: FUN_00fc5df0
 */


void FUN_00fc5df0(long param_1)

{
  undefined *__compar;
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
  void *__dest;
  long *plVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  void *__src;
  long local_568;
  int *local_560;
  int *local_558;
  undefined8 local_550;
  char *local_548;
  undefined8 uStack_540;
  long *local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  long *local_518;
  undefined1 auStack_4e8 [60];
  undefined1 auStack_4ac [60];
  undefined1 auStack_470 [60];
  undefined1 auStack_434 [60];
  undefined1 auStack_3f8 [60];
  undefined1 auStack_3bc [60];
  undefined1 auStack_380 [60];
  undefined1 auStack_344 [60];
  undefined1 auStack_308 [60];
  undefined1 auStack_2cc [60];
  undefined1 auStack_290 [64];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 auStack_208 [64];
  undefined1 auStack_1c8 [64];
  char *local_188;
  long local_180;
  int *local_178;
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
  
  local_220 = *(undefined8 *)(param_1 + 0x4d8);
  local_218 = *(undefined8 *)(param_1 + 0x4e0);
  local_210 = *(undefined8 *)(param_1 + 0x4e8);
  FUN_00fb9f24(auStack_208,param_1 + 0x4f0);
  FUN_00fb9f24(auStack_1c8,param_1 + 0x530);
  FUN_00fb4dd0(auStack_238,&local_220);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_1 + 0x578);
  local_530 = &DAT_fbec41851566601b;
  local_528 = "values";
  local_520 = 6;
  local_518 = (long *)0x0;
  piVar2 = (int *)FUN_00efa07c(auStack_238,&local_530);
  if (piVar2 == (int *)0x0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *piVar2;
  }
  if (local_518 != (long *)0x0) {
    (**(code **)(*local_518 + 0x20))();
  }
  if (iVar16 != 0) {
    iVar17 = 0;
    do {
      __compar = PTR_LAB_047d5600;
      local_530 = &DAT_fbec41851566601b;
      local_528 = "values";
      local_520 = 6;
      local_518 = (long *)0x0;
      FUN_00e90ee0(auStack_250,auStack_238,&local_530,iVar17);
      if (local_518 != (long *)0x0) {
        (**(code **)(*local_518 + 0x20))();
      }
      memset(&local_530,0,0x2dc);
      local_538 = (long *)0x0;
      local_550 = 0x8d742b2256e83b52;
      local_548 = "BaseMoveMode";
      uStack_540 = 0xc;
      piVar2 = (int *)FUN_00d27b5c(auStack_250,&local_550);
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
      local_530 = (undefined1 *)CONCAT44(local_530._4_4_,uVar5);
      if (local_538 != (long *)0x0) {
        (**(code **)(*local_538 + 0x20))();
      }
      local_538 = (long *)0x0;
      local_550 = 0x99fa6d38448c460a;
      local_548 = "Nature";
      uStack_540 = 6;
      piVar2 = (int *)FUN_00d27b5c(auStack_250,&local_550);
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
      local_530 = (undefined1 *)CONCAT44(uVar5,(undefined4)local_530);
      if (local_538 != (long *)0x0) {
        (**(code **)(*local_538 + 0x20))();
      }
      local_538 = (long *)0x0;
      local_550 = 0xd9eb631ebc1a4fc8;
      local_548 = "ActionPreset";
      uStack_540 = 0xc;
      piVar2 = (int *)FUN_00d27b5c(auStack_250,&local_550);
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
      local_528 = (char *)CONCAT44(local_528._4_4_,uVar5);
      if (local_538 != (long *)0x0) {
        (**(code **)(*local_538 + 0x20))();
      }
      local_538 = (long *)0x0;
      local_550 = 0x1182b0bad26f10a7;
      local_548 = "ActionData";
      uStack_540 = 10;
      FUN_00fb4c10(&local_568,auStack_250,&local_550);
      if (local_560 == (int *)0x0) {
LAB_00fc7388:
        local_78 = 0;
        local_70 = (int *)0x0;
        local_80 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_80 = "Pokemon";
        puVar3 = bsearch(&local_80,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc7388;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc7388;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_80 = (char *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_70 = local_558;
        local_78 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c((long)&local_528 + 4,&local_80);
      if (local_560 == (int *)0x0) {
LAB_00fc7394:
        local_90 = 0;
        local_88 = (int *)0x0;
        local_98 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_98 = "Player";
        puVar3 = bsearch(&local_98,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc7394;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc7394;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_98 = (char *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_88 = local_558;
        local_90 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c(auStack_4e8,&local_98);
      if (local_560 == (int *)0x0) {
LAB_00fc73a0:
        local_a8 = 0;
        local_a0 = (int *)0x0;
        local_b0 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_b0 = "FavoritePlace";
        puVar3 = bsearch(&local_b0,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc73a0;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc73a0;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_b0 = (char *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_a0 = local_558;
        local_a8 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c(auStack_4ac,&local_b0);
      if (local_560 == (int *)0x0) {
LAB_00fc73ac:
        local_c0 = 0;
        local_b8 = (int *)0x0;
        local_c8 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_c8 = "HatePlace";
        puVar3 = bsearch(&local_c8,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc73ac;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc73ac;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_c8 = (char *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_b8 = local_558;
        local_c0 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c(auStack_470,&local_c8);
      if (local_560 == (int *)0x0) {
LAB_00fc73b8:
        local_d8 = 0;
        local_d0 = (int *)0x0;
        local_e0 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_e0 = "Meals";
        puVar3 = bsearch(&local_e0,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc73b8;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc73b8;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_e0 = (char *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_d0 = local_558;
        local_d8 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c(auStack_434,&local_e0);
      if (local_560 == (int *)0x0) {
LAB_00fc73c4:
        local_f0 = 0;
        local_e8 = (int *)0x0;
        local_f8 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_f8 = "Sleep";
        puVar3 = bsearch(&local_f8,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc73c4;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc73c4;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_f8 = (char *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_e8 = local_558;
        local_f0 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c(auStack_3f8,&local_f8);
      if (local_560 == (int *)0x0) {
LAB_00fc73d0:
        local_108 = 0;
        local_100 = (int *)0x0;
        local_110 = (undefined *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_110 = &DAT_03c5d2be;
        puVar3 = bsearch(&local_110,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc73d0;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc73d0;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_110 = (undefined *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_100 = local_558;
        local_108 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c(auStack_3bc,&local_110);
      if (local_560 == (int *)0x0) {
LAB_00fc73dc:
        local_120 = 0;
        local_118 = (int *)0x0;
        local_128 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_128 = "PlayerChase";
        puVar3 = bsearch(&local_128,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc73dc;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc73dc;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_128 = (char *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_118 = local_558;
        local_120 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c(auStack_380,&local_128);
      if (local_560 == (int *)0x0) {
LAB_00fc73e8:
        local_138 = 0;
        local_130 = (int *)0x0;
        local_140 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_140 = "Rummaging";
        puVar3 = bsearch(&local_140,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc73e8;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc73e8;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_140 = (char *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_130 = local_558;
        local_138 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c(auStack_344,&local_140);
      if (local_560 == (int *)0x0) {
LAB_00fc73f4:
        local_150 = 0;
        local_148 = (int *)0x0;
        local_158 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_158 = "Stain";
        puVar3 = bsearch(&local_158,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc73f4;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc73f4;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_158 = (char *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_148 = local_558;
        local_150 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c(auStack_308,&local_158);
      if (local_560 == (int *)0x0) {
LAB_00fc7400:
        local_160 = (int *)0x0;
        local_168 = 0;
        local_170 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_170 = "Whistle";
        puVar3 = bsearch(&local_170,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc7400;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc7400;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_170 = (char *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_160 = local_558;
        local_168 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c(auStack_2cc,&local_170);
      if (local_560 == (int *)0x0) {
LAB_00fc7410:
        local_178 = (int *)0x0;
        local_180 = 0;
        local_188 = (char *)0x0;
      }
      else {
        if ((*(ushort *)((long)local_560 - (long)*local_560) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_560 - (long)*local_560))[3], uVar6 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_560 + uVar6);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_188 = "PhotoBgm";
        puVar3 = bsearch(&local_188,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)__compar);
        if (puVar3 == (uint *)0x0) goto LAB_00fc7410;
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
           (1 < (int)*(char *)((long)piVar10 + uVar6) - 0xfU)) goto LAB_00fc7410;
        if ((*puVar8 < 0xb) || ((ulong)puVar8[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar8[5]);
        }
        if (*(ushort *)((long)local_558 - (long)*local_558) < 5) {
          lVar4 = 0;
        }
        else {
          uVar11 = (ulong)((ushort *)((long)local_558 - (long)*local_558))[2];
          lVar4 = 0;
          if (uVar11 != 0) {
            puVar3 = (uint *)((long)local_558 + uVar11);
            lVar4 = (long)puVar3 + (ulong)*puVar3;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar8[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar8[3]));
        local_188 = (char *)(local_568 + uVar6);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar6 == 0)) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)((long)piVar2 + uVar6);
        }
        puVar3 = (uint *)(lVar4 + uVar6 * 4 + 4);
        local_178 = local_558;
        local_180 = (long)puVar3 + (ulong)*puVar3;
      }
      FUN_00fc774c(auStack_290,&local_188);
      if (local_538 != (long *)0x0) {
        (**(code **)(*local_538 + 0x20))();
      }
      pvVar13 = *(void **)(param_1 + 0x580);
      if (pvVar13 == *(void **)(param_1 + 0x588)) {
        uVar6 = *(ulong *)(param_1 + 0x598);
        lVar4 = (long)pvVar13 - *(long *)(param_1 + 0x578) >> 2;
        if (0x7ffffffffffffffe < uVar6) {
          uVar6 = 0x7fffffffffffffff;
        }
        uVar11 = lVar4 * 0x6fe99e1395aedd07 + 1;
        if (uVar6 < uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (long)*(void **)(param_1 + 0x588) - *(long *)(param_1 + 0x578) >> 2;
        uVar9 = lVar7 * -0x202cc3d8d4a245f2;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (uVar6 >> 1 <= (ulong)(lVar7 * 0x6fe99e1395aedd07)) {
          uVar11 = uVar6;
        }
        if (uVar11 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(**(long **)(param_1 + 0x590) + 0x10))
                            (*(long **)(param_1 + 0x590),uVar11 * 0x2dc,4);
          if (lVar7 == 0) {
            (**(code **)(**(long **)(param_1 + 0x590) + 0xe8))();
          }
        }
        pvVar13 = (void *)(lVar7 + lVar4 * 4);
        uVar12 = *(undefined8 *)(param_1 + 0x590);
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          memcpy(pvVar13,&local_530,0x2dc);
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00fc7718;
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar12;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          memcpy(pvVar13,&local_530,0x2dc);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        pvVar15 = *(void **)(param_1 + 0x578);
        __src = *(void **)(param_1 + 0x580);
        __dest = pvVar13;
        if (__src != pvVar15) {
          do {
            uVar12 = *(undefined8 *)(param_1 + 0x590);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            __dest = (void *)((long)__dest + -0x2dc);
            __src = (void *)((long)__src + -0x2dc);
            lVar4 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar4 == 0) {
              memcpy(__dest,__src,0x2dc);
            }
            else {
              if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00fc7718;
              *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar12;
              *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
              memcpy(__dest,__src,0x2dc);
              *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
            }
          } while (pvVar15 != __src);
          pvVar15 = *(void **)(param_1 + 0x578);
        }
        *(long *)(param_1 + 0x580) = (long)pvVar13 + 0x2dc;
        *(void **)(param_1 + 0x578) = __dest;
        lVar4 = *(long *)(param_1 + 0x588);
        *(ulong *)(param_1 + 0x588) = lVar7 + uVar11 * 0x2dc;
        if (pvVar15 != (void *)0x0) {
          plVar14 = *(long **)(param_1 + 0x590);
          lVar4 = lVar4 - (long)pvVar15;
          uVar6 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,pvVar15,lVar4,4);
          }
          else {
            FUN_00c48fe8(plVar14,pvVar15,lVar4,4);
          }
        }
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 0x590);
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          memcpy(pvVar13,&local_530,0x2dc);
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00fc7718:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar12;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          memcpy(pvVar13,&local_530,0x2dc);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        *(long *)(param_1 + 0x580) = (long)pvVar13 + 0x2dc;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != iVar16);
  }
  FUN_00db239c(auStack_1c8);
  FUN_00db239c(auStack_208);
  return;
}


