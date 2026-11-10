/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02523c2c; name: FUN_02523c2c
 */


undefined1  [16] FUN_02523c2c(undefined1 param_1 [16],undefined8 *param_2,undefined1 *param_3)

{
  float fVar1;
  float fVar4;
  undefined8 uVar2;
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar3 [16];
  float fVar7;
  
  fVar5 = param_1._8_4_;
  fVar4 = param_1._4_4_;
  fVar1 = param_1._0_4_;
  fVar7 = fVar5 + fVar1 + fVar4;
  if (1.1920929e-07 <= ABS(fVar7)) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    uVar2 = CONCAT44(((float)((ulong)param_2[4] >> 0x20) * fVar5 +
                     (float)((ulong)*param_2 >> 0x20) * fVar1 +
                     (float)((ulong)param_2[2] >> 0x20) * fVar4) / fVar7,
                     ((float)param_2[4] * fVar5 +
                     (float)*param_2 * fVar1 + (float)param_2[2] * fVar4) / fVar7);
    uVar6 = CONCAT44(((float)((ulong)param_2[5] >> 0x20) * fVar5 +
                     (float)((ulong)param_2[1] >> 0x20) * fVar1 +
                     (float)((ulong)param_2[3] >> 0x20) * fVar4) / fVar7,
                     ((float)param_2[5] * fVar5 +
                     (float)param_2[1] * fVar1 + (float)param_2[3] * fVar4) / fVar7);
  }
  else {
    uVar2 = 0;
    uVar6 = 0;
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
      return ZEXT816(0);
    }
  }
  auVar3._8_8_ = uVar6;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


