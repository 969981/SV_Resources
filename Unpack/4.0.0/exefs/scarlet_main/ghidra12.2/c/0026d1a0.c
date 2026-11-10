/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026d1a0; name: FUN_0026d1a0
 */


undefined8 FUN_0026d1a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  byte *__s2;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  pbVar11 = (byte *)*param_1;
  pbVar12 = (byte *)*param_2;
  bVar4 = *pbVar11;
  bVar5 = *pbVar12;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar11 + 8);
  }
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(pbVar12 + 8);
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 == 0) {
LAB_0026d224:
    iVar6 = 0;
    if (uVar2 < uVar1) {
      iVar6 = -1;
    }
  }
  else {
    pbVar9 = *(byte **)(pbVar12 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar9 = pbVar12 + 1;
    }
    pbVar10 = *(byte **)(pbVar11 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar10 = pbVar11 + 1;
    }
    iVar6 = memcmp(pbVar9,pbVar10,sVar3);
    if (iVar6 == 0) goto LAB_0026d224;
  }
  pbVar9 = (byte *)*param_3;
  bVar4 = *pbVar9;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar9 + 8);
  }
  sVar3 = uVar2;
  if (uVar1 <= uVar2) {
    sVar3 = uVar1;
  }
  if (sVar3 == 0) {
LAB_0026d288:
    iVar7 = 0;
    if (uVar1 < uVar2) {
      iVar7 = -1;
    }
    if (-1 < iVar6) goto LAB_0026d27c;
LAB_0026d29c:
    if (iVar7 < 0) {
      *param_1 = pbVar9;
      uVar8 = 1;
      goto LAB_0026d390;
    }
    *param_1 = pbVar12;
    *param_2 = pbVar11;
    bVar4 = *pbVar11;
    pbVar12 = (byte *)*param_3;
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar11 + 8);
    }
    bVar5 = *pbVar12;
    uVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar12 + 8);
    }
    sVar3 = uVar1;
    if (uVar2 <= uVar1) {
      sVar3 = uVar2;
    }
    if (sVar3 == 0) {
LAB_0026d380:
      if (uVar2 < uVar1) {
LAB_0026d388:
        uVar8 = 2;
        *param_2 = pbVar12;
LAB_0026d390:
        *param_3 = pbVar11;
        return uVar8;
      }
    }
    else {
      pbVar9 = *(byte **)(pbVar12 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar9 = pbVar12 + 1;
      }
      pbVar10 = *(byte **)(pbVar11 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar10 = pbVar11 + 1;
      }
      iVar6 = memcmp(pbVar9,pbVar10,sVar3);
      if (iVar6 == 0) goto LAB_0026d380;
      if (iVar6 < 0) goto LAB_0026d388;
    }
LAB_0026d3b0:
    uVar8 = 1;
  }
  else {
    pbVar10 = *(byte **)(pbVar9 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar10 = pbVar9 + 1;
    }
    __s2 = *(byte **)(pbVar12 + 0x10);
    if ((bVar5 & 1) == 0) {
      __s2 = pbVar12 + 1;
    }
    iVar7 = memcmp(pbVar10,__s2,sVar3);
    if (iVar7 == 0) goto LAB_0026d288;
    if (iVar6 < 0) goto LAB_0026d29c;
LAB_0026d27c:
    if (-1 < iVar7) {
      return 0;
    }
    *param_2 = pbVar9;
    *param_3 = pbVar12;
    pbVar11 = (byte *)*param_1;
    bVar4 = *pbVar11;
    pbVar12 = (byte *)*param_2;
    uVar1 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar1 = *(ulong *)(pbVar11 + 8);
    }
    bVar5 = *pbVar12;
    uVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pbVar12 + 8);
    }
    sVar3 = uVar1;
    if (uVar2 <= uVar1) {
      sVar3 = uVar2;
    }
    if (sVar3 == 0) {
LAB_0026d398:
      if (uVar1 <= uVar2) goto LAB_0026d3b0;
    }
    else {
      pbVar9 = *(byte **)(pbVar12 + 0x10);
      if ((bVar5 & 1) == 0) {
        pbVar9 = pbVar12 + 1;
      }
      pbVar10 = *(byte **)(pbVar11 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar10 = pbVar11 + 1;
      }
      iVar6 = memcmp(pbVar9,pbVar10,sVar3);
      if (iVar6 == 0) goto LAB_0026d398;
      if (-1 < iVar6) goto LAB_0026d3b0;
    }
    *param_1 = pbVar12;
    uVar8 = 2;
    *param_2 = pbVar11;
  }
  return uVar8;
}


