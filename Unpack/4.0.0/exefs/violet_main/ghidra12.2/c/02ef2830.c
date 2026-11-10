/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ef2830; name: FUN_02ef2830
 */


void FUN_02ef2830(long param_1,void *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined8 uVar5;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  memcpy(&local_a0,param_2,0x80);
  fVar4 = (float)local_a0 * (float)*(undefined8 *)(param_1 + 0x30) +
          (float)*(undefined8 *)(param_1 + 0x20);
  fVar6 = (float)((ulong)local_a0 >> 0x20) * (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20)
          + (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar8 = (float)uStack_98 * (float)*(undefined8 *)(param_1 + 0x38) +
          (float)*(undefined8 *)(param_1 + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  fVar7 = (float)puVar2[4];
  fVar9 = (float)((ulong)puVar2[4] >> 0x20);
  fVar10 = (float)puVar2[5];
  fVar12 = (float)((ulong)puVar2[5] >> 0x20);
  local_a0 = CONCAT44((float)((ulong)puVar2[6] >> 0x20) +
                      fVar9 * fVar8 +
                      (float)((ulong)*puVar2 >> 0x20) * fVar4 +
                      (float)((ulong)puVar2[2] >> 0x20) * fVar6,
                      (float)puVar2[6] +
                      fVar7 * fVar8 + (float)*puVar2 * fVar4 + (float)puVar2[2] * fVar6);
  uStack_98 = CONCAT44((float)((ulong)puVar2[7] >> 0x20) +
                       fVar12 * fVar8 +
                       (float)((ulong)puVar2[1] >> 0x20) * fVar4 +
                       (float)((ulong)puVar2[3] >> 0x20) * fVar6,
                       (float)puVar2[7] +
                       fVar10 * fVar8 + (float)puVar2[1] * fVar4 + (float)puVar2[3] * fVar6);
  fVar4 = (float)local_90 * (float)*(undefined8 *)(param_1 + 0x40);
  fVar8 = (float)((ulong)local_90 >> 0x20) * (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20)
  ;
  uStack_88._0_4_ = (float)uStack_88 * (float)*(undefined8 *)(param_1 + 0x48);
  fVar6 = fVar7 * (float)uStack_88 + (float)*puVar2 * fVar4 + (float)puVar2[2] * fVar8;
  fVar7 = fVar9 * (float)uStack_88 +
          (float)((ulong)*puVar2 >> 0x20) * fVar4 + (float)((ulong)puVar2[2] >> 0x20) * fVar8;
  fVar9 = fVar10 * (float)uStack_88 + (float)puVar2[1] * fVar4 + (float)puVar2[3] * fVar8;
  fVar10 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar9 * fVar9);
  fVar11 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar9 * fVar9);
  local_90 = CONCAT44(fVar7 / fVar11,fVar6 / fVar10);
  uStack_88 = CONCAT44((fVar12 * (float)uStack_88 +
                       (float)((ulong)puVar2[1] >> 0x20) * fVar4 +
                       (float)((ulong)puVar2[3] >> 0x20) * fVar8) / fVar11,fVar9 / fVar10);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(*(long **)(param_1 + 0x58),&local_a0);
  lVar3 = *(long *)(param_1 + 0x58);
  uVar5 = NEON_fmin(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(lVar3 + 0x10),4);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  if (*(char *)(param_1 + 0x18) == '\0') {
    bVar1 = *(char *)(lVar3 + 0x18) != '\0';
  }
  else {
    bVar1 = true;
  }
  *(bool *)(param_1 + 0x18) = bVar1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar3 + 0xc);
  return;
}


