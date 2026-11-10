/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00619030; name: FUN_00619030
 */


int FUN_00619030(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

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
  
  iVar6 = FUN_00618e70();
  pbVar11 = (byte *)*param_4;
  pbVar10 = (byte *)*param_5;
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
LAB_006190d0:
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
    if (iVar7 == 0) goto LAB_006190d0;
    if (-1 < iVar7) {
      return iVar6;
    }
  }
  *param_4 = pbVar10;
  *param_5 = pbVar11;
  pbVar11 = (byte *)*param_3;
  bVar4 = *pbVar11;
  pbVar10 = (byte *)*param_4;
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
LAB_00619148:
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
    if (iVar7 == 0) goto LAB_00619148;
    if (-1 < iVar7) {
      return iVar6 + 1;
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
LAB_006191c0:
    if (uVar1 <= uVar2) {
      return iVar6 + 2;
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
    if (iVar7 == 0) goto LAB_006191c0;
    if (-1 < iVar7) {
      return iVar6 + 2;
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
        return iVar6 + 3;
      }
      goto LAB_00619240;
    }
  }
  if (uVar1 <= uVar2) {
    return iVar6 + 3;
  }
LAB_00619240:
  *param_1 = pbVar11;
  *param_2 = pbVar10;
  return iVar6 + 4;
}


