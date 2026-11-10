/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ed01b8; name: FUN_00ed01b8
 */


void FUN_00ed01b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *local_38 [3];
  
  FUN_00e86754(local_38);
  uVar9 = local_38[0][3];
  local_38[0][1] = uVar9;
  uVar7 = param_1[1];
  if ((uVar7 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar7 < (float)(param_1[0xb] + 1))) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar8 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar8 <= uVar7) {
      uVar8 = uVar7;
    }
    FUN_00f9aa78(param_1,uVar8);
    uVar7 = param_1[1];
  }
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    uVar11 = uVar7 - 1 & uVar9;
  }
  else if (uVar9 < uVar7) {
    uVar11 = uVar9;
  }
  else {
    uVar11 = 0;
    if (uVar7 != 0) {
      uVar11 = uVar9 / uVar7;
    }
    uVar11 = uVar9 - uVar11 * uVar7;
  }
  plVar12 = *(long **)(*param_1 + uVar11 * 8);
  if (plVar12 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (local_38[0][2] != 0) {
      plVar1 = (long *)(local_38[0][2] + 0x30);
    }
    if (uVar8 < 2) {
      bVar3 = 0;
      do {
        bVar4 = bVar3;
        plVar10 = plVar12;
        plVar12 = (long *)*plVar10;
        if ((plVar12 == (long *)0x0) || ((plVar12[1] & uVar7 - 1) != uVar11)) break;
        if (plVar12[1] == uVar9) {
          plVar2 = (long *)PTR_DAT_047d8b70;
          if (plVar12[2] != 0) {
            plVar2 = (long *)(plVar12[2] + 0x30);
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
        plVar10 = plVar12;
        plVar12 = (long *)*plVar10;
        if (plVar12 == (long *)0x0) break;
        uVar13 = plVar12[1];
        if (uVar13 < uVar7) {
          uVar6 = uVar13;
        }
        else {
          uVar6 = 0;
          if (uVar7 != 0) {
            uVar6 = uVar13 / uVar7;
          }
          uVar6 = uVar13 - uVar6 * uVar7;
        }
        if (uVar6 != uVar11) break;
        if (uVar13 == uVar9) {
          plVar2 = (long *)PTR_DAT_047d8b70;
          if (plVar12[2] != 0) {
            plVar2 = (long *)(plVar12[2] + 0x30);
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
  uVar9 = local_38[0][1];
  if (uVar8 < 2) {
    uVar9 = uVar9 & uVar7 - 1;
  }
  else if (uVar7 <= uVar9) {
    uVar11 = 0;
    if (uVar7 != 0) {
      uVar11 = uVar9 / uVar7;
    }
    uVar9 = uVar9 - uVar11 * uVar7;
  }
  if (plVar10 == (long *)0x0) {
    plVar12 = param_1 + 6;
    *local_38[0] = *plVar12;
    *plVar12 = (long)local_38[0];
    *(long **)(*param_1 + uVar9 * 8) = plVar12;
    if (*local_38[0] != 0) {
      uVar9 = *(ulong *)(*local_38[0] + 8);
      if (uVar8 < 2) {
        uVar9 = uVar9 & uVar7 - 1;
      }
      else if (uVar7 <= uVar9) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar9 / uVar7;
        }
        uVar9 = uVar9 - uVar8 * uVar7;
      }
      *(long **)(*param_1 + uVar9 * 8) = local_38[0];
    }
  }
  else {
    *local_38[0] = *plVar10;
    *plVar10 = (long)local_38[0];
    if (*local_38[0] != 0) {
      uVar11 = *(ulong *)(*local_38[0] + 8);
      if (uVar8 < 2) {
        uVar11 = uVar11 & uVar7 - 1;
      }
      else if (uVar7 <= uVar11) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar11 / uVar7;
        }
        uVar11 = uVar11 - uVar8 * uVar7;
      }
      if (uVar11 != uVar9) {
        *(long **)(*param_1 + uVar11 * 8) = local_38[0];
      }
    }
  }
  param_1[0xb] = param_1[0xb] + 1;
  return;
}


