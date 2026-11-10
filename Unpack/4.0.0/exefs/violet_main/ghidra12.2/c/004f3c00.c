/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f3c00; name: FUN_004f3c00
 */


void FUN_004f3c00(long param_1,long param_2,long param_3,byte *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  byte *pbVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined2 local_82;
  undefined6 uStack_80;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  undefined **local_60;
  long *plStack_58;
  
  puVar7 = PTR_LAB_047cd728;
  puVar8 = *(ulong **)(param_3 + 0x30);
  if ((puVar8 != (ulong *)0x0) &&
     (puStack_70 = PTR_LAB_047cd728, local_78 = param_3, *puVar8 != 0xffffffffffffffff)) {
    local_60 = &puStack_70;
    plStack_58 = &local_78;
    local_68 = &local_60;
    std::__call_once(puVar8,&local_68,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if (*(char *)(param_3 + 0x43) != '\0') {
    uVar15 = *(uint *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    puVar8 = *(ulong **)(param_3 + 0x30);
    if ((puVar8 != (ulong *)0x0) &&
       (puStack_70 = puVar7, local_78 = param_3, *puVar8 != 0xffffffffffffffff)) {
      local_60 = &puStack_70;
      plStack_58 = &local_78;
      local_68 = &local_60;
      std::__call_once(puVar8,&local_68,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    bVar5 = *param_4;
    bVar6 = param_4[1];
    uVar11 = *(undefined8 *)(param_4 + 2);
    uVar16 = *(undefined8 *)(param_4 + 0x10);
    uVar4 = *(undefined4 *)(param_3 + 0x38);
    uStack_80 = (undefined6)((ulong)*(undefined8 *)(param_4 + 8) >> 0x10);
    local_82 = (undefined2)((ulong)uVar11 >> 0x30);
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    param_4[0x16] = 0;
    param_4[0x17] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[0xc] = 0;
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
                    /* try { // try from 004f3ce0 to 004f3cef has its CatchHandler @ 004f4194 */
    pbVar9 = (byte *)FUN_00523054(param_2 + (ulong)uVar15,uVar3,uVar4,param_3);
    if ((*pbVar9 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar9 + 0x10));
    }
    *pbVar9 = bVar5;
    pbVar9[1] = bVar6;
    *(ulong *)(pbVar9 + 8) = CONCAT62(uStack_80,local_82);
    *(undefined8 *)(pbVar9 + 0x10) = uVar16;
    *(undefined8 *)(pbVar9 + 2) = uVar11;
    return;
  }
  lVar2 = param_1 + 8;
  uVar10 = FUN_004f9a80(lVar2,param_3);
  if ((uVar10 & 1) != 0) {
    lVar12 = *(long *)(param_3 + 0x58);
    if ((lVar12 == 0) ||
       ((*(int *)(lVar12 + 0x18) == 1 && (*(char *)(**(long **)(lVar12 + 0x20) + 0x41) != '\0')))) {
      if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
        if (*(char *)(param_3 + 0x43) == '\0') {
          plVar13 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
        }
        else if (*(long *)(param_3 + 0x60) == 0) {
          plVar13 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
        }
        else {
          plVar13 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
        }
        uVar15 = (int)((ulong)(param_3 - *plVar13) >> 3) * 0x286bca1b;
        uVar15 = *(uint *)(*(long *)(param_1 + 0x18) +
                          (-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2));
        if (uVar15 != 0xffffffff) {
          lVar12 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
          uVar10 = (ulong)(uVar15 >> 3) & 0x1ffffffc;
          *(uint *)(lVar12 + uVar10) = *(uint *)(lVar12 + uVar10) | 1 << (ulong)(uVar15 & 0x1f);
        }
      }
    }
    else {
      *(undefined4 *)
       (param_2 +
       (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                    (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x10) + 0x30)) >> 4) *
                    -0x55555554)) = *(undefined4 *)(param_3 + 0x44);
    }
    uVar10 = FUN_004fa4b0(lVar2,param_3);
    pbVar9 = (byte *)(param_2 + (uVar10 & 0xffffffff));
    if ((*pbVar9 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar9 + 0x10));
    }
    uVar11 = *(undefined8 *)(param_4 + 8);
    uVar16 = *(undefined8 *)param_4;
    *(undefined8 *)(pbVar9 + 0x10) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(pbVar9 + 8) = uVar11;
    *(undefined8 *)pbVar9 = uVar16;
    goto LAB_004f4148;
  }
  lVar12 = *(long *)(param_1 + 8);
  if (*(char *)(param_3 + 0x43) == '\0') {
    plVar13 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
  }
  else if (*(long *)(param_3 + 0x60) == 0) {
    plVar13 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
  }
  else {
    plVar13 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
  }
  uVar15 = (int)((ulong)(param_3 - *plVar13) >> 3) * 0x286bca1b;
  uVar15 = *(uint *)(*(long *)(param_1 + 0x10) +
                    (-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2));
  puVar8 = *(ulong **)(param_3 + 0x30);
  if ((puVar8 != (ulong *)0x0) &&
     (puStack_70 = puVar7, local_78 = param_3, *puVar8 != 0xffffffffffffffff)) {
    local_60 = &puStack_70;
    plStack_58 = &local_78;
    local_68 = &local_60;
    std::__call_once(puVar8,&local_68,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
    uVar15 = uVar15 & 0xfffffffe;
  }
  pbVar9 = *(byte **)(lVar12 + (ulong)uVar15);
  lVar12 = *(long *)(param_3 + 0x58);
  if (lVar12 == 0) {
LAB_004f404c:
    if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar13 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar13 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar13 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar15 = (int)((ulong)(param_3 - *plVar13) >> 3) * 0x286bca1b;
      uVar15 = *(uint *)(*(long *)(param_1 + 0x18) +
                        (-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2));
      if (uVar15 != 0xffffffff) {
        lVar12 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
        uVar10 = (ulong)(uVar15 >> 3) & 0x1ffffffc;
        *(uint *)(lVar12 + uVar10) = *(uint *)(lVar12 + uVar10) | 1 << (ulong)(uVar15 & 0x1f);
      }
    }
  }
  else {
    if (((*(int *)(lVar12 + 0x18) != 1) || (*(char *)(**(long **)(lVar12 + 0x20) + 0x41) == '\0'))
       && (*(int *)(param_2 +
                   (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                                (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x10) + 0x30))
                                     >> 4) * -0x55555554)) != *(int *)(param_3 + 0x44))) {
      FUN_004f41b4(param_1,param_2);
      lVar12 = *(long *)(param_3 + 0x58);
      if ((lVar12 == 0) ||
         ((*(int *)(lVar12 + 0x18) == 1 && (*(char *)(**(long **)(lVar12 + 0x20) + 0x41) != '\0'))))
      {
        if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
          if (*(char *)(param_3 + 0x43) == '\0') {
            plVar13 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
          }
          else if (*(long *)(param_3 + 0x60) == 0) {
            plVar13 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
          }
          else {
            plVar13 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
          }
          uVar15 = (int)((ulong)(param_3 - *plVar13) >> 3) * 0x286bca1b;
          uVar15 = *(uint *)(*(long *)(param_1 + 0x18) +
                            (-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2));
          if (uVar15 != 0xffffffff) {
            lVar12 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
            uVar10 = (ulong)(uVar15 >> 3) & 0x1ffffffc;
            *(uint *)(lVar12 + uVar10) = *(uint *)(lVar12 + uVar10) | 1 << (ulong)(uVar15 & 0x1f);
          }
        }
      }
      else {
        *(undefined4 *)
         (param_2 +
         (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                      (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x10) + 0x30)) >> 4) *
                      -0x55555554)) = *(undefined4 *)(param_3 + 0x44);
      }
      uVar10 = FUN_004fa4b0(lVar2,param_3);
      *(byte **)(param_2 + (uVar10 & 0xffffffff)) = pbVar9;
      lVar12 = *(long *)(param_3 + 0x58);
      if (lVar12 == 0) goto LAB_004f404c;
    }
    if ((*(int *)(lVar12 + 0x18) == 1) && (*(char *)(**(long **)(lVar12 + 0x20) + 0x41) != '\0'))
    goto LAB_004f404c;
    *(undefined4 *)
     (param_2 +
     (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                  (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x10) + 0x30)) >> 4) *
                  -0x55555554)) = *(undefined4 *)(param_3 + 0x44);
  }
  uVar10 = FUN_004fa4b0(lVar2,param_3);
  puVar1 = (undefined8 *)(param_2 + (uVar10 & 0xffffffff));
  uVar10 = *(ulong *)(param_2 + (ulong)*(uint *)(param_1 + 0x24));
  puVar8 = (ulong *)(uVar10 & 0xfffffffffffffffe);
  if ((uVar10 & 1) == 0) {
    pbVar14 = (byte *)*puVar1;
    if (pbVar14 == pbVar9) goto LAB_004f4178;
LAB_004f4120:
    bVar5 = *pbVar14;
  }
  else {
    puVar8 = (ulong *)*puVar8;
    pbVar14 = (byte *)*puVar1;
    if (pbVar14 != pbVar9) goto LAB_004f4120;
LAB_004f4178:
    FUN_001fcdc8(puVar1,puVar8,pbVar9);
    pbVar14 = (byte *)*puVar1;
    bVar5 = *pbVar14;
  }
  if ((bVar5 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar14 + 0x10));
  }
  uVar11 = *(undefined8 *)(param_4 + 8);
  uVar16 = *(undefined8 *)param_4;
  *(undefined8 *)(pbVar14 + 0x10) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(pbVar14 + 8) = uVar11;
  *(undefined8 *)pbVar14 = uVar16;
LAB_004f4148:
  param_4[0] = 0;
  param_4[1] = 0;
  return;
}


