/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c66d8; name: FUN_002c66d8
 */


uint FUN_002c66d8(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  bVar4 = *param_2;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  bVar5 = *param_1;
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 == 0) {
    if (uVar1 != uVar2) {
      return (uint)(uVar2 < uVar1);
    }
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    pbVar8 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar8 = param_2 + 1;
    }
    iVar6 = memcmp(pbVar9,pbVar8,sVar3);
    if (iVar6 == 0) {
      if (uVar2 < uVar1) {
        return 1;
      }
    }
    else if (iVar6 < 0) {
      return 1;
    }
    iVar6 = memcmp(pbVar8,pbVar9,sVar3);
    if (iVar6 == 0) {
      if (uVar1 < uVar2) {
        return 0;
      }
    }
    else if (iVar6 < 0) {
      return 0;
    }
  }
  bVar4 = param_1[0x18];
  bVar5 = param_2[0x18];
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x20);
  }
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    pbVar9 = *(byte **)(param_1 + 0x28);
    if ((bVar4 & 1) == 0) {
      pbVar9 = param_1 + 0x19;
    }
    pbVar8 = *(byte **)(param_2 + 0x28);
    if ((bVar5 & 1) == 0) {
      pbVar8 = param_2 + 0x19;
    }
    uVar7 = memcmp(pbVar9,pbVar8,sVar3);
    if (uVar7 != 0) goto LAB_002c6804;
  }
  uVar7 = 0;
  if (uVar2 < uVar1) {
    uVar7 = 0xffffffff;
  }
LAB_002c6804:
  return uVar7 >> 0x1f;
}


