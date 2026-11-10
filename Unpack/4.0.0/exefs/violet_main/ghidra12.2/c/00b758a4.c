/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b758a4; name: FUN_00b758a4
 */


byte * FUN_00b758a4(long param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar4 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) goto LAB_00b75968;
    pbVar4 = pbVar4 + 1;
    uVar3 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar3 = *(ulong *)(pbVar4 + 8);
    if (uVar3 == 0) goto LAB_00b75968;
    pbVar4 = *(byte **)(pbVar4 + 0x10);
  }
  FUN_00c0d914(pbVar4,uVar3,1,"SaturdayBleSendCompleteProto.nonce");
  pbVar4 = *(byte **)(param_1 + 0x18);
  pbVar7 = param_3 + 1;
  *param_3 = 10;
  uVar5 = (uint)(*pbVar4 >> 1);
  if ((*pbVar4 & 1) != 0) {
    uVar5 = *(uint *)(pbVar4 + 8);
  }
  if (0x7f < uVar5) {
    pbVar8 = pbVar7;
    uVar6 = uVar5;
    do {
      uVar5 = uVar6 >> 7;
      uVar2 = uVar6 >> 0xe;
      pbVar7 = pbVar8 + 1;
      *pbVar8 = (byte)uVar6 | 0x80;
      pbVar8 = pbVar7;
      uVar6 = uVar5;
    } while (uVar2 != 0);
  }
  *pbVar7 = (byte)uVar5;
  pbVar8 = *(byte **)(pbVar4 + 0x10);
  uVar5 = (uint)(*pbVar4 >> 1);
  if ((*pbVar4 & 1) == 0) {
    pbVar8 = pbVar4 + 1;
  }
  else {
    uVar5 = (uint)*(undefined8 *)(pbVar4 + 8);
  }
  memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar5);
  param_3 = pbVar7 + 1 + (int)uVar5;
LAB_00b75968:
  pbVar4 = *(byte **)(param_1 + 0x20);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) {
      return param_3;
    }
    pbVar4 = pbVar4 + 1;
    uVar3 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar3 = *(ulong *)(pbVar4 + 8);
    if (uVar3 == 0) {
      return param_3;
    }
    pbVar4 = *(byte **)(pbVar4 + 0x10);
  }
  FUN_00c0d914(pbVar4,uVar3,1,"SaturdayBleSendCompleteProto.application_id");
  pbVar4 = *(byte **)(param_1 + 0x20);
  pbVar7 = param_3 + 1;
  *param_3 = 0x12;
  uVar5 = (uint)(*pbVar4 >> 1);
  if ((*pbVar4 & 1) != 0) {
    uVar5 = *(uint *)(pbVar4 + 8);
  }
  if (0x7f < uVar5) {
    pbVar8 = pbVar7;
    uVar6 = uVar5;
    do {
      uVar5 = uVar6 >> 7;
      uVar2 = uVar6 >> 0xe;
      pbVar7 = pbVar8 + 1;
      *pbVar8 = (byte)uVar6 | 0x80;
      pbVar8 = pbVar7;
      uVar6 = uVar5;
    } while (uVar2 != 0);
  }
  *pbVar7 = (byte)uVar5;
  pbVar8 = *(byte **)(pbVar4 + 0x10);
  uVar5 = (uint)(*pbVar4 >> 1);
  if ((*pbVar4 & 1) == 0) {
    pbVar8 = pbVar4 + 1;
  }
  else {
    uVar5 = (uint)*(undefined8 *)(pbVar4 + 8);
  }
  memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar5);
  return pbVar7 + 1 + (int)uVar5;
}


