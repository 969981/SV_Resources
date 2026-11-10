/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343e15c; name: FUN_0343e15c
 */


undefined8 FUN_0343e15c(long param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 == (uint *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x60);
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = param_3 / uVar3;
    }
    *(uint *)(param_1 + 0x94) = uVar6 * uVar3;
  }
  else {
    uVar3 = param_2[2];
    if (uVar3 == 0) {
      uVar6 = *(uint *)(param_1 + 0xa0);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x60);
      uVar6 = uVar3;
      uVar7 = uVar1;
      if (uVar3 <= uVar1) {
        uVar6 = uVar1;
        uVar7 = uVar3;
      }
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = uVar6 / uVar7;
      }
      uVar6 = uVar6 - uVar4 * uVar7;
      if (uVar6 != 0) {
        if (((uVar7 | uVar6) & 1) == 0) {
          uVar4 = 0;
          uVar5 = uVar6;
          uVar8 = uVar7;
          do {
            uVar6 = uVar5 >> 1;
            uVar2 = uVar5 | uVar8;
            uVar4 = uVar4 + 1;
            uVar7 = uVar8 >> 1;
            uVar5 = uVar6;
            uVar8 = uVar8 >> 1;
          } while ((uVar2 >> 1 & 1) == 0);
        }
        else {
          uVar4 = 0;
        }
        do {
          uVar5 = uVar7;
          uVar7 = uVar5 >> 1;
        } while ((uVar5 & 1) == 0);
        do {
          uVar8 = uVar6;
          uVar6 = uVar8 >> 1;
        } while ((uVar8 & 1) == 0);
        if (uVar5 == uVar8) {
          uVar7 = uVar5;
        }
        else {
          do {
            uVar7 = uVar5;
            if (uVar8 <= uVar5) {
              uVar7 = uVar8;
              uVar8 = uVar5;
            }
            uVar6 = uVar8 - uVar7;
            do {
              uVar5 = uVar6 >> 1;
              uVar8 = uVar6 >> 1;
              uVar6 = uVar5;
            } while ((uVar8 & 1) == 0);
            uVar8 = uVar7;
          } while (uVar5 != uVar7);
        }
        uVar7 = uVar7 << (ulong)(uVar4 & 0x1f);
      }
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar6 = uVar3 / uVar7;
      }
      uVar6 = uVar6 * uVar1;
      *(uint *)(param_1 + 0xa0) = uVar6;
    }
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = param_3 / uVar6;
    }
    *(uint *)(param_1 + 0x9c) = uVar6;
    *(uint *)(param_1 + 0x94) = uVar3 * uVar6;
    uVar7 = *param_2;
    if (uVar7 == 0) {
      if (param_2[1] <= uVar6) {
        return 1;
      }
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = ((uVar6 + param_2[1]) - 1) / uVar6;
      }
      *(uint *)(param_1 + 0x9c) = uVar7 * uVar6;
      if (uVar3 * uVar6 < uVar7 * uVar6) {
        return 2;
      }
      return 1;
    }
    if (param_3 < uVar7) {
      return 2;
    }
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar7 / uVar6;
    }
    if (uVar7 != uVar3 * uVar6) {
      return 2;
    }
    *(uint *)(param_1 + 0x94) = uVar7;
    uVar3 = *param_2;
  }
  *(uint *)(param_1 + 0x9c) = uVar3;
  return 1;
}


