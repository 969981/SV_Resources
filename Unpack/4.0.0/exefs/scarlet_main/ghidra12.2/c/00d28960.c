/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d28960; name: FUN_00d28960
 */


undefined8 * FUN_00d28960(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar3 = (undefined8 *)param_2[1];
  puVar4 = (undefined8 *)param_2[2];
  puVar8 = puVar4;
  if ((puVar3 == (undefined8 *)0x0) || (puVar8 = puVar3, puVar4 == (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)*param_2;
    puVar5 = puVar2 + 1;
    puVar6 = (undefined8 *)*puVar5;
  }
  else {
    puVar8 = (undefined8 *)puVar4[1];
    puVar7 = puVar4;
    if (puVar8 != (undefined8 *)0x0) {
      puVar7 = puVar8;
      for (puVar8 = (undefined8 *)puVar8[1]; puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)puVar8[1]) {
        puVar7 = puVar8;
      }
    }
    puVar2 = (undefined8 *)*param_2;
    puVar8 = (undefined8 *)puVar7[2];
    puVar5 = puVar2 + 1;
    puVar6 = (undefined8 *)*puVar5;
    if (puVar7 != param_2) {
      *puVar3 = puVar7;
      puVar7[1] = puVar3;
      if (puVar4 != puVar7) {
        puVar7[2] = puVar4;
        *puVar4 = puVar7;
        puVar4 = (undefined8 *)*puVar7;
        if (puVar8 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)0x0;
        }
        else {
          *puVar8 = puVar4;
          puVar3 = puVar8;
        }
        puVar4[1] = puVar3;
      }
      *puVar7 = puVar2;
      if (puVar6 != param_2) {
        puVar5 = puVar2 + 2;
      }
      puVar3 = param_1;
      if (puVar2 != param_1) {
        puVar3 = puVar5;
      }
      *puVar3 = puVar7;
      iVar1 = *(int *)(puVar7 + 3);
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(param_2 + 3);
      goto joined_r0x00d289c0;
    }
  }
  if (puVar8 == (undefined8 *)0x0) {
    if (puVar2 == param_1) {
      *param_1 = 0;
    }
    else if (puVar6 == param_2) {
      *puVar5 = 0;
    }
    else {
      puVar2[2] = 0;
    }
  }
  else {
    *puVar8 = puVar2;
    if (puVar2 == param_1) {
      *param_1 = puVar8;
    }
    else if (puVar6 == param_2) {
      *puVar5 = puVar8;
    }
    else {
      puVar2[2] = puVar8;
    }
  }
  if ((undefined8 *)param_1[1] == param_2) {
    puVar5 = puVar2;
    if ((puVar4 != (undefined8 *)0x0) &&
       (puVar6 = (undefined8 *)puVar4[1], puVar5 = puVar4, puVar6 != (undefined8 *)0x0)) {
      puVar5 = puVar6;
      for (puVar4 = (undefined8 *)puVar6[1]; puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)puVar4[1]) {
        puVar5 = puVar4;
      }
    }
    param_1[1] = puVar5;
  }
  if ((undefined8 *)param_1[2] == param_2) {
    puVar4 = puVar2;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
      for (puVar3 = (undefined8 *)puVar3[2]; puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)puVar3[2]) {
        puVar4 = puVar3;
      }
    }
    param_1[2] = puVar4;
  }
  iVar1 = *(int *)(param_2 + 3);
  puVar4 = puVar2;
joined_r0x00d289c0:
  if (iVar1 != 0) {
    FUN_00d28b2c(param_1,puVar8,puVar4);
  }
  return param_2;
}


