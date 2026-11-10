/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021dc7c4; name: FUN_021dc7c4
 */


void FUN_021dc7c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *local_48 [3];
  
  FUN_00e86754(local_48);
  uVar13 = local_48[0][3];
  local_48[0][1] = uVar13;
  uVar6 = param_1[1];
  if ((uVar6 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar6 < (float)(param_1[0xb] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    FUN_00f9aa78(param_1,uVar7);
    uVar6 = param_1[1];
  }
  uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar7 < 2) {
    uVar9 = uVar6 - 1 & uVar13;
  }
  else if (uVar13 < uVar6) {
    uVar9 = uVar13;
  }
  else {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar13 / uVar6;
    }
    uVar9 = uVar13 - uVar9 * uVar6;
  }
  plVar10 = *(long **)(*param_1 + uVar9 * 8);
  if (plVar10 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (local_48[0][2] != 0) {
      plVar1 = (long *)(local_48[0][2] + 0x30);
    }
    if (uVar7 < 2) {
      bVar3 = 0;
      do {
        bVar4 = bVar3;
        plVar8 = plVar10;
        plVar10 = (long *)*plVar8;
        if ((plVar10 == (long *)0x0) || ((plVar10[1] & uVar6 - 1) != uVar9)) break;
        if (plVar10[1] == uVar13) {
          plVar2 = (long *)PTR_DAT_047d8b70;
          if (plVar10[2] != 0) {
            plVar2 = (long *)(plVar10[2] + 0x30);
          }
          bVar5 = *plVar2 == *plVar1;
        }
        else {
          bVar5 = false;
        }
        bVar3 = bVar4 | bVar5;
      } while ((bVar5) || ((bool)(bVar4 ^ 1)));
    }
    else {
      bVar3 = 0;
      do {
        bVar4 = bVar3;
        plVar8 = plVar10;
        plVar10 = (long *)*plVar8;
        if (plVar10 == (long *)0x0) break;
        uVar11 = plVar10[1];
        if (uVar11 < uVar6) {
          uVar12 = uVar11;
        }
        else {
          uVar12 = 0;
          if (uVar6 != 0) {
            uVar12 = uVar11 / uVar6;
          }
          uVar12 = uVar11 - uVar12 * uVar6;
        }
        if (uVar12 != uVar9) break;
        if (uVar11 == uVar13) {
          plVar2 = (long *)PTR_DAT_047d8b70;
          if (plVar10[2] != 0) {
            plVar2 = (long *)(plVar10[2] + 0x30);
          }
          bVar5 = *plVar2 == *plVar1;
        }
        else {
          bVar5 = false;
        }
        bVar3 = bVar4 | bVar5;
      } while ((bVar5) || ((bool)(bVar4 ^ 1)));
    }
  }
  uVar13 = local_48[0][1];
  if (uVar7 < 2) {
    uVar13 = uVar13 & uVar6 - 1;
  }
  else if (uVar6 <= uVar13) {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar13 / uVar6;
    }
    uVar13 = uVar13 - uVar9 * uVar6;
  }
  if (plVar8 == (long *)0x0) {
    plVar10 = param_1 + 6;
    *local_48[0] = *plVar10;
    *plVar10 = (long)local_48[0];
    *(long **)(*param_1 + uVar13 * 8) = plVar10;
    if (*local_48[0] == 0) goto LAB_021dc8bc;
    uVar9 = *(ulong *)(*local_48[0] + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar6 - 1;
    }
    else if (uVar6 <= uVar9) {
      uVar13 = 0;
      if (uVar6 != 0) {
        uVar13 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar13 * uVar6;
    }
  }
  else {
    *local_48[0] = *plVar8;
    *plVar8 = (long)local_48[0];
    if (*local_48[0] == 0) goto LAB_021dc8bc;
    uVar9 = *(ulong *)(*local_48[0] + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar6 - 1;
    }
    else if (uVar6 <= uVar9) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar7 * uVar6;
    }
    if (uVar9 == uVar13) goto LAB_021dc8bc;
  }
  *(long **)(*param_1 + uVar9 * 8) = local_48[0];
LAB_021dc8bc:
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


