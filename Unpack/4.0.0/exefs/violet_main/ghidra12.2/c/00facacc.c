/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00facacc; name: FUN_00facacc
 */


void FUN_00facacc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  
  lVar1 = param_1 + 4;
  (**(code **)PTR_DAT_047d3210)();
  uVar6 = FUN_008f13ec(param_3[2]);
  (**(code **)PTR_DAT_047d3218)(param_1,uVar6);
  uVar6 = FUN_008f1368(param_3[1]);
  (**(code **)PTR_DAT_047d3220)(param_1,uVar6);
  uVar6 = FUN_008f1378(*param_3);
  (**(code **)PTR_DAT_047d3228)(param_1,uVar6);
  iVar2 = *(int *)(param_3 + 0xc);
  *(float *)(param_1 + 0x20) = (float)iVar2;
  fVar7 = *(float *)(param_3 + 0x10);
  *(float *)(param_1 + 0x24) = fVar7;
  bVar5 = false;
  if ((*(float *)(param_3 + 8) == 0.0) && (bVar5 = false, !NAN(fVar7))) {
    bVar5 = fVar7 == 0.0;
  }
  *(float *)(param_1 + 0x28) = *(float *)(param_3 + 8);
  uVar6 = 7;
  if (bVar5 && iVar2 == 0) {
    uVar6 = 0;
  }
  (**(code **)PTR_DAT_047d3230)(param_1,uVar6);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  (**(code **)PTR_DAT_047d3158)(lVar1);
  (**(code **)PTR_DAT_047d3160)(lVar1,(byte)param_3[4] >> 1 & 1);
  bVar3 = param_3[0x18];
  if (bVar3 < 2) {
    bVar3 = 0;
  }
  (**(code **)PTR_DAT_047d3168)(lVar1,bVar3);
  (**(code **)PTR_DAT_047d3170)(lVar1,param_3[0x1a] & 1);
  bVar4 = *(byte *)(param_1 + 0x2d);
  bVar3 = (byte)param_3[4] >> 1 & 1;
  *(byte *)(param_1 + 0x2d) = bVar4 & 0xfe | bVar3;
  bVar3 = (bVar4 & 0xfc | bVar3 | ((byte)param_3[4] >> 2 & 1) << 1) ^ 2;
  *(byte *)(param_1 + 0x2d) = bVar3;
  bVar3 = (bVar3 & 0xf8 | bVar3 & 3 | (param_3[4] & 1) << 2) ^ 4;
  *(byte *)(param_1 + 0x2d) = bVar3;
  *(byte *)(param_1 + 0x2d) = bVar3 & 0xf7 | (param_3[6] == '\x01') << 3;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}


