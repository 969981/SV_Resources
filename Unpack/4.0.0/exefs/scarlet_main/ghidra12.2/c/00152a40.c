/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00152a40; name: FUN_00152a40
 */


void FUN_00152a40(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[6];
  *param_1 = 0;
  param_1[7] = 0;
  if (iVar2 == 0) {
    param_1[6] = 0x100;
    iVar2 = param_1[3];
  }
  else {
    if (0xfff < iVar2) {
      iVar2 = 0x1000;
    }
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    param_1[6] = iVar2;
    iVar2 = param_1[3];
  }
  uVar1 = 0x40000;
  if (iVar2 != 0) {
    if (0x1fffffff < iVar2) {
      iVar2 = 0x20000000;
    }
    if (iVar2 < 0x40001) {
      iVar2 = 0x40000;
    }
    param_1[3] = iVar2;
    uVar1 = FUN_001560f0();
  }
  param_1[3] = uVar1;
  iVar2 = 0x1000000;
  if (0 < (int)param_1[9]) {
    if (param_1[9] == 0x1000000) goto LAB_00152afc;
    iVar2 = FUN_00156120();
    param_1[9] = iVar2;
    if (iVar2 < 0x100001) {
      iVar2 = 0x100000;
    }
    else if (0x1fffffff < iVar2) {
      iVar2 = 0x20000000;
    }
  }
  param_1[9] = iVar2;
LAB_00152afc:
  iVar3 = param_1[5];
  if (0 < iVar3) {
    if (0x3fffffff < iVar3) {
      iVar3 = 0x40000000;
    }
    param_1[5] = iVar3;
    if (iVar3 <= iVar2) {
      iVar3 = FUN_001560f0();
      iVar2 = iVar3 * 2;
      if ((int)param_1[9] <= iVar3 * 2) {
        iVar2 = param_1[9];
      }
      if (0x1fffffff < iVar2) {
        iVar2 = 0x20000000;
      }
      if (iVar2 < 0x100001) {
        iVar2 = 0x100000;
      }
      param_1[9] = iVar2;
      param_1[10] = 0;
    }
  }
  iVar2 = param_1[1];
  if (iVar2 < 3) {
    iVar2 = 2;
  }
  iVar3 = param_1[0xc];
  param_1[1] = iVar2;
  iVar2 = iVar3;
  if (2 < iVar3) {
    iVar2 = 3;
  }
  iVar4 = param_1[0x10];
  if (iVar3 < 1) {
    iVar2 = 0;
  }
  param_1[0xc] = iVar2;
  if (0x1c < iVar4) {
    iVar4 = 0x1d;
  }
  param_1[0x10] = iVar4;
  FUN_0015cf00(param_1 + 0x11,0x10);
  return;
}


