/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007184b0; name: FUN_007184b0
 */


void FUN_007184b0(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  byte *pbVar12;
  undefined *puVar13;
  ulong uVar14;
  
  puVar11 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar14 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar11 & 1) == 0) {
      lVar8 = FUN_0021d48c(puVar11);
    }
    else {
      lVar8 = (*puVar11 & 0xfffffffffffffffe) + 8;
    }
    uVar4 = *(ulong *)(uVar14 + 0x10);
    lVar5 = *(long *)(uVar14 + 0x18);
    if ((*(byte *)(uVar14 + 8) & 1) == 0) {
      lVar5 = uVar14 + 9;
      uVar4 = (ulong)(*(byte *)(uVar14 + 8) >> 1);
    }
    FUN_0021d540(lVar8,lVar5,uVar4);
  }
  puVar7 = PTR_DAT_047cba80;
  pbVar12 = *(byte **)(param_2 + 0x10);
  if ((*pbVar12 & 1) == 0) {
    if (*pbVar12 >> 1 != 0) goto LAB_00718548;
LAB_00718520:
    pbVar12 = *(byte **)(param_2 + 0x18);
    bVar6 = *pbVar12;
    if ((bVar6 & 1) == 0) goto LAB_0071852c;
LAB_0071857c:
    if (*(long *)(pbVar12 + 8) != 0) goto LAB_00718584;
  }
  else {
    if (*(long *)(pbVar12 + 8) == 0) goto LAB_00718520;
LAB_00718548:
    puVar1 = (undefined8 *)(param_1 + 0x10);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar13 = (undefined *)*puVar1;
      if (puVar13 == PTR_DAT_047cba80) goto LAB_00718834;
LAB_00718564:
      FUN_001fcec0(puVar13,pbVar12);
      pbVar12 = *(byte **)(param_2 + 0x18);
      bVar6 = *pbVar12;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      puVar13 = (undefined *)*puVar1;
      if (puVar13 != PTR_DAT_047cba80) goto LAB_00718564;
LAB_00718834:
      FUN_001fcdc8(puVar1,puVar9);
      pbVar12 = *(byte **)(param_2 + 0x18);
      bVar6 = *pbVar12;
    }
    if ((bVar6 & 1) != 0) goto LAB_0071857c;
LAB_0071852c:
    if (bVar6 >> 1 != 0) {
LAB_00718584:
      plVar2 = (long *)(param_1 + 0x18);
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar13 = (undefined *)*plVar2;
      }
      else {
        puVar9 = (ulong *)*puVar9;
        puVar13 = (undefined *)*plVar2;
      }
      if (puVar13 == puVar7) {
        FUN_001fcdc8(plVar2,puVar9);
      }
      else {
        FUN_001fcec0(puVar13,pbVar12);
      }
    }
  }
  if ((param_2 != PTR_DAT_047d01f8) &&
     (puVar13 = *(undefined **)(param_2 + 0x20), puVar13 != (undefined *)0x0)) {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) {
      puVar9 = (ulong *)(*puVar11 & 0xfffffffffffffffe);
      if ((*puVar11 & 1) != 0) {
        puVar9 = (ulong *)*puVar9;
      }
      lVar8 = FUN_0051444c(puVar9);
      *(long *)(param_1 + 0x20) = lVar8;
      puVar13 = *(undefined **)(param_2 + 0x20);
    }
    puVar3 = PTR_DAT_047cbe60;
    if (puVar13 != (undefined *)0x0) {
      puVar3 = puVar13;
    }
    FUN_005141f4(lVar8,puVar3);
  }
  switch(*(undefined4 *)(param_2 + 0x34)) {
  case 3:
    if (*(int *)(param_1 + 0x34) == 3) {
LAB_007186e4:
      lVar8 = *(long *)(param_1 + 0x28);
    }
    else {
      FUN_00717084(param_1);
      *(undefined4 *)(param_1 + 0x34) = 3;
      puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar11 = (ulong *)*puVar11;
      }
      lVar8 = FUN_0071ce84(puVar11);
      *(long *)(param_1 + 0x28) = lVar8;
      if (*(int *)(param_2 + 0x34) != 3) {
        uVar14 = *(ulong *)(PTR_DAT_047d0280 + 8);
        if ((uVar14 & 1) == 0) {
          return;
        }
        goto LAB_007187b4;
      }
    }
LAB_007187a8:
    uVar14 = *(ulong *)(*(long *)(param_2 + 0x28) + 8);
    break;
  case 4:
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    if (*(int *)(param_1 + 0x34) == 4) {
      uVar14 = *(ulong *)(param_1 + 8);
    }
    else {
      FUN_00717084(param_1);
      *(undefined4 *)(param_1 + 0x34) = 4;
      *(undefined **)(param_1 + 0x28) = puVar7;
      uVar14 = *(ulong *)(param_1 + 8);
    }
    puVar11 = (ulong *)(uVar14 & 0xfffffffffffffffe);
    if ((uVar14 & 1) == 0) {
      puVar13 = *(undefined **)(param_1 + 0x28);
    }
    else {
      puVar11 = (ulong *)*puVar11;
      puVar13 = *(undefined **)(param_1 + 0x28);
    }
    if (puVar13 == puVar7) {
      FUN_001fcdc8(param_1 + 0x28,puVar11,uVar10);
      return;
    }
    FUN_001fcec0(puVar13,uVar10);
    return;
  case 5:
    if (*(int *)(param_1 + 0x34) == 5) {
      uVar10 = *(undefined8 *)(param_1 + 0x28);
    }
    else {
      FUN_00717084(param_1);
      *(undefined4 *)(param_1 + 0x34) = 5;
      puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar11 = (ulong *)*puVar11;
      }
      uVar10 = FUN_0071cef4(puVar11);
      *(undefined8 *)(param_1 + 0x28) = uVar10;
      if (*(int *)(param_2 + 0x34) != 5) {
        FUN_00716c04(uVar10,PTR_DAT_047d0290);
        return;
      }
    }
    FUN_00716c04(uVar10,*(undefined8 *)(param_2 + 0x28));
    return;
  case 6:
    if (*(int *)(param_1 + 0x34) == 6) goto LAB_007186e4;
    FUN_00717084(param_1);
    *(undefined4 *)(param_1 + 0x34) = 6;
    puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar11 = (ulong *)*puVar11;
    }
    lVar8 = FUN_0071cfb4(puVar11);
    *(long *)(param_1 + 0x28) = lVar8;
    if (*(int *)(param_2 + 0x34) == 6) goto LAB_007187a8;
    uVar14 = *(ulong *)(PTR_DAT_047d0270 + 8);
    break;
  default:
    goto switchD_0071861c_default;
  }
  if ((uVar14 & 1) != 0) {
LAB_007187b4:
    uVar14 = uVar14 & 0xfffffffffffffffe;
    if ((*(ulong *)(lVar8 + 8) & 1) == 0) {
      lVar8 = FUN_0021d48c();
    }
    else {
      lVar8 = (*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar4 = *(ulong *)(uVar14 + 0x10);
    lVar5 = *(long *)(uVar14 + 0x18);
    if ((*(byte *)(uVar14 + 8) & 1) == 0) {
      lVar5 = uVar14 + 9;
      uVar4 = (ulong)(*(byte *)(uVar14 + 8) >> 1);
    }
    FUN_0021d540(lVar8,lVar5,uVar4);
    return;
  }
switchD_0071861c_default:
  return;
}


