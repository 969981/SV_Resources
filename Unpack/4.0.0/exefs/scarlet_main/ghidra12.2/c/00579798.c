/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00579798; name: FUN_00579798
 */


void FUN_00579798(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  byte *pbVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar10 = FUN_0021d48c();
    }
    else {
      lVar10 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar9 + 0x10);
    lVar6 = *(long *)(uVar9 + 0x18);
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      lVar6 = uVar9 + 9;
      uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    FUN_0021d540(lVar10,lVar6,uVar1);
  }
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((*pbVar7 & 1) == 0) {
    if (*pbVar7 >> 1 != 0) goto LAB_0057980c;
  }
  else if (*(long *)(pbVar7 + 8) != 0) {
LAB_0057980c:
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    puVar8 = *(undefined **)(param_1 + 0x10);
    if (puVar8 == PTR_DAT_047cba80) {
      FUN_001fcdc8((undefined8 *)(param_1 + 0x10),puVar5);
      iVar3 = *(int *)(param_2 + 0x24);
      goto joined_r0x00579844;
    }
    FUN_001fcec0(puVar8,pbVar7);
  }
  iVar3 = *(int *)(param_2 + 0x24);
joined_r0x00579844:
  if (iVar3 != 3) {
    if (iVar3 != 2) {
      return;
    }
    if (*(int *)(param_1 + 0x24) == 2) {
      lVar10 = *(long *)(param_1 + 0x18);
      puVar8 = *(undefined **)(param_2 + 0x18);
      uVar9 = *(ulong *)(puVar8 + 8);
    }
    else {
      FUN_00578bac(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar10 = FUN_00586078(puVar5);
      *(long *)(param_1 + 0x18) = lVar10;
      if (*(int *)(param_2 + 0x24) == 2) {
        uVar9 = *(ulong *)(*(undefined **)(param_2 + 0x18) + 8);
        puVar8 = *(undefined **)(param_2 + 0x18);
      }
      else {
        uVar9 = *(ulong *)(PTR_DAT_047ce2a0 + 8);
        puVar8 = PTR_DAT_047ce2a0;
      }
    }
    if ((uVar9 & 1) != 0) {
      uVar9 = uVar9 & 0xfffffffffffffffe;
      if ((*(ulong *)(lVar10 + 8) & 1) == 0) {
        lVar6 = FUN_0021d48c();
      }
      else {
        lVar6 = (*(ulong *)(lVar10 + 8) & 0xfffffffffffffffe) + 8;
      }
      uVar1 = *(ulong *)(uVar9 + 0x10);
      lVar2 = *(long *)(uVar9 + 0x18);
      if ((*(byte *)(uVar9 + 8) & 1) == 0) {
        lVar2 = uVar9 + 9;
        uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
      }
      FUN_0021d540(lVar6,lVar2,uVar1);
    }
    FUN_004e80a8(lVar10 + 0x10,puVar8 + 0x10);
    return;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    FUN_00578bac(param_1);
    *(undefined4 *)(param_1 + 0x24) = 3;
    puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar4 = FUN_00586150(puVar5);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    if (*(int *)(param_2 + 0x24) != 3) {
      FUN_00578ca4(uVar4,PTR_DAT_047ce1f0);
      return;
    }
  }
  FUN_00578ca4(uVar4,*(undefined8 *)(param_2 + 0x18));
  return;
}


