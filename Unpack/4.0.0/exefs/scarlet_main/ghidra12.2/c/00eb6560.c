/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eb6560; name: FUN_00eb6560
 */


void FUN_00eb6560(long *param_1,uint *param_2,ulong param_3,uint *param_4,ulong param_5,
                 undefined8 *param_6,long *param_7)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  
  uVar5 = (long)param_4 - (long)param_2 >> 2;
  if (uVar5 < param_5) {
    puVar4 = param_2;
  }
  else {
    lVar1 = *param_7;
    uVar3 = 0;
    if (param_5 != 0) {
      uVar3 = uVar5 / param_5;
    }
    if (lVar1 != 0) {
      puVar2 = (uint *)*param_6;
LAB_00eb6580:
      uVar5 = uVar3 >> 1;
      puVar4 = param_2 + uVar5 * param_3;
      lVar6 = 0;
      do {
        lVar7 = lVar1;
        puVar8 = puVar4;
        puVar9 = puVar2;
        if (puVar4[lVar6] != puVar2[lVar6]) {
          if (puVar4[lVar6] < puVar2[lVar6]) {
            param_2 = puVar4 + param_3;
            uVar5 = uVar3 + ~uVar5;
            goto LAB_00eb65fc;
          }
          break;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      do {
        if (*puVar9 != *puVar8) goto LAB_00eb65f0;
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
        if (lVar7 == 0) goto LAB_00eb661c;
      } while( true );
    }
    puVar4 = param_2 + (uVar3 >> 1) * param_3 + param_3;
    uVar5 = (long)param_4 - (long)puVar4 >> 2;
    if (param_5 <= uVar5) {
      uVar3 = 0;
      if (param_5 != 0) {
        uVar3 = uVar5 / param_5;
      }
      puVar4 = puVar4 + param_3 + (uVar3 >> 1) * param_3;
      while( true ) {
        uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
        if (uVar3 == 0) break;
        puVar4 = puVar4 + param_3 + (uVar3 >> 1) * param_3;
      }
    }
  }
LAB_00eb66f4:
  *param_1 = (long)param_2;
  param_1[1] = param_3;
  param_1[2] = (long)puVar4;
  param_1[3] = param_3;
  return;
LAB_00eb65f0:
  if (*puVar9 < *puVar8) {
    param_4 = puVar4;
    param_5 = param_3;
LAB_00eb65fc:
    puVar4 = param_2;
    uVar3 = uVar5;
    if (uVar5 == 0) goto LAB_00eb66f4;
    goto LAB_00eb6580;
  }
LAB_00eb661c:
  uVar5 = (long)puVar4 - (long)param_2 >> 2;
  if (param_3 <= uVar5) {
    uVar3 = 0;
    if (param_3 != 0) {
      uVar3 = uVar5 / param_3;
    }
    do {
      uVar5 = uVar3 >> 1;
      lVar6 = lVar1;
      puVar9 = puVar2;
      puVar8 = param_2 + uVar5 * param_3;
      do {
        if (*puVar8 != *puVar9) {
          if (*puVar8 < *puVar9) {
            param_2 = param_2 + uVar5 * param_3 + param_3;
            uVar5 = uVar3 + ~uVar5;
          }
          break;
        }
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      uVar3 = uVar5;
    } while (uVar5 != 0);
  }
  puVar4 = puVar4 + param_3;
  uVar5 = (long)param_4 - (long)puVar4 >> 2;
  if (param_5 <= uVar5) {
    uVar3 = 0;
    if (param_5 != 0) {
      uVar3 = uVar5 / param_5;
    }
    do {
      uVar5 = uVar3 >> 1;
      lVar6 = lVar1;
      puVar9 = puVar4 + uVar5 * param_3;
      puVar8 = puVar2;
      do {
        if (*puVar8 != *puVar9) {
          if (*puVar8 < *puVar9) goto LAB_00eb66ec;
          break;
        }
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      puVar4 = puVar4 + uVar5 * param_3 + param_3;
      uVar5 = uVar3 + ~uVar5;
LAB_00eb66ec:
      uVar3 = uVar5;
    } while (uVar3 != 0);
  }
  goto LAB_00eb66f4;
}


