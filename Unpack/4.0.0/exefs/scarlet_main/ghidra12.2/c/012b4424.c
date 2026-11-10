/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b4424; name: FUN_012b4424
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012b4424(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = _UNK_03caa5c8;
  uVar2 = _DAT_03caa5c0;
  if (*(char *)(param_1 + 0x4d) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 2) {
    fVar4 = 1.0 / (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34));
    fVar7 = 1.0 / (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x3c));
    fVar5 = -1.0 / (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x44));
    *(ulong *)(param_1 + 0x58) =
         (ulong)(uint)(fVar4 * -(*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38))) << 0x20;
    *(ulong *)(param_1 + 0x50) = (ulong)(uint)(fVar4 + fVar4);
    *(ulong *)(param_1 + 0x68) =
         (ulong)(uint)(fVar7 * -(*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40))) << 0x20;
    *(ulong *)(param_1 + 0x60) = (ulong)(uint)(fVar7 + fVar7) << 0x20;
    uVar6 = CONCAT44(*(float *)(param_1 + 0x44) * fVar5,fVar5);
    uVar2 = _DAT_03cabe50;
    uVar3 = _UNK_03cabe58;
  }
  else {
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return;
      }
      fVar5 = *(float *)(param_1 + 0x34) * 0.5;
      fVar4 = 0.5;
      if (fVar5 < 0.0) {
        fVar4 = -0.5;
      }
      fVar7 = *(float *)(param_1 + 0x48);
      fVar5 = fVar5 - *(float *)PTR_Float2Pi_047d23e8 *
                      (float)(int)(fVar4 + fVar5 * *(float *)PTR_Float1Divided2Pi_047d23d0);
      if (fVar5 <= *(float *)PTR_FloatPiDivided2_047d23f0) {
        if (fVar5 < -*(float *)PTR_FloatPiDivided2_047d23f0) {
          fVar4 = -*(float *)PTR_FloatPi_047d23a0;
          goto LAB_012b45ec;
        }
        fVar4 = 1.0;
      }
      else {
        fVar4 = *(float *)PTR_FloatPi_047d23a0;
LAB_012b45ec:
        fVar5 = fVar4 - fVar5;
        fVar4 = -1.0;
      }
      fVar9 = fVar5 * fVar5;
      fVar8 = -1.0 / (fVar7 - *(float *)(param_1 + 0x44));
      fVar4 = 1.0 / ((fVar5 * (fVar9 * (fVar9 * (*(float *)(PTR_SinCoefficients_047d23d8 + 0xc) +
                                                fVar9 * (fVar9 * (*(float *)(
                                                  PTR_SinCoefficients_047d23d8 + 4) -
                                                  *(float *)PTR_SinCoefficients_047d23d8 * fVar9) -
                                                  *(float *)(PTR_SinCoefficients_047d23d8 + 8))) -
                                       *(float *)(PTR_SinCoefficients_047d23d8 + 0x10)) + 1.0)) /
                    (fVar4 * (fVar9 * (fVar9 * (*(float *)(PTR_CosCoefficients_047d23e0 + 0xc) +
                                               fVar9 * (fVar9 * (*(float *)(
                                                  PTR_CosCoefficients_047d23e0 + 4) -
                                                  fVar9 * *(float *)PTR_CosCoefficients_047d23e0) -
                                                  *(float *)(PTR_CosCoefficients_047d23e0 + 8))) -
                                      *(float *)(PTR_CosCoefficients_047d23e0 + 0x10)) + 1.0)));
      *(ulong *)(param_1 + 0x78) =
           CONCAT44(*(float *)(param_1 + 0x44) * fVar7 * fVar8,fVar7 * fVar8);
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(ulong *)(param_1 + 0x50) = (ulong)(uint)(fVar4 / *(float *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(ulong *)(param_1 + 0x60) = (ulong)(uint)fVar4 << 0x20;
      goto LAB_012b4568;
    }
    fVar7 = *(float *)(param_1 + 0x44);
    fVar8 = *(float *)(param_1 + 0x48);
    fVar9 = 1.0 / (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34));
    fVar5 = 1.0 / (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x3c));
    fVar4 = -1.0 / (fVar8 - fVar7);
    *(ulong *)(param_1 + 0x58) =
         (ulong)(uint)((*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x38)) * fVar9);
    *(ulong *)(param_1 + 0x50) = (ulong)(uint)(fVar9 * (fVar7 + fVar7));
    *(ulong *)(param_1 + 0x68) =
         (ulong)(uint)((*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x40)) * fVar5);
    *(ulong *)(param_1 + 0x60) = (ulong)(uint)((fVar7 + fVar7) * fVar5) << 0x20;
    uVar6 = CONCAT44(fVar7 * fVar8 * fVar4,fVar8 * fVar4);
    uVar2 = _DAT_03caa5c0;
    uVar3 = _UNK_03caa5c8;
  }
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  *(undefined8 *)(param_1 + 0x70) = 0;
LAB_012b4568:
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  return;
}


