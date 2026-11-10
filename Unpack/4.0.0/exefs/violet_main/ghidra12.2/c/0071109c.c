/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0071109c; name: FUN_0071109c
 */


void FUN_0071109c(long param_1,undefined *param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong *puVar9;
  byte *pbVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar13 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar8 = FUN_0021d48c(puVar1);
    }
    else {
      lVar8 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar4 = *(ulong *)(uVar13 + 0x10);
    lVar5 = *(long *)(uVar13 + 0x18);
    if ((*(byte *)(uVar13 + 8) & 1) == 0) {
      lVar5 = uVar13 + 9;
      uVar4 = (ulong)(*(byte *)(uVar13 + 8) >> 1);
    }
    FUN_0021d540(lVar8,lVar5,uVar4);
  }
  FUN_0070cc58(param_1 + 0x10,param_2 + 0x10);
  FUN_0070cd3c(param_1 + 0x28,param_2 + 0x28);
  if (*(int *)(param_2 + 0x40) != 0) {
    iVar7 = *(int *)(param_1 + 0x40);
    FUN_00531134(param_1 + 0x40,iVar7 + *(int *)(param_2 + 0x40));
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(int *)(param_2 + 0x40);
    memcpy((void *)(*(long *)(param_1 + 0x48) + (long)iVar7 * 4),*(void **)(param_2 + 0x48),
           (long)*(int *)(param_2 + 0x40) << 2);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    iVar7 = *(int *)(param_1 + 0x58);
    FUN_00531134(param_1 + 0x58,iVar7 + *(int *)(param_2 + 0x58));
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_2 + 0x58);
    memcpy((void *)(*(long *)(param_1 + 0x60) + (long)iVar7 * 4),*(void **)(param_2 + 0x60),
           (long)*(int *)(param_2 + 0x58) << 2);
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    iVar7 = *(int *)(param_1 + 0x70);
    FUN_00531134(param_1 + 0x70,iVar7 + *(int *)(param_2 + 0x70));
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + *(int *)(param_2 + 0x70);
    memcpy((void *)(*(long *)(param_1 + 0x78) + (long)iVar7 * 4),*(void **)(param_2 + 0x78),
           (long)*(int *)(param_2 + 0x70) << 2);
  }
  puVar11 = PTR_DAT_047cba80;
  pbVar10 = *(byte **)(param_2 + 0x88);
  if ((*pbVar10 & 1) == 0) {
    if (*pbVar10 >> 1 != 0) goto LAB_007111f8;
LAB_00711220:
    pbVar10 = *(byte **)(param_2 + 0x90);
    bVar6 = *pbVar10;
    if ((bVar6 & 1) != 0) goto LAB_00711258;
LAB_0071122c:
    if (bVar6 >> 1 != 0) goto LAB_00711260;
LAB_00711288:
    pbVar10 = *(byte **)(param_2 + 0x98);
    bVar6 = *pbVar10;
    if ((bVar6 & 1) != 0) goto LAB_007112c0;
LAB_00711294:
    if (bVar6 >> 1 != 0) goto LAB_007112c8;
LAB_007112f0:
    pbVar10 = *(byte **)(param_2 + 0xa0);
    bVar6 = *pbVar10;
    if ((bVar6 & 1) != 0) goto LAB_00711328;
LAB_007112fc:
    if (bVar6 >> 1 != 0) goto LAB_00711330;
LAB_00711358:
    pbVar10 = *(byte **)(param_2 + 0xa8);
    bVar6 = *pbVar10;
    if ((bVar6 & 1) != 0) goto LAB_00711390;
LAB_00711364:
    if (bVar6 >> 1 != 0) goto LAB_00711398;
LAB_007113c0:
    pbVar10 = *(byte **)(param_2 + 0xb0);
    bVar6 = *pbVar10;
    if ((bVar6 & 1) != 0) goto LAB_007113f8;
LAB_007113cc:
    if (bVar6 >> 1 == 0) goto joined_r0x00711434;
  }
  else {
    if (*(long *)(pbVar10 + 8) == 0) goto LAB_00711220;
LAB_007111f8:
    plVar2 = (long *)(param_1 + 0x88);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar12 = (undefined *)*plVar2;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      puVar12 = (undefined *)*plVar2;
    }
    if (puVar12 != PTR_DAT_047cba80) {
      FUN_001fcec0(puVar12,pbVar10);
      goto LAB_00711220;
    }
    FUN_001fcdc8(plVar2,puVar9);
    pbVar10 = *(byte **)(param_2 + 0x90);
    bVar6 = *pbVar10;
    if ((bVar6 & 1) == 0) goto LAB_0071122c;
LAB_00711258:
    if (*(long *)(pbVar10 + 8) == 0) goto LAB_00711288;
