/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006972e8; name: FUN_006972e8
 */


void FUN_006972e8(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong *puVar9;
  byte *pbVar10;
  undefined *puVar11;
  ulong uVar12;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar12 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar8 = FUN_0021d48c();
    }
    else {
      lVar8 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar2 = *(ulong *)(uVar12 + 0x10);
    lVar3 = *(long *)(uVar12 + 0x18);
    if ((*(byte *)(uVar12 + 8) & 1) == 0) {
      lVar3 = uVar12 + 9;
      uVar2 = (ulong)(*(byte *)(uVar12 + 8) >> 1);
    }
    FUN_0021d540(lVar8,lVar3,uVar2);
  }
  puVar7 = PTR_DAT_047cba80;
  pbVar10 = *(byte **)(param_2 + 0x10);
  if ((*pbVar10 & 1) == 0) {
    if (*pbVar10 >> 1 != 0) goto LAB_0069736c;
LAB_00697394:
    pbVar10 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar10;
    if ((bVar5 & 1) != 0) goto LAB_006973cc;
LAB_006973a0:
    if (bVar5 >> 1 != 0) goto LAB_006973d4;
LAB_006973fc:
    pbVar10 = *(byte **)(param_2 + 0x20);
    bVar5 = *pbVar10;
    if ((bVar5 & 1) != 0) goto LAB_00697434;
LAB_00697408:
    if (bVar5 >> 1 != 0) goto LAB_0069743c;
  }
  else {
    if (*(long *)(pbVar10 + 8) == 0) goto LAB_00697394;
LAB_0069736c:
    plVar1 = (long *)(param_1 + 0x10);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar11 = (undefined *)*plVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      puVar11 = (undefined *)*plVar1;
    }
    if (puVar11 != PTR_DAT_047cba80) {
      FUN_001fcec0(puVar11,pbVar10);
      goto LAB_00697394;
    }
    FUN_001fcdc8(plVar1,puVar9);
    pbVar10 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar10;
    if ((bVar5 & 1) == 0) goto LAB_006973a0;
LAB_006973cc:
    if (*(long *)(pbVar10 + 8) == 0) goto LAB_006973fc;
LAB_006973d4:
    plVar1 = (long *)(param_1 + 0x18);
    puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar11 = (undefined *)*plVar1;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      puVar11 = (undefined *)*plVar1;
    }
    if (puVar11 != puVar7) {
      FUN_001fcec0(puVar11,pbVar10);
      goto LAB_006973fc;
    }
    FUN_001fcdc8(plVar1,puVar9);
    pbVar10 = *(byte **)(param_2 + 0x20);
    bVar5 = *pbVar10;
    if ((bVar5 & 1) == 0) goto LAB_00697408;
LAB_00697434:
    if (*(long *)(pbVar10 + 8) != 0) {
LAB_0069743c:
      plVar1 = (long *)(param_1 + 0x20);
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar11 = (undefined *)*plVar1;
      }
      else {
        puVar9 = (ulong *)*puVar9;
        puVar11 = (undefined *)*plVar1;
      }
      if (puVar11 == puVar7) {
        FUN_001fcdc8(plVar1,puVar9);
        iVar4 = *(int *)(param_2 + 0x30);
        goto joined_r0x0069746c;
      }
      FUN_001fcec0(puVar11,pbVar10);
    }
  }
  iVar4 = *(int *)(param_2 + 0x30);
joined_r0x0069746c:
  if (iVar4 == 3) {
    uVar6 = *(undefined1 *)(param_2 + 0x28);
    if (*(int *)(param_1 + 0x30) != 3) {
      *(undefined4 *)(param_1 + 0x30) = 3;
    }
    *(undefined1 *)(param_1 + 0x28) = uVar6;
  }
  return;
}


