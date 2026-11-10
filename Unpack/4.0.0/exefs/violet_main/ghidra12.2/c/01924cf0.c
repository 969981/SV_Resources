/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01924cf0; name: FUN_01924cf0
 */


void FUN_01924cf0(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *__compar;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 uVar6;
  ushort uVar7;
  code *pcVar8;
  ushort *puVar9;
  ushort *puVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  long local_360 [12];
  undefined1 *local_300;
  code *local_2f8;
  code *local_2f0;
  undefined1 *local_2e8;
  long alStack_2e0 [12];
  undefined1 *local_280;
  code *local_278;
  code *local_270;
  undefined1 *local_268;
  long alStack_260 [12];
  int *local_200;
  int *local_1f8;
  char *local_1e8;
  char *pcStack_1e0;
  undefined8 local_1d8;
  long *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 auStack_180 [8];
  long local_178;
  undefined1 auStack_140 [8];
  long local_138;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  long local_e0;
  undefined1 auStack_a8 [8];
  long local_a0;
  
  FUN_00fb9e50(&local_100,param_1 + 0x2a0,param_1 + 0x2e0);
  FUN_00fb9e50(&local_198,param_1 + 800,param_1 + 0x360);
  puVar3 = PTR_DAT_047d5608;
  puVar2 = PTR_LAB_047d5600;
  if (((local_a0 == 0) || ((*(byte *)(local_a0 + 0x1e8) & 1) != 0)) &&
     ((local_e0 == 0 || ((*(byte *)(local_e0 + 0x1e8) & 1) != 0)))) {
    local_1b0 = local_100;
    local_1a8 = uStack_f8;
    local_1a0 = local_f0;
  }
  else {
    local_1a8 = 0;
    local_1a0 = 0;
    local_1b0 = 0;
  }
  if (((local_138 == 0) || ((*(byte *)(local_138 + 0x1e8) & 1) != 0)) &&
     ((local_178 == 0 || ((*(byte *)(local_178 + 0x1e8) & 1) != 0)))) {
    local_1c8 = local_198;
    local_1c0 = uStack_190;
    local_1b8 = local_188;
  }
  else {
    local_1c0 = 0;
    local_1b8 = 0;
    local_1c8 = 0;
  }
  uVar13 = 0;
  puVar10 = (ushort *)(param_1 + 0x28);
  while( true ) {
    local_1e8 = &DAT_fbec41851566601b;
    pcStack_1e0 = "values";
    local_1d8 = 6;
    local_1d0 = (long *)0x0;
    puVar4 = (uint *)FUN_00efa07c(&local_1b0,&local_1e8);
    if (puVar4 == (uint *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *puVar4;
    }
    if (local_1d0 != (long *)0x0) {
      (**(code **)(*local_1d0 + 0x20))();
    }
    __compar = PTR_LAB_047d5600;
    if (uVar5 <= uVar13) break;
    if (uVar13 < 0x78) {
      local_1e8 = &DAT_fbec41851566601b;
      pcStack_1e0 = "values";
      local_1d8 = 6;
      local_1d0 = (long *)0x0;
      FUN_00e90ee0(&local_200,&local_1b0,&local_1e8,uVar13 & 0xffffffff);
      if (local_1d0 != (long *)0x0) {
        (**(code **)(*local_1d0 + 0x20))();
      }
      if (local_1f8 == (int *)0x0) {
        uVar7 = 0;
        *puVar10 = 0;
      }
      else {
        if (*(ushort *)((long)local_1f8 - (long)*local_1f8) < 7) goto LAB_019250cc;
        uVar7 = ((ushort *)((long)local_1f8 - (long)*local_1f8))[3];
        if ((ulong)uVar7 != 0) {
          puVar4 = (uint *)((long)local_1f8 + (ulong)uVar7);
          local_1e8 = "plibID";
          puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          puVar4 = bsearch(&local_1e8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)puVar2);
          if ((puVar4 != (uint *)0x0) && (local_200 != (int *)0x0)) {
            piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
            uVar7 = *puVar9;
            if (uVar7 < 7) {
              piVar11 = (int *)0x0;
            }
            else {
              piVar11 = (int *)0x0;
              if ((ulong)puVar9[3] != 0) {
                puVar4 = (uint *)((long)piVar1 + (ulong)puVar9[3]);
                piVar11 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
               (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar12 == 0)) {
              uVar12 = 0;
            }
            else {
              uVar12 = (long)*(char *)((long)piVar11 + uVar12) & 0xffffffff;
            }
            if (*(long *)(puVar3 + uVar12 * 8) == 4) {
              if (uVar7 < 0xb) {
                uVar5 = 0;
LAB_01924f5c:
                uVar7 = 0;
              }
              else {
                uVar5 = 0;
                if ((ulong)puVar9[5] != 0) {
                  uVar5 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar9[5]);
                }
                if ((uVar7 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_01924f5c;
                uVar7 = (ushort)*(undefined4 *)((long)piVar1 + (ulong)puVar9[6]);
              }
              if ((uVar5 < *(ushort *)((long)local_200 - (long)*local_200)) &&
                 (uVar12 = (ulong)*(ushort *)(((long)local_200 - (long)*local_200) + (ulong)uVar5),
                 uVar12 != 0)) {
                uVar7 = (ushort)*(undefined4 *)((long)local_200 + uVar12);
              }
              goto LAB_01924f80;
            }
            if ((0xc < uVar7) && ((ulong)puVar9[6] != 0)) {
              uVar7 = (ushort)*(undefined4 *)((long)piVar1 + (ulong)puVar9[6]);
              goto LAB_01924f80;
            }
          }
LAB_019250cc:
          uVar7 = 0;
        }
LAB_01924f80:
        *puVar10 = uVar7;
        if ((local_1f8 == (int *)0x0) || (*(ushort *)((long)local_1f8 - (long)*local_1f8) < 7))
        goto LAB_019250ec;
        uVar7 = ((ushort *)((long)local_1f8 - (long)*local_1f8))[3];
        if ((ulong)uVar7 == 0) goto LAB_0192509c;
        puVar4 = (uint *)((long)local_1f8 + (ulong)uVar7);
        local_1e8 = "itemID";
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        puVar4 = bsearch(&local_1e8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)puVar2);
        if ((puVar4 != (uint *)0x0) && (local_200 != (int *)0x0)) {
          piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar7 = *puVar9;
          if (uVar7 < 7) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = (int *)0x0;
            if ((ulong)puVar9[3] != 0) {
              puVar4 = (uint *)((long)piVar1 + (ulong)puVar9[3]);
              piVar11 = (int *)((long)puVar4 + (ulong)*puVar4);
            }
          }
          if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
             (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar12 == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = (long)*(char *)((long)piVar11 + uVar12) & 0xffffffff;
          }
          if (*(long *)(puVar3 + uVar12 * 8) == 4) {
            if (uVar7 < 0xb) {
              uVar5 = 0;
LAB_01925078:
              uVar7 = 0;
            }
            else {
              uVar5 = 0;
              if ((ulong)puVar9[5] != 0) {
                uVar5 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar9[5]);
              }
              if ((uVar7 < 0xd) || ((ulong)puVar9[6] == 0)) goto LAB_01925078;
              uVar7 = (ushort)*(undefined4 *)((long)piVar1 + (ulong)puVar9[6]);
            }
            if ((uVar5 < *(ushort *)((long)local_200 - (long)*local_200)) &&
               (uVar12 = (ulong)*(ushort *)(((long)local_200 - (long)*local_200) + (ulong)uVar5),
               uVar12 != 0)) {
              uVar7 = (ushort)*(undefined4 *)((long)local_200 + uVar12);
            }
            goto LAB_0192509c;
          }
          if ((0xc < uVar7) && ((ulong)puVar9[6] != 0)) {
            uVar7 = (ushort)*(undefined4 *)((long)piVar1 + (ulong)puVar9[6]);
            goto LAB_0192509c;
          }
        }
LAB_019250ec:
        uVar7 = 0;
      }
LAB_0192509c:
      puVar10[1] = uVar7;
    }
    uVar13 = uVar13 + 1;
    puVar10 = puVar10 + 2;
  }
  uVar13 = 0;
  puVar15 = (undefined1 *)(param_1 + 0x208);
  while( true ) {
    local_1e8 = &DAT_fbec41851566601b;
    pcStack_1e0 = "values";
    local_1d8 = 6;
    local_1d0 = (long *)0x0;
    puVar4 = (uint *)FUN_00efa07c(&local_1c8,&local_1e8);
    if (puVar4 == (uint *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *puVar4;
    }
    if (local_1d0 != (long *)0x0) {
      (**(code **)(*local_1d0 + 0x20))();
    }
    puVar2 = PTR_DAT_047d90c8;
    if (uVar5 <= uVar13) break;
    if (uVar13 < 0x26) {
      local_1e8 = &DAT_fbec41851566601b;
      pcStack_1e0 = "values";
      local_1d8 = 6;
      local_1d0 = (long *)0x0;
      FUN_00e90ee0(&local_200,&local_1c8,&local_1e8,uVar13 & 0xffffffff);
      if (local_1d0 != (long *)0x0) {
        (**(code **)(*local_1d0 + 0x20))();
      }
      if (local_1f8 == (int *)0x0) {
        uVar7 = 0;
        *puVar15 = 0;
      }
      else {
        if (*(ushort *)((long)local_1f8 - (long)*local_1f8) < 7) goto LAB_019253f8;
        uVar12 = (ulong)((ushort *)((long)local_1f8 - (long)*local_1f8))[3];
        uVar6 = 0;
        if (uVar12 != 0) {
          puVar4 = (uint *)((long)local_1f8 + uVar12);
          local_1e8 = "plibID";
          puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          puVar4 = bsearch(&local_1e8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
          if ((puVar4 != (uint *)0x0) && (local_200 != (int *)0x0)) {
            piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
            uVar7 = *puVar10;
            if (uVar7 < 7) {
              piVar11 = (int *)0x0;
            }
            else {
              piVar11 = (int *)0x0;
              if ((ulong)puVar10[3] != 0) {
                puVar4 = (uint *)((long)piVar1 + (ulong)puVar10[3]);
                piVar11 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
               (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar12 == 0)) {
              uVar12 = 0;
            }
            else {
              uVar12 = (long)*(char *)((long)piVar11 + uVar12) & 0xffffffff;
            }
            if (*(long *)(puVar3 + uVar12 * 8) == 4) {
              if (uVar7 < 0xb) {
                uVar5 = 0;
LAB_01925288:
                uVar6 = 0;
              }
              else {
                uVar5 = 0;
                if ((ulong)puVar10[5] != 0) {
                  uVar5 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar10[5]);
                }
                if ((uVar7 < 0xd) || ((ulong)puVar10[6] == 0)) goto LAB_01925288;
                uVar6 = (undefined1)*(undefined4 *)((long)piVar1 + (ulong)puVar10[6]);
              }
              if ((uVar5 < *(ushort *)((long)local_200 - (long)*local_200)) &&
                 (uVar12 = (ulong)*(ushort *)(((long)local_200 - (long)*local_200) + (ulong)uVar5),
                 uVar12 != 0)) {
                uVar6 = (undefined1)*(undefined4 *)((long)local_200 + uVar12);
              }
              goto LAB_019252ac;
            }
            if ((0xc < uVar7) && ((ulong)puVar10[6] != 0)) {
              uVar6 = (undefined1)*(undefined4 *)((long)piVar1 + (ulong)puVar10[6]);
              goto LAB_019252ac;
            }
          }
LAB_019253f8:
          uVar6 = 0;
        }
LAB_019252ac:
        *puVar15 = uVar6;
        if ((local_1f8 == (int *)0x0) || (*(ushort *)((long)local_1f8 - (long)*local_1f8) < 7))
        goto LAB_01925418;
        uVar7 = ((ushort *)((long)local_1f8 - (long)*local_1f8))[3];
        if ((ulong)uVar7 == 0) goto LAB_019253c8;
        puVar4 = (uint *)((long)local_1f8 + (ulong)uVar7);
        local_1e8 = "itemID";
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        puVar4 = bsearch(&local_1e8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)__compar);
        if ((puVar4 != (uint *)0x0) && (local_200 != (int *)0x0)) {
          piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar7 = *puVar10;
          if (uVar7 < 7) {
            piVar11 = (int *)0x0;
          }
          else {
            piVar11 = (int *)0x0;
            if ((ulong)puVar10[3] != 0) {
              puVar4 = (uint *)((long)piVar1 + (ulong)puVar10[3]);
              piVar11 = (int *)((long)puVar4 + (ulong)*puVar4);
            }
          }
          if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
             (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar12 == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = (long)*(char *)((long)piVar11 + uVar12) & 0xffffffff;
          }
          if (*(long *)(puVar3 + uVar12 * 8) == 4) {
            if (uVar7 < 0xb) {
              uVar5 = 0;
LAB_019253a4:
              uVar7 = 0;
            }
            else {
              uVar5 = 0;
              if ((ulong)puVar10[5] != 0) {
                uVar5 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar10[5]);
              }
              if ((uVar7 < 0xd) || ((ulong)puVar10[6] == 0)) goto LAB_019253a4;
              uVar7 = (ushort)*(undefined4 *)((long)piVar1 + (ulong)puVar10[6]);
            }
            if ((uVar5 < *(ushort *)((long)local_200 - (long)*local_200)) &&
               (uVar12 = (ulong)*(ushort *)(((long)local_200 - (long)*local_200) + (ulong)uVar5),
               uVar12 != 0)) {
              uVar7 = (ushort)*(undefined4 *)((long)local_200 + uVar12);
            }
            goto LAB_019253c8;
          }
          if ((0xc < uVar7) && ((ulong)puVar10[6] != 0)) {
            uVar7 = (ushort)*(undefined4 *)((long)piVar1 + (ulong)puVar10[6]);
            goto LAB_019253c8;
          }
        }
LAB_01925418:
        uVar7 = 0;
      }
LAB_019253c8:
      *(ushort *)(puVar15 + 2) = uVar7;
    }
    uVar13 = uVar13 + 1;
    puVar15 = puVar15 + 4;
  }
  local_280 = &LAB_02b1c06c;
  local_278 = FUN_02b1c0c0;
  local_270 = FUN_02b1c0c4;
  local_268 = &LAB_02b1c0d0;
  lVar14 = *(long *)PTR_DAT_047d90c8;
  pcVar8 = *(code **)(lVar14 + 600);
  alStack_260[0] = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_01925494:
    (*local_270)(alStack_260,lVar14 + 0x270);
    *(undefined1 **)(lVar14 + 0x268) = local_268;
    *(undefined8 *)(lVar14 + 0x250) = local_280;
    *(code **)(lVar14 + 600) = local_278;
    *(code **)(lVar14 + 0x260) = local_270;
  }
  else {
    *(undefined8 *)(lVar14 + 0x260) = 0;
    *(undefined8 *)(lVar14 + 0x268) = 0;
    *(undefined8 *)(lVar14 + 0x250) = 0;
    *(undefined8 *)(lVar14 + 600) = 0;
    (*pcVar8)(lVar14 + 0x270);
    if (local_270 != (code *)0x0) goto LAB_01925494;
  }
  pcVar8 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (code *)0x0;
    local_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    (*pcVar8)(alStack_260);
  }
  lVar14 = *(long *)puVar2;
  local_300 = &LAB_0195f5a4;
  local_2f8 = FUN_02b1c0dc;
  local_2f0 = FUN_02b1c0e0;
  local_2e8 = &LAB_02b1c0ec;
  pcVar8 = *(code **)(lVar14 + 0x2d8);
  alStack_2e0[0] = param_1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar14 + 0x2e0) = 0;
    *(undefined8 *)(lVar14 + 0x2e8) = 0;
    *(undefined8 *)(lVar14 + 0x2d0) = 0;
    *(undefined8 *)(lVar14 + 0x2d8) = 0;
    (*pcVar8)(lVar14 + 0x2f0);
    if (local_2f0 == (code *)0x0) goto LAB_01925558;
  }
  (*local_2f0)(alStack_2e0,lVar14 + 0x2f0);
  *(undefined1 **)(lVar14 + 0x2e8) = local_2e8;
  *(undefined8 *)(lVar14 + 0x2d0) = local_300;
  *(code **)(lVar14 + 0x2d8) = local_2f8;
  *(code **)(lVar14 + 0x2e0) = local_2f0;
