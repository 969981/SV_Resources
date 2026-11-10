/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011f8d90; name: FUN_011f8d90
 */


void FUN_011f8d90(ulong param_1,ulong param_2)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
LAB_011f8dcc:
  uVar9 = param_2 - 0xc0;
  uVar7 = param_1;
LAB_011f8dd8:
  while( true ) {
    param_1 = uVar7;
    uVar7 = param_2 - param_1;
    uVar8 = ((long)uVar7 >> 6) * -0x5555555555555555;
    if (uVar8 < 2) {
      return;
    }
    switch(uVar8) {
    case 2:
      if (*(int *)(param_2 - 0xa0) < *(int *)(param_1 + 0x20)) {
        FUN_011f9ce0(param_1,uVar9);
        return;
      }
      return;
    case 3:
      FUN_011fab20(param_1,param_1 + 0xc0,uVar9);
      return;
    case 4:
      FUN_011faa70(param_1,param_1 + 0xc0,param_1 + 0x180,uVar9);
      return;
    case 5:
      FUN_011fabe0(param_1,param_1 + 0xc0,param_1 + 0x180,param_1 + 0x240,uVar9);
      return;
    }
    if ((long)uVar7 < 0x540) {
      FUN_028edbe0(param_1,param_2);
      return;
    }
    uVar8 = param_1 + (uVar7 / 0x180) * 0xc0;
    if ((long)uVar7 < 0x2ed41) {
      iVar6 = FUN_011fab20(param_1,uVar8,uVar9);
    }
    else {
      lVar2 = (uVar7 / 0x300) * 2 + uVar7 / 0x300;
      iVar6 = FUN_011fabe0(param_1,param_1 + lVar2 * 0x40,uVar8,uVar8 + lVar2 * 0x40,uVar9);
    }
    iVar4 = *(int *)(param_1 + 0x20);
    iVar5 = *(int *)(param_1 + (uVar7 / 0x180) * 0xc0 + 0x20);
    if (iVar4 < iVar5) break;
    uVar7 = param_2 - 0x180;
    while (uVar11 = uVar7, param_1 != uVar11) {
      uVar7 = uVar11 - 0xc0;
      if (*(int *)(uVar11 + 0x20) < iVar5) goto code_r0x011f8fdc;
    }
    uVar8 = param_1 + 0xc0;
    if (*(int *)(param_2 - 0xa0) <= iVar4) {
      if (uVar8 == uVar9) {
        return;
      }
      uVar8 = param_1 + 0x180;
      while (*(int *)(uVar8 - 0xa0) <= iVar4) {
        uVar8 = uVar8 + 0xc0;
        if (param_2 == uVar8) {
          return;
        }
      }
      FUN_011f9ce0(uVar8 - 0xc0,uVar9);
    }
    if (uVar8 == uVar9) {
      return;
    }
    uVar11 = uVar9;
    while( true ) {
      do {
        uVar7 = uVar8;
        uVar8 = uVar7 + 0xc0;
      } while (*(int *)(uVar7 + 0x20) <= *(int *)(param_1 + 0x20));
      do {
        piVar1 = (int *)(uVar11 - 0xa0);
        uVar11 = uVar11 - 0xc0;
      } while (*(int *)(param_1 + 0x20) < *piVar1);
      if (uVar11 <= uVar7) break;
      FUN_011f9ce0(uVar7,uVar11);
    }
  }
  uVar11 = uVar9;
  goto LAB_011f8fb0;
code_r0x011f8fdc:
  FUN_011f9ce0(param_1,uVar11);
  iVar6 = iVar6 + 1;
LAB_011f8fb0:
  uVar10 = param_1 + 0xc0;
  uVar7 = uVar10;
  if (uVar10 < uVar11) {
    while( true ) {
      uVar10 = uVar7 - 0xc0;
      do {
        uVar7 = uVar10;
        uVar10 = uVar7 + 0xc0;
      } while (*(int *)(uVar7 + 0xe0) < *(int *)(uVar8 + 0x20));
      uVar7 = uVar7 + 0x180;
      do {
        piVar1 = (int *)(uVar11 - 0xa0);
        uVar11 = uVar11 - 0xc0;
      } while (*(int *)(uVar8 + 0x20) <= *piVar1);
      if (uVar11 < uVar10) break;
      FUN_011f9ce0(uVar10,uVar11);
      iVar6 = iVar6 + 1;
      uVar3 = uVar11;
      if (uVar8 != uVar10) {
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
    }
  }
  if ((uVar10 != uVar8) && (*(int *)(uVar8 + 0x20) < *(int *)(uVar10 + 0x20))) {
    FUN_011f9ce0(uVar10,uVar8);
    iVar6 = iVar6 + 1;
  }
  if (iVar6 == 0) {
    uVar8 = FUN_028edd70(param_1,uVar10);
    uVar7 = FUN_028edd70(uVar10 + 0xc0,param_2);
    if ((uVar7 & 1) != 0) goto LAB_011f9194;
    uVar7 = uVar10 + 0xc0;
    if ((uVar8 & 1) != 0) goto LAB_011f8dd8;
  }
  if (((long)(param_2 - uVar10) >> 6) * -0x5555555555555555 <=
      ((long)(uVar10 - param_1) >> 6) * -0x5555555555555555) {
    FUN_011f8d90(uVar10 + 0xc0,param_2);
    param_2 = uVar10;
    goto LAB_011f8dcc;
  }
  FUN_011f8d90(param_1,uVar10);
  uVar7 = uVar10 + 0xc0;
  goto LAB_011f8dd8;
LAB_011f9194:
  param_2 = uVar10;
  if ((uVar8 & 1) != 0) {
    return;
  }
  goto LAB_011f8dcc;
}


