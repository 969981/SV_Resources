/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00368590; name: FUN_00368590
 */


byte * FUN_00368590(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  
  param_1[4] = param_1[4] + param_2;
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    lVar5 = param_1[1];
    if (*(long *)(lVar5 + (lVar4 + -1) * 0x20) == 0) {
      pbVar6 = (byte *)(lVar5 + (lVar4 + -1) * 0x20 + 8);
      bVar3 = *pbVar6;
      uVar1 = (ulong)bVar3 + param_2;
      if (uVar1 < 0x18) {
        *pbVar6 = (byte)uVar1;
        return pbVar6 + (ulong)bVar3 + 1;
      }
    }
    if ((lVar5 - *param_1 >> 5) + lVar4 == param_1[3]) {
      FUN_003693d0(param_1);
      lVar4 = param_1[2];
    }
  }
  param_1[2] = lVar4 + 1;
  puVar2 = (undefined8 *)(param_1[1] + lVar4 * 0x20);
  *puVar2 = 0;
  *(char *)(puVar2 + 1) = (char)param_2;
  return (byte *)((long)puVar2 + 9);
}


