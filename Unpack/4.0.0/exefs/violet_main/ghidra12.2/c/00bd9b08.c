/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bd9b08; name: FUN_00bd9b08
 */


byte * FUN_00bd9b08(long param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    pbVar4 = *(byte **)(param_1 + 0x18);
    pbVar6 = param_3 + 1;
    *param_3 = 10;
    uVar3 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      uVar3 = *(uint *)(pbVar4 + 8);
    }
    if (0x7f < uVar3) {
      pbVar7 = pbVar6;
      uVar5 = uVar3;
      do {
        uVar3 = uVar5 >> 7;
        uVar2 = uVar5 >> 0xe;
        pbVar6 = pbVar7 + 1;
        *pbVar7 = (byte)uVar5 | 0x80;
        pbVar7 = pbVar6;
        uVar5 = uVar3;
      } while (uVar2 != 0);
    }
    *pbVar6 = (byte)uVar3;
    pbVar7 = *(byte **)(pbVar4 + 0x10);
    uVar5 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) == 0) {
      pbVar7 = pbVar4 + 1;
    }
    else {
      uVar5 = (uint)*(undefined8 *)(pbVar4 + 8);
    }
    memcpy(pbVar6 + 1,pbVar7,(long)(int)uVar5);
    uVar3 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar6 + 1 + (int)uVar5;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    bVar1 = *(byte *)(param_1 + 0x20);
    *param_3 = 0x10;
    param_3[1] = bVar1;
    param_3 = param_3 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_3;
  }
  pbVar4 = (byte *)FUN_00c02cac(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_3);
  return pbVar4;
}


