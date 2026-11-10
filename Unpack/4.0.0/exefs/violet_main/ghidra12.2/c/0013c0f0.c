/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013c0f0; name: FUN_0013c0f0
 */


long FUN_0013c0f0(long param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 0x18);
  iVar2 = (int)(((ulong)param_2 & 0xffffffff) * 0x3521cfb3 >> 0x20);
  uVar5 = (ulong)((int)param_2 + (iVar2 + ((uint)((int)param_2 - iVar2) >> 1) >> 5) * -0x35);
  lVar1 = lVar6 + uVar5 * 0x10;
  lVar4 = *(long *)(lVar1 + 0x228);
  iVar2 = strcmp(param_2,(char *)(lVar4 + 0x18));
  lVar7 = lVar4;
  if (iVar2 != 0) {
    lVar6 = lVar6 + uVar5 * 0x10;
    lVar7 = *(long *)(lVar6 + 0x230);
    iVar2 = strcmp(param_2,(char *)(lVar7 + 0x18));
    if (iVar2 != 0) {
      *(long *)(lVar6 + 0x230) = lVar4;
      sVar3 = strlen(param_2);
      lVar7 = FUN_0013be00(param_1,param_2,sVar3);
      *(long *)(lVar1 + 0x228) = lVar7;
    }
  }
  return lVar7;
}