LAB_00711260:
    plVar2 = (long *)(param_1 + 0x90);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar12 = (undefined *)*plVar2;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      puVar12 = (undefined *)*plVar2;
    }
    if (puVar12 != puVar11) {
      FUN_001fcec0(puVar12,pbVar10);
      goto LAB_00711288;
    }
    FUN_001fcdc8(plVar2,puVar9);
    pbVar10 = *(byte **)(param_2 + 0x98);
    bVar6 = *pbVar10;
    if ((bVar6 & 1) == 0) goto LAB_00711294;
LAB_007112c0:
    if (*(long *)(pbVar10 + 8) == 0) goto LAB_007112f0;
LAB_007112c8:
    plVar2 = (long *)(param_1 + 0x98);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar12 = (undefined *)*plVar2;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      puVar12 = (undefined *)*plVar2;
    }
    if (puVar12 != puVar11) {
      FUN_001fcec0(puVar12,pbVar10);
      goto LAB_007112f0;
    }
    FUN_001fcdc8(plVar2,puVar9);
    pbVar10 = *(byte **)(param_2 + 0xa0);
    bVar6 = *pbVar10;
    if ((bVar6 & 1) == 0) goto LAB_007112fc;
LAB_00711328:
    if (*(long *)(pbVar10 + 8) == 0) goto LAB_00711358;
LAB_00711330:
    plVar2 = (long *)(param_1 + 0xa0);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar12 = (undefined *)*plVar2;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      puVar12 = (undefined *)*plVar2;
    }
    if (puVar12 != puVar11) {
      FUN_001fcec0(puVar12,pbVar10);
      goto LAB_00711358;
    }
    FUN_001fcdc8(plVar2,puVar9);
    pbVar10 = *(byte **)(param_2 + 0xa8);
    bVar6 = *pbVar10;
    if ((bVar6 & 1) == 0) goto LAB_00711364;
LAB_00711390:
    if (*(long *)(pbVar10 + 8) == 0) goto LAB_007113c0;
LAB_00711398:
    plVar2 = (long *)(param_1 + 0xa8);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar12 = (undefined *)*plVar2;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      puVar12 = (undefined *)*plVar2;
    }
    if (puVar12 != puVar11) {
      FUN_001fcec0(puVar12,pbVar10);
      goto LAB_007113c0;
    }
    FUN_001fcdc8(plVar2,puVar9);
    pbVar10 = *(byte **)(param_2 + 0xb0);
    bVar6 = *pbVar10;
    if ((bVar6 & 1) == 0) goto LAB_007113cc;
LAB_007113f8:
    if (*(long *)(pbVar10 + 8) == 0) goto joined_r0x00711434;
  }
  plVar2 = (long *)(param_1 + 0xb0);
  puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar12 = (undefined *)*plVar2;
  }
  else {
    puVar9 = (ulong *)*puVar9;
    puVar12 = (undefined *)*plVar2;
  }
  if (puVar12 == puVar11) {
    FUN_001fcdc8(plVar2,puVar9);
  }
  else {
    FUN_001fcec0(puVar12,pbVar10);
  }
