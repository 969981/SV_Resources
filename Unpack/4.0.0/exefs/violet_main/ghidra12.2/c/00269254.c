/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00269254; name: FUN_00269254
 */


void FUN_00269254(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar11 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar4 = FUN_0021d48c();
    }
    else {
      lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar11 + 0x10);
    lVar5 = *(long *)(uVar11 + 0x18);
    if ((*(byte *)(uVar11 + 8) & 1) == 0) {
      lVar5 = uVar11 + 9;
      uVar1 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
    }
    FUN_0021d540(lVar4,lVar5,uVar1);
  }
  puVar9 = PTR_DAT_047cba80;
  switch(*(undefined4 *)(param_2 + 0x1c)) {
  case 1:
    uVar7 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) != 1) {
      FUN_002679fc(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar7;
    return;
  case 2:
    uVar3 = *(undefined1 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) != 2) {
      FUN_002679fc(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 2;
    }
    *(undefined1 *)(param_1 + 0x10) = uVar3;
    return;
  case 3:
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) == 3) goto LAB_002693ac;
    FUN_002679fc(param_1);
    uVar7 = 3;
    break;
  case 4:
    uVar7 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) != 4) {
      FUN_002679fc(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 4;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar7;
    return;
  case 5:
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) == 5) goto LAB_002693ac;
    FUN_002679fc(param_1);
    uVar7 = 5;
    break;
  case 6:
    if (*(int *)(param_1 + 0x1c) == 6) {
      uVar10 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_002679fc(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 6;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      uVar10 = FUN_0051444c(puVar6);
      *(undefined8 *)(param_1 + 0x10) = uVar10;
      if (*(int *)(param_2 + 0x1c) != 6) {
        FUN_005141f4(uVar10,PTR_DAT_047cbe60);
        return;
      }
    }
    FUN_005141f4(uVar10,*(undefined8 *)(param_2 + 0x10));
    return;
  case 7:
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) != 7) {
      FUN_002679fc(param_1);
      uVar7 = 7;
LAB_00269410:
      *(undefined4 *)(param_1 + 0x1c) = uVar7;
      *(undefined **)(param_1 + 0x10) = PTR_DAT_047cba80;
    }
    goto LAB_00269420;
  case 8:
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) != 8) {
      FUN_002679fc(param_1);
      uVar7 = 8;
      goto LAB_00269410;
    }
LAB_00269420:
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    puVar8 = *(undefined **)(param_1 + 0x10);
    if (puVar8 == PTR_DAT_047cba80) {
LAB_002694c8:
      FUN_001fcdc8(param_1 + 0x10,puVar6,uVar10);
      return;
    }
LAB_00269444:
    FUN_001fcec0(puVar8,uVar10);
    return;
  case 9:
    if (*(int *)(param_1 + 0x1c) == 9) {
      uVar10 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      FUN_002679fc(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 9;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      uVar10 = FUN_0026aed8(puVar6);
      *(undefined8 *)(param_1 + 0x10) = uVar10;
      if (*(int *)(param_2 + 0x1c) != 9) {
        FUN_00267cec(uVar10,PTR_DAT_047cc2d8);
        return;
      }
    }
    FUN_00267cec(uVar10,*(undefined8 *)(param_2 + 0x10));
    return;
  case 10:
    if (*(int *)(param_1 + 0x1c) == 10) {
      lVar4 = *(long *)(param_1 + 0x10);
      puVar9 = *(undefined **)(param_2 + 0x10);
      uVar11 = *(ulong *)(puVar9 + 8);
    }
    else {
      FUN_002679fc(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 10;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      lVar4 = FUN_0026b02c(puVar6);
      *(long *)(param_1 + 0x10) = lVar4;
      if (*(int *)(param_2 + 0x1c) == 10) {
        uVar11 = *(ulong *)(*(undefined **)(param_2 + 0x10) + 8);
        puVar9 = *(undefined **)(param_2 + 0x10);
      }
      else {
        uVar11 = *(ulong *)(PTR_DAT_047cc258 + 8);
        puVar9 = PTR_DAT_047cc258;
      }
    }
    if ((uVar11 & 1) != 0) {
      uVar11 = uVar11 & 0xfffffffffffffffe;
      if ((*(ulong *)(lVar4 + 8) & 1) == 0) {
        lVar5 = FUN_0021d48c();
      }
      else {
        lVar5 = (*(ulong *)(lVar4 + 8) & 0xfffffffffffffffe) + 8;
      }
      uVar1 = *(ulong *)(uVar11 + 0x10);
      lVar2 = *(long *)(uVar11 + 0x18);
      if ((*(byte *)(uVar11 + 8) & 1) == 0) {
        lVar2 = uVar11 + 9;
        uVar1 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
      }
      FUN_0021d540(lVar5,lVar2,uVar1);
    }
    FUN_0026a0a0(lVar4 + 0x10,puVar9 + 0x10);
    return;
  case 0xb:
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(param_1 + 0x1c) == 0xb) {
      uVar11 = *(ulong *)(param_1 + 8);
    }
    else {
      FUN_002679fc(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 0xb;
      *(undefined **)(param_1 + 0x10) = puVar9;
      uVar11 = *(ulong *)(param_1 + 8);
    }
    puVar6 = (ulong *)(uVar11 & 0xfffffffffffffffe);
    if ((uVar11 & 1) == 0) {
      puVar8 = *(undefined **)(param_1 + 0x10);
      if (puVar8 != puVar9) goto LAB_00269444;
      goto LAB_002694c8;
    }
    puVar6 = (ulong *)*puVar6;
    puVar8 = *(undefined **)(param_1 + 0x10);
    if (puVar8 == puVar9) goto LAB_002694c8;
    goto LAB_00269444;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
LAB_002693ac:
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  return;
}


