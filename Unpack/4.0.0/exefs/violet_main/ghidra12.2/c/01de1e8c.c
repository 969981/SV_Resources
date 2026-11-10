/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01de1e8c; name: FUN_01de1e8c
 */


void FUN_01de1e8c(long param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  bVar1 = *(byte *)(param_1 + 0x56f);
  bVar4 = false;
  bVar5 = false;
  if (param_2 < bVar1) {
    bVar5 = param_3 <= bVar1;
    bVar4 = bVar1 == param_3;
  }
  if (!bVar5 || bVar4) {
    return;
  }
  puVar7 = (undefined2 *)(param_1 + 0x40 + (ulong)param_2 * 0x22);
  puVar6 = (undefined2 *)(param_1 + 0x40 + (ulong)param_3 * 0x22);
  uVar3 = *puVar7;
  *puVar7 = *puVar6;
  *puVar6 = uVar3;
  uVar3 = puVar7[1];
  puVar7[1] = puVar6[1];
  puVar6[1] = uVar3;
  uVar3 = puVar7[2];
  puVar7[2] = puVar6[2];
  puVar6[2] = uVar3;
  uVar3 = puVar7[3];
  puVar7[3] = puVar6[3];
  puVar6[3] = uVar3;
  uVar3 = puVar7[4];
  puVar7[4] = puVar6[4];
  puVar6[4] = uVar3;
  uVar3 = puVar7[5];
  puVar7[5] = puVar6[5];
  puVar6[5] = uVar3;
  uVar3 = puVar7[6];
  puVar7[6] = puVar6[6];
  puVar6[6] = uVar3;
  uVar3 = puVar7[7];
  puVar7[7] = puVar6[7];
  puVar6[7] = uVar3;
  uVar3 = puVar7[8];
  puVar7[8] = puVar6[8];
  puVar6[8] = uVar3;
  uVar3 = puVar7[9];
  puVar7[9] = puVar6[9];
  puVar6[9] = uVar3;
  uVar3 = puVar7[10];
  puVar7[10] = puVar6[10];
  puVar6[10] = uVar3;
  uVar3 = puVar7[0xb];
  puVar7[0xb] = puVar6[0xb];
  puVar6[0xb] = uVar3;
  uVar3 = puVar7[0xc];
  puVar7[0xc] = puVar6[0xc];
  puVar6[0xc] = uVar3;
  uVar3 = puVar7[0xd];
  puVar7[0xd] = puVar6[0xd];
  puVar6[0xd] = uVar3;
  uVar3 = puVar7[0xe];
  puVar7[0xe] = puVar6[0xe];
  puVar6[0xe] = uVar3;
  uVar3 = puVar7[0xf];
  puVar7[0xf] = puVar6[0xf];
  puVar6[0xf] = uVar3;
  uVar3 = puVar7[0x10];
  puVar7[0x10] = puVar6[0x10];
  param_1 = param_1 + 0x572;
  puVar6[0x10] = uVar3;
  uVar2 = *(undefined1 *)(param_1 + (ulong)param_2);
  *(undefined1 *)(param_1 + (ulong)param_2) = *(undefined1 *)(param_1 + (ulong)param_3);
  *(undefined1 *)(param_1 + (ulong)param_3) = uVar2;
  FUN_020eba6c();
  return;
}


