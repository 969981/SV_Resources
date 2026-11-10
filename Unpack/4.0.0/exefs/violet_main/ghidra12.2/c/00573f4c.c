/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00573f4c; name: FUN_00573f4c
 */


void FUN_00573f4c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar4 = FUN_0021d48c();
    }
    else {
      lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar9 + 0x10);
    lVar2 = *(long *)(uVar9 + 0x18);
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      lVar2 = uVar9 + 9;
      uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    FUN_0021d540(lVar4,lVar2,uVar1);
  }
  pbVar6 = *(byte **)(param_2 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    if (*pbVar6 >> 1 != 0) goto LAB_00573fc0;
  }
  else if (*(long *)(pbVar6 + 8) != 0) {
LAB_00573fc0:
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    puVar7 = *(undefined **)(param_1 + 0x10);
    if (puVar7 == PTR_DAT_047cba80) {
      FUN_001fcdc8((undefined8 *)(param_1 + 0x10),puVar5);
      iVar3 = *(int *)(param_2 + 0x24);
      goto joined_r0x00574098;
    }
    FUN_001fcec0(puVar7,pbVar6);
  }
  iVar3 = *(int *)(param_2 + 0x24);
joined_r0x00574098:
  if (iVar3 == 4) {
    if (*(int *)(param_1 + 0x24) == 4) {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
    }
    else {
      FUN_00573014(param_1);
      *(undefined4 *)(param_1 + 0x24) = 4;
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      uVar8 = FUN_0057644c(puVar5);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      if (*(int *)(param_2 + 0x24) != 4) {
        FUN_005732b0(uVar8,PTR_DAT_047ce0d8);
        return;
      }
    }
    FUN_005732b0(uVar8,*(undefined8 *)(param_2 + 0x18));
    return;
  }
  if (iVar3 == 3) {
    if (*(int *)(param_1 + 0x24) == 3) {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
    }
    else {
      FUN_00573014(param_1);
      *(undefined4 *)(param_1 + 0x24) = 3;
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      uVar8 = FUN_0057638c(puVar5);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      if (*(int *)(param_2 + 0x24) != 3) {
        FUN_005731e0(uVar8,PTR_DAT_047ce198);
        return;
      }
    }
    FUN_005731e0(uVar8,*(undefined8 *)(param_2 + 0x18));
    return;
  }
  if (iVar3 == 2) {
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(param_1 + 0x24) != 2) {
      FUN_00573014(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      *(undefined **)(param_1 + 0x18) = PTR_DAT_047cba80;
    }
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    puVar7 = *(undefined **)(param_1 + 0x18);
    if (puVar7 == PTR_DAT_047cba80) {
      FUN_001fcdc8((undefined8 *)(param_1 + 0x18),puVar5,uVar8);
      return;
    }
    FUN_001fcec0(puVar7,uVar8);
  }
  return;
}


