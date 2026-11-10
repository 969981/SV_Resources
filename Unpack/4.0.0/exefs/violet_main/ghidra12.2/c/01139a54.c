/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01139a54; name: FUN_01139a54
 */


void FUN_01139a54(undefined8 *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined4 param_6)

{
  uint *puVar1;
  byte bVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 6);
    uVar4 = param_3[3];
    param_1[3] = param_3[1];
    param_1[5] = uVar4;
    uVar4 = *param_3;
    param_1[4] = param_3[2];
    param_1[2] = uVar4;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0x16);
    uVar4 = param_4[3];
    param_1[0x13] = param_4[1];
    param_1[0x15] = uVar4;
    uVar4 = *param_4;
    param_1[0x14] = param_4[2];
    param_1[0x12] = uVar4;
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  puVar9 = &DAT_cbf29ce484222645;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x22] = &DAT_cbf29ce484222645;
  param_1[0x23] = &DAT_03c886bc;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x38) = param_6;
  *(undefined4 *)((long)param_1 + 0x1c4) = 0;
  param_1[0x26] = &DAT_cbf29ce484222645;
  param_1[0x27] = &DAT_03c886bc;
  param_1[0x2d] = param_5;
  param_1[0x2e] = 0x555555555555555;
  param_1[0x33] = 0x555555555555555;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = param_5;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
     (uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar5 == 0)) {
    lVar8 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar5);
    lVar8 = (long)puVar1 + (ulong)*puVar1;
  }
  sVar3 = strlen((char *)(lVar8 + 4));
  bVar2 = *(byte *)(lVar8 + 4);
  puVar7 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    puVar7 = &DAT_cbf29ce484222645;
    pbVar6 = (byte *)(lVar8 + 5);
    do {
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  param_1[0x26] = puVar7;
  param_1[0x27] = (char *)(lVar8 + 4);
  param_1[0x28] = sVar3;
  param_1[0x29] = 0;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar5 == 0)) {
    lVar8 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar5);
    lVar8 = (long)puVar1 + (ulong)*puVar1;
  }
  sVar3 = strlen((char *)(lVar8 + 4));
  bVar2 = *(byte *)(lVar8 + 4);
  if (bVar2 != 0) {
    pbVar6 = (byte *)(lVar8 + 5);
    do {
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  param_1[0x22] = puVar9;
  param_1[0x23] = (char *)(lVar8 + 4);
  param_1[0x24] = sVar3;
  param_1[0x25] = 0;
  return;
}