LAB_01925558:
  pcVar8 = local_2f8;
  if (local_2f8 != (code *)0x0) {
    local_2f0 = (code *)0x0;
    local_2e8 = (undefined1 *)0x0;
    local_300 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar8)(alStack_2e0);
  }
  lVar14 = *(long *)puVar2;
  pcVar8 = *(code **)(lVar14 + 0x358);
  local_360[0] = param_1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar14 + 0x360) = 0;
    *(undefined8 *)(lVar14 + 0x368) = 0;
    *(undefined8 *)(lVar14 + 0x350) = 0;
    *(undefined8 *)(lVar14 + 0x358) = 0;
    (*pcVar8)(lVar14 + 0x370);
  }
  FUN_02b1c0fc(local_360,lVar14 + 0x370);
  *(undefined1 **)(lVar14 + 0x368) = &LAB_02b1c108;
  *(undefined8 *)(lVar14 + 0x350) = &LAB_018dbbf0;
  *(code **)(lVar14 + 0x358) = FUN_02b1c0f8;
  *(code **)(lVar14 + 0x360) = FUN_02b1c0fc;
  FUN_02b1c0f8(local_360);
  FUN_00db239c(auStack_140);
  FUN_00db239c(auStack_180);
  FUN_00db239c(auStack_a8);
  FUN_00db239c(auStack_e8);
  return;
}


