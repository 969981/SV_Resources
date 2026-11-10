/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e407e4; name: FUN_01e407e4
 */


long * FUN_01e407e4(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  
  uVar7 = param_1[1];
  if ((uVar7 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar7 < (float)(param_1[0xb] + 1))) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar9 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    FUN_00f9aa78(param_1,uVar9);
    uVar7 = param_1[1];
  }
  uVar9 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar9 < 2) {
    uVar8 = uVar7 - 1 & param_2;
  }
  else {
    uVar8 = param_2;
    if (uVar7 <= param_2) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = param_2 / uVar7;
      }
      uVar8 = param_2 - uVar8 * uVar7;
    }
  }
  plVar10 = *(long **)(*param_1 + uVar8 * 8);
  if (plVar10 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (*param_3 != 0) {
      plVar1 = (long *)(*param_3 + 0x30);
    }
    if (uVar9 < 2) {
      bVar3 = 0;
      do {
        bVar4 = bVar3;
        plVar6 = plVar10;
        plVar10 = (long *)*plVar6;
        if (plVar10 == (long *)0x0) {
          return plVar6;
        }
        if ((plVar10[1] & uVar7 - 1) != uVar8) {
          return plVar6;
        }
        if (plVar10[1] == param_2) {
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
        plVar6 = plVar10;
        plVar10 = (long *)*plVar6;
        if (plVar10 == (long *)0x0) {
          return plVar6;
        }
        uVar9 = plVar10[1];
        if (uVar9 < uVar7) {
          uVar11 = uVar9;
        }
        else {
          uVar11 = 0;
          if (uVar7 != 0) {
            uVar11 = uVar9 / uVar7;
          }
          uVar11 = uVar9 - uVar11 * uVar7;
        }
        if (uVar11 != uVar8) {
          return plVar6;
        }
        if (uVar9 == param_2) {
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
  return plVar6;
}


