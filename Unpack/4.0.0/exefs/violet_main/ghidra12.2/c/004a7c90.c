/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a7c90; name: FUN_004a7c90
 */


void FUN_004a7c90(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined *puVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  undefined8 **local_68;
  undefined8 **ppuStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 ***local_38;
  
  uVar11 = *param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar7 = PTR_DAT_047cba80;
  puVar10 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar10 = (ulong *)*puVar10;
  }
  puVar13 = *(undefined **)(param_2 + 0x18);
  if (puVar13 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_2 + 0x18),puVar10);
  }
  else {
    FUN_001fcec0(puVar13,uVar11);
  }
  uVar12 = *(uint *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)((long)param_1 + 0x44);
  *(uint *)(param_2 + 0x10) = uVar12 | 0x40;
  *(undefined4 *)(param_2 + 0x48) = uVar5;
  if (*(char *)((long)param_1 + 0x42) == '\0') {
LAB_004a7d48:
    cVar6 = *(char *)((long)param_1 + 0x41);
    uVar12 = *(uint *)(param_2 + 0x10);
  }
  else {
    uVar11 = param_1[4];
    *(uint *)(param_2 + 0x10) = uVar12 | 0x50;
    plVar1 = (long *)(param_2 + 0x38);
    puVar10 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) == 0) {
      puVar13 = (undefined *)*plVar1;
    }
    else {
      puVar10 = (ulong *)*puVar10;
      puVar13 = (undefined *)*plVar1;
    }
    if (puVar13 != puVar7) {
      FUN_001fcec0(puVar13,uVar11);
      goto LAB_004a7d48;
    }
    FUN_001fcdc8(plVar1,puVar10);
    cVar6 = *(char *)((long)param_1 + 0x41);
    uVar12 = *(uint *)(param_2 + 0x10);
  }
  if (cVar6 != '\0') {
    uVar12 = uVar12 | 0x100;
    *(uint *)(param_2 + 0x10) = uVar12;
    *(undefined1 *)(param_2 + 0x50) = 1;
  }
  uVar5 = *(undefined4 *)((long)param_1 + 0x3c);
  uVar12 = uVar12 | 0x200;
  *(uint *)(param_2 + 0x10) = uVar12;
  *(undefined4 *)(param_2 + 0x54) = uVar5;
  puVar13 = PTR_LAB_047cd728;
  puVar10 = (ulong *)param_1[6];
  if (puVar10 != (ulong *)0x0) {
    local_48 = (undefined8 *)PTR_LAB_047cd728;
    local_50 = param_1;
    if (*puVar10 != 0xffffffffffffffff) {
      local_68 = &local_48;
      ppuStack_60 = &local_50;
      local_38 = &local_68;
      std::__call_once(puVar10,&local_38,(_func_void_void_ptr *)&LAB_004c0750);
    }
    uVar12 = *(uint *)(param_2 + 0x10);
  }
  uVar5 = *(undefined4 *)(param_1 + 7);
  uVar12 = uVar12 | 0x400;
  *(uint *)(param_2 + 0x10) = uVar12;
  *(undefined4 *)(param_2 + 0x58) = uVar5;
  if (*(char *)((long)param_1 + 0x43) != '\0') {
    if (*(char *)(param_1[10] + 0x8d) == '\0') {
      FUN_004a8488(param_2,&DAT_03bdface);
      uVar12 = *(uint *)(param_2 + 0x10);
    }
    *(uint *)(param_2 + 0x10) = uVar12 | 2;
    plVar1 = (long *)(param_2 + 0x20);
    puVar10 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) == 0) {
      puVar8 = (undefined *)*plVar1;
    }
    else {
      puVar10 = (ulong *)*puVar10;
      puVar8 = (undefined *)*plVar1;
    }
    if (puVar8 == puVar7) {
      FUN_001fcdc8(plVar1,puVar10,PTR_DAT_047cba80);
      puVar8 = (undefined *)*plVar1;
    }
    pbVar14 = *(byte **)(param_1[10] + 8);
    uVar3 = *(ulong *)(pbVar14 + 8);
    pbVar4 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar4 = pbVar14 + 1;
      uVar3 = (ulong)(*pbVar14 >> 1);
    }
    FUN_0021d540(puVar8,pbVar4,uVar3);
  }
  puVar9 = (ulong *)param_1[6];
  puVar10 = (ulong *)0x0;
  if (puVar9 != (ulong *)0x0) {
    local_48 = (undefined8 *)puVar13;
    local_50 = param_1;
    if (*puVar9 != 0xffffffffffffffff) {
      local_68 = &local_48;
      ppuStack_60 = &local_50;
      local_38 = &local_68;
      std::__call_once(puVar9,&local_38,(_func_void_void_ptr *)&LAB_004c0750);
    }
    puVar10 = (ulong *)param_1[6];
  }
  uVar12 = *(uint *)(param_1 + 7);
  if ((uVar12 & 0xfffffffe) == 10) {
    if ((puVar10 != (ulong *)0x0) && (local_48 = param_1, *puVar10 != 0xffffffffffffffff)) {
      ppuStack_60 = &local_48;
      local_68 = (undefined8 **)puVar13;
      local_38 = &local_68;
      std::__call_once(puVar10,&local_38,(_func_void_void_ptr *)&LAB_004c9500);
    }
    lVar15 = param_1[0xd];
    if (*(char *)(lVar15 + 0x8c) != '\0') {
      *(undefined4 *)(param_2 + 0x58) = 1;
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & 0xfffffbff;
    }
    puVar10 = (ulong *)param_1[6];
    if (puVar10 != (ulong *)0x0) {
      local_48 = param_1;
      if (*puVar10 != 0xffffffffffffffff) {
        ppuStack_60 = &local_48;
        local_68 = (undefined8 **)puVar13;
        local_38 = &local_68;
        std::__call_once(puVar10,&local_38,(_func_void_void_ptr *)&LAB_004c9500);
      }
      lVar15 = param_1[0xd];
    }
    if (*(char *)(lVar15 + 0x8d) == '\0') {
      FUN_004a85b4(param_2,&DAT_03bdface);
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
    puVar2 = (undefined8 *)(param_2 + 0x28);
    puVar10 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) == 0) {
      puVar8 = (undefined *)*puVar2;
      if (puVar8 == puVar7) goto LAB_004a8098;
LAB_004a7f70:
      puVar10 = (ulong *)param_1[6];
    }
    else {
      puVar10 = (ulong *)*puVar10;
      puVar8 = (undefined *)*puVar2;
      if (puVar8 != puVar7) goto LAB_004a7f70;
LAB_004a8098:
      FUN_001fcdc8(puVar2,puVar10,PTR_DAT_047cba80);
      puVar8 = (undefined *)*puVar2;
      puVar10 = (ulong *)param_1[6];
    }
    if ((puVar10 != (ulong *)0x0) && (local_48 = param_1, *puVar10 != 0xffffffffffffffff)) {
      ppuStack_60 = &local_48;
      local_68 = (undefined8 **)puVar13;
      local_38 = &local_68;
      std::__call_once(puVar10,&local_38,(_func_void_void_ptr *)&LAB_004c9500);
    }
    lVar15 = param_1[0xd];
