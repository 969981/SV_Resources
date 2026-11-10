/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007204f0; name: FUN_007204f0
 */


int FUN_007204f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  iVar6 = FUN_007202c0();
  pbVar11 = (byte *)*param_3;
  pbVar10 = (byte *)*param_4;
  bVar4 = *pbVar11;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar11 + 8);
  }
  bVar5 = *pbVar10;
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(pbVar10 + 8);
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 == 0) {
LAB_0072058c:
    if (uVar1 <= uVar2) {
      return iVar6;
    }
  }
  else {
    pbVar9 = *(byte **)(pbVar10 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar9 = pbVar10 + 1;
    }
    pbVar8 = *(byte **)(pbVar11 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar8 = pbVar11 + 1;
    }
    iVar7 = memcmp(pbVar9,pbVar8,sVar3);
    if (iVar7 == 0) goto LAB_0072058c;
    if (-1 < iVar7) {
      return iVar6;
    }
  }
  *param_3 = pbVar10;
  *param_4 = pbVar11;
  pbVar11 = (byte *)*param_2;
  bVar4 = *pbVar11;
  pbVar10 = (byte *)*param_3;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar11 + 8);
  }
  bVar5 = *pbVar10;
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(pbVar10 + 8);
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 == 0) {
LAB_00720604:
    if (uVar1 <= uVar2) {
      return iVar6 + 1;
    }
  }
  else {
    pbVar9 = *(byte **)(pbVar10 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar9 = pbVar10 + 1;
    }
    pbVar8 = *(byte **)(pbVar11 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar8 = pbVar11 + 1;
    }
    iVar7 = memcmp(pbVar9,pbVar8,sVar3);
    if (iVar7 == 0) goto LAB_00720604;
    if (-1 < iVar7) {
      return iVar6 + 1;
    }
  }
  *param_2 = pbVar10;
  *param_3 = pbVar11;
  pbVar10 = (byte *)*param_1;
  bVar4 = *pbVar10;
  pbVar11 = (byte *)*param_2;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar10 + 8);
  }
  bVar5 = *pbVar11;
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(pbVar11 + 8);
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    pbVar9 = *(byte **)(pbVar11 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar9 = pbVar11 + 1;
    }
    pbVar8 = *(byte **)(pbVar10 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar8 = pbVar10 + 1;
    }
    iVar7 = memcmp(pbVar9,pbVar8,sVar3);
    if (iVar7 != 0) {
      if (-1 < iVar7) {
        return iVar6 + 2;
      }
      goto LAB_00720684;
    }
  }
  if (uVar1 <= uVar2) {
    return iVar6 + 2;
  }
LAB_00720684:
  *param_1 = pbVar11;
  *param_2 = pbVar10;
  return iVar6 + 3;
}


