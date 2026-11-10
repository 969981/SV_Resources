/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001790b0; name: FUN_001790b0
 */


uint FUN_001790b0(long param_1,long param_2,long param_3,int param_4,int *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  if (0xff < param_4) {
    return 0;
  }
  iVar3 = *param_5;
  uVar4 = param_6 - 2;
  if (-1 < (int)(param_6 - 3U)) {
    uVar4 = param_6 - 3U;
  }
  uVar4 = uVar4 & 0xfffffffe | (uint)(iVar3 != 0);
  if (0 < (int)uVar4) {
    uVar6 = 0;
    do {
      uVar2 = ~((uint)(iVar3 == 0) + (int)uVar6) & 1;
      uVar1 = param_5[(iVar3 == 0) + uVar6] + ~(-1 << (ulong)uVar2);
      iVar5 = 0x1f - (int)LZCOUNT(uVar1 >> (ulong)uVar2);
      uVar2 = iVar5 + uVar2;
      *(char *)(param_1 + uVar6) = (char)iVar5;
      *(byte *)(param_2 + uVar6) = (byte)uVar1 & ((byte)(-1 << (ulong)(uVar2 & 0x1f)) ^ 0xff);
      *(char *)(param_3 + uVar6) = (char)uVar2;
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  return uVar4;
}


