/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b47a0; name: FUN_008b47a0
 */


/* WARNING: Removing unreachable block (ram,0x008b4804) */

undefined1  [16] FUN_008b47a0(float param_1,undefined1 param_2 [16],uint *param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = (ulong)(ushort)*param_3;
  if (uVar4 == 0) {
    return param_2;
  }
  puVar5 = param_3;
  while( true ) {
    puVar5 = puVar5 + 1;
    pbVar1 = (byte *)((long)param_3 + (ulong)*puVar5);
    fVar10 = *(float *)(pbVar1 + 0x10);
    fVar12 = *(float *)(pbVar1 + 0x14);
    bVar2 = true;
    bVar3 = false;
    if (fVar10 <= param_1) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar10 + fVar12) && !NAN(param_1)) {
        bVar2 = fVar10 + fVar12 < param_1;
        bVar3 = false;
      }
    }
    if (bVar2 == bVar3) break;
    uVar4 = uVar4 - 1;
    if (uVar4 == 0) {
      return param_2;
    }
  }
  param_1 = param_1 - fVar10;
  fVar11 = *(float *)(pbVar1 + 8);
  fVar10 = param_1 / fVar12;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar6 = fVar12;
  if (param_1 <= fVar12) {
    fVar6 = param_1;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (0x12 < *pbVar1) {
                    /* WARNING: Subroutine does not return */
    nn::detail::UnexpectedDefaultImpl("","",0);
  }
  fVar13 = *(float *)(pbVar1 + 0xc) - fVar11;
  uVar4 = 0;
  switch(*pbVar1) {
  case 0:
    fVar6 = fVar13 * fVar10;
    break;
  case 1:
    fVar10 = cosf(*(float *)PTR_FloatPi_047d2460 * 0.5 * fVar10);
    uVar4 = (ulong)(uint)(fVar13 + (fVar11 - fVar13 * fVar10));
    goto switchD_008b4860_caseD_10;
  case 2:
    fVar6 = sinf(*(float *)PTR_FloatPi_047d2460 * 0.5 * fVar10);
    fVar6 = fVar13 * fVar6;
    break;
  case 3:
    fVar10 = cosf(*(float *)PTR_FloatPi_047d2460 * fVar10);
    uVar4 = (ulong)(uint)(fVar11 + fVar13 * -0.5 * (fVar10 + -1.0));
    goto switchD_008b4860_caseD_10;
  case 4:
    fVar6 = fVar13 * fVar10 * fVar10 * fVar10;
    break;
  case 5:
    fVar10 = fVar10 + -1.0;
    fVar10 = fVar10 * fVar10 * fVar10;
    goto LAB_008b4aa8;
  case 6:
    fVar6 = fVar6 / (fVar12 * 0.5);
    if (1.0 <= fVar6) {
      fVar6 = fVar6 + -2.0;
      fVar6 = fVar6 * fVar6 * fVar6;
LAB_008b4bd8:
      uVar4 = (ulong)(uint)(fVar13 * 0.5 * (fVar6 + 2.0) + fVar11);
      goto switchD_008b4860_caseD_10;
    }
    fVar10 = fVar6 * fVar13 * 0.5;
    goto LAB_008b49dc;
  case 7:
    fVar6 = fVar6 / fVar12;
    fVar6 = fVar13 * fVar6 * fVar6 * fVar6 * fVar6 * fVar6;
    break;
  case 8:
    fVar10 = fVar6 / fVar12 + -1.0;
    fVar10 = fVar10 * fVar10 * fVar10 * fVar10 * fVar10;
LAB_008b4aa8:
    fVar6 = fVar13 * (fVar10 + 1.0);
    break;
  case 9:
    fVar6 = fVar6 / (fVar12 * 0.5);
    if (1.0 <= fVar6) {
      fVar6 = fVar6 + -2.0;
      fVar6 = fVar6 * fVar6 * fVar6 * fVar6 * fVar6;
      goto LAB_008b4bd8;
    }
    fVar10 = fVar6 * fVar6 * fVar6 * fVar13 * 0.5;
LAB_008b49dc:
    fVar6 = fVar6 * fVar6 * fVar10;
    break;
  case 10:
    fVar6 = fVar6 / fVar12;
    fVar6 = (fVar6 * 2.70158 + -1.70158) * fVar6 * fVar6 * fVar13;
    break;
  case 0xb:
    fVar10 = fVar6 / fVar12 + -1.0;
    uVar4 = (ulong)(uint)(fVar13 * (fVar10 * fVar10 * (fVar10 * 2.70158 + 1.70158) + 1.0) + fVar11);
    goto switchD_008b4860_caseD_10;
  case 0xc:
    fVar6 = fVar6 / (fVar12 * 0.5);
    if (1.0 <= fVar6) {
      fVar6 = fVar6 + -2.0;
      fVar6 = fVar13 * 0.5 * (fVar6 * fVar6 * (fVar6 * 3.5949094 + 2.5949094) + 2.0);
    }
    else {
      fVar6 = fVar13 * 0.5 * fVar6 * fVar6 * (fVar6 * 3.5949094 + -2.5949094);
    }
    break;
  case 0xd:
    if (fVar6 == 0.0) {
LAB_008b4b9c:
      uVar4 = (ulong)(uint)fVar11;
      goto switchD_008b4860_caseD_10;
    }
    if (fVar6 / fVar12 != 1.0) {
      fVar10 = fVar6 / fVar12 + -1.0;
      dVar9 = exp2((double)fVar10 * 10.0);
      dVar7 = sin((((double)*(float *)PTR_FloatPi_047d2460 + (double)*(float *)PTR_FloatPi_047d2460)
                  * (double)(fVar10 * fVar12 + fVar12 * 0.3 * -0.25)) / (double)(fVar12 * 0.3));
      uVar4 = (ulong)(uint)(fVar11 - (float)(dVar9 * (double)fVar13 * dVar7));
      goto switchD_008b4860_caseD_10;
    }
    goto LAB_008b4c60;
  case 0xe:
    if (fVar6 == 0.0) goto LAB_008b4b9c;
    fVar6 = fVar6 / fVar12;
    if (fVar6 != 1.0) {
      dVar9 = exp2((double)fVar6 * -10.0);
      dVar7 = sin((((double)*(float *)PTR_FloatPi_047d2460 + (double)*(float *)PTR_FloatPi_047d2460)
                  * (double)(fVar6 * fVar12 + fVar12 * 0.3 * -0.25)) / (double)(fVar12 * 0.3));
      uVar4 = (ulong)(uint)(fVar13 + fVar13 * (float)(dVar9 * dVar7) + fVar11);
      goto switchD_008b4860_caseD_10;
    }
    goto LAB_008b4c60;
  case 0xf:
    if (fVar6 == 0.0) goto LAB_008b4b9c;
    fVar6 = fVar6 / (fVar12 * 0.5);
    if (fVar6 != 2.0) {
      fVar10 = fVar12 * 0.3 * 1.5;
      dVar9 = (double)(fVar6 + -1.0);
      if (1.0 <= fVar6) {
        dVar9 = exp2(dVar9 * -10.0);
        fVar11 = fVar13 + fVar11;
        fVar13 = fVar13 * (float)dVar9 * 0.5;
      }
      else {
        dVar9 = exp2(dVar9 * 10.0);
        fVar13 = fVar13 * (float)dVar9 * -0.5;
      }
      dVar9 = sin((((double)*(float *)PTR_FloatPi_047d2460 + (double)*(float *)PTR_FloatPi_047d2460)
                  * (double)((fVar6 + -1.0) * fVar12 - fVar10 * 0.25)) / (double)fVar10);
      uVar4 = (ulong)(uint)(fVar11 + fVar13 * (float)dVar9);
      goto switchD_008b4860_caseD_10;
    }
LAB_008b4c60:
    uVar4 = (ulong)(uint)(fVar13 + fVar11);
  default:
    goto switchD_008b4860_caseD_10;
  }
  uVar4 = (ulong)(uint)(fVar6 + fVar11);
switchD_008b4860_caseD_10:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar4;
  return auVar8;
}


