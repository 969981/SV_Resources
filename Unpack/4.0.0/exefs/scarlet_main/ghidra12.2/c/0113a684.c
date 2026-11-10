/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0113a684; name: FUN_0113a684
 */


void FUN_0113a684(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  
  *param_1 = *param_2;
  pcVar4 = (code *)param_1[3];
  if (pcVar4 != (code *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    (*pcVar4)(param_1 + 6);
  }
  if ((code *)param_2[5] != (code *)0x0) {
    (*(code *)param_2[5])(param_2 + 6,param_1 + 6);
    uVar5 = param_2[3];
    param_1[5] = param_2[5];
    uVar9 = param_2[4];
    param_1[2] = param_2[2];
    param_1[3] = uVar5;
    param_1[4] = uVar9;
    pcVar4 = (code *)param_2[3];
    if (pcVar4 != (code *)0x0) {
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      (*pcVar4)(param_2 + 6);
    }
  }
  pcVar4 = (code *)param_1[0x13];
  if (pcVar4 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar4)(param_1 + 0x16);
  }
  if ((code *)param_2[0x15] != (code *)0x0) {
    (*(code *)param_2[0x15])(param_2 + 0x16,param_1 + 0x16);
    uVar5 = param_2[0x13];
    param_1[0x15] = param_2[0x15];
    uVar9 = param_2[0x14];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar5;
    param_1[0x14] = uVar9;
    pcVar4 = (code *)param_2[0x13];
    if (pcVar4 != (code *)0x0) {
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      (*pcVar4)(param_2 + 0x16);
    }
  }
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  plVar2 = (long *)param_1[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar5 = param_2[0x25];
  param_2[0x25] = 0;
  param_1[0x25] = uVar5;
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  plVar2 = (long *)param_1[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar5 = param_2[0x29];
  param_2[0x29] = 0;
  param_1[0x29] = uVar5;
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  if (param_1[0x36] != 0) {
    plVar2 = (long *)param_1[0x31];
    while (plVar2 != (long *)0x0) {
      plVar12 = (long *)*plVar2;
      if ((code *)plVar2[4] != (code *)0x0) {
        (*(code *)plVar2[4])(plVar2 + 6);
      }
      plVar11 = (long *)param_1[0x32];
      uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar8 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar2,0x40,0x10);
        plVar2 = plVar12;
      }
      else {
        FUN_00c48fe8(plVar11,plVar2,0x40,0x10);
        plVar2 = plVar12;
      }
    }
    uVar8 = param_1[0x2c];
    param_1[0x31] = 0;
    if (uVar8 != 0) {
      uVar10 = uVar8 & 3;
      if (uVar8 - 1 < 3) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          *(undefined8 *)(param_1[0x2b] + uVar7 * 8) = 0;
          *(undefined8 *)(param_1[0x2b] + uVar7 * 8 + 8) = 0;
          *(undefined8 *)(param_1[0x2b] + uVar7 * 8 + 0x10) = 0;
          lVar3 = uVar7 * 8;
          uVar7 = uVar7 + 4;
          *(undefined8 *)(param_1[0x2b] + lVar3 + 0x18) = 0;
        } while ((uVar8 & 0xfffffffffffffffc) != uVar7);
      }
      if (uVar10 != 0) {
        lVar3 = uVar7 << 3;
        do {
          *(undefined8 *)(param_1[0x2b] + lVar3) = 0;
          uVar10 = uVar10 - 1;
          lVar3 = lVar3 + 8;
        } while (uVar10 != 0);
      }
    }
    param_1[0x36] = 0;
  }
  uVar5 = param_2[0x2b];
  param_2[0x2b] = 0;
  lVar3 = param_1[0x2b];
  param_1[0x2b] = uVar5;
  if (lVar3 != 0) {
    FUN_0216f4fc(param_1 + 0x2c);
  }
  param_1[0x2c] = param_2[0x2c];
  param_2[0x2c] = 0;
  uVar5 = param_2[0x2d];
  uVar9 = param_2[0x2e];
  uVar1 = param_2[0x30];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = uVar1;
  param_1[0x2d] = uVar5;
  param_1[0x2e] = uVar9;
  uVar5 = param_2[0x32];
  uVar9 = param_2[0x33];
  uVar1 = param_2[0x35];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = uVar1;
  param_1[0x32] = uVar5;
  param_1[0x33] = uVar9;
  lVar3 = param_2[0x36];
  param_1[0x36] = lVar3;
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  lVar6 = param_2[0x31];
  param_1[0x31] = lVar6;
  if (lVar3 != 0) {
    uVar10 = param_1[0x2c];
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar8 = uVar10 - 1 & uVar8;
    }
    else if (uVar10 <= uVar8) {
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = uVar8 / uVar10;
      }
      uVar8 = uVar8 - uVar7 * uVar10;
    }
    *(undefined8 **)(param_1[0x2b] + uVar8 * 8) = param_1 + 0x31;
    param_2[0x31] = 0;
    param_2[0x36] = 0;
  }
  param_1[0x38] = param_2[0x38];
  return;
}


