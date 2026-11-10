/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00713150; name: FUN_00713150
 */


void FUN_00713150(long *param_1,undefined *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar7 = (ulong *)(param_1 + 1);
  *puVar7 = 0;
  puVar3 = PTR_DAT_047d02a8;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    uVar4 = FUN_0021d48c(puVar7);
    uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    lVar8 = uVar9 + 9;
    if ((*(byte *)(uVar9 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(uVar9 + 0x10);
      lVar8 = *(long *)(uVar9 + 0x18);
    }
    FUN_0021d540(uVar4,lVar8,uVar1);
  }
  puVar3 = PTR_DAT_047cba80;
  param_1[2] = (long)PTR_DAT_047cba80;
  bVar2 = **(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_007131e4:
      puVar6 = (ulong *)(*puVar7 & 0xfffffffffffffffe);
      if ((*puVar7 & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_001fcdc8(param_1 + 2,puVar6);
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x10) + 8) != 0) goto LAB_007131e4;
  param_1[3] = (long)puVar3;
  bVar2 = **(byte **)(param_2 + 0x18);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0071321c:
      puVar6 = (ulong *)(*puVar7 & 0xfffffffffffffffe);
      if ((*puVar7 & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_001fcdc8(param_1 + 3,puVar6);
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x18) + 8) != 0) goto LAB_0071321c;
  param_1[4] = (long)puVar3;
  bVar2 = **(byte **)(param_2 + 0x20);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00713254:
      puVar6 = (ulong *)(*puVar7 & 0xfffffffffffffffe);
      if ((*puVar7 & 1) != 0) {
        puVar6 = (ulong *)*puVar6;
      }
      FUN_001fcdc8(param_1 + 4,puVar6);
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x20) + 8) != 0) goto LAB_00713254;
  param_1[5] = (long)puVar3;
  bVar2 = **(byte **)(param_2 + 0x28);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_00713364;
LAB_00713280:
    if (param_2 == PTR_DAT_047cfc08) goto LAB_00713384;
LAB_00713290:
    lVar8 = *(long *)(param_2 + 0x30);
    if (lVar8 == 0) {
      param_1[6] = 0;
      lVar8 = *(long *)(param_2 + 0x38);
      if (lVar8 != 0) goto LAB_007132c8;
LAB_007133a0:
      param_1[7] = 0;
      lVar8 = *(long *)(param_2 + 0x40);
      if (lVar8 != 0) goto LAB_007132f8;
LAB_007133ac:
      param_1[8] = 0;
      lVar8 = *(long *)(param_2 + 0x48);
      if (lVar8 != 0) goto LAB_00713328;
LAB_007133b8:
      param_1[9] = 0;
      lVar8 = *(long *)(param_2 + 0x50);
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar8);
      }
      param_1[6] = lVar5;
      lVar8 = *(long *)(param_2 + 0x38);
      if (lVar8 == 0) goto LAB_007133a0;
LAB_007132c8:
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar8);
      }
      param_1[7] = lVar5;
      lVar8 = *(long *)(param_2 + 0x40);
      if (lVar8 == 0) goto LAB_007133ac;
LAB_007132f8:
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar8);
      }
      param_1[8] = lVar5;
      lVar8 = *(long *)(param_2 + 0x48);
      if (lVar8 == 0) goto LAB_007133b8;
LAB_00713328:
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar8);
      }
      param_1[9] = lVar5;
      lVar8 = *(long *)(param_2 + 0x50);
    }
    if (lVar8 != 0) {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar8);
      }
      param_1[10] = lVar5;
      goto LAB_007133ec;
    }
  }
  else {
    if (*(long *)(*(byte **)(param_2 + 0x28) + 8) == 0) goto LAB_00713280;
LAB_00713364:
    puVar6 = (ulong *)(*puVar7 & 0xfffffffffffffffe);
    if ((*puVar7 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_001fcdc8(param_1 + 5,puVar6);
    if (param_2 != PTR_DAT_047cfc08) goto LAB_00713290;
LAB_00713384:
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
  }
  param_1[10] = 0;
LAB_007133ec:
  lVar8 = *(long *)(param_2 + 0x58);
  param_1[0xc] = *(long *)(param_2 + 0x60);
  param_1[0xb] = lVar8;
  lVar5 = *(long *)(param_2 + 0x70);
  lVar8 = *(long *)(param_2 + 0x68);
  lVar11 = *(long *)(param_2 + 0x80);
  lVar10 = *(long *)(param_2 + 0x78);
  lVar13 = *(long *)(param_2 + 0x90);
  lVar12 = *(long *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  param_1[0x12] = lVar13;
  param_1[0x11] = lVar12;
  param_1[0x10] = lVar11;
  param_1[0xf] = lVar10;
  param_1[0xe] = lVar5;
  param_1[0xd] = lVar8;
  return;
}


