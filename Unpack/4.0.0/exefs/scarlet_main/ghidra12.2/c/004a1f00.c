/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a1f00; name: FUN_004a1f00
 */


void FUN_004a1f00(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long local_58 [3];
  
  puVar2 = PTR_LAB_047cba48;
  lVar9 = *(long *)(param_1 + 0x1a0);
  uVar11 = (ulong)*(int *)(lVar9 + -0xc);
  lVar3 = *(long *)(param_1 + 0x1b0);
  if (uVar11 < (ulong)(*(long *)(param_1 + 0x1b8) - lVar3 >> 3)) {
    lVar13 = uVar11 << 3;
    do {
      lVar3 = FUN_004c2d3c(param_1 + 0x130,lVar3 + lVar13);
      if (lVar3 != 0) {
        FUN_004c2e68(local_58,param_1 + 0x130,lVar3);
        lVar3 = local_58[0];
        local_58[0] = 0;
        if (lVar3 != 0) {
          FUN_0049e790(puVar2);
        }
      }
      lVar3 = *(long *)(param_1 + 0x1b0);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while (uVar11 < (ulong)(*(long *)(param_1 + 0x1b8) - lVar3 >> 3));
  }
  puVar2 = PTR_LAB_047cba48;
  lVar3 = *(long *)(param_1 + 0x1c8);
  uVar11 = (ulong)*(int *)(lVar9 + -8);
  if (uVar11 < (ulong)(*(long *)(param_1 + 0x1d0) - lVar3 >> 3)) {
    lVar13 = uVar11 << 3;
    do {
      lVar3 = FUN_004c2f9c(param_1 + 0x158,lVar3 + lVar13);
      if (lVar3 != 0) {
        FUN_004c30c8(local_58,param_1 + 0x158,lVar3);
        lVar3 = local_58[0];
        local_58[0] = 0;
        if (lVar3 != 0) {
          FUN_0049e790(puVar2);
        }
      }
      lVar3 = *(long *)(param_1 + 0x1c8);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while (uVar11 < (ulong)(*(long *)(param_1 + 0x1d0) - lVar3 >> 3));
  }
  lVar3 = *(long *)(param_1 + 0x1e0);
  uVar11 = (ulong)*(int *)(lVar9 + -4);
  if (uVar11 < (ulong)(*(long *)(param_1 + 0x1e8) - lVar3 >> 4)) {
    lVar13 = uVar11 << 4;
    do {
      FUN_004c31fc(param_1 + 0x180,lVar3 + lVar13);
      lVar3 = *(long *)(param_1 + 0x1e0);
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x10;
    } while (uVar11 < (ulong)(*(long *)(param_1 + 0x1e8) - lVar3 >> 4));
  }
  uVar11 = (ulong)*(int *)(lVar9 + -0xc);
  uVar5 = *(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 3;
  if (uVar5 < uVar11) {
    FUN_004c3314(param_1 + 0x1b0,uVar11 - uVar5);
  }
  else if (uVar5 != uVar11) {
    *(ulong *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b0) + uVar11 * 8;
  }
  uVar11 = (ulong)*(int *)(lVar9 + -8);
  uVar5 = *(long *)(param_1 + 0x1d0) - *(long *)(param_1 + 0x1c8) >> 3;
  if (uVar5 < uVar11) {
    FUN_004c3314(param_1 + 0x1c8,uVar11 - uVar5);
  }
  else if (uVar5 != uVar11) {
    *(ulong *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1c8) + uVar11 * 8;
  }
  uVar11 = (ulong)*(int *)(lVar9 + -4);
  uVar5 = *(long *)(param_1 + 0x1e8) - *(long *)(param_1 + 0x1e0) >> 4;
  if (uVar5 < uVar11) {
    FUN_004c3428(param_1 + 0x1e0,uVar11 - uVar5);
  }
  else if (uVar5 != uVar11) {
    *(ulong *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e0) + uVar11 * 0x10;
  }
  puVar2 = PTR_LAB_047cba48;
  lVar3 = *(long *)(param_1 + 0xd0);
  uVar11 = (ulong)*(int *)(lVar9 + -0x20);
  puVar12 = *(undefined8 **)(param_1 + 0xd8);
  uVar5 = (long)puVar12 - lVar3 >> 3;
  if (uVar5 < uVar11) {
    FUN_004c3604((long *)(param_1 + 0xd0),uVar11 - uVar5);
  }
  else if (uVar5 != uVar11) {
    puVar1 = (undefined8 *)(lVar3 + uVar11 * 8);
    while (puVar1 != puVar12) {
      puVar12 = puVar12 + -1;
      pbVar6 = (byte *)*puVar12;
      *puVar12 = 0;
      if (pbVar6 != (byte *)0x0) {
        if ((*pbVar6 & 1) != 0) {
          FUN_0049e790(puVar2,*(undefined8 *)(pbVar6 + 0x10));
        }
        FUN_0049e790(puVar2,pbVar6);
      }
    }
    *(undefined8 **)(param_1 + 0xd8) = puVar1;
  }
  puVar2 = PTR_LAB_047cba48;
  lVar3 = *(long *)(param_1 + 0xe8);
  uVar11 = (ulong)*(int *)(lVar9 + -0x1c);
  puVar12 = *(undefined8 **)(param_1 + 0xf0);
  uVar5 = (long)puVar12 - lVar3 >> 3;
  if (uVar5 < uVar11) {
    FUN_004c37dc((long *)(param_1 + 0xe8),uVar11 - uVar5);
  }
  else if (uVar5 != uVar11) {
    puVar1 = (undefined8 *)(lVar3 + uVar11 * 8);
    while (puVar1 != puVar12) {
      puVar12 = puVar12 + -1;
      puVar7 = (undefined8 *)*puVar12;
      *puVar12 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7);
        FUN_0049e790(puVar2,puVar7);
      }
    }
    *(undefined8 **)(param_1 + 0xf0) = puVar1;
  }
  puVar2 = PTR_LAB_047cba48;
  plVar4 = *(long **)(param_1 + 0x108);
  uVar11 = (ulong)*(int *)(lVar9 + -0x18);
  uVar5 = (long)plVar4 - *(long *)(param_1 + 0x100) >> 3;
  if (uVar5 < uVar11) {
    FUN_004c39b0(param_1 + 0x100,uVar11 - uVar5);
  }
  else if (uVar5 != uVar11) {
    plVar8 = (long *)(*(long *)(param_1 + 0x100) + uVar11 * 8);
    while (plVar8 != plVar4) {
      plVar4 = plVar4 + -1;
      lVar3 = *plVar4;
      *plVar4 = 0;
      if (lVar3 != 0) {
        FUN_0049e790(puVar2);
      }
    }
    *(long **)(param_1 + 0x108) = plVar8;
  }
  puVar2 = PTR_LAB_047cba48;
  plVar4 = *(long **)(param_1 + 0x120);
  uVar11 = (ulong)*(int *)(lVar9 + -0x14);
  uVar5 = (long)plVar4 - *(long *)(param_1 + 0x118) >> 3;
  if (uVar5 < uVar11) {
    FUN_004c3b70(param_1 + 0x118,uVar11 - uVar5);
  }
  else if (uVar5 != uVar11) {
    plVar8 = (long *)(*(long *)(param_1 + 0x118) + uVar11 * 8);
    while (plVar8 != plVar4) {
      plVar4 = plVar4 + -1;
      lVar3 = *plVar4;
      *plVar4 = 0;
      if (lVar3 != 0) {
        FUN_004a1ab0(lVar3);
        FUN_0049e790(puVar2,lVar3);
      }
    }
    *(long **)(param_1 + 0x120) = plVar8;
  }
  puVar2 = PTR_LAB_047cba48;
  lVar3 = *(long *)(param_1 + 0xb8);
  uVar11 = (ulong)*(int *)(lVar9 + -0x10);
  plVar4 = *(long **)(param_1 + 0xc0);
  lVar9 = (long)plVar4 - lVar3 >> 3;
  uVar5 = lVar9 * -0x5555555555555555;
  if (uVar5 < uVar11) {
    FUN_004c3d3c((long *)(param_1 + 0xb8),uVar11 + lVar9 * 0x5555555555555555);
  }
  else if (uVar5 != uVar11) {
    plVar8 = (long *)(lVar3 + uVar11 * 0x18);
    if (plVar8 != plVar4) {
      do {
        plVar10 = plVar4 + -3;
        if (*plVar10 != 0) {
          plVar4[-2] = *plVar10;
          FUN_0049e790(puVar2);
        }
        plVar4 = plVar10;
      } while (plVar8 != plVar10);
    }
    *(long **)(param_1 + 0xc0) = plVar8;
  }
  *(long *)(param_1 + 0x1a0) = *(long *)(param_1 + 0x1a0) + -0x20;
  return;
}


