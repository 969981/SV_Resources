/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010254dc; name: FUN_010254dc
 */


void FUN_010254dc(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = (ulong)*(ushort *)(param_2 + 2);
  param_2[1] = uVar11;
  uVar4 = param_1[1];
  if ((uVar4 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar4 < (float)(param_1[0xb] + 1))) {
    uVar4 = (ulong)(uVar4 < 3 || (uVar4 & uVar4 - 1) != 0) | uVar4 << 1;
    uVar5 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    FUN_01025774(param_1,uVar5);
    uVar4 = param_1[1];
  }
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar7 = (int)uVar4 - 1 & uVar11;
  }
  else {
    uVar7 = uVar11;
    if (uVar4 <= uVar11) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar11 / uVar4;
      }
      uVar7 = uVar11 - uVar7 * uVar4;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else if (uVar5 < 2) {
    bVar1 = 0;
    do {
      bVar2 = bVar1;
      plVar6 = plVar8;
      plVar8 = (long *)*plVar6;
      if ((plVar8 == (long *)0x0) || ((plVar8[1] & uVar4 - 1) != uVar7)) break;
      if (plVar8[1] == uVar11) {
        bVar3 = (short)plVar8[2] == (short)param_2[2];
      }
      else {
        bVar3 = false;
      }
      bVar1 = bVar2 | bVar3;
    } while ((bVar3) || ((bool)(bVar2 ^ 1)));
  }
  else {
    bVar1 = 0;
    do {
      bVar2 = bVar1;
      plVar6 = plVar8;
      plVar8 = (long *)*plVar6;
      if (plVar8 == (long *)0x0) break;
      uVar9 = plVar8[1];
      if (uVar9 < uVar4) {
        uVar10 = uVar9;
      }
      else {
        uVar10 = 0;
        if (uVar4 != 0) {
          uVar10 = uVar9 / uVar4;
        }
        uVar10 = uVar9 - uVar10 * uVar4;
      }
      if (uVar10 != uVar7) break;
      if (uVar9 == uVar11) {
        bVar3 = (short)plVar8[2] == (short)param_2[2];
      }
      else {
        bVar3 = false;
      }
      bVar1 = bVar2 | bVar3;
    } while ((bVar3) || ((bool)(bVar2 ^ 1)));
  }
  uVar11 = param_2[1];
  if (uVar5 < 2) {
    uVar11 = uVar11 & uVar4 - 1;
  }
  else if (uVar4 <= uVar11) {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = uVar11 / uVar4;
    }
    uVar11 = uVar11 - uVar7 * uVar4;
  }
  if (plVar6 == (long *)0x0) {
    plVar8 = param_1 + 6;
    *param_2 = *plVar8;
    *plVar8 = (long)param_2;
    *(long **)(*param_1 + uVar11 * 8) = plVar8;
    if (*param_2 == 0) goto LAB_010255e4;
    uVar7 = *(ulong *)(*param_2 + 8);
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar4 - 1;
    }
    else if (uVar4 <= uVar7) {
      uVar11 = 0;
      if (uVar4 != 0) {
        uVar11 = uVar7 / uVar4;
      }
      uVar7 = uVar7 - uVar11 * uVar4;
    }
  }
  else {
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    if (*param_2 == 0) goto LAB_010255e4;
    uVar7 = *(ulong *)(*param_2 + 8);
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar4 - 1;
    }
    else if (uVar4 <= uVar7) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar7 / uVar4;
      }
      uVar7 = uVar7 - uVar5 * uVar4;
    }
    if (uVar7 == uVar11) goto LAB_010255e4;
  }
  *(long **)(*param_1 + uVar7 * 8) = param_2;
LAB_010255e4:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


