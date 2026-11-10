/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e21ba4; name: FUN_01e21ba4
 */


void FUN_01e21ba4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  uVar7 = param_2[1];
  uVar6 = param_2[2];
  *(undefined8 *)(param_1 + 0x150) = *param_2;
  lVar5 = *(long *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x158) = uVar7;
  *(undefined8 *)(param_1 + 0x160) = uVar6;
  if (lVar5 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x154);
    fVar8 = *(float *)(param_1 + 0x150);
    uVar7 = *(undefined8 *)(param_1 + 0x158);
    uVar2 = *(undefined4 *)(param_1 + 0x160);
    uVar3 = *(undefined4 *)(param_1 + 0x164);
    *(undefined8 *)(lVar5 + 0xc4) = 0x3dcccccd3c23d70a;
    *(undefined4 *)(lVar5 + 0xc0) = uVar1;
    puVar4 = PTR_FloatDegree180_047d2390;
    fVar9 = *(float *)PTR_FloatPi_047d23a0;
    *(undefined8 *)(lVar5 + 0xcc) = uVar7;
    *(undefined4 *)(lVar5 + 0xd4) = uVar2;
    *(undefined4 *)(lVar5 + 0xd8) = uVar3;
    *(float *)(lVar5 + 0xbc) = fVar8 * (fVar9 / *(float *)puVar4);
  }
  return;
}


