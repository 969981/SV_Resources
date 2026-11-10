/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0222157c; name: FUN_0222157c
 */


undefined1  [16] FUN_0222157c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  float fVar12;
  undefined1 auVar11 [16];
  long lVar13;
  float fVar14;
  float fVar15;
  
  lVar10 = 0;
  fVar12 = 0.0;
  uVar3 = *(ulong *)(param_2 + 0x160);
  fVar15 = 0.0;
  lVar13 = 0;
  if (uVar3 == 0) goto LAB_02221778;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar5 = uVar3 - 1 & 0x64ef508b127bf414;
  }
  else {
    uVar5 = 0x64ef508b127bf414;
    if (uVar3 < 0x64ef508b127bf415) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = 0x64ef508b127bf414 / uVar3;
      }
      uVar5 = 0x64ef508b127bf414 - uVar5 * uVar3;
    }
  }
  lVar13 = 0;
  fVar15 = 0.0;
  plVar6 = *(long **)(*(long *)(param_2 + 0x158) + uVar5 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    if (uVar4 < 2) {
      do {
        if (plVar6[1] == 0x64ef508b127bf414) {
          if (plVar6[2] == 0x64ef508b127bf414) goto LAB_022216a0;
        }
        else if ((plVar6[1] & uVar3 - 1) != uVar5) break;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == 0x64ef508b127bf414) {
          if (plVar6[2] == 0x64ef508b127bf414) goto LAB_022216a0;
        }
        else {
          if (uVar3 <= uVar7) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar1 * uVar3;
          }
          if (uVar7 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  goto LAB_022216a4;
LAB_02221774:
  fVar12 = (float)plVar6[7];
  lVar10 = plVar6[6];
  goto LAB_02221778;
LAB_022216a0:
  fVar15 = (float)plVar6[7];
  lVar13 = plVar6[6];
LAB_022216a4:
  if (uVar4 < 2) {
    uVar5 = uVar3 - 1 & 0x210737e39650cf2;
  }
  else {
    uVar5 = 0x210737e39650cf2;
    if (uVar3 < 0x210737e39650cf3) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = 0x210737e39650cf2 / uVar3;
      }
      uVar5 = 0x210737e39650cf2 - uVar5 * uVar3;
    }
  }
  plVar6 = *(long **)(*(long *)(param_2 + 0x158) + uVar5 * 8);
  lVar10 = 0;
  fVar12 = 0.0;
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    if (uVar4 < 2) {
      do {
        if (plVar6[1] == 0x210737e39650cf2) {
          if (plVar6[2] == 0x210737e39650cf2) goto LAB_02221774;
        }
        else if ((plVar6[1] & uVar3 - 1) != uVar5) break;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        uVar4 = plVar6[1];
        if (uVar4 == 0x210737e39650cf2) {
          if (plVar6[2] == 0x210737e39650cf2) goto LAB_02221774;
        }
        else {
          if (uVar3 <= uVar4) {
            uVar7 = 0;
            if (uVar3 != 0) {
              uVar7 = uVar4 / uVar3;
            }
            uVar4 = uVar4 - uVar7 * uVar3;
          }
          if (uVar4 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
LAB_02221778:
  uVar4 = FUN_01259734((int)param_2,0x300000001);
  puVar2 = PTR_PTR_047d9248;
  uVar3 = 0;
  if ((uVar4 & 0xff) != 0) {
    uVar3 = uVar4 >> 0x20;
  }
  fVar8 = (float)(**(code **)(PTR_PTR_047d9248 + uVar3 * 8))(param_1);
  fVar14 = (float)((ulong)lVar13 >> 0x20);
  auVar11._0_4_ = (float)lVar13 + fVar8 * ((float)lVar10 - (float)lVar13);
  fVar8 = (float)(**(code **)(puVar2 + uVar3 * 8))(param_1);
  fVar9 = (float)(**(code **)(puVar2 + uVar3 * 8))(param_1,lVar13);
  auVar11._4_4_ = fVar14 + fVar8 * ((float)((ulong)lVar10 >> 0x20) - fVar14);
  auVar11._8_4_ = fVar15 + fVar9 * (fVar12 - fVar15);
  auVar11._12_4_ = 0;
  return auVar11;
}


