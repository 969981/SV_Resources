/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01406f70; name: FUN_01406f70
 */


uint FUN_01406f70(undefined8 param_1,char *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  size_t sVar6;
  byte bVar7;
  ulong uVar8;
  size_t sVar9;
  long lVar10;
  byte *pbVar11;
  byte bStack_31;
  
  sVar6 = strlen(param_2);
  uVar8 = sVar6 + 1 & 0xffffffff;
  lVar3 = -(uVar8 + 0xf & 0x1fffffff0);
  pbVar11 = (byte *)((long)register0x00000008 + lVar3 + -0x30);
  sVar9 = uVar8 - 1;
  if (sVar6 + 1 <= sVar9) {
    sVar9 = sVar6 + 1;
  }
  strncpy((char *)pbVar11,param_2,sVar9);
  pbVar11[sVar9] = 0;
  sVar9 = strlen((char *)pbVar11);
  lVar10 = (long)(int)sVar9;
  do {
    lVar2 = lVar10 + -1;
    if (lVar10 < 1) goto LAB_01406ff4;
    lVar4 = lVar10 + -1;
    lVar10 = lVar2;
  } while (pbVar11[lVar4] != 0x2e);
  pbVar11[lVar2] = 0;
LAB_01406ff4:
  bVar7 = *pbVar11;
  uVar5 = 0x811c9dc5;
  if (bVar7 != 0) {
    pbVar11 = (byte *)((long)register0x00000008 + lVar3 + -0x2f);
    do {
      bVar1 = bVar7 + 0x20;
      if (0x19 < (byte)(bVar7 + 0xbf)) {
        bVar1 = bVar7;
      }
      uVar5 = uVar5 * 0x1000193 ^ (uint)bVar1;
      bVar7 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar7 != 0);
  }
  return uVar5;
}


