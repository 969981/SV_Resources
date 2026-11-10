/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341b874; name: FUN_0341b874
 */


long FUN_0341b874(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar8 = *(uint *)(param_1 + 0x28);
  if (uVar8 == 0) {
    lVar7 = 0;
  }
  else {
    do {
      pfVar12 = *(float **)(param_1 + 0x20);
      fVar13 = *pfVar12;
      lVar7 = *(long *)(pfVar12 + 2);
      if (uVar8 == 0 || uVar8 - 1 == 0) {
        uVar8 = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      else {
        uVar4 = *(undefined8 *)(pfVar12 + (ulong)(uVar8 - 1) * 4 + 2);
        *(undefined8 *)pfVar12 = *(undefined8 *)(pfVar12 + (ulong)(uVar8 - 1) * 4);
        *(undefined8 *)(pfVar12 + 2) = uVar4;
        uVar8 = *(int *)(param_1 + 0x28) - 1;
        *(uint *)(param_1 + 0x28) = uVar8;
        uVar9 = 0;
        while( true ) {
          uVar11 = uVar9 << 1 | 1;
          uVar3 = uVar9 * 2 + 2;
          uVar10 = uVar9;
          if ((uVar11 < uVar8) &&
             (uVar10 = uVar11,
             *(float *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 0x10) <=
             *(float *)(*(long *)(param_1 + 0x20) + (ulong)uVar11 * 0x10))) {
            uVar10 = uVar9;
          }
          uVar11 = uVar10;
          if ((uVar3 < uVar8) &&
             (uVar11 = uVar3,
             *(float *)(*(long *)(param_1 + 0x20) + (ulong)uVar10 * 0x10) <=
             *(float *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 0x10))) {
            uVar11 = uVar10;
          }
          if (uVar11 == uVar9) break;
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar9 * 0x10);
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar11 * 0x10);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          uVar6 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar6;
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar11 * 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          uVar8 = *(uint *)(param_1 + 0x28);
          uVar9 = uVar11;
        }
      }
      if (uVar8 == 0) {
        return lVar7;
      }
      fVar14 = (float)NEON_fminnm(*(float *)(lVar7 + 0x44) + *(float *)(lVar7 + 0x40) * 0.31830987,
                                  0x3f800000);
      fVar15 = (float)NEON_fminnm(*(float *)(lVar7 + 0x34) + *(float *)(lVar7 + 0x38),
                                  *(float *)(param_1 + 0x30));
    } while (1.1920929e-07 <
             ABS(fVar13 + (fVar15 / *(float *)(param_1 + 0x30) + fVar14 * 2.0) * -0.33333334));
  }
  return lVar7;
}


