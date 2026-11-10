/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01465b00; name: FUN_01465b00
 */


uint FUN_01465b00(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  char cVar5;
  uint uVar6;
  
  uVar2 = FUN_01465e90();
  uVar2 = uVar2 & 0xff;
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = (param_4 & 0xff) / uVar2;
  }
  uVar2 = (param_4 & 0xff) - uVar6 * uVar2;
  if (((int)param_3 / 5) * 5 == 0) {
LAB_01465be0:
    uVar6 = 0;
  }
  else {
    uVar6 = (int)param_3 % 5;
    uVar3 = FUN_00f7e2a0(param_1,param_2,uVar6);
    if ((uVar3 & 1) == 0) goto LAB_01465be0;
    if (param_1 == 2) {
      puVar4 = &DAT_03d6a45a;
      if ((int)param_3 < 5) goto LAB_01465b88;
LAB_01465bd8:
      cVar5 = '\x02';
    }
    else {
      if (param_1 == 1) {
        puVar4 = &DAT_03d6a455;
      }
      else {
        if (param_1 != 0) goto LAB_01465be0;
        puVar4 = &DAT_03d6a450;
      }
      if (4 < (int)param_3) goto LAB_01465bd8;
LAB_01465b88:
      cVar5 = puVar4[param_3];
    }
    if (cVar5 == puVar4[uVar6]) goto LAB_01465be0;
    if ((uVar2 & 0xff) == 0) {
      return uVar6;
    }
    uVar6 = 1;
  }
  uVar1 = (int)(param_3 + 1) % 5;
  if ((uVar1 != param_3) && (uVar3 = FUN_00f7e2a0(param_1,param_2,uVar1), (uVar3 & 1) != 0)) {
    if (param_1 == 2) {
      puVar4 = &DAT_03d6a45a;
      if ((int)param_3 < 5) goto LAB_01465c34;
LAB_01465e34:
      cVar5 = '\x02';
    }
    else {
      if (param_1 == 1) {
        puVar4 = &DAT_03d6a455;
      }
      else {
        if (param_1 != 0) goto LAB_01465c50;
        puVar4 = &DAT_03d6a450;
      }
      if (4 < (int)param_3) goto LAB_01465e34;
LAB_01465c34:
      cVar5 = puVar4[param_3];
    }
    if (cVar5 != puVar4[uVar1]) {
      if (uVar6 == (uVar2 & 0xff)) {
        return uVar1;
      }
      uVar6 = uVar6 + 1;
    }
  }
LAB_01465c50:
  uVar1 = (int)(param_3 + 2) % 5;
  if ((uVar1 != param_3) && (uVar3 = FUN_00f7e2a0(param_1,param_2,uVar1), (uVar3 & 1) != 0)) {
    if (param_1 == 2) {
      puVar4 = &DAT_03d6a45a;
      if ((int)param_3 < 5) goto LAB_01465ca0;
LAB_01465e50:
      cVar5 = '\x02';
    }
    else {
      if (param_1 == 1) {
        puVar4 = &DAT_03d6a455;
      }
      else {
        if (param_1 != 0) goto LAB_01465cbc;
        puVar4 = &DAT_03d6a450;
      }
      if (4 < (int)param_3) goto LAB_01465e50;
LAB_01465ca0:
      cVar5 = puVar4[param_3];
    }
    if (cVar5 != puVar4[uVar1]) {
      if (uVar6 == (uVar2 & 0xff)) {
        return uVar1;
      }
      uVar6 = uVar6 + 1;
    }
  }
LAB_01465cbc:
  uVar1 = (int)(param_3 + 3) % 5;
  if ((uVar1 == param_3) || (uVar3 = FUN_00f7e2a0(param_1,param_2,uVar1), (uVar3 & 1) == 0))
  goto LAB_01465d28;
  if (param_1 == 2) {
    puVar4 = &DAT_03d6a45a;
    if ((int)param_3 < 5) goto LAB_01465d0c;
LAB_01465e6c:
    cVar5 = '\x02';
  }
  else {
    if (param_1 == 1) {
      puVar4 = &DAT_03d6a455;
    }
    else {
      if (param_1 != 0) goto LAB_01465d28;
      puVar4 = &DAT_03d6a450;
    }
    if (4 < (int)param_3) goto LAB_01465e6c;
LAB_01465d0c:
    cVar5 = puVar4[param_3];
  }
  if (cVar5 != puVar4[uVar1]) {
    if (uVar6 == (uVar2 & 0xff)) {
      return uVar1;
    }
    uVar6 = uVar6 + 1;
  }
LAB_01465d28:
  uVar1 = (int)(param_3 + 4) % 5;
  if (uVar1 == param_3) {
    return 5;
  }
  uVar3 = FUN_00f7e2a0(param_1,param_2,uVar1);
  if ((uVar3 & 1) == 0) {
    return 5;
  }
  if (param_1 == 2) {
    puVar4 = &DAT_03d6a45a;
  }
  else if (param_1 == 1) {
    puVar4 = &DAT_03d6a455;
  }
  else {
    if (param_1 != 0) {
      return 5;
    }
    puVar4 = &DAT_03d6a450;
  }
  if ((int)param_3 < 5) {
    cVar5 = puVar4[param_3];
  }
  else {
    cVar5 = '\x02';
  }
  if ((uVar6 == (uVar2 & 0xff)) && (cVar5 != puVar4[uVar1])) {
    return uVar1;
  }
  return 5;
}