joined_r0x00711434:
  if (param_2 != PTR_DAT_047cfc00) {
    puVar11 = *(undefined **)(param_2 + 0xb8);
    if (puVar11 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0xb8);
      if (lVar8 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_0026b02c(puVar9);
        *(long *)(param_1 + 0xb8) = lVar8;
        puVar11 = *(undefined **)(param_2 + 0xb8);
      }
      puVar12 = PTR_DAT_047cc258;
      if (puVar11 != (undefined *)0x0) {
        puVar12 = puVar11;
      }
      FUN_00267e50(lVar8,puVar12);
    }
    puVar11 = PTR_DAT_047cbe60;
    puVar12 = *(undefined **)(param_2 + 0xc0);
    if (puVar12 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0xc0);
      if (lVar8 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_0051444c(puVar9);
        *(long *)(param_1 + 0xc0) = lVar8;
        puVar12 = *(undefined **)(param_2 + 0xc0);
      }
      puVar3 = puVar11;
      if (puVar12 != (undefined *)0x0) {
        puVar3 = puVar12;
      }
      FUN_005141f4(lVar8,puVar3);
    }
    puVar12 = *(undefined **)(param_2 + 200);
    if (puVar12 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_0051444c(puVar9);
        *(long *)(param_1 + 200) = lVar8;
        puVar12 = *(undefined **)(param_2 + 200);
      }
      puVar3 = puVar11;
      if (puVar12 != (undefined *)0x0) {
        puVar3 = puVar12;
      }
      FUN_005141f4(lVar8,puVar3);
    }
    puVar12 = *(undefined **)(param_2 + 0xd0);
    if (puVar12 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0xd0);
      if (lVar8 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_0051444c(puVar9);
        *(long *)(param_1 + 0xd0) = lVar8;
        puVar12 = *(undefined **)(param_2 + 0xd0);
      }
      puVar3 = puVar11;
      if (puVar12 != (undefined *)0x0) {
        puVar3 = puVar12;
      }
      FUN_005141f4(lVar8,puVar3);
    }
    puVar12 = *(undefined **)(param_2 + 0xd8);
    if (puVar12 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0xd8);
      if (lVar8 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_0051444c(puVar9);
        *(long *)(param_1 + 0xd8) = lVar8;
        puVar12 = *(undefined **)(param_2 + 0xd8);
      }
      puVar3 = puVar11;
      if (puVar12 != (undefined *)0x0) {
        puVar3 = puVar12;
      }
      FUN_005141f4(lVar8,puVar3);
    }
    puVar12 = *(undefined **)(param_2 + 0xe0);
    if (puVar12 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0xe0);
      if (lVar8 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_0051444c(puVar9);
        *(long *)(param_1 + 0xe0) = lVar8;
        puVar12 = *(undefined **)(param_2 + 0xe0);
      }
      puVar3 = puVar11;
      if (puVar12 != (undefined *)0x0) {
        puVar3 = puVar12;
      }
      FUN_005141f4(lVar8,puVar3);
    }
    puVar12 = *(undefined **)(param_2 + 0xe8);
    if (puVar12 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0xe8);
      if (lVar8 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_0051444c(puVar9);
        *(long *)(param_1 + 0xe8) = lVar8;
        puVar12 = *(undefined **)(param_2 + 0xe8);
      }
      puVar3 = puVar11;
      if (puVar12 != (undefined *)0x0) {
        puVar3 = puVar12;
      }
      FUN_005141f4(lVar8,puVar3);
    }
    puVar12 = *(undefined **)(param_2 + 0xf0);
    if (puVar12 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0xf0);
      if (lVar8 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_0051444c(puVar9);
        *(long *)(param_1 + 0xf0) = lVar8;
        puVar12 = *(undefined **)(param_2 + 0xf0);
      }
      puVar3 = puVar11;
      if (puVar12 != (undefined *)0x0) {
        puVar3 = puVar12;
      }
      FUN_005141f4(lVar8,puVar3);
    }
    puVar12 = *(undefined **)(param_2 + 0xf8);
    if (puVar12 != (undefined *)0x0) {
      lVar8 = *(long *)(param_1 + 0xf8);
      if (lVar8 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_0051444c(puVar9);
        *(long *)(param_1 + 0xf8) = lVar8;
        puVar12 = *(undefined **)(param_2 + 0xf8);
      }
      if (puVar12 != (undefined *)0x0) {
        puVar11 = puVar12;
      }
      FUN_005141f4(lVar8,puVar11);
    }
  }
  if (*(int *)(param_2 + 0x100) != 0) {
    *(int *)(param_1 + 0x100) = *(int *)(param_2 + 0x100);
  }
  if (*(int *)(param_2 + 0x104) != 0) {
    *(int *)(param_1 + 0x104) = *(int *)(param_2 + 0x104);
  }
  if (*(int *)(param_2 + 0x108) != 0) {
    *(int *)(param_1 + 0x108) = *(int *)(param_2 + 0x108);
  }
  if (*(int *)(param_2 + 0x10c) != 0) {
    *(int *)(param_1 + 0x10c) = *(int *)(param_2 + 0x10c);
  }
  if (*(int *)(param_2 + 0x110) != 0) {
    *(int *)(param_1 + 0x110) = *(int *)(param_2 + 0x110);
  }
  if (*(int *)(param_2 + 0x114) != 0) {
    *(int *)(param_1 + 0x114) = *(int *)(param_2 + 0x114);
  }
  if (param_2[0x118] != '\0') {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  if (param_2[0x119] != '\0') {
    *(undefined1 *)(param_1 + 0x119) = 1;
  }
  if (*(int *)(param_2 + 0x11c) != 0) {
    *(int *)(param_1 + 0x11c) = *(int *)(param_2 + 0x11c);
  }
  if (*(int *)(param_2 + 0x120) != 0) {
    *(int *)(param_1 + 0x120) = *(int *)(param_2 + 0x120);
  }
  if (*(int *)(param_2 + 0x124) != 0) {
    *(int *)(param_1 + 0x124) = *(int *)(param_2 + 0x124);
  }
  if (*(int *)(param_2 + 0x128) != 0) {
    *(int *)(param_1 + 0x128) = *(int *)(param_2 + 0x128);
  }
  if (*(int *)(param_2 + 300) != 0) {
    *(int *)(param_1 + 300) = *(int *)(param_2 + 300);
  }
  if (*(int *)(param_2 + 0x130) != 0) {
    *(int *)(param_1 + 0x130) = *(int *)(param_2 + 0x130);
  }
  return;
}


