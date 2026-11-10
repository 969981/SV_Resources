/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b1e00; name: FUN_034b1e00
 */


void FUN_034b1e00(long param_1,uint param_2)

{
  long *plVar2;
  long *plVar1;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = (float)NEON_fminnm(*(float *)(param_1 + 0x54) +
                             (float)param_2 * *(float *)(param_1 + 0x50),0x3f800000);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x68) * fVar4;
  fVar6 = *(float *)(param_1 + 0x60) + fVar4 * *(float *)(param_1 + 0x6c);
  fVar4 = *(float *)(param_1 + 100) + fVar4 * *(float *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x38) != 0) {
    fVar7 = *(float *)(param_1 + 0x74);
    fVar8 = *(float *)(param_1 + 0x78);
    fVar9 = *(float *)(param_1 + 0x7c);
    plVar1 = *(long **)(param_1 + 0x30);
    do {
      plVar2 = plVar1 + 1;
      lVar3 = *(long *)(*plVar1 + 0x168);
      *(float *)(lVar3 + 4) = (fVar5 - fVar7) + *(float *)(lVar3 + 4);
      *(float *)(lVar3 + 8) = (fVar6 - fVar8) + *(float *)(lVar3 + 8);
      *(float *)(lVar3 + 0xc) = (fVar4 - fVar9) + *(float *)(lVar3 + 0xc);
      plVar1 = plVar2;
    } while (plVar2 != (long *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 8));
  }
  *(float *)(param_1 + 0x74) = fVar5;
  *(float *)(param_1 + 0x78) = fVar6;
  *(float *)(param_1 + 0x7c) = fVar4;
  if (param_2 < *(uint *)(param_1 + 0x48)) {
    return;
  }
  FUN_034b1a7c();
  return;
}


