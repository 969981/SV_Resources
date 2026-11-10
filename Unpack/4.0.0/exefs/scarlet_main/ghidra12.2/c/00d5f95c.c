/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d5f95c; name: FUN_00d5f95c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d5f95c(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_54;
  
  if ((param_3 & 1) == 0) {
    lVar6 = FUN_00da75d8();
  }
  else {
    lVar6 = FUN_00d3ccd4();
  }
  if ((0.0 < *(float *)(param_1 + 0x154)) &&
     (0.0 < *(float *)(param_1 + 0x150) - *(float *)(param_1 + 0x154))) {
    bVar5 = (param_3 & 1) == 0;
    lVar2 = 0x158;
    if (bVar5) {
      lVar2 = 0x154;
    }
    fVar9 = *(float *)(param_1 + lVar2);
    pfVar3 = (float *)(param_1 + 0x158);
    if (bVar5) {
      pfVar3 = (float *)(param_1 + 0x154);
    }
    lVar2 = 0x168;
    if (bVar5) {
      lVar2 = 0x164;
    }
    local_54 = (float)FUN_00d5faf0(param_1,param_2);
    local_54 = fVar9 + local_54;
    pfVar4 = &local_54;
    if (*(float *)(param_1 + 0x150) <= local_54) {
      pfVar4 = (float *)(param_1 + 0x150);
    }
    fVar9 = *pfVar4;
    *pfVar3 = fVar9;
    fVar9 = *(float *)(param_1 + lVar2) + (fVar9 / fVar9) * *(float *)(param_1 + 0x15c) * 6.2831855;
    *(float *)(param_1 + lVar2) = fVar9;
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
    uVar7 = (ulong)(fVar9 * (fVar8 / *(float *)PTR_FloatPi_047d23a0));
    uVar1 = uVar7 >> 0x18 & 0xff;
    fVar8 = *(float *)(PTR_SinCosSampleTable_047d2398 + uVar1 * 0x10 + 4);
    fVar10 = *(float *)(PTR_SinCosSampleTable_047d2398 + uVar1 * 0x10 + 0xc);
    fVar9 = (float)(**(code **)(PTR_PTR_047d9248 + 0x40))();
    if (lVar6 != 0) {
      fVar9 = (1.0 - fVar9) *
              (fVar8 + fVar10 * (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08) *
              *(float *)(param_1 + 0x160);
      fVar8 = (float)_DAT_03cabe60;
      uVar1 = (ulong)_DAT_03cabe60 >> 0x20;
      *(ulong *)(lVar6 + 0x578) =
           CONCAT44((float)((ulong)_UNK_03cabe68 >> 0x20) * fVar9,(float)_UNK_03cabe68 * fVar9);
      *(ulong *)(lVar6 + 0x570) = CONCAT44((float)uVar1 * fVar9,fVar8 * fVar9);
    }
  }
  return;
}


