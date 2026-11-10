/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c10790; name: FUN_00c10790
 */


void FUN_00c10790(char *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  size_t sVar5;
  byte *pbVar6;
  byte *__s;
  
  pcVar4 = strchr(param_1,0x2e);
  if (pcVar4 == (char *)0x0) {
    pbVar6 = (byte *)(param_1 + 2);
    while( true ) {
      bVar1 = pbVar6[-2];
      if ((9 < bVar1 - 0x30) &&
         (uVar2 = bVar1 - 0x2b,
         0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0)) break;
      pbVar6 = pbVar6 + 1;
    }
    if (bVar1 != 0) {
      bVar1 = pbVar6[-1];
      pbVar6[-2] = 0x2e;
      if ((9 < bVar1 - 0x30) &&
         (((uVar2 = bVar1 - 0x2b, 0x3a < uVar2 ||
           ((1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0)) &&
          (pbVar3 = pbVar6, bVar1 != 0)))) {
        do {
          __s = pbVar3;
          bVar1 = *__s;
          if (bVar1 - 0x30 < 10) break;
          uVar2 = bVar1 - 0x2b;
          pbVar3 = __s + 1;
        } while ((0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004000005U) == 0) &&
                 bVar1 != 0);
        sVar5 = strlen((char *)__s);
        memmove(pbVar6 + -1,__s,sVar5 + 1);
        return;
      }
    }
  }
  return;
}


