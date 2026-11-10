/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0070c6e0; name: FUN_0070c6e0
 */


void FUN_0070c6e0(long *param_1,undefined *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  param_1[1] = 0;
  plVar8 = param_1 + 2;
  *plVar8 = 0;
  puVar4 = PTR_DAT_047d0200;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  FUN_0071ece8(plVar8);
  *(undefined4 *)(param_1 + 3) = 0;
  plVar9 = param_1 + 5;
  *plVar9 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_0071ece8(plVar9);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(int *)(param_2 + 0x40) != 0) {
    FUN_00531134();
    *(int *)(param_1 + 8) = (int)param_1[8] + *(int *)(param_2 + 0x40);
    memcpy((void *)param_1[9],*(void **)(param_2 + 0x48),(long)*(int *)(param_2 + 0x40) << 2);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (*(int *)(param_2 + 0x58) != 0) {
    FUN_00531134();
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + *(int *)(param_2 + 0x58);
    memcpy((void *)param_1[0xc],*(void **)(param_2 + 0x60),(long)*(int *)(param_2 + 0x58) << 2);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (*(int *)(param_2 + 0x70) != 0) {
    FUN_00531134();
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + *(int *)(param_2 + 0x70);
    memcpy((void *)param_1[0xf],*(void **)(param_2 + 0x78),(long)*(int *)(param_2 + 0x70) << 2);
  }
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  puVar1 = (ulong *)(param_1 + 1);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar7 = FUN_0021d48c(puVar1);
    }
    else {
      lVar7 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar2 = *(ulong *)(uVar10 + 0x10);
    lVar5 = *(long *)(uVar10 + 0x18);
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      lVar5 = uVar10 + 9;
      uVar2 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    FUN_0021d540(lVar7,lVar5,uVar2);
  }
  FUN_0070cc58(plVar8,param_2 + 0x10);
  FUN_0070cd3c(plVar9,param_2 + 0x28);
  puVar4 = PTR_DAT_047cba80;
  param_1[0x11] = (long)PTR_DAT_047cba80;
  bVar3 = **(byte **)(param_2 + 0x88);
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) goto LAB_0070c87c;
  }
  else if (*(long *)(*(byte **)(param_2 + 0x88) + 8) != 0) {
LAB_0070c87c:
    puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_001fcdc8(param_1 + 0x11,puVar6);
  }
  param_1[0x12] = (long)puVar4;
  bVar3 = **(byte **)(param_2 + 0x90);
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) goto LAB_0070c8b4;
  }
  else if (*(long *)(*(byte **)(param_2 + 0x90) + 8) != 0) {
LAB_0070c8b4:
    puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_001fcdc8(param_1 + 0x12,puVar6);
  }
  param_1[0x13] = (long)puVar4;
  bVar3 = **(byte **)(param_2 + 0x98);
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) goto LAB_0070c8ec;
  }
  else if (*(long *)(*(byte **)(param_2 + 0x98) + 8) != 0) {
LAB_0070c8ec:
    puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_001fcdc8(param_1 + 0x13,puVar6);
  }
  param_1[0x14] = (long)puVar4;
  bVar3 = **(byte **)(param_2 + 0xa0);
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) goto LAB_0070c924;
  }
  else if (*(long *)(*(byte **)(param_2 + 0xa0) + 8) != 0) {
LAB_0070c924:
    puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_001fcdc8(param_1 + 0x14,puVar6);
  }
  param_1[0x15] = (long)puVar4;
  bVar3 = **(byte **)(param_2 + 0xa8);
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) goto LAB_0070c95c;
  }
  else if (*(long *)(*(byte **)(param_2 + 0xa8) + 8) != 0) {
LAB_0070c95c:
    puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_001fcdc8(param_1 + 0x15,puVar6);
  }
  param_1[0x16] = (long)puVar4;
  bVar3 = **(byte **)(param_2 + 0xb0);
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 == 0) goto LAB_0070c988;
LAB_0070cb2c:
    puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) != 0) {
      puVar6 = (ulong *)*puVar6;
    }
    FUN_001fcdc8(param_1 + 0x16,puVar6);
    if (param_2 == PTR_DAT_047cfc00) goto LAB_0070cb4c;
