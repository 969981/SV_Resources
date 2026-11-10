/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0275b54c; name: FUN_0275b54c
 */


void FUN_0275b54c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 in_q3 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = in_q3._8_4_;
  uVar8 = in_q3._0_8_;
  lVar1 = param_1[1];
  FUN_00d175d0(*(undefined8 *)*param_1,*(undefined2 *)(lVar1 + 0xd0));
  *param_2 = uVar8;
  *(undefined4 *)(param_2 + 1) = uVar7;
  *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(lVar1 + 0xc4);
  FUN_00d175d0(*(undefined8 *)*param_1,*(undefined2 *)(lVar1 + 0xd2));
  param_2[2] = uVar8;
  *(undefined4 *)(param_2 + 3) = uVar7;
  *(undefined4 *)((long)param_2 + 0x1c) = *(undefined4 *)(lVar1 + 0xc4);
  puVar3 = (undefined8 *)param_1[2];
  fVar4 = *(float *)(lVar1 + 0xb8);
  fVar5 = *(float *)(lVar1 + 0xbc);
  fVar6 = *(float *)(lVar1 + 0xc0);
  uVar8 = puVar3[1];
  uVar9 = puVar3[3];
  uVar10 = puVar3[5];
  param_2[4] = CONCAT44((float)((ulong)*puVar3 >> 0x20) * fVar4 +
                        (float)((ulong)puVar3[2] >> 0x20) * fVar5 +
                        (float)((ulong)puVar3[4] >> 0x20) * fVar6,
                        (float)*puVar3 * fVar4 + (float)puVar3[2] * fVar5 + (float)puVar3[4] * fVar6
                       );
  *(float *)(param_2 + 5) = (float)uVar8 * fVar4 + (float)uVar9 * fVar5 + (float)uVar10 * fVar6;
  *(undefined4 *)((long)param_2 + 0x2c) = *(undefined4 *)param_1[3];
  uVar2 = *(undefined4 *)param_1[5];
  uVar7 = ((undefined4 *)param_1[4])[1];
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)param_1[4];
  *(undefined4 *)((long)param_2 + 0x34) = uVar7;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)((long)param_2 + 0x3c) = uVar2;
  param_2[8] = *(undefined8 *)(lVar1 + 0x98);
  param_2[9] = *(undefined8 *)(lVar1 + 0xa0);
  param_2[10] = *(undefined8 *)(lVar1 + 0xa8);
  param_2[0xb] = *(undefined8 *)(lVar1 + 0xb0);
  return;
}


