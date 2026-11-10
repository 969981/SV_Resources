/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007102fc; name: FUN_007102fc
 */


byte * FUN_007102fc(uint param_1,byte *param_2,byte *param_3,byte *param_4,long *param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  size_t sVar7;
  
  if (param_4 < (byte *)*param_5) {
    uVar6 = param_1 << 3 | 2;
    if (uVar6 < 0x80) goto LAB_00710334;
LAB_0071035c:
    *param_4 = (byte)uVar6 | 0x80;
    if (uVar6 >> 0xe == 0) {
      param_4[1] = (byte)(param_1 >> 4);
      pbVar4 = param_4 + 2;
    }
    else {
      pbVar4 = param_4 + 2;
      uVar6 = param_1 >> 4 & 0x1ffffff;
      do {
        pbVar5 = pbVar4;
        uVar2 = uVar6 >> 7;
        pbVar5[-1] = (byte)uVar6 | 0x80;
        pbVar4 = pbVar5 + 1;
        uVar3 = uVar6 >> 0xe;
        uVar6 = uVar2;
      } while (uVar3 != 0);
      *pbVar5 = (byte)uVar2;
    }
  }
  else {
    param_4 = (byte *)FUN_0052c6d8(param_5,param_4);
    uVar6 = param_1 << 3 | 2;
    if (0x7f < uVar6) goto LAB_0071035c;
LAB_00710334:
    pbVar4 = param_4 + 1;
    *param_4 = (byte)uVar6;
  }
  uVar6 = (uint)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar6 = *(uint *)(param_2 + 8);
  }
  uVar2 = (uint)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar2 = *(uint *)(param_3 + 8);
  }
  uVar6 = uVar6 + uVar2 + (((uint)LZCOUNT(uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
          (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2;
  if (uVar6 < 0x80) {
    pbVar5 = pbVar4 + 1;
    *pbVar4 = (byte)uVar6;
  }
  else {
    *pbVar4 = (byte)uVar6 | 0x80;
    if (uVar6 >> 0xe == 0) {
      pbVar4[1] = (byte)(uVar6 >> 7);
      pbVar5 = pbVar4 + 2;
    }
    else {
      pbVar5 = pbVar4 + 2;
      uVar6 = uVar6 >> 7;
      do {
        pbVar4 = pbVar5;
        uVar2 = uVar6 >> 7;
        pbVar4[-1] = (byte)uVar6 | 0x80;
        pbVar5 = pbVar4 + 1;
        uVar3 = uVar6 >> 0xe;
        uVar6 = uVar2;
      } while (uVar3 != 0);
      *pbVar4 = (byte)uVar2;
    }
  }
  if (pbVar5 < (byte *)*param_5) {
    bVar1 = *param_2;
    if ((bVar1 & 1) == 0) goto LAB_0071046c;
LAB_0071048c:
    sVar7 = *(size_t *)(param_2 + 8);
    if ((long)sVar7 < 0x80) goto LAB_00710498;
LAB_007104f8:
    pbVar4 = (byte *)FUN_0052cbdc(param_5,1,param_2);
    if (pbVar4 < (byte *)*param_5) goto LAB_007104e8;
LAB_00710518:
    pbVar4 = (byte *)FUN_0052c6d8(param_5,pbVar4);
    bVar1 = *param_3;
    if ((bVar1 & 1) != 0) goto LAB_00710530;
LAB_007104f0:
    sVar7 = (size_t)(bVar1 >> 1);
  }
  else {
    pbVar5 = (byte *)FUN_0052c6d8(param_5,pbVar5);
    bVar1 = *param_2;
    if ((bVar1 & 1) != 0) goto LAB_0071048c;
LAB_0071046c:
    sVar7 = (size_t)(bVar1 >> 1);
LAB_00710498:
    if ((*param_5 - (long)pbVar5) + 0xe < (long)sVar7) goto LAB_007104f8;
    *pbVar5 = 10;
    pbVar5[1] = (byte)sVar7;
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    memcpy(pbVar5 + 2,pbVar4,sVar7);
    pbVar4 = pbVar5 + 2 + sVar7;
    if ((byte *)*param_5 <= pbVar4) goto LAB_00710518;
LAB_007104e8:
    bVar1 = *param_3;
    if ((bVar1 & 1) == 0) goto LAB_007104f0;
LAB_00710530:
    sVar7 = *(size_t *)(param_3 + 8);
    if (0x7f < (long)sVar7) goto LAB_00710590;
  }
  if ((long)sVar7 <= (*param_5 - (long)pbVar4) + 0xe) {
    *pbVar4 = 0x12;
    pbVar4[1] = (byte)sVar7;
    pbVar5 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
    memcpy(pbVar4 + 2,pbVar5,sVar7);
    return pbVar4 + 2 + sVar7;
  }
LAB_00710590:
  pbVar4 = (byte *)FUN_0052cbdc(param_5,2,param_3);
  return pbVar4;
}


