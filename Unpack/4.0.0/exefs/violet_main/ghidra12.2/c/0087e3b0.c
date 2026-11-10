/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087e3b0; name: FUN_0087e3b0
 */


undefined8 FUN_0087e3b0(uint *param_1,uint *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = 0x80260201;
  if ((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) {
    *param_1 = param_2[2];
    param_1[1] = param_2[4];
    param_1[2] = param_2[5];
    *(char *)(param_1 + 3) = (char)param_2[0x12];
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 6) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xe) = uVar3;
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined8 *)(param_1 + 10) = uVar2;
    uVar4 = *param_2;
    param_1[0x10] = uVar4;
    fVar8 = (float)uVar4;
    param_1[0x16] = 0;
    param_1[0x12] = 4;
    param_1[0x13] = 0;
    param_1[0x14] = 0x42c80000;
    param_1[0x15] = 0;
    fVar7 = expf(-440.00003 / fVar8);
    fVar7 = 1.0 - fVar7;
    fVar8 = expf(-22.0 / fVar8);
    fVar8 = 1.0 - fVar8;
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)((long)param_1 + lVar6 + 0xde8);
      lVar6 = lVar6 + 4;
      puVar1[0x60] = 0;
      puVar1[0x6c] = 0x3f800000;
      puVar1[0x54] = fVar7;
      *puVar1 = 0xc1a00000;
      puVar1[0xc] = 0x40000000;
      puVar1[0x18] = fVar7;
      puVar1[0x24] = fVar8;
      puVar1[0x30] = 0x3f800000;
      puVar1[0x3c] = 0;
      puVar1[0x48] = 0x3f000000;
      puVar1[0x78] = 0xc1a00000;
      puVar1[0xfc] = 0;
      puVar1[0x108] = 0x3f800000;
      puVar1[0xf0] = fVar7;
      puVar1[0x9c] = 0xc1a00000;
      puVar1[0xa8] = 0x40000000;
      puVar1[0xb4] = fVar7;
      puVar1[0xc0] = fVar8;
      puVar1[0xcc] = 0x3f800000;
      puVar1[0xd8] = 0;
      puVar1[0xe4] = 0x3f000000;
      puVar1[0x114] = 0xc1a00000;
      puVar1[0x198] = 0;
      puVar1[0x1a4] = 0x3f800000;
      puVar1[0x18c] = fVar7;
      puVar1[0x138] = 0xc1a00000;
      puVar1[0x144] = 0x40000000;
      puVar1[0x150] = fVar7;
      puVar1[0x15c] = fVar8;
      puVar1[0x168] = 0x3f800000;
      puVar1[0x174] = 0;
      puVar1[0x180] = 0x3f000000;
      puVar1[0x1b0] = 0xc1a00000;
      puVar1[0x234] = 0;
      puVar1[0x240] = 0x3f800000;
      puVar1[0x228] = fVar7;
      puVar1[0x1d4] = 0xc1a00000;
      puVar1[0x1e0] = 0x40000000;
      puVar1[0x1ec] = fVar7;
      puVar1[0x1f8] = fVar8;
      puVar1[0x204] = 0x3f800000;
      puVar1[0x210] = 0;
      puVar1[0x21c] = 0x3f000000;
      puVar1[0x24c] = 0xc1a00000;
    } while (lVar6 != 0x30);
    uVar5 = FUN_0087e570(param_1,&DAT_03d0f254,0xffff,param_3);
    if (-1 < (int)uVar5) {
      param_1[0x11] = 3;
    }
  }
  return uVar5;
}


