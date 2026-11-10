/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029826fc; name: FUN_029826fc
 */


void FUN_029826fc(byte *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  bVar2 = *param_1;
  bVar3 = param_1[1];
  if ((uint)param_2[1] + (uint)*param_2 != 0 &&
      (uint)bVar3 + (uint)bVar2 + (uint)*param_2 + (uint)param_2[1] < 0xb) {
    uVar4 = 0;
    pbVar5 = param_2 + 4;
    do {
      uVar6 = *(undefined8 *)pbVar5;
      uVar1 = *(uint *)(pbVar5 + 8);
      *(uint *)(param_1 + ((ulong)bVar2 + (ulong)bVar3) * 0xc + 0xc) = uVar1;
      *(undefined8 *)(param_1 + ((ulong)bVar2 + (ulong)bVar3) * 0xc + 4) = uVar6;
      if (((uVar1 >> 0x10 & 0xff) >> 3 & 1) == 0) {
        bVar2 = bVar2 + 1;
        *param_1 = bVar2;
      }
      else {
        bVar3 = bVar3 + 1;
        param_1[1] = bVar3;
      }
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 0xc;
    } while (uVar4 < (ulong)param_2[1] + (ulong)*param_2);
  }
  return;
}


