/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00178e20; name: FUN_00178e20
 */


/* WARNING: Removing unreachable block (ram,0x00178e48) */

void FUN_00178e20(long param_1,long param_2,long param_3,ulong param_4,uint param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  
  if (0 < (long)param_4) {
    bVar5 = ~(byte)(-1 << (ulong)(param_5 & 0x1f));
    if (param_4 == 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        pbVar1 = (byte *)(param_3 + lVar6);
        bVar4 = *pbVar1;
        pbVar2 = (byte *)(param_1 + lVar6);
        pbVar3 = (byte *)(param_2 + lVar6);
        lVar6 = lVar6 + 2;
        *pbVar2 = bVar4 >> (ulong)(param_5 & 0x1f);
        *pbVar3 = bVar4 & bVar5;
        bVar4 = pbVar1[1];
        pbVar2[1] = bVar4 >> (ulong)(param_5 & 0x1f);
        pbVar3[1] = bVar4 & bVar5;
      } while (param_4 - (param_4 & 1) != lVar6);
      if ((param_4 & 1) == 0) {
        return;
      }
    }
    bVar4 = *(byte *)(param_3 + lVar6);
    *(byte *)(param_1 + lVar6) = bVar4 >> (ulong)(param_5 & 0x1f);
    *(byte *)(param_2 + lVar6) = bVar4 & bVar5;
  }
  return;
}


