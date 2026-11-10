/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0014fd90; name: FUN_0014fd90
 */


void FUN_0014fd90(float *param_1,long *param_2,uint param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = (param_4 & 0xffffffff) << 2;
  uVar4 = -(ulong)((param_3 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 | (ulong)(param_3 << 2) << 2
  ;
  uVar2 = *(uint *)(*param_2 +
                    (long)(int)param_2[2] * (-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | uVar3) +
                   uVar4);
  *param_1 = (float)(uVar2 & 0xff);
  param_1[0x10] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x20] = (float)(uVar2 >> 0x10 & 0xff);
  uVar5 = (ulong)(int)uVar3;
  uVar3 = (long)(int)param_3 << 4 | 4;
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar5 + uVar3);
  param_1[1] = (float)(uVar2 & 0xff);
  param_1[0x11] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x21] = (float)(uVar2 >> 0x10 & 0xff);
  uVar6 = (ulong)(long)(int)(param_3 << 2) >> 2;
  uVar1 = uVar6 << 4 | 8;
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar5 + uVar1);
  param_1[2] = (float)(uVar2 & 0xff);
  param_1[0x12] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x22] = (float)(uVar2 >> 0x10 & 0xff);
  uVar6 = uVar6 << 4 | 0xc;
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar5 + uVar6);
  param_1[3] = (float)(uVar2 & 0xff);
  uVar7 = uVar5 | 1;
  param_1[0x13] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x23] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar7 + uVar4);
  param_1[4] = (float)(uVar2 & 0xff);
  param_1[0x14] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x24] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar7 + uVar3);
  param_1[5] = (float)(uVar2 & 0xff);
  param_1[0x15] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x25] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar7 + uVar1);
  param_1[6] = (float)(uVar2 & 0xff);
  param_1[0x16] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x26] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar7 + uVar6);
  param_1[7] = (float)(uVar2 & 0xff);
  uVar7 = uVar5 | 2;
  uVar5 = uVar5 | 3;
  param_1[0x17] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x27] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar7 + uVar4);
  param_1[8] = (float)(uVar2 & 0xff);
  param_1[0x18] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x28] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar7 + uVar3);
  param_1[9] = (float)(uVar2 & 0xff);
  param_1[0x19] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x29] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar7 + uVar1);
  param_1[10] = (float)(uVar2 & 0xff);
  param_1[0x1a] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x2a] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar7 + uVar6);
  param_1[0xb] = (float)(uVar2 & 0xff);
  param_1[0x1b] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x2b] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar5 + uVar4);
  param_1[0xc] = (float)(uVar2 & 0xff);
  param_1[0x1c] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x2c] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar5 + uVar3);
  param_1[0xd] = (float)(uVar2 & 0xff);
  param_1[0x1d] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x2d] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar5 + uVar1);
  param_1[0xe] = (float)(uVar2 & 0xff);
  param_1[0x1e] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x2e] = (float)(uVar2 >> 0x10 & 0xff);
  uVar2 = *(uint *)(*param_2 + (long)(int)param_2[2] * uVar5 + uVar6);
  param_1[0xf] = (float)(uVar2 & 0xff);
  param_1[0x1f] = (float)(uVar2 >> 8 & 0xff);
  param_1[0x2f] = (float)(uVar2 >> 0x10 & 0xff);
  return;
}


