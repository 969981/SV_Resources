/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f312c; name: FUN_030f312c
 */


void FUN_030f312c(long *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  lVar7 = (long)(int)param_1[1] + -1;
  uVar3 = param_2[1];
  if (uVar3 != (uint)lVar7) {
    lVar7 = FUN_030f2f00(param_1,*param_1 + lVar7 * 0x68);
    *(uint *)(lVar7 + 4) = uVar3;
  }
  FUN_030d9a14(*param_1 + (long)(int)uVar3 * 0x68 + 8);
  lVar7 = (long)(int)param_1[1] + -1;
  uVar6 = (uint)lVar7;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 != uVar3) {
    puVar10 = (undefined4 *)(*param_1 + lVar7 * 0x68);
    puVar11 = (undefined4 *)(*param_1 + (long)(int)uVar3 * 0x68);
    uVar4 = *puVar10;
    *(undefined8 *)(puVar11 + 2) = 0;
    *(undefined8 *)(puVar11 + 4) = 0x8000000000000000;
    *puVar11 = uVar4;
    puVar5 = PTR_PTR_047d1a50;
    FUN_030da6d0(puVar10 + 2,PTR_PTR_047d1a50);
    *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar10 + 2);
    uVar4 = puVar10[5];
    puVar11[4] = puVar10[4];
    puVar11[5] = uVar4;
    *(undefined8 *)(puVar10 + 2) = 0;
    *(undefined8 *)(puVar10 + 4) = 0;
    *(undefined8 *)(puVar11 + 6) = *(undefined8 *)(puVar10 + 6);
    puVar11[8] = puVar10[8];
    *(undefined **)(puVar10 + 6) = &DAT_03d7702c;
    puVar10[8] = 0;
    *(undefined8 *)(puVar11 + 10) = 0;
    *(undefined8 *)(puVar11 + 0xc) = 0x8000000000000000;
    FUN_030daed4(puVar10 + 10,puVar5);
    *(undefined8 *)(puVar11 + 10) = *(undefined8 *)(puVar10 + 10);
    uVar4 = puVar10[0xd];
    puVar11[0xc] = puVar10[0xc];
    puVar11[0xd] = uVar4;
    *(undefined8 *)(puVar10 + 10) = 0;
    *(undefined8 *)(puVar10 + 0xc) = 0;
    *(undefined8 *)(puVar11 + 0xe) = *(undefined8 *)(puVar10 + 0xe);
    puVar11[0x10] = puVar10[0x10];
    *(undefined **)(puVar10 + 0xe) = &DAT_03d7702c;
    puVar10[0x10] = 0;
    *(undefined8 *)(puVar11 + 0x12) = 0;
    *(undefined8 *)(puVar11 + 0x14) = 0x8000000000000000;
    FUN_030daf4c(puVar10 + 0x12,puVar5);
    *(undefined8 *)(puVar11 + 0x12) = *(undefined8 *)(puVar10 + 0x12);
    uVar4 = puVar10[0x15];
    puVar11[0x14] = puVar10[0x14];
    puVar11[0x15] = uVar4;
    *(undefined8 *)(puVar10 + 0x12) = 0;
    *(undefined8 *)(puVar10 + 0x14) = 0;
    *(undefined8 *)(puVar11 + 0x16) = *(undefined8 *)(puVar10 + 0x16);
    puVar11[0x18] = puVar10[0x18];
    *(undefined **)(puVar10 + 0x16) = &DAT_03d7702c;
    puVar10[0x18] = 0;
    FUN_030d9a14(puVar10 + 2);
  }
  lVar7 = param_1[2];
  uVar8 = (ulong)(int)param_1[3];
  uVar9 = ((long)param_2 - lVar7 >> 3) + 1U & uVar8;
  while (puVar1 = (uint *)(lVar7 + uVar9 * 8), -1 < (int)puVar1[1]) {
    lVar2 = lVar7 + ((ulong)*puVar1 & uVar8 & 0xffffffff) * 8;
    uVar9 = (ulong)(int)uVar8;
    if ((uVar9 & (long)param_2 - lVar2 >> 3) < (uVar9 & (long)puVar1 - lVar2 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      uVar8 = (ulong)*(uint *)(param_1 + 3);
      lVar7 = param_1[2];
      uVar9 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    uVar9 = ((ulong)((long)puVar1 - lVar7) >> 3) + 1 & uVar9;
  }
  param_2[1] = 0xffffffff;
  return;
}