LAB_0070c998:
    lVar7 = *(long *)(param_2 + 0xb8);
    if (lVar7 == 0) {
      param_1[0x17] = 0;
      lVar7 = *(long *)(param_2 + 0xc0);
      if (lVar7 == 0) goto LAB_0070cb74;
LAB_0070c9d0:
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar7);
      }
      param_1[0x18] = lVar5;
      lVar7 = *(long *)(param_2 + 200);
      if (lVar7 != 0) goto LAB_0070ca00;
LAB_0070cb80:
      param_1[0x19] = 0;
      lVar7 = *(long *)(param_2 + 0xd0);
      if (lVar7 == 0) goto LAB_0070cb8c;
LAB_0070ca30:
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar7);
      }
      param_1[0x1a] = lVar5;
      lVar7 = *(long *)(param_2 + 0xd8);
      if (lVar7 != 0) goto LAB_0070ca60;
LAB_0070cb98:
      param_1[0x1b] = 0;
      lVar7 = *(long *)(param_2 + 0xe0);
      if (lVar7 == 0) goto LAB_0070cba4;
LAB_0070ca90:
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar7);
      }
      param_1[0x1c] = lVar5;
      lVar7 = *(long *)(param_2 + 0xe8);
      if (lVar7 != 0) goto LAB_0070cac0;
LAB_0070cbb0:
      param_1[0x1d] = 0;
      lVar7 = *(long *)(param_2 + 0xf0);
      if (lVar7 == 0) goto LAB_0070cbbc;
LAB_0070caf0:
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar7);
      }
      param_1[0x1e] = lVar5;
      lVar7 = *(long *)(param_2 + 0xf8);
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x30);
      if (lVar5 != 0) {
        FUN_00269ff8(lVar5,lVar7);
      }
      param_1[0x17] = lVar5;
      lVar7 = *(long *)(param_2 + 0xc0);
      if (lVar7 != 0) goto LAB_0070c9d0;
LAB_0070cb74:
      param_1[0x18] = 0;
      lVar7 = *(long *)(param_2 + 200);
      if (lVar7 == 0) goto LAB_0070cb80;
LAB_0070ca00:
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar7);
      }
      param_1[0x19] = lVar5;
      lVar7 = *(long *)(param_2 + 0xd0);
      if (lVar7 != 0) goto LAB_0070ca30;
LAB_0070cb8c:
      param_1[0x1a] = 0;
      lVar7 = *(long *)(param_2 + 0xd8);
      if (lVar7 == 0) goto LAB_0070cb98;
LAB_0070ca60:
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar7);
      }
      param_1[0x1b] = lVar5;
      lVar7 = *(long *)(param_2 + 0xe0);
      if (lVar7 != 0) goto LAB_0070ca90;
LAB_0070cba4:
      param_1[0x1c] = 0;
      lVar7 = *(long *)(param_2 + 0xe8);
      if (lVar7 == 0) goto LAB_0070cbb0;
LAB_0070cac0:
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar7);
      }
      param_1[0x1d] = lVar5;
      lVar7 = *(long *)(param_2 + 0xf0);
      if (lVar7 != 0) goto LAB_0070caf0;
LAB_0070cbbc:
      param_1[0x1e] = 0;
      lVar7 = *(long *)(param_2 + 0xf8);
    }
    if (lVar7 != 0) {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar5 != 0) {
        FUN_00513c04(lVar5,lVar7);
      }
      param_1[0x1f] = lVar5;
      goto LAB_0070cbf0;
    }
  }
  else {
    if (*(long *)(*(byte **)(param_2 + 0xb0) + 8) != 0) goto LAB_0070cb2c;
LAB_0070c988:
    if (param_2 != PTR_DAT_047cfc00) goto LAB_0070c998;
LAB_0070cb4c:
    param_1[0x1e] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x17] = 0;
  }
  param_1[0x1f] = 0;
LAB_0070cbf0:
  lVar5 = *(long *)(param_2 + 0x108);
  lVar7 = *(long *)(param_2 + 0x100);
  lVar12 = *(long *)(param_2 + 0x118);
  lVar11 = *(long *)(param_2 + 0x110);
  lVar14 = *(long *)(param_2 + 0x128);
  lVar13 = *(long *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x130);
  param_1[0x23] = lVar12;
  param_1[0x22] = lVar11;
  param_1[0x25] = lVar14;
  param_1[0x24] = lVar13;
  param_1[0x21] = lVar5;
  param_1[0x20] = lVar7;
  return;
}


