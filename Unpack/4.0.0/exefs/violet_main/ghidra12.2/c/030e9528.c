/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e9528; name: FUN_030e9528
 */


void FUN_030e9528(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  lVar6 = (long)(int)param_1[1] + -1;
  uVar2 = param_2[1];
  if (uVar2 != (uint)lVar6) {
    lVar6 = FUN_030e94b4(param_1,*param_1 + lVar6 * 0x18);
    *(uint *)(lVar6 + 4) = uVar2;
  }
  lVar6 = *param_1 + (long)(int)uVar2 * 0x18;
  uVar5 = *(uint *)(lVar6 + 0x14);
  *(undefined4 *)(lVar6 + 0x10) = 0;
  if ((-1 < (int)uVar5) && (lVar4 = *(long *)(lVar6 + 8), lVar4 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar4,(ulong)uVar5 << 3);
  }
  *(long *)(lVar6 + 8) = 0;
  *(uint *)(lVar6 + 0x14) = 0x80000000;
  lVar6 = (long)(int)param_1[1] + -1;
  uVar5 = (uint)lVar6;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar2) {
    puVar10 = (undefined4 *)(*param_1 + lVar6 * 0x18);
    puVar9 = (undefined4 *)(*param_1 + (long)(int)uVar2 * 0x18);
    *puVar9 = *puVar10;
    *(undefined8 *)(puVar9 + 2) = 0;
    *(undefined8 *)(puVar9 + 4) = 0x8000000000000000;
    FUN_030e9334(puVar10 + 2,PTR_PTR_047d1a50);
    *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar10 + 2);
    uVar3 = puVar10[5];
    puVar9[4] = puVar10[4];
    puVar9[5] = uVar3;
    *(undefined8 *)(puVar10 + 2) = 0;
    *(undefined8 *)(puVar10 + 4) = 0;
    puVar10[5] = 0x80000000;
  }
  lVar6 = param_1[2];
  uVar7 = (ulong)(int)param_1[3];
  uVar8 = ((long)param_2 - lVar6 >> 3) + 1U & uVar7;
  while (puVar1 = (uint *)(lVar6 + uVar8 * 8), -1 < (int)puVar1[1]) {
    lVar4 = lVar6 + ((ulong)*puVar1 & uVar7 & 0xffffffff) * 8;
    uVar8 = (ulong)(int)uVar7;
    if ((uVar8 & (long)param_2 - lVar4 >> 3) < (uVar8 & (long)puVar1 - lVar4 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      uVar7 = (ulong)*(uint *)(param_1 + 3);
      lVar6 = param_1[2];
      uVar8 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    uVar8 = ((ulong)((long)puVar1 - lVar6) >> 3) + 1 & uVar8;
  }
  param_2[1] = 0xffffffff;
  return;
}


