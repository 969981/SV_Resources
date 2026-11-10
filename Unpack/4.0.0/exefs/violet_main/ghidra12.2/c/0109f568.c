/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0109f568; name: FUN_0109f568
 */


ulong FUN_0109f568(undefined8 param_1,byte *param_2)

{
  size_t sVar1;
  byte *pbVar2;
  size_t sVar3;
  ulong uVar4;
  byte *pbVar5;
  
  uVar4 = 0xcbf29ce484222325;
  sVar1 = strlen((char *)param_2);
  if (sVar1 != 0) {
    pbVar2 = param_2;
    sVar3 = sVar1;
    do {
      if (*pbVar2 - 0x41 < 0x1a) {
        *pbVar2 = *pbVar2 + 0x20;
      }
      sVar3 = sVar3 - 1;
      pbVar2 = pbVar2 + 1;
    } while (sVar3 != 0);
    if ((sVar1 & 0xffffffff) != 0) {
      pbVar2 = param_2;
      do {
        pbVar5 = pbVar2 + 1;
        uVar4 = uVar4 * 0x100000001b3 ^ (ulong)*pbVar2;
        pbVar2 = pbVar5;
      } while (pbVar5 < param_2 + (sVar1 & 0xffffffff));
    }
  }
  return uVar4;
}


