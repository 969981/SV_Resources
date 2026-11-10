/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ebe40; name: FUN_003ebe40
 */


int FUN_003ebe40(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  
  iVar5 = FUN_003eb2b0();
  iVar3 = *(int *)((long)param_1 + 0xc);
  uVar7 = iVar5 + 0xeU;
  if (-1 < (int)(iVar5 + 7U)) {
    uVar7 = iVar5 + 7U;
  }
  iVar2 = (int)uVar7 >> 3;
  if (iVar3 == 0) {
    FUN_00453300(param_2,(long)iVar2);
    return iVar2;
  }
  if (0xe < iVar5 + 0xeU) {
    lVar4 = param_1[1];
    pbVar9 = (byte *)(iVar2 + param_2);
    uVar6 = 0;
    uVar8 = 0;
    do {
      pbVar9 = pbVar9 + -1;
      uVar10 = uVar8 & 0xfffffffffffffffc;
      uVar7 = (uint)uVar8;
      lVar1 = (long)(int)lVar4 * -4 + uVar6;
      uVar8 = uVar8 - ((long)((long)iVar3 * -4 + 1 + uVar8) >> 0x3f);
      uVar6 = uVar6 + 1;
      *pbVar9 = (byte)(lVar1 >> 0x3f) & (byte)(*(uint *)(*param_1 + uVar10) >> ((uVar7 & 3) << 3));
    } while (uVar6 < (ulong)(long)iVar2);
  }
  return iVar2;
}


