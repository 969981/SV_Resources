/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f9128; name: FUN_010f9128
 */


uint FUN_010f9128(int param_1,byte param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    uVar4 = 2;
    if (param_3 != 1) {
      uVar4 = 1;
    }
    uVar2 = (uint)(param_3 == 1);
    if (param_3 == 0) {
      uVar2 = uVar4;
    }
    uVar4 = (uint)(param_3 == 5);
    return (uVar4 | (uint)(param_3 == 5) << 2) + (uVar2 | uVar4 << 2);
  }
  if (param_1 != 1) {
    if (param_1 == 2) {
      uVar2 = (uint)(param_3 == 0);
      if (param_2 == 0) {
        uVar4 = (uint)(param_3 == 5);
        uVar2 = uVar2 | uVar4 << 1;
      }
      else {
        if (param_3 == 2) {
          uVar2 = 1;
        }
        if (param_2 == 1) {
          uVar4 = ((uint)(param_3 == 1) << 2 | (uint)(param_3 == 5) << 1) + (uint)(param_3 == 1) * 2
          ;
          goto LAB_010f94f8;
        }
        if (param_3 == 3) {
          uVar2 = uVar2 + 1;
        }
        if (param_2 == 2) {
          bVar1 = param_3 == 5;
        }
        else {
          bVar1 = param_3 == 4;
        }
        uVar4 = (uint)bVar1;
      }
      uVar2 = (uVar4 | (uint)(param_3 == 1) << 1 | (uint)(param_3 == 1) << 2) + uVar2;
    }
    else {
      bVar1 = param_3 == 5;
      uVar4 = 6;
      if (!bVar1) {
        uVar4 = 0;
      }
      uVar4 = uVar4 | bVar1;
      uVar2 = (uint)bVar1 | (uint)bVar1 << 1;
LAB_010f94f8:
      uVar2 = uVar4 + uVar2;
    }
    bVar1 = param_3 == 5;
    goto LAB_010f9384;
  }
  uVar4 = (uint)param_2;
  if (uVar4 == 5) {
    bVar1 = param_3 == 0;
LAB_010f93ac:
    uVar2 = (uint)bVar1;
    if (param_3 == 1) {
      uVar2 = uVar2 + 1;
    }
LAB_010f93b4:
    if (param_3 == 2) {
      uVar2 = uVar2 + 1;
    }
LAB_010f93bc:
    if (param_3 == 5) {
      uVar2 = uVar2 + 1;
    }
LAB_010f93c4:
    if (param_3 == 5) {
      uVar2 = uVar2 + 1;
    }
LAB_010f93cc:
    if (param_3 == 5) {
      uVar2 = uVar2 + 1;
    }
LAB_010f93d4:
    if (param_3 == 5) {
      uVar2 = uVar2 + 1;
    }
LAB_010f93dc:
    if (param_3 == 5) {
      uVar2 = uVar2 + 1;
    }
LAB_010f93e4:
    if (param_3 == 5) {
      uVar2 = uVar2 + 1;
    }
LAB_010f93ec:
    if (param_3 == 5) {
      uVar2 = uVar2 + 1;
    }
LAB_010f93f4:
    piVar3 = &DAT_03d6a420;
  }
  else if (uVar4 - 1 < 3) {
    piVar3 = &DAT_03d6a3a0;
LAB_010f915c:
    uVar4 = (uint)param_2;
    bVar1 = *piVar3 == param_3;
    if (uVar4 - 1 < 3) {
      piVar3 = &DAT_03d6a3a4;
    }
    else {
      if (uVar4 == 5) goto LAB_010f93ac;
      piVar3 = &DAT_03d6a378;
    }
    uVar2 = (uint)bVar1;
    if (*piVar3 == param_3) {
      uVar2 = uVar2 + 1;
    }
    if (uVar4 - 1 < 3) {
      piVar3 = &DAT_03d6a3a8;
    }
    else {
      if (uVar4 == 5) goto LAB_010f93b4;
      piVar3 = &DAT_03d6a37c;
    }
    uVar4 = (uint)param_2;
    if (*piVar3 == param_3) {
      uVar2 = uVar2 + 1;
    }
    if (uVar4 - 1 < 3) {
      piVar3 = &DAT_03d6a3ac;
    }
    else {
      if (uVar4 == 5) goto LAB_010f93bc;
      piVar3 = &DAT_03d6a380;
    }
    if (*piVar3 == param_3) {
      uVar2 = uVar2 + 1;
    }
    if (uVar4 - 1 < 3) {
      piVar3 = &DAT_03d6a3b0;
    }
    else {
      if (uVar4 == 5) goto LAB_010f93c4;
      piVar3 = &DAT_03d6a384;
    }
    uVar4 = (uint)param_2;
    if (*piVar3 == param_3) {
      uVar2 = uVar2 + 1;
    }
    if (uVar4 - 1 < 3) {
      piVar3 = &DAT_03d6a3b4;
    }
    else {
      if (uVar4 == 5) goto LAB_010f93cc;
      piVar3 = &DAT_03d6a388;
    }
    if (*piVar3 == param_3) {
      uVar2 = uVar2 + 1;
    }
    if (uVar4 - 1 < 3) {
      piVar3 = &DAT_03d6a3b8;
    }
    else {
      if (uVar4 == 5) goto LAB_010f93d4;
      piVar3 = &DAT_03d6a38c;
    }
    uVar4 = (uint)param_2;
    if (*piVar3 == param_3) {
      uVar2 = uVar2 + 1;
    }
    if (uVar4 - 1 < 3) {
      piVar3 = &DAT_03d6a3bc;
    }
    else {
      if (uVar4 == 5) goto LAB_010f93dc;
      piVar3 = &DAT_03d6a390;
    }
    if (*piVar3 == param_3) {
      uVar2 = uVar2 + 1;
    }
    if (uVar4 - 1 < 3) {
      piVar3 = &DAT_03d6a3c0;
    }
    else {
      if (uVar4 == 5) goto LAB_010f93e4;
      piVar3 = &DAT_03d6a394;
    }
    uVar4 = (uint)param_2;
    if (*piVar3 == param_3) {
      uVar2 = uVar2 + 1;
    }
    if (uVar4 - 1 < 3) {
      piVar3 = &DAT_03d6a3c4;
    }
    else {
      if (uVar4 == 5) goto LAB_010f93ec;
      piVar3 = &DAT_03d6a398;
    }
    if (*piVar3 == param_3) {
      uVar2 = uVar2 + 1;
    }
    if (uVar4 - 1 < 3) {
      piVar3 = &DAT_03d6a3c8;
    }
    else {
      if (uVar4 == 5) goto LAB_010f93f4;
      piVar3 = &DAT_03d6a39c;
    }
  }
  else {
    if (uVar4 != 4) {
      piVar3 = &DAT_03d6a374;
      goto LAB_010f915c;
    }
    uVar2 = ((uint)(param_3 == 3) | (uint)(param_3 == 5) << 1 | (uint)(param_3 == 5) << 2) +
            ((uint)(param_3 == 1) | (uint)(param_3 == 0) << 1);
    piVar3 = &DAT_03d6a3f4;
  }
  bVar1 = *piVar3 == param_3;
LAB_010f9384:
  if (bVar1) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}