LAB_004a814c:
    pbVar14 = *(byte **)(lVar15 + 8);
    uVar3 = *(ulong *)(pbVar14 + 8);
    pbVar4 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar4 = pbVar14 + 1;
      uVar3 = (ulong)(*pbVar14 >> 1);
    }
    FUN_0021d540(puVar8,pbVar4,uVar3);
  }
  else {
    if (puVar10 != (ulong *)0x0) {
      local_48 = (undefined8 *)puVar13;
      local_50 = param_1;
      if (*puVar10 != 0xffffffffffffffff) {
        local_68 = &local_48;
        ppuStack_60 = &local_50;
        local_38 = &local_68;
        std::__call_once(puVar10,&local_38,(_func_void_void_ptr *)&LAB_004c0750);
      }
      uVar12 = *(uint *)(param_1 + 7);
    }
    if (uVar12 == 0xe) {
      puVar10 = (ulong *)param_1[6];
      if ((puVar10 != (ulong *)0x0) && (local_48 = param_1, *puVar10 != 0xffffffffffffffff)) {
        ppuStack_60 = &local_48;
        local_68 = (undefined8 **)puVar13;
        local_38 = &local_68;
        std::__call_once(puVar10,&local_38,(_func_void_void_ptr *)&LAB_004c9500);
      }
      if (*(char *)(param_1[0xe] + 0x29) == '\0') {
        FUN_004a85b4(param_2,&DAT_03bdface);
      }
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
      puVar2 = (undefined8 *)(param_2 + 0x28);
      puVar10 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) == 0) {
        puVar8 = (undefined *)*puVar2;
        if (puVar8 == puVar7) goto LAB_004a80fc;
LAB_004a803c:
        puVar10 = (ulong *)param_1[6];
      }
      else {
        puVar10 = (ulong *)*puVar10;
        puVar8 = (undefined *)*puVar2;
        if (puVar8 != puVar7) goto LAB_004a803c;
LAB_004a80fc:
        FUN_001fcdc8(puVar2,puVar10,PTR_DAT_047cba80);
        puVar8 = (undefined *)*puVar2;
        puVar10 = (ulong *)param_1[6];
      }
      if ((puVar10 != (ulong *)0x0) && (local_48 = param_1, *puVar10 != 0xffffffffffffffff)) {
        ppuStack_60 = &local_48;
        local_68 = (undefined8 **)puVar13;
        local_38 = &local_68;
        std::__call_once(puVar10,&local_38,(_func_void_void_ptr *)&LAB_004c9500);
      }
      lVar15 = param_1[0xe];
      goto LAB_004a814c;
    }
  }
  if (*(char *)(param_1 + 8) == '\0') goto LAB_004a81f4;
  FUN_004a64d0(&local_68,param_1,0);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  puVar2 = (undefined8 *)(param_2 + 0x30);
  puVar10 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    puVar13 = (undefined *)*puVar2;
    if (puVar13 == puVar7) goto LAB_004a81d4;
