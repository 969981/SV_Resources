/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00614aac; name: FUN_00614aac
 */


void FUN_00614aac(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  long lVar7;
  ulong *puVar8;
  byte *pbVar9;
  undefined *puVar10;
  ulong uVar11;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar11 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar7 = FUN_0021d48c();
    }
    else {
      lVar7 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar2 = *(ulong *)(uVar11 + 0x10);
    lVar3 = *(long *)(uVar11 + 0x18);
    if ((*(byte *)(uVar11 + 8) & 1) == 0) {
      lVar3 = uVar11 + 9;
      uVar2 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
    }
    FUN_0021d540(lVar7,lVar3,uVar2);
  }
  puVar6 = PTR_DAT_047cba80;
  pbVar9 = *(byte **)(param_2 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    if (*pbVar9 >> 1 != 0) goto LAB_00614b30;
LAB_00614b58:
    pbVar9 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar9;
    if ((bVar5 & 1) != 0) goto LAB_00614b90;
LAB_00614b64:
    if (bVar5 >> 1 != 0) goto LAB_00614b98;
LAB_00614bc0:
    pbVar9 = *(byte **)(param_2 + 0x20);
    bVar5 = *pbVar9;
    if ((bVar5 & 1) != 0) goto LAB_00614bf8;
LAB_00614bcc:
    if (bVar5 >> 1 != 0) goto LAB_00614c00;
  }
  else {
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_00614b58;
LAB_00614b30:
    plVar1 = (long *)(param_1 + 0x10);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar10 = (undefined *)*plVar1;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      puVar10 = (undefined *)*plVar1;
    }
    if (puVar10 != PTR_DAT_047cba80) {
      FUN_001fcec0(puVar10,pbVar9);
      goto LAB_00614b58;
    }
    FUN_001fcdc8(plVar1,puVar8);
    pbVar9 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar9;
    if ((bVar5 & 1) == 0) goto LAB_00614b64;
LAB_00614b90:
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_00614bc0;
LAB_00614b98:
    plVar1 = (long *)(param_1 + 0x18);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar10 = (undefined *)*plVar1;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      puVar10 = (undefined *)*plVar1;
    }
    if (puVar10 != puVar6) {
      FUN_001fcec0(puVar10,pbVar9);
      goto LAB_00614bc0;
    }
    FUN_001fcdc8(plVar1,puVar8);
    pbVar9 = *(byte **)(param_2 + 0x20);
    bVar5 = *pbVar9;
    if ((bVar5 & 1) == 0) goto LAB_00614bcc;
LAB_00614bf8:
    if (*(long *)(pbVar9 + 8) != 0) {
LAB_00614c00:
      plVar1 = (long *)(param_1 + 0x20);
      puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar10 = (undefined *)*plVar1;
      }
      else {
        puVar8 = (ulong *)*puVar8;
        puVar10 = (undefined *)*plVar1;
      }
      if (puVar10 == puVar6) {
        FUN_001fcdc8(plVar1,puVar8);
        iVar4 = *(int *)(param_2 + 0x28);
        goto joined_r0x00614c2c;
      }
      FUN_001fcec0(puVar10,pbVar9);
    }
  }
  iVar4 = *(int *)(param_2 + 0x28);
joined_r0x00614c2c:
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x28) = iVar4;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  return;
}


