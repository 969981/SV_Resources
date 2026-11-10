/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034458bc; name: FUN_034458bc
 */


void FUN_034458bc(undefined4 *param_1,long param_2,uint param_3,uint param_4,undefined4 param_5,
                 uint param_6,uint param_7,undefined8 param_8,long param_9)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_80 [8];
  float fStack_78;
  uint local_74;
  
  local_74 = param_3;
  if (((param_6 & 0xf00) == 0x100) && (*(char *)(param_1 + 7) != '\0')) {
    if (param_3 < 2) {
      param_3 = 1;
    }
    uVar8 = (ulong)param_3;
    uVar7 = 0;
    if ((param_6 & 0xff9c0000) == 0) {
      do {
        fVar9 = *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c);
        fVar10 = *(float *)(param_2 + 0x24);
        fVar11 = fVar9 + *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18) +
                 *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20);
        if ((0.0 < fVar11) && (fVar9 = fVar9 / fVar11, fVar10 <= fVar9)) {
          fVar10 = fVar9;
        }
        FUN_034ceeb8(*param_1,fVar10,*(undefined4 *)(param_2 + 0x28),param_2,param_9 + uVar7 * 4,
                     param_5,*(undefined4 *)(param_2 + 0x2c),param_6,param_8);
        uVar8 = uVar8 - 1;
        param_2 = param_2 + 0x30;
        uVar7 = (ulong)((int)uVar7 + param_7);
      } while (uVar8 != 0);
    }
    else {
      do {
        fVar9 = *(float *)(param_2 + 0x1c);
        fVar10 = *(float *)(param_2 + 0x24);
        if ((fVar9 < 0.0) &&
           (fVar11 = fVar9 * fVar9 + *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18) +
                     *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20), 0.0 < fVar11)) {
          fVar11 = -fVar9 / SQRT(fVar11);
          fVar12 = ABS(fVar11);
          fVar13 = fVar12 * (fVar12 * (fVar12 * (fVar12 * (fVar12 * 84.31466 + -242.71996) +
                                                262.81305) + -131.11235) + 29.66154) + -1.4518384;
          fVar9 = fVar12 * fVar13 + 0.0328437;
          if (fVar11 < 0.0) {
            fVar9 = -(fVar13 * fVar12) - 0.0328437;
          }
          if (fVar10 <= fVar9 * 0.31830987) {
            fVar10 = fVar9 * 0.31830987;
          }
        }
        FUN_034ceeb8(*param_1,fVar10,*(undefined4 *)(param_2 + 0x28),param_2,param_9 + uVar7 * 4,
                     param_5,*(undefined4 *)(param_2 + 0x2c),param_6,param_8);
        uVar8 = uVar8 - 1;
        param_2 = param_2 + 0x30;
        uVar7 = (ulong)((int)uVar7 + param_7);
      } while (uVar8 != 0);
    }
  }
  else {
    uVar8 = 0;
    if (param_3 < 2) {
      param_3 = 1;
    }
    uVar7 = (ulong)param_3;
    do {
      FUN_034ceeb8(*param_1,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),param_2,
                   param_9 + uVar8 * 4,param_5,*(undefined4 *)(param_2 + 0x2c),param_6,param_8);
      uVar7 = uVar7 - 1;
      param_2 = param_2 + 0x30;
      uVar8 = (ulong)((int)uVar8 + param_7);
    } while (uVar7 != 0);
  }
  if ((float)param_1[4] < 1.0) {
    lVar3 = -((ulong)param_7 * 4 + 0xf & 0x7fffffff0);
    FUN_034d2278(param_1[1],param_1[2],param_1[3],*param_1,param_1[6],param_4,param_6,
                 auStack_80 + lVar3,param_8);
    uVar2 = ((param_6 & 0xff) + 3 & 0x1fc) * (param_4 & 0xff);
    if (uVar2 != 0) {
      fVar9 = (float)param_1[4];
      fVar10 = 1.0 - fVar9;
      uVar7 = 0;
      uVar8 = 0;
      if (local_74 < 2) {
        local_74 = 1;
      }
      while( true ) {
        pfVar4 = (float *)(param_9 + 8 + uVar7 * 4);
        pfVar5 = pfVar4;
        uVar6 = (ulong)uVar2;
        do {
          pfVar5[-2] = pfVar5[-2] * fVar9;
          pfVar5[-1] = pfVar5[-1] * fVar9;
          *pfVar5 = *pfVar5 * fVar9;
          pfVar5[1] = pfVar5[1] * fVar9;
          uVar6 = uVar6 - 4;
          pfVar5 = pfVar5 + 4;
        } while (uVar6 != 0);
        pfVar5 = (float *)(auStack_80 + lVar3 + 8);
        uVar6 = (ulong)uVar2;
        do {
          uVar6 = uVar6 - 4;
          pfVar4[-2] = pfVar4[-2] + fVar10 * pfVar5[-2];
          pfVar4[-1] = pfVar4[-1] + fVar10 * pfVar5[-1];
          *pfVar4 = *pfVar4 + fVar10 * *pfVar5;
          pfVar1 = pfVar5 + 1;
          pfVar5 = pfVar5 + 4;
          pfVar4[1] = pfVar4[1] + fVar10 * *pfVar1;
          pfVar4 = pfVar4 + 4;
        } while (uVar6 != 0);
        uVar8 = uVar8 + 1;
        if (uVar8 == local_74) break;
        fVar9 = (float)param_1[4];
        uVar7 = (ulong)((int)uVar7 + param_7);
      }
    }
  }
  return;
}


