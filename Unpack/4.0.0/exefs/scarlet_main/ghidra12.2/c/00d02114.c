/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d02114; name: FUN_00d02114
 */


void FUN_00d02114(long *param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *local_38 [3];
  
  FUN_00e86754(local_38);
  uVar11 = local_38[0][3];
  local_38[0][1] = uVar11;
  uVar9 = param_1[1];
  if ((uVar9 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar9 < (float)(param_1[0xb] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar10 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    FUN_00f9aa78(param_1,uVar10);
    uVar9 = param_1[1];
  }
  uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar10 < 2) {
    uVar13 = uVar9 - 1 & uVar11;
  }
  else if (uVar11 < uVar9) {
    uVar13 = uVar11;
  }
  else {
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar11 / uVar9;
    }
    uVar13 = uVar11 - uVar13 * uVar9;
  }
  plVar14 = *(long **)(*param_1 + uVar13 * 8);
  if (plVar14 == (long *)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (local_38[0][2] != 0) {
      plVar1 = (long *)(local_38[0][2] + 0x30);
    }
    if (uVar10 < 2) {
      bVar6 = false;
      do {
        bVar7 = bVar6;
        plVar12 = plVar14;
        plVar14 = (long *)*plVar12;
        if ((plVar14 == (long *)0x0) || ((plVar14[1] & uVar9 - 1) != uVar13)) break;
        if (plVar14[1] == uVar11) {
          plVar2 = (long *)PTR_DAT_047d8b70;
          if (plVar14[2] != 0) {
            plVar2 = (long *)(plVar14[2] + 0x30);
          }
          bVar5 = *plVar2 == *plVar1;
        }
        else {
          bVar5 = false;
        }
        bVar6 = (bool)(bVar7 | bVar5);
      } while ((bVar5) || (!bVar7));
    }
    else {
      bVar3 = 0;
      do {
        bVar4 = bVar3;
        plVar12 = plVar14;
        plVar14 = (long *)*plVar12;
        if (plVar14 == (long *)0x0) break;
        uVar15 = plVar14[1];
        if (uVar15 < uVar9) {
          uVar8 = uVar15;
        }
        else {
          uVar8 = 0;
          if (uVar9 != 0) {
            uVar8 = uVar15 / uVar9;
          }
          uVar8 = uVar15 - uVar8 * uVar9;
        }
        if (uVar8 != uVar13) break;
        if (uVar15 == uVar11) {
          plVar2 = (long *)PTR_DAT_047d8b70;
          if (plVar14[2] != 0) {
            plVar2 = (long *)(plVar14[2] + 0x30);
          }
          bVar6 = *plVar2 == *plVar1;
        }
        else {
          bVar6 = false;
        }
        bVar3 = bVar4 | bVar6;
      } while ((bVar6) || ((bool)(bVar4 ^ 1)));
    }
  }
  uVar11 = local_38[0][1];
  if (uVar10 < 2) {
    uVar11 = uVar11 & uVar9 - 1;
  }
  else if (uVar9 <= uVar11) {
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar11 / uVar9;
    }
    uVar11 = uVar11 - uVar13 * uVar9;
  }
  if (plVar12 == (long *)0x0) {
    plVar14 = param_1 + 6;
    *local_38[0] = *plVar14;
    *plVar14 = (long)local_38[0];
    *(long **)(*param_1 + uVar11 * 8) = plVar14;
    if (*local_38[0] != 0) {
      uVar11 = *(ulong *)(*local_38[0] + 8);
      if (uVar10 < 2) {
        uVar11 = uVar11 & uVar9 - 1;
      }
      else if (uVar9 <= uVar11) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar11 / uVar9;
        }
        uVar11 = uVar11 - uVar10 * uVar9;
      }
      *(long **)(*param_1 + uVar11 * 8) = local_38[0];
    }
  }
  else {
    *local_38[0] = *plVar12;
    *plVar12 = (long)local_38[0];
    if (*local_38[0] != 0) {
      uVar13 = *(ulong *)(*local_38[0] + 8);
      if (uVar10 < 2) {
        uVar13 = uVar13 & uVar9 - 1;
      }
      else if (uVar9 <= uVar13) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar13 / uVar9;
        }
        uVar13 = uVar13 - uVar10 * uVar9;
      }
      if (uVar13 != uVar11) {
        *(long **)(*param_1 + uVar13 * 8) = local_38[0];
      }
    }
  }
  param_1[0xb] = param_1[0xb] + 1;
  local_38[0] = (long *)0x0;
  FUN_00e82cc0(local_38);
  return;
}


