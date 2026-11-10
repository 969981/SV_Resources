/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ffacc; name: FUN_029ffacc
 */


void FUN_029ffacc(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + (param_2 >> 0x16 & 0x3ff) * 0x100 + 0x10);
  puVar1 = (undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x38) + (param_2 & 0x3fffff) * 0x10);
  uVar4 = *puVar1;
  uVar7 = *(undefined8 *)(lVar2 + 0x40);
  uVar8 = *(undefined8 *)(lVar2 + 0x50);
  uVar9 = *(undefined8 *)(lVar2 + 0x60);
  uVar10 = *(undefined8 *)(lVar2 + 0x70);
  fVar3 = (float)uVar4;
  fVar5 = (float)((ulong)uVar4 >> 0x20);
  fVar6 = (float)puVar1[1];
  param_3[1] = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x78) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar2 + 0x68) >> 0x20) * fVar6 +
                        (float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) * fVar3 +
                        (float)((ulong)*(undefined8 *)(lVar2 + 0x58) >> 0x20) * fVar5,
                        (float)*(undefined8 *)(lVar2 + 0x78) +
                        (float)*(undefined8 *)(lVar2 + 0x68) * fVar6 +
                        (float)*(undefined8 *)(lVar2 + 0x48) * fVar3 +
                        (float)*(undefined8 *)(lVar2 + 0x58) * fVar5);
  *param_3 = CONCAT44((float)((ulong)uVar10 >> 0x20) +
                      (float)((ulong)uVar9 >> 0x20) * fVar6 +
                      (float)((ulong)uVar7 >> 0x20) * fVar3 + (float)((ulong)uVar8 >> 0x20) * fVar5,
                      (float)uVar10 +
                      (float)uVar9 * fVar6 + (float)uVar7 * fVar3 + (float)uVar8 * fVar5);
  return;
}