LAB_004a81b4:
                    /* try { // try from 004a81b4 to 004a81db has its CatchHandler @ 004a8290 */
    FUN_001fcec0(puVar13,&local_68);
  }
  else {
    puVar10 = (ulong *)*puVar10;
    puVar13 = (undefined *)*puVar2;
    if (puVar13 != puVar7) goto LAB_004a81b4;
LAB_004a81d4:
    FUN_001fcdc8(puVar2,puVar10,&local_68);
  }
  if (((ulong)local_68 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_58);
  }
LAB_004a81f4:
  lVar15 = param_1[0xb];
  if ((lVar15 != 0) && (*(char *)((long)param_1 + 0x43) == '\0')) {
    lVar16 = *(long *)(*(long *)(lVar15 + 0x10) + 0x30);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x80;
    *(int *)(param_2 + 0x4c) = (int)((ulong)(lVar15 - lVar16) >> 4) * -0x55555555;
  }
  lVar16 = param_1[0xf];
  lVar15 = FUN_004ddbec();
  if (lVar16 != lVar15) {
    lVar15 = *(long *)(param_2 + 0x40);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x20;
    if (lVar15 == 0) {
      puVar10 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar10 = (ulong *)*puVar10;
      }
      lVar15 = FUN_004e6d90(puVar10);
      *(long *)(param_2 + 0x40) = lVar15;
    }
    FUN_004de838(lVar15,param_1[0xf]);
  }
  return;
}


